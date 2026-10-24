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

// Function: entry_0031af8c
// Address: 0x31af8c - 0x31af98
void entry_0031af8c_0x31af8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031af8c_0x31af8c");
#endif

    ctx->pc = 0x31af8cu;

    // 0x31af8c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31af8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31af90: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31AF90u;
    {
        const bool branch_taken_0x31af90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31af90) {
            ctx->pc = 0x31B018u;
            return;
        }
    }
    ctx->pc = 0x31AF98u;
}
