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

// Function: SdrSeAllStop
// Address: 0x339060 - 0x339114
void SdrSeAllStop_0x339060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrSeAllStop_0x339060");
#endif

    switch (ctx->pc) {
        case 0x33909cu: goto label_33909c;
        default: break;
    }

    ctx->pc = 0x339060u;

    // 0x339060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339064: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x339064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x339068: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33906c: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x33906cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339070: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339074: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339078: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x33907c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339080: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339084: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339084u;
    {
        const bool branch_taken_0x339084 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339084) {
            ctx->pc = 0x3390A8u;
            goto label_3390a8;
        }
    }
    ctx->pc = 0x33908Cu;
    // 0x33908c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33908cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339090: 0x244423b0  addiu       $a0, $v0, 0x23B0
    ctx->pc = 0x339090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x339094: 0xc046760  jal         func_119D80
    ctx->pc = 0x339094u;
    SET_GPR_U32(ctx, 31, 0x33909Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x33909Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33909Cu) { return; }
    ctx->pc = 0x33909Cu;
label_33909c:
    // 0x33909c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33909cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3390a0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3390A0u;
    {
        const bool branch_taken_0x3390a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3390a0) {
            ctx->pc = 0x339104u;
            goto label_339104;
        }
    }
    ctx->pc = 0x3390A8u;
label_3390a8:
    // 0x3390a8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3390a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3390ac: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3390acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3390b0: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3390b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3390b4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3390b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3390b8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3390b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3390bc: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x3390bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x3390c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3390c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3390c4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3390c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3390c8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3390c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3390cc: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3390ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3390d0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3390d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3390d4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3390d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3390d8: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x3390d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x3390dc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3390dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3390e0: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x3390e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3390e4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3390E4u;
    {
        const bool branch_taken_0x3390e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3390e4) {
            ctx->pc = 0x3390F8u;
            goto label_3390f8;
        }
    }
    ctx->pc = 0x3390ECu;
    // 0x3390ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3390ECu;
    {
        const bool branch_taken_0x3390ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3390ec) {
            ctx->pc = 0x3390F8u;
            goto label_3390f8;
        }
    }
    ctx->pc = 0x3390F4u;
    // 0x3390f4: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x3390f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_3390f8:
    // 0x3390f8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3390f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3390fc: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x3390fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339100: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x339100u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339104:
    // 0x339104: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x339104u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339108: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x339108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33910c: 0x3e00008  jr          $ra
    ctx->pc = 0x33910Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33910Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339114u;
}
