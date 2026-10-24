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

// Function: entry_0033d88c
// Address: 0x33d88c - 0x33d8ac
void entry_0033d88c_0x33d88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d88c_0x33d88c");
#endif

    ctx->pc = 0x33d88cu;

    // 0x33d88c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d890: 0x8c43128c  lw          $v1, 0x128C($v0)
    ctx->pc = 0x33d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33d894: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33d898: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x33d898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x33d89c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33D89Cu;
    {
        const bool branch_taken_0x33d89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d89c) {
            ctx->pc = 0x33D8ACu;
            return;
        }
    }
    ctx->pc = 0x33D8A4u;
    // 0x33d8a4: 0xc0cf69c  jal         func_33DA70
    ctx->pc = 0x33D8A4u;
    SET_GPR_U32(ctx, 31, 0x33D8ACu);
    ctx->pc = 0x33DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DA70u, 0x33D8A4u, 0x33D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D8ACu;
}
