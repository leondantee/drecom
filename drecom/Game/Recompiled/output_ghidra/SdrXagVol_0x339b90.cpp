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

// Function: SdrXagVol
// Address: 0x339b90 - 0x339c60
void SdrXagVol_0x339b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrXagVol_0x339b90");
#endif

    switch (ctx->pc) {
        case 0x339bd0u: goto label_339bd0;
        default: break;
    }

    ctx->pc = 0x339b90u;

    // 0x339b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339b94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x339b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x339b98: 0xa3a40018  sb          $a0, 0x18($sp)
    ctx->pc = 0x339b98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x339b9c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339ba0: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339ba4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339ba8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339bac: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339bb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339bb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339bb8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339BB8u;
    {
        const bool branch_taken_0x339bb8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339bb8) {
            ctx->pc = 0x339BDCu;
            goto label_339bdc;
        }
    }
    ctx->pc = 0x339BC0u;
    // 0x339bc0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339bc4: 0x24442670  addiu       $a0, $v0, 0x2670
    ctx->pc = 0x339bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
    // 0x339bc8: 0xc046760  jal         func_119D80
    ctx->pc = 0x339BC8u;
    SET_GPR_U32(ctx, 31, 0x339BD0u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339BD0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339BD0u) { return; }
    ctx->pc = 0x339BD0u;
label_339bd0:
    // 0x339bd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x339bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339bd4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x339BD4u;
    {
        const bool branch_taken_0x339bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339bd4) {
            ctx->pc = 0x339C50u;
            goto label_339c50;
        }
    }
    ctx->pc = 0x339BDCu;
label_339bdc:
    // 0x339bdc: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x339bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339be0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x339be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x339be4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x339be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x339be8: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x339bec: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x339becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x339bf0: 0x3c023800  lui         $v0, 0x3800
    ctx->pc = 0x339bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14336 << 16));
    // 0x339bf4: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x339bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339bf8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339bfc: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339c00: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339c04: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339c08: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339c10: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339c14: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339c18: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339c18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339c1c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339c20: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339c24: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339c24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339c28: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339c2c: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339c30: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339C30u;
    {
        const bool branch_taken_0x339c30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339c30) {
            ctx->pc = 0x339C44u;
            goto label_339c44;
        }
    }
    ctx->pc = 0x339C38u;
    // 0x339c38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339C38u;
    {
        const bool branch_taken_0x339c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339c38) {
            ctx->pc = 0x339C44u;
            goto label_339c44;
        }
    }
    ctx->pc = 0x339C40u;
    // 0x339c40: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_339c44:
    // 0x339c44: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339c48: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x339c48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339c4c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x339c4cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339c50:
    // 0x339c50: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x339c50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339c54: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x339c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x339c58: 0x3e00008  jr          $ra
    ctx->pc = 0x339C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339C60u;
}
