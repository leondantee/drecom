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

// Function: entry_00140b6c
// Address: 0x140b6c - 0x140b8c
void entry_00140b6c_0x140b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140b6c_0x140b6c");
#endif

    ctx->pc = 0x140b6cu;

    // 0x140b6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140b70: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140b70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140b74: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x140b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x140b78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140b7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140B7Cu;
    {
        const bool branch_taken_0x140b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140b7c) {
            ctx->pc = 0x140B8Cu;
            return;
        }
    }
    ctx->pc = 0x140B84u;
    // 0x140b84: 0xc0ca9c0  jal         func_32A700
    ctx->pc = 0x140B84u;
    SET_GPR_U32(ctx, 31, 0x140B8Cu);
    ctx->pc = 0x32A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A700u, 0x140B84u, 0x140B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B8Cu;
}
