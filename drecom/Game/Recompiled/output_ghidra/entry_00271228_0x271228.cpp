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

// Function: entry_00271228
// Address: 0x271228 - 0x271264
void entry_00271228_0x271228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271228_0x271228");
#endif

    switch (ctx->pc) {
        case 0x27125cu: goto label_27125c;
        default: break;
    }

    ctx->pc = 0x271228u;

    // 0x271228: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x271228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27122c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x27122Cu;
    {
        const bool branch_taken_0x27122c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27122c) {
            ctx->pc = 0x2710E0u;
            return;
        }
    }
    ctx->pc = 0x271234u;
    // 0x271234: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271238: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x271238u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27123c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27123cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x271240: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x271240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x271244: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271244u;
    {
        const bool branch_taken_0x271244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271244) {
            ctx->pc = 0x271264u;
            return;
        }
    }
    ctx->pc = 0x27124Cu;
    // 0x27124c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27124cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271250: 0x2444ca00  addiu       $a0, $v0, -0x3600
    ctx->pc = 0x271250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953472));
    // 0x271254: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x271254u;
    SET_GPR_U32(ctx, 31, 0x27125Cu);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x271254u, 0x27125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27125Cu;
label_27125c:
    // 0x27125c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27125Cu;
    {
        const bool branch_taken_0x27125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27125c) {
            ctx->pc = 0x271284u;
            return;
        }
    }
    ctx->pc = 0x271264u;
}
