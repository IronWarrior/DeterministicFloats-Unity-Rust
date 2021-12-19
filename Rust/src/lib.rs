#[no_mangle]
pub extern fn float_add(a: u32, b: u32) -> u32 {	
    let result : f32 = f32::from_bits(a) + f32::from_bits(b);
	return result.to_bits();
}

#[no_mangle]
pub extern fn float_sub(a: u32, b: u32) -> u32 {	
    let result : f32 = f32::from_bits(a) - f32::from_bits(b);
	return result.to_bits();
}

#[no_mangle]
pub extern fn float_mul(a: u32, b: u32) -> u32 {	
    let result : f32 = f32::from_bits(a) * f32::from_bits(b);
	return result.to_bits();
}

#[no_mangle]
pub extern fn float_div(a: u32, b: u32) -> u32 {	
    let result : f32 = f32::from_bits(a) / f32::from_bits(b);
	return result.to_bits();
}