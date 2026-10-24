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

// Function: entry_00140b3c
// Address: 0x140b3c - 0x140b6c
void entry_00140b3c_0x140b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140b3c_0x140b3c");
#endif

    switch (ctx->pc) {
        case 0x140b44u: goto label_140b44;
        case 0x140b4cu: goto label_140b4c;
        default: break;
    }

    ctx->pc = 0x140b3cu;

    // 0x140b3c: 0xc0637d8  jal         func_18DF60
    ctx->pc = 0x140B3Cu;
    SET_GPR_U32(ctx, 31, 0x140B44u);
    ctx->pc = 0x18DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF60u, 0x140B3Cu, 0x140B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B44u;
label_140b44:
    // 0x140b44: 0xc0a71a4  jal         func_29C690
    ctx->pc = 0x140B44u;
    SET_GPR_U32(ctx, 31, 0x140B4Cu);
    ctx->pc = 0x29C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C690u, 0x140B44u, 0x140B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B4Cu;
label_140b4c:
    // 0x140b4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140b50: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140b50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140b54: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x140b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x140b58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140b5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140B5Cu;
    {
        const bool branch_taken_0x140b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140b5c) {
            ctx->pc = 0x140B6Cu;
            return;
        }
    }
    ctx->pc = 0x140B64u;
    // 0x140b64: 0xc080650  jal         func_201940
    ctx->pc = 0x140B64u;
    SET_GPR_U32(ctx, 31, 0x140B6Cu);
    ctx->pc = 0x201940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201940u, 0x140B64u, 0x140B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B6Cu;
}
