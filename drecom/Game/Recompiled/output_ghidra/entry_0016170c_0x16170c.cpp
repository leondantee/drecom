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

// Function: entry_0016170c
// Address: 0x16170c - 0x16171c
void entry_0016170c_0x16170c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016170c_0x16170c");
#endif

    ctx->pc = 0x16170cu;

    // 0x16170c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161710: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x161710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x161714: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x161714u;
    {
        const bool branch_taken_0x161714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161714) {
            ctx->pc = 0x161744u;
            return;
        }
    }
    ctx->pc = 0x16171Cu;
}
