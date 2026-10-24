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

// Function: entry_00271264
// Address: 0x271264 - 0x271284
void entry_00271264_0x271264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271264_0x271264");
#endif

    switch (ctx->pc) {
        case 0x271274u: goto label_271274;
        default: break;
    }

    ctx->pc = 0x271264u;

    // 0x271264: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x271264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271268: 0x2444c9f8  addiu       $a0, $v0, -0x3608
    ctx->pc = 0x271268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953464));
    // 0x27126c: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27126Cu;
    SET_GPR_U32(ctx, 31, 0x271274u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27126Cu, 0x271274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271274u;
label_271274:
    // 0x271274: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x271274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271278: 0x2444be80  addiu       $a0, $v0, -0x4180
    ctx->pc = 0x271278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950528));
    // 0x27127c: 0xc0a1048  jal         func_284120
    ctx->pc = 0x27127Cu;
    SET_GPR_U32(ctx, 31, 0x271284u);
    ctx->pc = 0x284120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284120u, 0x27127Cu, 0x271284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271284u;
}
