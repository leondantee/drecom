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

// Function: entry_00220fbc
// Address: 0x220fbc - 0x220fc4
void entry_00220fbc_0x220fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220fbc_0x220fbc");
#endif

    ctx->pc = 0x220fbcu;

    // 0x220fbc: 0x10000383  b           . + 4 + (0x383 << 2)
    ctx->pc = 0x220FBCu;
    {
        const bool branch_taken_0x220fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220fbc) {
            ctx->pc = 0x221DCCu;
            return;
        }
    }
    ctx->pc = 0x220FC4u;
}
