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

// Function: Gp_Sttexture_init
// Address: 0x1d19d0 - 0x1d1fdc
void Gp_Sttexture_init_0x1d19d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_Sttexture_init_0x1d19d0");
#endif

    ctx->pc = 0x1d19d0u;

    // 0x1d19d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d19d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d19d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d19d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d19d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d19d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d19dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d19dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d19e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d19e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d19e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d19e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d19e8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1d19e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1d19ec: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1d19ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1d19f0: 0xffa60068  sd          $a2, 0x68($sp)
    ctx->pc = 0x1d19f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 6));
    // 0x1d19f4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d19f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d19f8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1d19f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d19fc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1d19fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d1a00: 0x24130700  addiu       $s3, $zero, 0x700
    ctx->pc = 0x1d1a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1d1a04: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1d1a04u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d1a08: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x1d1a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1d1a0c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1A0Cu;
    {
        const bool branch_taken_0x1d1a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1a0c) {
            ctx->pc = 0x1D1A24u;
            goto label_1d1a24;
        }
    }
    ctx->pc = 0x1D1A14u;
    // 0x1d1a14: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1d1a14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d1a18: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1d1a18u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d1a1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1A1Cu;
    {
        const bool branch_taken_0x1d1a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1a1c) {
            ctx->pc = 0x1D1A2Cu;
            goto label_1d1a2c;
        }
    }
    ctx->pc = 0x1D1A24u;
label_1d1a24:
    // 0x1d1a24: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1d1a24u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d1a28: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1d1a28u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d1a2c:
    // 0x1d1a2c: 0x3c03f18b  lui         $v1, 0xF18B
    ctx->pc = 0x1d1a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61835 << 16));
    // 0x1d1a30: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d1a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d1a34: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1a38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1a3c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1a40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1a44: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1d1a44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1d1a48: 0x3c030513  lui         $v1, 0x513
    ctx->pc = 0x1d1a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1299 << 16));
    // 0x1d1a4c: 0x3464513e  ori         $a0, $v1, 0x513E
    ctx->pc = 0x1d1a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20798);
    // 0x1d1a50: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1d1a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1d1a54: 0x3c037eee  lui         $v1, 0x7EEE
    ctx->pc = 0x1d1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32494 << 16));
    // 0x1d1a58: 0x3464eeee  ori         $a0, $v1, 0xEEEE
    ctx->pc = 0x1d1a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x1d1a5c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1d1a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1d1a60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1a64: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1d1a64u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1d1a68: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d1a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d1a6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1a70: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1d1a70u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1d1a74: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d1a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d1a78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1a7c: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1d1a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1d1a80: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1d1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1d1a84: 0x346400a0  ori         $a0, $v1, 0xA0
    ctx->pc = 0x1d1a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x1d1a88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1a8c: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d1a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d1a90: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x1d1a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d1a94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1a98: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1d1a98u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1d1a9c: 0x26247900  addiu       $a0, $s1, 0x7900
    ctx->pc = 0x1d1a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 30976));
    // 0x1d1aa0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1d1aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1d1aa4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d1aa4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d1aa8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d1aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1aac: 0x34647000  ori         $a0, $v1, 0x7000
    ctx->pc = 0x1d1aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x1d1ab0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1ab4: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d1ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x1d1ab8: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1d1ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d1abc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1ac0: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1d1ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1d1ac4: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1d1ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1d1ac8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1acc: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x1d1accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x1d1ad0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1ad4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1ad8: 0xfc640040  sd          $a0, 0x40($v1)
    ctx->pc = 0x1d1ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 4));
    // 0x1d1adc: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x1d1adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1d1ae0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1ae4: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x1d1ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
    // 0x1d1ae8: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1d1ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1d1aec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1af0: 0xfc640050  sd          $a0, 0x50($v1)
    ctx->pc = 0x1d1af0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 4));
    // 0x1d1af4: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x1d1af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1d1af8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1afc: 0xfc640058  sd          $a0, 0x58($v1)
    ctx->pc = 0x1d1afcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 4));
    // 0x1d1b00: 0x24041001  addiu       $a0, $zero, 0x1001
    ctx->pc = 0x1d1b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x1d1b04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1b08: 0xfc640060  sd          $a0, 0x60($v1)
    ctx->pc = 0x1d1b08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 4));
    // 0x1d1b0c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1d1b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d1b10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1b14: 0xfc640068  sd          $a0, 0x68($v1)
    ctx->pc = 0x1d1b14u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 4));
    // 0x1d1b18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d1b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1b1c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1b20: 0x3403f000  ori         $v1, $zero, 0xF000
    ctx->pc = 0x1d1b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1d1b24: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d1b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1d1b28: 0x34633f00  ori         $v1, $v1, 0x3F00
    ctx->pc = 0x1d1b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16128);
    // 0x1d1b2c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1b30: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1b34: 0xfc640070  sd          $a0, 0x70($v1)
    ctx->pc = 0x1d1b34u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 4));
    // 0x1d1b38: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d1b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d1b3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1b40: 0xfc640078  sd          $a0, 0x78($v1)
    ctx->pc = 0x1d1b40u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 120), GPR_U64(ctx, 4));
    // 0x1d1b44: 0xdfa40068  ld          $a0, 0x68($sp)
    ctx->pc = 0x1d1b44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d1b48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1b4c: 0xfc640080  sd          $a0, 0x80($v1)
    ctx->pc = 0x1d1b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 4));
    // 0x1d1b50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1b54: 0xfc600088  sd          $zero, 0x88($v1)
    ctx->pc = 0x1d1b54u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 136), GPR_U64(ctx, 0));
    // 0x1d1b58: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1d1b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d1b5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1b60: 0xfc640090  sd          $a0, 0x90($v1)
    ctx->pc = 0x1d1b60u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 4));
    // 0x1d1b64: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1d1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d1b68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1b6c: 0xfc640098  sd          $a0, 0x98($v1)
    ctx->pc = 0x1d1b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 152), GPR_U64(ctx, 4));
    // 0x1d1b70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1b74: 0xfc6000a0  sd          $zero, 0xA0($v1)
    ctx->pc = 0x1d1b74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 160), GPR_U64(ctx, 0));
    // 0x1d1b78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1b7c: 0xfc6000a8  sd          $zero, 0xA8($v1)
    ctx->pc = 0x1d1b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 0));
    // 0x1d1b80: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1b84: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1b88: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1b8c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1b90: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1b94: 0xfc6400b0  sd          $a0, 0xB0($v1)
    ctx->pc = 0x1d1b94u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 4));
    // 0x1d1b98: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1b9c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1ba0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1ba4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1ba8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1bac: 0xfc6400b8  sd          $a0, 0xB8($v1)
    ctx->pc = 0x1d1bacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 4));
    // 0x1d1bb0: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d1bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d1bb4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1bb8: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d1bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d1bbc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1bc0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1bc4: 0xfc6400c0  sd          $a0, 0xC0($v1)
    ctx->pc = 0x1d1bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 192), GPR_U64(ctx, 4));
    // 0x1d1bc8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d1bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d1bcc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1bd0: 0xfc6400c8  sd          $a0, 0xC8($v1)
    ctx->pc = 0x1d1bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 4));
    // 0x1d1bd4: 0x240307f0  addiu       $v1, $zero, 0x7F0
    ctx->pc = 0x1d1bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    // 0x1d1bd8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1bdc: 0x240307f0  addiu       $v1, $zero, 0x7F0
    ctx->pc = 0x1d1bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    // 0x1d1be0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1be4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1be8: 0xfc6400d0  sd          $a0, 0xD0($v1)
    ctx->pc = 0x1d1be8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 208), GPR_U64(ctx, 4));
    // 0x1d1bec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1bf0: 0xfc6000d8  sd          $zero, 0xD8($v1)
    ctx->pc = 0x1d1bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 216), GPR_U64(ctx, 0));
    // 0x1d1bf4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1bf8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1bfc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1c00: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1c04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1c08: 0xfc6400e0  sd          $a0, 0xE0($v1)
    ctx->pc = 0x1d1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 224), GPR_U64(ctx, 4));
    // 0x1d1c0c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1c10: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1c14: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1c18: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1c1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1c20: 0xfc6400e8  sd          $a0, 0xE8($v1)
    ctx->pc = 0x1d1c20u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 232), GPR_U64(ctx, 4));
    // 0x1d1c24: 0x34038100  ori         $v1, $zero, 0x8100
    ctx->pc = 0x1d1c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x1d1c28: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1c2c: 0x24037800  addiu       $v1, $zero, 0x7800
    ctx->pc = 0x1d1c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1d1c30: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1c34: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1c38: 0xfc6400f0  sd          $a0, 0xF0($v1)
    ctx->pc = 0x1d1c38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 240), GPR_U64(ctx, 4));
    // 0x1d1c3c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d1c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d1c40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1c44: 0xfc6400f8  sd          $a0, 0xF8($v1)
    ctx->pc = 0x1d1c44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 248), GPR_U64(ctx, 4));
    // 0x1d1c48: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d1c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1d1c4c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1c50: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d1c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d1c54: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1c58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1c5c: 0xfc640100  sd          $a0, 0x100($v1)
    ctx->pc = 0x1d1c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 256), GPR_U64(ctx, 4));
    // 0x1d1c60: 0x3404eeee  ori         $a0, $zero, 0xEEEE
    ctx->pc = 0x1d1c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61166);
    // 0x1d1c64: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1c68: 0xfc640108  sd          $a0, 0x108($v1)
    ctx->pc = 0x1d1c68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 264), GPR_U64(ctx, 4));
    // 0x1d1c6c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d1c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d1c70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1c74: 0xfc640110  sd          $a0, 0x110($v1)
    ctx->pc = 0x1d1c74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 272), GPR_U64(ctx, 4));
    // 0x1d1c78: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d1c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d1c7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1c80: 0xfc640118  sd          $a0, 0x118($v1)
    ctx->pc = 0x1d1c80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 280), GPR_U64(ctx, 4));
    // 0x1d1c84: 0x132180  sll         $a0, $s3, 6
    ctx->pc = 0x1d1c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1d1c88: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1d1c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d1c8c: 0x41ac2  srl         $v1, $a0, 11
    ctx->pc = 0x1d1c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 11));
    // 0x1d1c90: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1c94: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d1c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d1c98: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1d1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1d1c9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d1c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d1ca0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1ca4: 0xfc640120  sd          $a0, 0x120($v1)
    ctx->pc = 0x1d1ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 288), GPR_U64(ctx, 4));
    // 0x1d1ca8: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x1d1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d1cac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1cb0: 0xfc640128  sd          $a0, 0x128($v1)
    ctx->pc = 0x1d1cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 296), GPR_U64(ctx, 4));
    // 0x1d1cb4: 0x26030360  addiu       $v1, $s0, 0x360
    ctx->pc = 0x1d1cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x1d1cb8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1d1cb8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1cbc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1cc0: 0xfc640130  sd          $a0, 0x130($v1)
    ctx->pc = 0x1d1cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 304), GPR_U64(ctx, 4));
    // 0x1d1cc4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1d1cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d1cc8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1ccc: 0xfc640138  sd          $a0, 0x138($v1)
    ctx->pc = 0x1d1cccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 312), GPR_U64(ctx, 4));
    // 0x1d1cd0: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x1d1cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x1d1cd4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1cd8: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x1d1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x1d1cdc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1ce0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1ce4: 0xfc640140  sd          $a0, 0x140($v1)
    ctx->pc = 0x1d1ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 320), GPR_U64(ctx, 4));
    // 0x1d1ce8: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x1d1ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1d1cec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1cf0: 0xfc640148  sd          $a0, 0x148($v1)
    ctx->pc = 0x1d1cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 328), GPR_U64(ctx, 4));
    // 0x1d1cf4: 0x3c03f18b  lui         $v1, 0xF18B
    ctx->pc = 0x1d1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61835 << 16));
    // 0x1d1cf8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d1cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d1cfc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1d04: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1d08: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1d0c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1d1d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1d1d10: 0x3c030513  lui         $v1, 0x513
    ctx->pc = 0x1d1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1299 << 16));
    // 0x1d1d14: 0x3463513e  ori         $v1, $v1, 0x513E
    ctx->pc = 0x1d1d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20798);
    // 0x1d1d18: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1d1c: 0x3c037eee  lui         $v1, 0x7EEE
    ctx->pc = 0x1d1d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32494 << 16));
    // 0x1d1d20: 0x3463eeee  ori         $v1, $v1, 0xEEEE
    ctx->pc = 0x1d1d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x1d1d24: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1d28: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1d2c: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1d1d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1d1d30: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d1d34: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1d38: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1d1d38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1d1d3c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d1d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d1d40: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1d44: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1d1d44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1d1d48: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1d1d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1d1d4c: 0x346400a0  ori         $a0, $v1, 0xA0
    ctx->pc = 0x1d1d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x1d1d50: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1d54: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d1d54u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d1d58: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x1d1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d1d5c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1d60: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1d1d60u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1d1d64: 0x26437900  addiu       $v1, $s2, 0x7900
    ctx->pc = 0x1d1d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 30976));
    // 0x1d1d68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d1d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1d6c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d1d6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d1d70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d1d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1d74: 0x34647000  ori         $a0, $v1, 0x7000
    ctx->pc = 0x1d1d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x1d1d78: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1d7c: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d1d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x1d1d80: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1d1d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d1d84: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1d88: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1d1d88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1d1d8c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1d1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1d1d90: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1d94: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x1d1d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x1d1d98: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1d9c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1da0: 0xfc640040  sd          $a0, 0x40($v1)
    ctx->pc = 0x1d1da0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 4));
    // 0x1d1da4: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x1d1da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1d1da8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1dac: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x1d1dacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
    // 0x1d1db0: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1d1db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1d1db4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1db8: 0xfc640050  sd          $a0, 0x50($v1)
    ctx->pc = 0x1d1db8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 4));
    // 0x1d1dbc: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x1d1dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1d1dc0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1dc4: 0xfc640058  sd          $a0, 0x58($v1)
    ctx->pc = 0x1d1dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 4));
    // 0x1d1dc8: 0x24041001  addiu       $a0, $zero, 0x1001
    ctx->pc = 0x1d1dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x1d1dcc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1dd0: 0xfc640060  sd          $a0, 0x60($v1)
    ctx->pc = 0x1d1dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 4));
    // 0x1d1dd4: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1d1dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d1dd8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1ddc: 0xfc640068  sd          $a0, 0x68($v1)
    ctx->pc = 0x1d1ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 4));
    // 0x1d1de0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1de4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1de8: 0x3403f000  ori         $v1, $zero, 0xF000
    ctx->pc = 0x1d1de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1d1dec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d1decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1d1df0: 0x34633f00  ori         $v1, $v1, 0x3F00
    ctx->pc = 0x1d1df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16128);
    // 0x1d1df4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1df8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1dfc: 0xfc640070  sd          $a0, 0x70($v1)
    ctx->pc = 0x1d1dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 4));
    // 0x1d1e00: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d1e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d1e04: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1e08: 0xfc640078  sd          $a0, 0x78($v1)
    ctx->pc = 0x1d1e08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 120), GPR_U64(ctx, 4));
    // 0x1d1e0c: 0xdfa40068  ld          $a0, 0x68($sp)
    ctx->pc = 0x1d1e0cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d1e10: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1e14: 0xfc640080  sd          $a0, 0x80($v1)
    ctx->pc = 0x1d1e14u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 4));
    // 0x1d1e18: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1e1c: 0xfc600088  sd          $zero, 0x88($v1)
    ctx->pc = 0x1d1e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 136), GPR_U64(ctx, 0));
    // 0x1d1e20: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1d1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d1e24: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1e28: 0xfc640090  sd          $a0, 0x90($v1)
    ctx->pc = 0x1d1e28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 4));
    // 0x1d1e2c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1d1e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d1e30: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1e34: 0xfc640098  sd          $a0, 0x98($v1)
    ctx->pc = 0x1d1e34u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 152), GPR_U64(ctx, 4));
    // 0x1d1e38: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1e3c: 0xfc6000a0  sd          $zero, 0xA0($v1)
    ctx->pc = 0x1d1e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 160), GPR_U64(ctx, 0));
    // 0x1d1e40: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1e44: 0xfc6000a8  sd          $zero, 0xA8($v1)
    ctx->pc = 0x1d1e44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 0));
    // 0x1d1e48: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1e4c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1e4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1e50: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1e54: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1e58: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1e5c: 0xfc6400b0  sd          $a0, 0xB0($v1)
    ctx->pc = 0x1d1e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 4));
    // 0x1d1e60: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1e64: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1e68: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1e6c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1e70: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1e74: 0xfc6400b8  sd          $a0, 0xB8($v1)
    ctx->pc = 0x1d1e74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 4));
    // 0x1d1e78: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d1e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d1e7c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1e80: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d1e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d1e84: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1e88: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1e8c: 0xfc6400c0  sd          $a0, 0xC0($v1)
    ctx->pc = 0x1d1e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 192), GPR_U64(ctx, 4));
    // 0x1d1e90: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d1e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d1e94: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1e98: 0xfc6400c8  sd          $a0, 0xC8($v1)
    ctx->pc = 0x1d1e98u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 4));
    // 0x1d1e9c: 0x240307f0  addiu       $v1, $zero, 0x7F0
    ctx->pc = 0x1d1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    // 0x1d1ea0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1ea4: 0x240307f0  addiu       $v1, $zero, 0x7F0
    ctx->pc = 0x1d1ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    // 0x1d1ea8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1eac: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1eb0: 0xfc6400d0  sd          $a0, 0xD0($v1)
    ctx->pc = 0x1d1eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 208), GPR_U64(ctx, 4));
    // 0x1d1eb4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1eb8: 0xfc6000d8  sd          $zero, 0xD8($v1)
    ctx->pc = 0x1d1eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 216), GPR_U64(ctx, 0));
    // 0x1d1ebc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1ec0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1ec4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1ec8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1ecc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1ed0: 0xfc6400e0  sd          $a0, 0xE0($v1)
    ctx->pc = 0x1d1ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 224), GPR_U64(ctx, 4));
    // 0x1d1ed4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1ed8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d1ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1edc: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x1d1edcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1ee0: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x1d1ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x1d1ee4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1ee8: 0xfc6400e8  sd          $a0, 0xE8($v1)
    ctx->pc = 0x1d1ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 232), GPR_U64(ctx, 4));
    // 0x1d1eec: 0x34038100  ori         $v1, $zero, 0x8100
    ctx->pc = 0x1d1eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x1d1ef0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1ef4: 0x24037800  addiu       $v1, $zero, 0x7800
    ctx->pc = 0x1d1ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1d1ef8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1efc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1f00: 0xfc6400f0  sd          $a0, 0xF0($v1)
    ctx->pc = 0x1d1f00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 240), GPR_U64(ctx, 4));
    // 0x1d1f04: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d1f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d1f08: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1f0c: 0xfc6400f8  sd          $a0, 0xF8($v1)
    ctx->pc = 0x1d1f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 248), GPR_U64(ctx, 4));
    // 0x1d1f10: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1d1f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1d1f14: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x1d1f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1d1f18: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d1f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d1f1c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1f20: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1f24: 0xfc640100  sd          $a0, 0x100($v1)
    ctx->pc = 0x1d1f24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 256), GPR_U64(ctx, 4));
    // 0x1d1f28: 0x3404eeee  ori         $a0, $zero, 0xEEEE
    ctx->pc = 0x1d1f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61166);
    // 0x1d1f2c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1f30: 0xfc640108  sd          $a0, 0x108($v1)
    ctx->pc = 0x1d1f30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 264), GPR_U64(ctx, 4));
    // 0x1d1f34: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d1f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d1f38: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1f3c: 0xfc640110  sd          $a0, 0x110($v1)
    ctx->pc = 0x1d1f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 272), GPR_U64(ctx, 4));
    // 0x1d1f40: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d1f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d1f44: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1f48: 0xfc640118  sd          $a0, 0x118($v1)
    ctx->pc = 0x1d1f48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 280), GPR_U64(ctx, 4));
    // 0x1d1f4c: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x1d1f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x1d1f50: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x1d1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d1f54: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x1d1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x1d1f58: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1f5c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d1f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d1f60: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1d1f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1d1f64: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d1f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d1f68: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1d1f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1f6c: 0xfc830120  sd          $v1, 0x120($a0)
    ctx->pc = 0x1d1f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 288), GPR_U64(ctx, 3));
    // 0x1d1f70: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1d1f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d1f74: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1d1f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1f78: 0xfc830128  sd          $v1, 0x128($a0)
    ctx->pc = 0x1d1f78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 296), GPR_U64(ctx, 3));
    // 0x1d1f7c: 0x260301f0  addiu       $v1, $s0, 0x1F0
    ctx->pc = 0x1d1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1d1f80: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1d1f80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1f84: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1d1f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1f88: 0xfc830130  sd          $v1, 0x130($a0)
    ctx->pc = 0x1d1f88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 304), GPR_U64(ctx, 3));
    // 0x1d1f8c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x1d1f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d1f90: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1d1f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1f94: 0xfc830138  sd          $v1, 0x138($a0)
    ctx->pc = 0x1d1f94u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 312), GPR_U64(ctx, 3));
    // 0x1d1f98: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x1d1f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x1d1f9c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d1f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1fa0: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x1d1fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x1d1fa4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1fa8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1fac: 0xfc640140  sd          $a0, 0x140($v1)
    ctx->pc = 0x1d1facu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 320), GPR_U64(ctx, 4));
    // 0x1d1fb0: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x1d1fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1d1fb4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1d1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1fb8: 0xfc640148  sd          $a0, 0x148($v1)
    ctx->pc = 0x1d1fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 328), GPR_U64(ctx, 4));
    // 0x1d1fbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d1fbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d1fc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d1fc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d1fc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d1fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1fc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1fcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1fd0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1d1fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d1fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1FDCu;
}
