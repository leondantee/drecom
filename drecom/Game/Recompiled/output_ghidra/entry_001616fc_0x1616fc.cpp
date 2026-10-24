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

// Function: entry_001616fc
// Address: 0x1616fc - 0x16170c
void entry_001616fc_0x1616fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001616fc_0x1616fc");
#endif

    ctx->pc = 0x1616fcu;

    // 0x1616fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1616fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x161700: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x161700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x161704: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161704u;
    {
        const bool branch_taken_0x161704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161704) {
            ctx->pc = 0x161744u;
            return;
        }
    }
    ctx->pc = 0x16170Cu;
}
