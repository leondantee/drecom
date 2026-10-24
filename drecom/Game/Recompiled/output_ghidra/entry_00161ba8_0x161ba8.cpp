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

// Function: entry_00161ba8
// Address: 0x161ba8 - 0x161bb8
void entry_00161ba8_0x161ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161ba8_0x161ba8");
#endif

    ctx->pc = 0x161ba8u;

    // 0x161ba8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x161ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161bac: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161bacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161bb0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161BB0u;
    {
        const bool branch_taken_0x161bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161bb0) {
            ctx->pc = 0x161BF0u;
            return;
        }
    }
    ctx->pc = 0x161BB8u;
}
