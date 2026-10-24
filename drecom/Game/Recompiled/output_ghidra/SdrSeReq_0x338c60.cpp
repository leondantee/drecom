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

// Function: SdrSeReq
// Address: 0x338c60 - 0x338e44
void SdrSeReq_0x338c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrSeReq_0x338c60");
#endif

    switch (ctx->pc) {
        case 0x338cc0u: goto label_338cc0;
        default: break;
    }

    ctx->pc = 0x338c60u;

    // 0x338c60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x338c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x338c64: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x338c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x338c68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x338c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x338c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x338c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x338c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x338c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x338c74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x338c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x338c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338c7c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x338c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x338c80: 0xa3a50068  sb          $a1, 0x68($sp)
    ctx->pc = 0x338c80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x338c84: 0xa3a60070  sb          $a2, 0x70($sp)
    ctx->pc = 0x338c84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
    // 0x338c88: 0xa7a70078  sh          $a3, 0x78($sp)
    ctx->pc = 0x338c88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 120), (uint16_t)GPR_U32(ctx, 7));
    // 0x338c8c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338c90: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x338c90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x338c94: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x338c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x338c98: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338c9c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338ca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338ca4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x338ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338ca8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338CA8u;
    {
        const bool branch_taken_0x338ca8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338ca8) {
            ctx->pc = 0x338CCCu;
            goto label_338ccc;
        }
    }
    ctx->pc = 0x338CB0u;
    // 0x338cb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338cb4: 0x24442350  addiu       $a0, $v0, 0x2350
    ctx->pc = 0x338cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9040));
    // 0x338cb8: 0xc046760  jal         func_119D80
    ctx->pc = 0x338CB8u;
    SET_GPR_U32(ctx, 31, 0x338CC0u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338CC0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338CC0u) { return; }
    ctx->pc = 0x338CC0u;
label_338cc0:
    // 0x338cc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338cc4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x338CC4u;
    {
        const bool branch_taken_0x338cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338cc4) {
            ctx->pc = 0x338E20u;
            goto label_338e20;
        }
    }
    ctx->pc = 0x338CCCu;
label_338ccc:
    // 0x338ccc: 0x83a20070  lb          $v0, 0x70($sp)
    ctx->pc = 0x338cccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x338cd0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x338cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338cd4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338cd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338cd8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338CD8u;
    {
        const bool branch_taken_0x338cd8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338cd8) {
            ctx->pc = 0x338CECu;
            goto label_338cec;
        }
    }
    ctx->pc = 0x338CE0u;
    // 0x338ce0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x338ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338ce4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x338CE4u;
    {
        const bool branch_taken_0x338ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338ce4) {
            ctx->pc = 0x338CF0u;
            goto label_338cf0;
        }
    }
    ctx->pc = 0x338CECu;
label_338cec:
    // 0x338cec: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x338cecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_338cf0:
    // 0x338cf0: 0x83a20068  lb          $v0, 0x68($sp)
    ctx->pc = 0x338cf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x338cf4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x338cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338cf8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338cf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338cfc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338CFCu;
    {
        const bool branch_taken_0x338cfc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338cfc) {
            ctx->pc = 0x338D10u;
            goto label_338d10;
        }
    }
    ctx->pc = 0x338D04u;
    // 0x338d04: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x338d04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338d08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x338D08u;
    {
        const bool branch_taken_0x338d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338d08) {
            ctx->pc = 0x338D14u;
            goto label_338d14;
        }
    }
    ctx->pc = 0x338D10u;
label_338d10:
    // 0x338d10: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x338d10u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_338d14:
    // 0x338d14: 0x87a20078  lh          $v0, 0x78($sp)
    ctx->pc = 0x338d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x338d18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x338d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x338d1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x338d1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x338d20: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338D20u;
    {
        const bool branch_taken_0x338d20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338d20) {
            ctx->pc = 0x338D34u;
            goto label_338d34;
        }
    }
    ctx->pc = 0x338D28u;
    // 0x338d28: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x338d28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338d2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x338D2Cu;
    {
        const bool branch_taken_0x338d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338d2c) {
            ctx->pc = 0x338D38u;
            goto label_338d38;
        }
    }
    ctx->pc = 0x338D34u;
label_338d34:
    // 0x338d34: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x338d34u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_338d38:
    // 0x338d38: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x338d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x338d3c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x338d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x338d40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x338d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x338d44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338d48: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x338d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x338d4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338d50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x338d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x338d54: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x338d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338d58: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338d58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338d5c: 0x2a63c  dsll32      $s4, $v0, 24
    ctx->pc = 0x338d5cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338d60: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x338d60u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
    // 0x338d64: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338d68: 0x8c305438  lw          $s0, 0x5438($at)
    ctx->pc = 0x338d68u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x895438u));
    // 0x338d6c: 0x14163c  dsll32      $v0, $s4, 24
    ctx->pc = 0x338d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
    // 0x338d70: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338d70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338d74: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x338d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x338d78: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x338d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x338d7c: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x338d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x338d80: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x338d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x338d84: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x338d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338d88: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338d8c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338d90: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338d94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338d98: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x338d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x338d9c: 0x83a40068  lb          $a0, 0x68($sp)
    ctx->pc = 0x338d9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x338da0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338da4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338da8: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338db0: 0xa0440004  sb          $a0, 0x4($v0)
    ctx->pc = 0x338db0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x338db4: 0x83a40070  lb          $a0, 0x70($sp)
    ctx->pc = 0x338db4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x338db8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338dbc: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338dc0: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338dc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338dc8: 0xa0440005  sb          $a0, 0x5($v0)
    ctx->pc = 0x338dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x338dcc: 0x87a40078  lh          $a0, 0x78($sp)
    ctx->pc = 0x338dccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x338dd0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338dd4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338dd8: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338de0: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x338de0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x338de4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338de8: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x338de8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x338dec: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x338decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x338df0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338df4: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x338df4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x338df8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x338df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x338dfc: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x338dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x338e00: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x338E00u;
    {
        const bool branch_taken_0x338e00 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x338e00) {
            ctx->pc = 0x338E14u;
            goto label_338e14;
        }
    }
    ctx->pc = 0x338E08u;
    // 0x338e08: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x338E08u;
    {
        const bool branch_taken_0x338e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338e08) {
            ctx->pc = 0x338E14u;
            goto label_338e14;
        }
    }
    ctx->pc = 0x338E10u;
    // 0x338e10: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x338e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_338e14:
    // 0x338e14: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338e18: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x338e18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x338e1c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x338e1cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_338e20:
    // 0x338e20: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x338e20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x338e24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x338e24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x338e28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x338e28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x338e2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x338e2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338e30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338e38: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x338e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x338e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x338E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338E44u;
}
