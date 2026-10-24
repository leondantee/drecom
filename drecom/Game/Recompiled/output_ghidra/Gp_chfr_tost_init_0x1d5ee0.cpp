#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Gp_chfr_tost_init
// Address: 0x1d5ee0 - 0x1d6108
void Gp_chfr_tost_init_0x1d5ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_chfr_tost_init_0x1d5ee0");
#endif

    ctx->pc = 0x1d5ee0u;

    // 0x1d5ee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d5ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d5ee4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d5ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d5ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5eec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5ef0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1d5ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1d5ef4: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1d5ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1d5ef8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d5ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d5efc: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1d5efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d5f00: 0x24110700  addiu       $s1, $zero, 0x700
    ctx->pc = 0x1d5f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1d5f04: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1d5f04u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d5f08: 0x3c037183  lui         $v1, 0x7183
    ctx->pc = 0x1d5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29059 << 16));
    // 0x1d5f0c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d5f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d5f10: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d5f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5f14: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d5f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d5f18: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d5f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d5f1c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5f20: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1d5f20u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1d5f24: 0x3c030551  lui         $v1, 0x551
    ctx->pc = 0x1d5f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1361 << 16));
    // 0x1d5f28: 0x3464eeee  ori         $a0, $v1, 0xEEEE
    ctx->pc = 0x1d5f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x1d5f2c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5f30: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1d5f30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1d5f34: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d5f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d5f38: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5f3c: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1d5f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1d5f40: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d5f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d5f44: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5f48: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1d5f48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1d5f4c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1d5f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1d5f50: 0x346400a0  ori         $a0, $v1, 0xA0
    ctx->pc = 0x1d5f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x1d5f54: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5f58: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d5f58u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d5f5c: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x1d5f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d5f60: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5f64: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1d5f64u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1d5f68: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d5f6c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d5f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5f70: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d5f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d5f74: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d5f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d5f78: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5f7c: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d5f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x1d5f80: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1d5f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d5f84: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5f88: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1d5f88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1d5f8c: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x1d5f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1d5f90: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5f94: 0xfc640040  sd          $a0, 0x40($v1)
    ctx->pc = 0x1d5f94u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 4));
    // 0x1d5f98: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1d5f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d5f9c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5fa0: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x1d5fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
    // 0x1d5fa4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5fa8: 0xfc600050  sd          $zero, 0x50($v1)
    ctx->pc = 0x1d5fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 0));
    // 0x1d5fac: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5fb0: 0xfc600058  sd          $zero, 0x58($v1)
    ctx->pc = 0x1d5fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 0));
    // 0x1d5fb4: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d5fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d5fb8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d5fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5fbc: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d5fc0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d5fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d5fc4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5fc8: 0xfc640060  sd          $a0, 0x60($v1)
    ctx->pc = 0x1d5fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 4));
    // 0x1d5fcc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d5fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d5fd0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5fd4: 0xfc640068  sd          $a0, 0x68($v1)
    ctx->pc = 0x1d5fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 4));
    // 0x1d5fd8: 0x34038700  ori         $v1, $zero, 0x8700
    ctx->pc = 0x1d5fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1d5fdc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d5fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5fe0: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x1d5fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1d5fe4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d5fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d5fe8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5fec: 0xfc640070  sd          $a0, 0x70($v1)
    ctx->pc = 0x1d5fecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 4));
    // 0x1d5ff0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d5ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d5ff4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5ff8: 0xfc640078  sd          $a0, 0x78($v1)
    ctx->pc = 0x1d5ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 120), GPR_U64(ctx, 4));
    // 0x1d5ffc: 0x3c037183  lui         $v1, 0x7183
    ctx->pc = 0x1d5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29059 << 16));
    // 0x1d6000: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d6000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d6004: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6008: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d6008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d600c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d600cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6010: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6014: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1d6014u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1d6018: 0x3c030551  lui         $v1, 0x551
    ctx->pc = 0x1d6018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1361 << 16));
    // 0x1d601c: 0x3464eeee  ori         $a0, $v1, 0xEEEE
    ctx->pc = 0x1d601cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x1d6020: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6024: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1d6024u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1d6028: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d6028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d602c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6030: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1d6030u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1d6034: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d6034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d6038: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d603c: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1d603cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1d6040: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1d6040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1d6044: 0x346400a0  ori         $a0, $v1, 0xA0
    ctx->pc = 0x1d6044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x1d6048: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d604c: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d604cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d6050: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x1d6050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d6054: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6058: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1d6058u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1d605c: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d605cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d6060: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6064: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d6064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d6068: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d606c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6070: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d6070u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x1d6074: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1d6074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d6078: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d607c: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1d607cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1d6080: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x1d6080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1d6084: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6088: 0xfc640040  sd          $a0, 0x40($v1)
    ctx->pc = 0x1d6088u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 4));
    // 0x1d608c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1d608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d6090: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6094: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x1d6094u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
    // 0x1d6098: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d609c: 0xfc600050  sd          $zero, 0x50($v1)
    ctx->pc = 0x1d609cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 0));
    // 0x1d60a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d60a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d60a4: 0xfc600058  sd          $zero, 0x58($v1)
    ctx->pc = 0x1d60a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 0));
    // 0x1d60a8: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d60ac: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d60acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d60b0: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d60b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d60b4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d60b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d60b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d60bc: 0xfc640060  sd          $a0, 0x60($v1)
    ctx->pc = 0x1d60bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 4));
    // 0x1d60c0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d60c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d60c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d60c8: 0xfc640068  sd          $a0, 0x68($v1)
    ctx->pc = 0x1d60c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 4));
    // 0x1d60cc: 0x34038700  ori         $v1, $zero, 0x8700
    ctx->pc = 0x1d60ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1d60d0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d60d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d60d4: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x1d60d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1d60d8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d60d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d60dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d60e0: 0xfc640070  sd          $a0, 0x70($v1)
    ctx->pc = 0x1d60e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 4));
    // 0x1d60e4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d60e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d60e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d60ec: 0xfc640078  sd          $a0, 0x78($v1)
    ctx->pc = 0x1d60ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 120), GPR_U64(ctx, 4));
    // 0x1d60f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d60f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d60f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d60f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d60f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d60f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d60fc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d60fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d6100: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6108u;
}
