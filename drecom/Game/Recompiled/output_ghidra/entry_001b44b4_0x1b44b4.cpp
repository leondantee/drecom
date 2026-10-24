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

// Function: entry_001b44b4
// Address: 0x1b44b4 - 0x1b44c4
void entry_001b44b4_0x1b44b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b44b4_0x1b44b4");
#endif

    ctx->pc = 0x1b44b4u;

    // 0x1b44b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b44b8: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b44b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b44bc: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1B44BCu;
    {
        const bool branch_taken_0x1b44bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44bc) {
            ctx->pc = 0x1B4650u;
            return;
        }
    }
    ctx->pc = 0x1B44C4u;
}
