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

// Function: entry_0033d668
// Address: 0x33d668 - 0x33d684
void entry_0033d668_0x33d668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d668_0x33d668");
#endif

    ctx->pc = 0x33d668u;

    // 0x33d668: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d66c: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x33d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33d670: 0x2c410041  sltiu       $at, $v0, 0x41
    ctx->pc = 0x33d670u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x33d674: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x33D674u;
    {
        const bool branch_taken_0x33d674 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d674) {
            ctx->pc = 0x33D684u;
            return;
        }
    }
    ctx->pc = 0x33D67Cu;
    // 0x33d67c: 0xc0cf63c  jal         func_33D8F0
    ctx->pc = 0x33D67Cu;
    SET_GPR_U32(ctx, 31, 0x33D684u);
    ctx->pc = 0x33D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D8F0u, 0x33D67Cu, 0x33D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D684u;
}
