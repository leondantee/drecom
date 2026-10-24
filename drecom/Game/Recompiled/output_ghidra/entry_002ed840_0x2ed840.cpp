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

// Function: entry_002ed840
// Address: 0x2ed840 - 0x2ed848
void entry_002ed840_0x2ed840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed840_0x2ed840");
#endif

    ctx->pc = 0x2ed840u;

    // 0x2ed840: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2ED840u;
    {
        const bool branch_taken_0x2ed840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed840) {
            ctx->pc = 0x2EDAD0u;
            return;
        }
    }
    ctx->pc = 0x2ED848u;
}
