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

// Function: entry_00179554
// Address: 0x179554 - 0x179560
void entry_00179554_0x179554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179554_0x179554");
#endif

    ctx->pc = 0x179554u;

    // 0x179554: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x179554u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x179558: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x179558u;
    {
        const bool branch_taken_0x179558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179558) {
            ctx->pc = 0x179578u;
            return;
        }
    }
    ctx->pc = 0x179560u;
}
