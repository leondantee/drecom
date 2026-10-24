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

// Function: entry_0032e690
// Address: 0x32e690 - 0x32e69c
void entry_0032e690_0x32e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e690_0x32e690");
#endif

    ctx->pc = 0x32e690u;

    // 0x32e690: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x32e690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x32e694: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32E694u;
    {
        const bool branch_taken_0x32e694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e694) {
            ctx->pc = 0x32E6ACu;
            return;
        }
    }
    ctx->pc = 0x32E69Cu;
}
