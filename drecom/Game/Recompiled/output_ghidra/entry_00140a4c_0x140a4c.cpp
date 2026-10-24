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

// Function: entry_00140a4c
// Address: 0x140a4c - 0x140a78
void entry_00140a4c_0x140a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140a4c_0x140a4c");
#endif

    switch (ctx->pc) {
        case 0x140a54u: goto label_140a54;
        case 0x140a5cu: goto label_140a5c;
        default: break;
    }

    ctx->pc = 0x140a4cu;

    // 0x140a4c: 0xc056a20  jal         func_15A880
    ctx->pc = 0x140A4Cu;
    SET_GPR_U32(ctx, 31, 0x140A54u);
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x140A4Cu, 0x140A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A54u;
label_140a54:
    // 0x140a54: 0xc0994c8  jal         func_265320
    ctx->pc = 0x140A54u;
    SET_GPR_U32(ctx, 31, 0x140A5Cu);
    ctx->pc = 0x265320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265320u, 0x140A54u, 0x140A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A5Cu;
label_140a5c:
    // 0x140a5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140a60: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x140a60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140a64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x140a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x140a68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140A68u;
    {
        const bool branch_taken_0x140a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140a68) {
            ctx->pc = 0x140A78u;
            return;
        }
    }
    ctx->pc = 0x140A70u;
    // 0x140a70: 0xc056b30  jal         func_15ACC0
    ctx->pc = 0x140A70u;
    SET_GPR_U32(ctx, 31, 0x140A78u);
    ctx->pc = 0x15ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ACC0u, 0x140A70u, 0x140A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A78u;
}
