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

// Function: entry_00127710
// Address: 0x127710 - 0x127718
void entry_00127710_0x127710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127710_0x127710");
#endif

    ctx->pc = 0x127710u;

    // 0x127710: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x127710u;
    {
        const bool branch_taken_0x127710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127710) {
            ctx->pc = 0x127A58u;
            return;
        }
    }
    ctx->pc = 0x127718u;
}
