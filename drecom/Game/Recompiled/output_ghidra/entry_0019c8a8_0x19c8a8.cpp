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

// Function: entry_0019c8a8
// Address: 0x19c8a8 - 0x19c8b4
void entry_0019c8a8_0x19c8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c8a8_0x19c8a8");
#endif

    ctx->pc = 0x19c8a8u;

    // 0x19c8a8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x19c8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c8ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19C8ACu;
    {
        const bool branch_taken_0x19c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8ac) {
            ctx->pc = 0x19C8D0u;
            return;
        }
    }
    ctx->pc = 0x19C8B4u;
}
