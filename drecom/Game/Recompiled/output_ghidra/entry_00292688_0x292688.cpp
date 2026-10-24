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

// Function: entry_00292688
// Address: 0x292688 - 0x2926b0
void entry_00292688_0x292688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292688_0x292688");
#endif

    ctx->pc = 0x292688u;

    // 0x292688: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x292688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x29268c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29268cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x292690: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x292690u;
    {
        const bool branch_taken_0x292690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292690) {
            ctx->pc = 0x2926B0u;
            return;
        }
    }
    ctx->pc = 0x292698u;
    // 0x292698: 0x920265ad  lbu         $v0, 0x65AD($s0)
    ctx->pc = 0x292698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26029)));
    // 0x29269c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29269cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2926a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2926A0u;
    {
        const bool branch_taken_0x2926a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2926a0) {
            ctx->pc = 0x2926B0u;
            return;
        }
    }
    ctx->pc = 0x2926A8u;
    // 0x2926a8: 0xc0a4bc0  jal         func_292F00
    ctx->pc = 0x2926A8u;
    SET_GPR_U32(ctx, 31, 0x2926B0u);
    ctx->pc = 0x292F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F00u, 0x2926A8u, 0x2926B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926B0u;
}
