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

// Function: entry_00127e40
// Address: 0x127e40 - 0x127e48
void entry_00127e40_0x127e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127e40_0x127e40");
#endif

    ctx->pc = 0x127e40u;

    // 0x127e40: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x127E40u;
    {
        const bool branch_taken_0x127e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127e40) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x127E48u;
}
