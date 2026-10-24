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

// Function: caseD_5
// Address: 0x36503c - 0x365098
void caseD_5_0x36503c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x36503c");
#endif

    switch (ctx->pc) {
        case 0x365060u: goto label_365060;
        case 0x365084u: goto label_365084;
        default: break;
    }

    ctx->pc = 0x36503cu;

    // 0x36503c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365040: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x365040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x365044: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365048: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x365048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36504c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x36504Cu;
    {
        const bool branch_taken_0x36504c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36504c) {
            ctx->pc = 0x3650D0u;
            return;
        }
    }
    ctx->pc = 0x365054u;
    // 0x365054: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x365054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x365058: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x365058u;
    SET_GPR_U32(ctx, 31, 0x365060u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x365058u, 0x365060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365060u;
label_365060:
    // 0x365060: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x365060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365064: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x365064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365068: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x365068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36506c: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x36506cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x365070: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x365070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x365074: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x365074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x365078: 0x24478d0c  addiu       $a3, $v0, -0x72F4
    ctx->pc = 0x365078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937868));
    // 0x36507c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x36507Cu;
    SET_GPR_U32(ctx, 31, 0x365084u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36507Cu, 0x365084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365084u;
label_365084:
    // 0x365084: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x365084u;
    {
        const bool branch_taken_0x365084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365084) {
            ctx->pc = 0x365098u;
            return;
        }
    }
    ctx->pc = 0x36508Cu;
    // 0x36508c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36508cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365090: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x365090u;
    SET_GPR_U32(ctx, 31, 0x365098u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x365090u, 0x365098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365098u;
}
