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

// Function: entry_00140bc0
// Address: 0x140bc0 - 0x140be4
void entry_00140bc0_0x140bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140bc0_0x140bc0");
#endif

    switch (ctx->pc) {
        case 0x140bc8u: goto label_140bc8;
        default: break;
    }

    ctx->pc = 0x140bc0u;

    // 0x140bc0: 0xc0806b4  jal         func_201AD0
    ctx->pc = 0x140BC0u;
    SET_GPR_U32(ctx, 31, 0x140BC8u);
    ctx->pc = 0x201AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AD0u, 0x140BC0u, 0x140BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BC8u;
label_140bc8:
    // 0x140bc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140bcc: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x140bccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140bd0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x140bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x140bd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140BD4u;
    {
        const bool branch_taken_0x140bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140bd4) {
            ctx->pc = 0x140BE4u;
            return;
        }
    }
    ctx->pc = 0x140BDCu;
    // 0x140bdc: 0xc099534  jal         func_2654D0
    ctx->pc = 0x140BDCu;
    SET_GPR_U32(ctx, 31, 0x140BE4u);
    ctx->pc = 0x2654D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2654D0u, 0x140BDCu, 0x140BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BE4u;
}
