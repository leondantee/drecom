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

// Function: entry_00161588
// Address: 0x161588 - 0x161594
void entry_00161588_0x161588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161588_0x161588");
#endif

    ctx->pc = 0x161588u;

    // 0x161588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16158c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x16158Cu;
    {
        const bool branch_taken_0x16158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16158c) {
            ctx->pc = 0x161750u;
            return;
        }
    }
    ctx->pc = 0x161594u;
}
