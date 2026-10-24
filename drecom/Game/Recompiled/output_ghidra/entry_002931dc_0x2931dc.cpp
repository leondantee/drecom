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

// Function: entry_002931dc
// Address: 0x2931dc - 0x2931e8
void entry_002931dc_0x2931dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002931dc_0x2931dc");
#endif

    ctx->pc = 0x2931dcu;

    // 0x2931dc: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x2931dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2931e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2931E0u;
    {
        const bool branch_taken_0x2931e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931e0) {
            ctx->pc = 0x293210u;
            return;
        }
    }
    ctx->pc = 0x2931E8u;
}
