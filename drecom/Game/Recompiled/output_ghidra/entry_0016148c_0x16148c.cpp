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

// Function: entry_0016148c
// Address: 0x16148c - 0x161498
void entry_0016148c_0x16148c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016148c_0x16148c");
#endif

    ctx->pc = 0x16148cu;

    // 0x16148c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161490: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x161490u;
    {
        const bool branch_taken_0x161490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161490) {
            ctx->pc = 0x161750u;
            return;
        }
    }
    ctx->pc = 0x161498u;
}
