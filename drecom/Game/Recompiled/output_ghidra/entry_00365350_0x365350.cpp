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

// Function: entry_00365350
// Address: 0x365350 - 0x3653ac
void entry_00365350_0x365350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365350_0x365350");
#endif

    switch (ctx->pc) {
        case 0x365374u: goto label_365374;
        case 0x365398u: goto label_365398;
        default: break;
    }

    ctx->pc = 0x365350u;

    // 0x365350: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365354: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x365354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x365358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36535c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36535cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x365360: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x365360u;
    {
        const bool branch_taken_0x365360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365360) {
            ctx->pc = 0x36541Cu;
            return;
        }
    }
    ctx->pc = 0x365368u;
    // 0x365368: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x365368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36536c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36536Cu;
    SET_GPR_U32(ctx, 31, 0x365374u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36536Cu, 0x365374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365374u;
label_365374:
    // 0x365374: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36537c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x365380: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x365380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x365384: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x365384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x365388: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x365388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36538c: 0x24478d18  addiu       $a3, $v0, -0x72E8
    ctx->pc = 0x36538cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937880));
    // 0x365390: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x365390u;
    SET_GPR_U32(ctx, 31, 0x365398u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x365390u, 0x365398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365398u;
label_365398:
    // 0x365398: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x365398u;
    {
        const bool branch_taken_0x365398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365398) {
            ctx->pc = 0x3653ACu;
            return;
        }
    }
    ctx->pc = 0x3653A0u;
    // 0x3653a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3653a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3653a4: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x3653A4u;
    SET_GPR_U32(ctx, 31, 0x3653ACu);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x3653A4u, 0x3653ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653ACu;
}
