#[no_mangle]
pub unsafe extern fn float_add(a: u32, b: u32) -> u32 {	
    let result : f32 = from_bits(a) + from_bits(b);	
	return to_bits(result);
}

#[no_mangle]
pub unsafe extern fn float_sub(a: u32, b: u32) -> u32 {	
    let result : f32 = from_bits(a) - from_bits(b);
	return to_bits(result);
}

#[no_mangle]
pub unsafe extern fn float_mul(a: u32, b: u32) -> u32 {	
    let result : f32 = from_bits(a) * from_bits(b);
	return to_bits(result);	
}

#[no_mangle]
pub unsafe extern fn float_div(a: u32, b: u32) -> u32 {	
    let result : f32 = from_bits(a) / from_bits(b);
	return to_bits(result);
}

#[no_mangle]
unsafe fn to_bits(f: f32) -> u32 {
	return std::mem::transmute::<f32, u32>(f);
}

#[no_mangle]
unsafe fn from_bits(bits: u32) -> f32 {
	return std::mem::transmute::<u32, f32>(bits);
}