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

// Function: entry_0036d350
// Address: 0x36d350 - 0x36d374
void entry_0036d350_0x36d350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d350_0x36d350");
#endif

    switch (ctx->pc) {
        case 0x36d368u: goto label_36d368;
        default: break;
    }

    ctx->pc = 0x36d350u;

    // 0x36d350: 0x2e010011  sltiu       $at, $s0, 0x11
    ctx->pc = 0x36d350u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x36d354: 0x1420fff2  bnez        $at, . + 4 + (-0xE << 2)
    ctx->pc = 0x36D354u;
    {
        const bool branch_taken_0x36d354 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d354) {
            ctx->pc = 0x36D320u;
            return;
        }
    }
    ctx->pc = 0x36D35Cu;
    // 0x36d35c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36d35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d360: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x36D360u;
    SET_GPR_U32(ctx, 31, 0x36D368u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x36D360u, 0x36D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D368u;
label_36d368:
    // 0x36d368: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x36d368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36d36c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x36D36Cu;
    {
        const bool branch_taken_0x36d36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d36c) {
            ctx->pc = 0x36D3A8u;
            return;
        }
    }
    ctx->pc = 0x36D374u;
}
