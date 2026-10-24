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

// Function: SdrSeChg
// Address: 0x338e50 - 0x339058
void SdrSeChg_0x338e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrSeChg_0x338e50");
#endif

    switch (ctx->pc) {
        case 0x338eb0u: goto label_338eb0;
        default: break;
    }

    ctx->pc = 0x338e50u;

    // 0x338e50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x338e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x338e54: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x338e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x338e58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x338e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x338e5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x338e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x338e60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x338e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x338e64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x338e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x338e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338e6c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x338e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x338e70: 0xa3a50068  sb          $a1, 0x68($sp)
    ctx->pc = 0x338e70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x338e74: 0xa3a60070  sb          $a2, 0x70($sp)
    ctx->pc = 0x338e74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
    // 0x338e78: 0xa7a70078  sh          $a3, 0x78($sp)
    ctx->pc = 0x338e78u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 120), (uint16_t)GPR_U32(ctx, 7));
    // 0x338e7c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338e80: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x338e80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x338e84: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x338e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x338e88: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338e8c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338e90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338e94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x338e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338e98: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338E98u;
    {
        const bool branch_taken_0x338e98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338e98) {
            ctx->pc = 0x338EBCu;
            goto label_338ebc;
        }
    }
    ctx->pc = 0x338EA0u;
    // 0x338ea0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338ea4: 0x24442380  addiu       $a0, $v0, 0x2380
    ctx->pc = 0x338ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9088));
    // 0x338ea8: 0xc046760  jal         func_119D80
    ctx->pc = 0x338EA8u;
    SET_GPR_U32(ctx, 31, 0x338EB0u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338EB0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338EB0u) { return; }
    ctx->pc = 0x338EB0u;
label_338eb0:
    // 0x338eb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338eb4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x338EB4u;
    {
        const bool branch_taken_0x338eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338eb4) {
            ctx->pc = 0x339034u;
            goto label_339034;
        }
    }
    ctx->pc = 0x338EBCu;
label_338ebc:
    // 0x338ebc: 0x83a20070  lb          $v0, 0x70($sp)
    ctx->pc = 0x338ebcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x338ec0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x338ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338ec4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338ec4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338ec8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338EC8u;
    {
        const bool branch_taken_0x338ec8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338ec8) {
            ctx->pc = 0x338EDCu;
            goto label_338edc;
        }
    }
    ctx->pc = 0x338ED0u;
    // 0x338ed0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x338ed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338ed4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x338ED4u;
    {
        const bool branch_taken_0x338ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338ed4) {
            ctx->pc = 0x338EE0u;
            goto label_338ee0;
        }
    }
    ctx->pc = 0x338EDCu;
label_338edc:
    // 0x338edc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x338edcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_338ee0:
    // 0x338ee0: 0x83a20068  lb          $v0, 0x68($sp)
    ctx->pc = 0x338ee0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x338ee4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x338ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338ee8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338ee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338eec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338EECu;
    {
        const bool branch_taken_0x338eec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338eec) {
            ctx->pc = 0x338F00u;
            goto label_338f00;
        }
    }
    ctx->pc = 0x338EF4u;
    // 0x338ef4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x338ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338ef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x338EF8u;
    {
        const bool branch_taken_0x338ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338ef8) {
            ctx->pc = 0x338F04u;
            goto label_338f04;
        }
    }
    ctx->pc = 0x338F00u;
label_338f00:
    // 0x338f00: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x338f00u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_338f04:
    // 0x338f04: 0x87a20078  lh          $v0, 0x78($sp)
    ctx->pc = 0x338f04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x338f08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x338f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x338f0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x338f0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x338f10: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338F10u;
    {
        const bool branch_taken_0x338f10 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338f10) {
            ctx->pc = 0x338F24u;
            goto label_338f24;
        }
    }
    ctx->pc = 0x338F18u;
    // 0x338f18: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x338f18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338f1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x338F1Cu;
    {
        const bool branch_taken_0x338f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338f1c) {
            ctx->pc = 0x338F28u;
            goto label_338f28;
        }
    }
    ctx->pc = 0x338F24u;
label_338f24:
    // 0x338f24: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x338f24u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_338f28:
    // 0x338f28: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x338f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x338f2c: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x338f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x338f30: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x338f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x338f34: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x338f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x338f38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338f3c: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x338f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x338f40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338f44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x338f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x338f48: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x338f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338f4c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338f4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338f50: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x338f50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338f54: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x338f54u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x338f58: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x338f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
    // 0x338f5c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x338f5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x338f60: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x338f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x338f64: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338F64u;
    {
        const bool branch_taken_0x338f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x338f64) {
            ctx->pc = 0x338F78u;
            goto label_338f78;
        }
    }
    ctx->pc = 0x338F6Cu;
    // 0x338f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338f70: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x338F70u;
    {
        const bool branch_taken_0x338f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338f70) {
            ctx->pc = 0x339034u;
            goto label_339034;
        }
    }
    ctx->pc = 0x338F78u;
label_338f78:
    // 0x338f78: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338f7c: 0x8c305438  lw          $s0, 0x5438($at)
    ctx->pc = 0x338f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x895438u));
    // 0x338f80: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x338f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x338f84: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338f84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338f88: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x338f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x338f8c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x338f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x338f90: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x338f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x338f94: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x338f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x338f98: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x338f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338f9c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338fa0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338fa4: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338fa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338fac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x338facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x338fb0: 0x83a40068  lb          $a0, 0x68($sp)
    ctx->pc = 0x338fb0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x338fb4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338fb8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338fbc: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338fc4: 0xa0440004  sb          $a0, 0x4($v0)
    ctx->pc = 0x338fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x338fc8: 0x83a40070  lb          $a0, 0x70($sp)
    ctx->pc = 0x338fc8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x338fcc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338fd0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338fd4: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338fd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338fdc: 0xa0440005  sb          $a0, 0x5($v0)
    ctx->pc = 0x338fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x338fe0: 0x87a40078  lh          $a0, 0x78($sp)
    ctx->pc = 0x338fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x338fe4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338fe8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338fec: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338ff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338ff4: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x338ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x338ff8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338ffc: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x338ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339000: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339004: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339008: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339008u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x33900c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339010: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339014: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339014u;
    {
        const bool branch_taken_0x339014 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339014) {
            ctx->pc = 0x339028u;
            goto label_339028;
        }
    }
    ctx->pc = 0x33901Cu;
    // 0x33901c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33901Cu;
    {
        const bool branch_taken_0x33901c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33901c) {
            ctx->pc = 0x339028u;
            goto label_339028;
        }
    }
    ctx->pc = 0x339024u;
    // 0x339024: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_339028:
    // 0x339028: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33902c: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x33902cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339030: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x339030u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339034:
    // 0x339034: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x339034u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x339038: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x339038u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33903c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33903cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x339040: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x339040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33904c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x33904cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x339050: 0x3e00008  jr          $ra
    ctx->pc = 0x339050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339058u;
}
