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

// Function: entry_002418b4
// Address: 0x2418b4 - 0x2418dc
void entry_002418b4_0x2418b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002418b4_0x2418b4");
#endif

    ctx->pc = 0x2418b4u;

    // 0x2418b4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2418b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2418b8: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2418b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2418bc: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2418bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2418c0: 0x30440040  andi        $a0, $v0, 0x40
    ctx->pc = 0x2418c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2418c4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2418C4u;
    {
        const bool branch_taken_0x2418c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2418c4) {
            ctx->pc = 0x2418DCu;
            return;
        }
    }
    ctx->pc = 0x2418CCu;
    // 0x2418cc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2418ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2418d0: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x2418d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2418d4: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x2418D4u;
    SET_GPR_U32(ctx, 31, 0x2418DCu);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x2418D4u, 0x2418DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2418DCu;
}
