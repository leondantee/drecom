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

// Function: entry_00179560
// Address: 0x179560 - 0x17956c
void entry_00179560_0x179560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179560_0x179560");
#endif

    ctx->pc = 0x179560u;

    // 0x179560: 0x24150200  addiu       $s5, $zero, 0x200
    ctx->pc = 0x179560u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x179564: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x179564u;
    {
        const bool branch_taken_0x179564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179564) {
            ctx->pc = 0x179578u;
            return;
        }
    }
    ctx->pc = 0x17956Cu;
}
