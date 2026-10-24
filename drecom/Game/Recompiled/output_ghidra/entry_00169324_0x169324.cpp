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

// Function: entry_00169324
// Address: 0x169324 - 0x169334
void entry_00169324_0x169324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169324_0x169324");
#endif

    ctx->pc = 0x169324u;

    // 0x169324: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169328: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x169328u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x16932c: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x16932Cu;
    {
        const bool branch_taken_0x16932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16932c) {
            ctx->pc = 0x169660u;
            return;
        }
    }
    ctx->pc = 0x169334u;
}
