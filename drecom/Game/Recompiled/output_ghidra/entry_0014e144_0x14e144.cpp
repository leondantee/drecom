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

// Function: entry_0014e144
// Address: 0x14e144 - 0x14e150
void entry_0014e144_0x14e144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e144_0x14e144");
#endif

    ctx->pc = 0x14e144u;

    // 0x14e144: 0xa20013a7  sb          $zero, 0x13A7($s0)
    ctx->pc = 0x14e144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5031), (uint8_t)GPR_U32(ctx, 0));
    // 0x14e148: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14E148u;
    {
        const bool branch_taken_0x14e148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e148) {
            ctx->pc = 0x14E168u;
            return;
        }
    }
    ctx->pc = 0x14E150u;
}
