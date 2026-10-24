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

// Function: entry_002fca08
// Address: 0x2fca08 - 0x2fca18
void entry_002fca08_0x2fca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fca08_0x2fca08");
#endif

    ctx->pc = 0x2fca08u;

    // 0x2fca08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fca0c: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x2fca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
    // 0x2fca10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCA10u;
    {
        const bool branch_taken_0x2fca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fca10) {
            ctx->pc = 0x2FCA20u;
            return;
        }
    }
    ctx->pc = 0x2FCA18u;
}
