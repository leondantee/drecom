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

// Function: Gp_Sttexture2_init
// Address: 0x1d1fe0 - 0x1d25c8
void Gp_Sttexture2_init_0x1d1fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_Sttexture2_init_0x1d1fe0");
#endif

    ctx->pc = 0x1d1fe0u;

    // 0x1d1fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d1fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d1fe4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d1fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d1fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1ff0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1d1ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1d1ff4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1d1ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1d1ff8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d1ffc: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1d1ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d2000: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1d2000u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d2004: 0x24110700  addiu       $s1, $zero, 0x700
    ctx->pc = 0x1d2004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1d2008: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1d2008u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d200c: 0x3c03f18b  lui         $v1, 0xF18B
    ctx->pc = 0x1d200cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61835 << 16));
    // 0x1d2010: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d2010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d2014: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2018: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d201c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d201cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2020: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2024: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1d2024u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1d2028: 0x3c030513  lui         $v1, 0x513
    ctx->pc = 0x1d2028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1299 << 16));
    // 0x1d202c: 0x3464513e  ori         $a0, $v1, 0x513E
    ctx->pc = 0x1d202cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20798);
    // 0x1d2030: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1d2030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1d2034: 0x3c037eee  lui         $v1, 0x7EEE
    ctx->pc = 0x1d2034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32494 << 16));
    // 0x1d2038: 0x3464eeee  ori         $a0, $v1, 0xEEEE
    ctx->pc = 0x1d2038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x1d203c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1d203cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1d2040: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2044: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1d2044u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1d2048: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d2048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d204c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2050: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1d2050u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1d2054: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d2054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d2058: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d205c: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1d205cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1d2060: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1d2060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1d2064: 0x348400a0  ori         $a0, $a0, 0xA0
    ctx->pc = 0x1d2064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)160);
    // 0x1d2068: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d206c: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d206cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d2070: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x1d2070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d2074: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2078: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1d2078u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1d207c: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d207cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2080: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2084: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2088: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d208c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d208cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2090: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d2090u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x1d2094: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1d2094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d2098: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d209c: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1d209cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1d20a0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1d20a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1d20a4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d20a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d20a8: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x1d20a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x1d20ac: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d20acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d20b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d20b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d20b4: 0xfc640040  sd          $a0, 0x40($v1)
    ctx->pc = 0x1d20b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 4));
    // 0x1d20b8: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x1d20b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1d20bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d20bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d20c0: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x1d20c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
    // 0x1d20c4: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1d20c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1d20c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d20c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d20cc: 0xfc640050  sd          $a0, 0x50($v1)
    ctx->pc = 0x1d20ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 4));
    // 0x1d20d0: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x1d20d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1d20d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d20d8: 0xfc640058  sd          $a0, 0x58($v1)
    ctx->pc = 0x1d20d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 4));
    // 0x1d20dc: 0x24031001  addiu       $v1, $zero, 0x1001
    ctx->pc = 0x1d20dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x1d20e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d20e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d20e4: 0xfc830060  sd          $v1, 0x60($a0)
    ctx->pc = 0x1d20e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 3));
    // 0x1d20e8: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1d20e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d20ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d20ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d20f0: 0xfc830068  sd          $v1, 0x68($a0)
    ctx->pc = 0x1d20f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 3));
    // 0x1d20f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d20f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d20f8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d20f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d20fc: 0x3403f000  ori         $v1, $zero, 0xF000
    ctx->pc = 0x1d20fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1d2100: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d2100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1d2104: 0x34633f00  ori         $v1, $v1, 0x3F00
    ctx->pc = 0x1d2104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16128);
    // 0x1d2108: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d210c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2110: 0xfc640070  sd          $a0, 0x70($v1)
    ctx->pc = 0x1d2110u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 4));
    // 0x1d2114: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d2114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d2118: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d211c: 0xfc640078  sd          $a0, 0x78($v1)
    ctx->pc = 0x1d211cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 120), GPR_U64(ctx, 4));
    // 0x1d2120: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1d2120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1d2124: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1d2124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1d2128: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d212c: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1d212cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1d2130: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x1d2130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x1d2134: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2138: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d213c: 0xfc640080  sd          $a0, 0x80($v1)
    ctx->pc = 0x1d213cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 4));
    // 0x1d2140: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2144: 0xfc600088  sd          $zero, 0x88($v1)
    ctx->pc = 0x1d2144u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 136), GPR_U64(ctx, 0));
    // 0x1d2148: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d214c: 0xfc600090  sd          $zero, 0x90($v1)
    ctx->pc = 0x1d214cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 0));
    // 0x1d2150: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1d2150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d2154: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2158: 0xfc640098  sd          $a0, 0x98($v1)
    ctx->pc = 0x1d2158u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 152), GPR_U64(ctx, 4));
    // 0x1d215c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2160: 0xfc6000a0  sd          $zero, 0xA0($v1)
    ctx->pc = 0x1d2160u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 160), GPR_U64(ctx, 0));
    // 0x1d2164: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2168: 0xfc6000a8  sd          $zero, 0xA8($v1)
    ctx->pc = 0x1d2168u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 0));
    // 0x1d216c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d216cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2170: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2174: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2178: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d217c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2180: 0xfc6400b0  sd          $a0, 0xB0($v1)
    ctx->pc = 0x1d2180u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 4));
    // 0x1d2184: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2188: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d218c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d218cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2190: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2194: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2198: 0xfc6400b8  sd          $a0, 0xB8($v1)
    ctx->pc = 0x1d2198u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 4));
    // 0x1d219c: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d219cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d21a0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d21a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d21a4: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d21a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d21a8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d21a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d21ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d21acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d21b0: 0xfc6400c0  sd          $a0, 0xC0($v1)
    ctx->pc = 0x1d21b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 192), GPR_U64(ctx, 4));
    // 0x1d21b4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d21b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d21b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d21b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d21bc: 0xfc6400c8  sd          $a0, 0xC8($v1)
    ctx->pc = 0x1d21bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 4));
    // 0x1d21c0: 0x24030e00  addiu       $v1, $zero, 0xE00
    ctx->pc = 0x1d21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x1d21c4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d21c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d21c8: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x1d21c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1d21cc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d21ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d21d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d21d4: 0xfc6400d0  sd          $a0, 0xD0($v1)
    ctx->pc = 0x1d21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 208), GPR_U64(ctx, 4));
    // 0x1d21d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d21d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d21dc: 0xfc6000d8  sd          $zero, 0xD8($v1)
    ctx->pc = 0x1d21dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 216), GPR_U64(ctx, 0));
    // 0x1d21e0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d21e4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d21e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d21e8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d21e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d21ec: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d21ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d21f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d21f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d21f4: 0xfc6400e0  sd          $a0, 0xE0($v1)
    ctx->pc = 0x1d21f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 224), GPR_U64(ctx, 4));
    // 0x1d21f8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d21f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d21fc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d21fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2200: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2204: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2208: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d220c: 0xfc6400e8  sd          $a0, 0xE8($v1)
    ctx->pc = 0x1d220cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 232), GPR_U64(ctx, 4));
    // 0x1d2210: 0x34038700  ori         $v1, $zero, 0x8700
    ctx->pc = 0x1d2210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1d2214: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2218: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x1d2218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1d221c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d221cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2224: 0xfc6400f0  sd          $a0, 0xF0($v1)
    ctx->pc = 0x1d2224u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 240), GPR_U64(ctx, 4));
    // 0x1d2228: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d2228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d222c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2230: 0xfc6400f8  sd          $a0, 0xF8($v1)
    ctx->pc = 0x1d2230u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 248), GPR_U64(ctx, 4));
    // 0x1d2234: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d2234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1d2238: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d223c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d223cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d2240: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2244: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2248: 0xfc640100  sd          $a0, 0x100($v1)
    ctx->pc = 0x1d2248u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 256), GPR_U64(ctx, 4));
    // 0x1d224c: 0x3404eeee  ori         $a0, $zero, 0xEEEE
    ctx->pc = 0x1d224cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61166);
    // 0x1d2250: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2254: 0xfc640108  sd          $a0, 0x108($v1)
    ctx->pc = 0x1d2254u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 264), GPR_U64(ctx, 4));
    // 0x1d2258: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d2258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d225c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d225cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2260: 0xfc640110  sd          $a0, 0x110($v1)
    ctx->pc = 0x1d2260u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 272), GPR_U64(ctx, 4));
    // 0x1d2264: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d2264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d2268: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d226c: 0xfc640118  sd          $a0, 0x118($v1)
    ctx->pc = 0x1d226cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 280), GPR_U64(ctx, 4));
    // 0x1d2270: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x1d2270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1d2274: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1d2274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d2278: 0x41ac2  srl         $v1, $a0, 11
    ctx->pc = 0x1d2278u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 11));
    // 0x1d227c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d227cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2280: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d2280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d2284: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1d2284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1d2288: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d2288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d228c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2290: 0xfc640120  sd          $a0, 0x120($v1)
    ctx->pc = 0x1d2290u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 288), GPR_U64(ctx, 4));
    // 0x1d2294: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x1d2294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d2298: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d2298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d229c: 0xfc640128  sd          $a0, 0x128($v1)
    ctx->pc = 0x1d229cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 296), GPR_U64(ctx, 4));
    // 0x1d22a0: 0x26030360  addiu       $v1, $s0, 0x360
    ctx->pc = 0x1d22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x1d22a4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1d22a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d22a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d22a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d22ac: 0xfc640130  sd          $a0, 0x130($v1)
    ctx->pc = 0x1d22acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 304), GPR_U64(ctx, 4));
    // 0x1d22b0: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1d22b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d22b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d22b8: 0xfc640138  sd          $a0, 0x138($v1)
    ctx->pc = 0x1d22b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 312), GPR_U64(ctx, 4));
    // 0x1d22bc: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x1d22bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x1d22c0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d22c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d22c4: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x1d22c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x1d22c8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d22c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d22cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d22ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d22d0: 0xfc640140  sd          $a0, 0x140($v1)
    ctx->pc = 0x1d22d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 320), GPR_U64(ctx, 4));
    // 0x1d22d4: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x1d22d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1d22d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d22d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d22dc: 0xfc640148  sd          $a0, 0x148($v1)
    ctx->pc = 0x1d22dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 328), GPR_U64(ctx, 4));
    // 0x1d22e0: 0x3c03f18b  lui         $v1, 0xF18B
    ctx->pc = 0x1d22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61835 << 16));
    // 0x1d22e4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d22e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d22e8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d22e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d22ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d22ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d22f0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d22f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d22f4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d22f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d22f8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1d22f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1d22fc: 0x3c030513  lui         $v1, 0x513
    ctx->pc = 0x1d22fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1299 << 16));
    // 0x1d2300: 0x3463513e  ori         $v1, $v1, 0x513E
    ctx->pc = 0x1d2300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20798);
    // 0x1d2304: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2308: 0x3c037eee  lui         $v1, 0x7EEE
    ctx->pc = 0x1d2308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32494 << 16));
    // 0x1d230c: 0x3463eeee  ori         $v1, $v1, 0xEEEE
    ctx->pc = 0x1d230cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x1d2310: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2314: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2318: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1d2318u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1d231c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d231cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d2320: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2324: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1d2324u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1d2328: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d2328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d232c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2330: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1d2330u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1d2334: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1d2334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1d2338: 0x346400a0  ori         $a0, $v1, 0xA0
    ctx->pc = 0x1d2338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x1d233c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d233cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2340: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d2340u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d2344: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x1d2344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d2348: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d234c: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1d234cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1d2350: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d2350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2354: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2358: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d235c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d235cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2360: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2364: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d2364u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x1d2368: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1d2368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d236c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d236cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2370: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1d2370u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1d2374: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1d2374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1d2378: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d237c: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x1d237cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x1d2380: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2384: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2388: 0xfc640040  sd          $a0, 0x40($v1)
    ctx->pc = 0x1d2388u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 4));
    // 0x1d238c: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x1d238cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1d2390: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2394: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x1d2394u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
    // 0x1d2398: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1d2398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1d239c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d239cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d23a0: 0xfc640050  sd          $a0, 0x50($v1)
    ctx->pc = 0x1d23a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 4));
    // 0x1d23a4: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x1d23a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1d23a8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d23ac: 0xfc640058  sd          $a0, 0x58($v1)
    ctx->pc = 0x1d23acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 4));
    // 0x1d23b0: 0x24041001  addiu       $a0, $zero, 0x1001
    ctx->pc = 0x1d23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x1d23b4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d23b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d23b8: 0xfc640060  sd          $a0, 0x60($v1)
    ctx->pc = 0x1d23b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 4));
    // 0x1d23bc: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1d23bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d23c0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d23c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d23c4: 0xfc640068  sd          $a0, 0x68($v1)
    ctx->pc = 0x1d23c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 4));
    // 0x1d23c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d23cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d23ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d23d0: 0x3403f000  ori         $v1, $zero, 0xF000
    ctx->pc = 0x1d23d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1d23d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d23d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1d23d8: 0x34633f00  ori         $v1, $v1, 0x3F00
    ctx->pc = 0x1d23d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16128);
    // 0x1d23dc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d23dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d23e0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d23e4: 0xfc640070  sd          $a0, 0x70($v1)
    ctx->pc = 0x1d23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 4));
    // 0x1d23e8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d23e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d23ec: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d23f0: 0xfc640078  sd          $a0, 0x78($v1)
    ctx->pc = 0x1d23f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 120), GPR_U64(ctx, 4));
    // 0x1d23f4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1d23f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1d23f8: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1d23f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1d23fc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d23fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2400: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1d2400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1d2404: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2408: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d240c: 0xfc640080  sd          $a0, 0x80($v1)
    ctx->pc = 0x1d240cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 4));
    // 0x1d2410: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2414: 0xfc600088  sd          $zero, 0x88($v1)
    ctx->pc = 0x1d2414u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 136), GPR_U64(ctx, 0));
    // 0x1d2418: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d241c: 0xfc600090  sd          $zero, 0x90($v1)
    ctx->pc = 0x1d241cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 0));
    // 0x1d2420: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1d2420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d2424: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2428: 0xfc640098  sd          $a0, 0x98($v1)
    ctx->pc = 0x1d2428u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 152), GPR_U64(ctx, 4));
    // 0x1d242c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2430: 0xfc6000a0  sd          $zero, 0xA0($v1)
    ctx->pc = 0x1d2430u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 160), GPR_U64(ctx, 0));
    // 0x1d2434: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2438: 0xfc6000a8  sd          $zero, 0xA8($v1)
    ctx->pc = 0x1d2438u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 0));
    // 0x1d243c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d243cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2440: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2444: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2448: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d244c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2450: 0xfc6400b0  sd          $a0, 0xB0($v1)
    ctx->pc = 0x1d2450u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 4));
    // 0x1d2454: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2458: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d245c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d245cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2460: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2464: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2468: 0xfc6400b8  sd          $a0, 0xB8($v1)
    ctx->pc = 0x1d2468u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 4));
    // 0x1d246c: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d246cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d2470: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2474: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d2474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d2478: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d247c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d247cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2480: 0xfc6400c0  sd          $a0, 0xC0($v1)
    ctx->pc = 0x1d2480u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 192), GPR_U64(ctx, 4));
    // 0x1d2484: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d2484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2488: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d248c: 0xfc6400c8  sd          $a0, 0xC8($v1)
    ctx->pc = 0x1d248cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 4));
    // 0x1d2490: 0x24030e00  addiu       $v1, $zero, 0xE00
    ctx->pc = 0x1d2490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x1d2494: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2498: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x1d2498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1d249c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d249cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d24a0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d24a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d24a4: 0xfc6400d0  sd          $a0, 0xD0($v1)
    ctx->pc = 0x1d24a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 208), GPR_U64(ctx, 4));
    // 0x1d24a8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d24ac: 0xfc6000d8  sd          $zero, 0xD8($v1)
    ctx->pc = 0x1d24acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 216), GPR_U64(ctx, 0));
    // 0x1d24b0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d24b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d24b4: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x1d24b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d24b8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d24b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d24bc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1d24bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1d24c0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1d24c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d24c4: 0xfc8300e0  sd          $v1, 0xE0($a0)
    ctx->pc = 0x1d24c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 3));
    // 0x1d24c8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d24cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d24ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d24d0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d24d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d24d4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d24d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d24d8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d24d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d24dc: 0xfc6400e8  sd          $a0, 0xE8($v1)
    ctx->pc = 0x1d24dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 232), GPR_U64(ctx, 4));
    // 0x1d24e0: 0x34058700  ori         $a1, $zero, 0x8700
    ctx->pc = 0x1d24e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1d24e4: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x1d24e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1d24e8: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x1d24e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1d24ec: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d24ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d24f0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d24f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d24f4: 0xfc6400f0  sd          $a0, 0xF0($v1)
    ctx->pc = 0x1d24f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 240), GPR_U64(ctx, 4));
    // 0x1d24f8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d24f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d24fc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2500: 0xfc6400f8  sd          $a0, 0xF8($v1)
    ctx->pc = 0x1d2500u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 248), GPR_U64(ctx, 4));
    // 0x1d2504: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1d2504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1d2508: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1d2508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1d250c: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x1d250cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d2510: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d2510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d2514: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2518: 0xfc640100  sd          $a0, 0x100($v1)
    ctx->pc = 0x1d2518u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 256), GPR_U64(ctx, 4));
    // 0x1d251c: 0x3404eeee  ori         $a0, $zero, 0xEEEE
    ctx->pc = 0x1d251cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61166);
    // 0x1d2520: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2524: 0xfc640108  sd          $a0, 0x108($v1)
    ctx->pc = 0x1d2524u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 264), GPR_U64(ctx, 4));
    // 0x1d2528: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d2528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d252c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1d252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2530: 0xfc830110  sd          $v1, 0x110($a0)
    ctx->pc = 0x1d2530u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 272), GPR_U64(ctx, 3));
    // 0x1d2534: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1d2534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d2538: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1d2538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d253c: 0xfc830118  sd          $v1, 0x118($a0)
    ctx->pc = 0x1d253cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 280), GPR_U64(ctx, 3));
    // 0x1d2540: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1d2540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1d2544: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x1d2544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d2548: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x1d2548u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x1d254c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d254cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2550: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d2550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d2554: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1d2554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1d2558: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d2558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d255c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1d255cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2560: 0xfc830120  sd          $v1, 0x120($a0)
    ctx->pc = 0x1d2560u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 288), GPR_U64(ctx, 3));
    // 0x1d2564: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1d2564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d2568: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1d2568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d256c: 0xfc830128  sd          $v1, 0x128($a0)
    ctx->pc = 0x1d256cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 296), GPR_U64(ctx, 3));
    // 0x1d2570: 0x260301f0  addiu       $v1, $s0, 0x1F0
    ctx->pc = 0x1d2570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1d2574: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1d2574u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2578: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d257c: 0xfc640130  sd          $a0, 0x130($v1)
    ctx->pc = 0x1d257cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 304), GPR_U64(ctx, 4));
    // 0x1d2580: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1d2580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d2584: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d2584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2588: 0xfc640138  sd          $a0, 0x138($v1)
    ctx->pc = 0x1d2588u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 312), GPR_U64(ctx, 4));
    // 0x1d258c: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x1d258cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x1d2590: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d2590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2594: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x1d2594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x1d2598: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d2598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d259c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d259cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d25a0: 0xfc640140  sd          $a0, 0x140($v1)
    ctx->pc = 0x1d25a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 320), GPR_U64(ctx, 4));
    // 0x1d25a4: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x1d25a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1d25a8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d25a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d25ac: 0xfc640148  sd          $a0, 0x148($v1)
    ctx->pc = 0x1d25acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 328), GPR_U64(ctx, 4));
    // 0x1d25b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d25b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d25b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d25b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d25b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d25b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d25bc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d25bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d25c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D25C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D25C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D25C8u;
}
