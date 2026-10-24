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

// Function: entry_00128d14
// Address: 0x128d14 - 0x128d1c
void entry_00128d14_0x128d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128d14_0x128d14");
#endif

    ctx->pc = 0x128d14u;

    // 0x128d14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x128D14u;
    {
        const bool branch_taken_0x128d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128d14) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x128D1Cu;
}
