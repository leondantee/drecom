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

// Function: entry_00129ac4
// Address: 0x129ac4 - 0x129acc
void entry_00129ac4_0x129ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129ac4_0x129ac4");
#endif

    ctx->pc = 0x129ac4u;

    // 0x129ac4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x129AC4u;
    {
        const bool branch_taken_0x129ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129ac4) {
            ctx->pc = 0x129D74u;
            return;
        }
    }
    ctx->pc = 0x129ACCu;
}
