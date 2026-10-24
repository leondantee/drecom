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

// Function: entry_00365098
// Address: 0x365098 - 0x3650d0
void entry_00365098_0x365098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365098_0x365098");
#endif

    switch (ctx->pc) {
        case 0x3650bcu: goto label_3650bc;
        default: break;
    }

    ctx->pc = 0x365098u;

    // 0x365098: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x365098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36509c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36509cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3650a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3650a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3650a4: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x3650a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x3650a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3650a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3650ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3650acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3650b0: 0x24478d0c  addiu       $a3, $v0, -0x72F4
    ctx->pc = 0x3650b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937868));
    // 0x3650b4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x3650B4u;
    SET_GPR_U32(ctx, 31, 0x3650BCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x3650B4u, 0x3650BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650BCu;
label_3650bc:
    // 0x3650bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3650BCu;
    {
        const bool branch_taken_0x3650bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3650bc) {
            ctx->pc = 0x3650D0u;
            return;
        }
    }
    ctx->pc = 0x3650C4u;
    // 0x3650c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3650c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3650c8: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x3650C8u;
    SET_GPR_U32(ctx, 31, 0x3650D0u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x3650C8u, 0x3650D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650D0u;
}
