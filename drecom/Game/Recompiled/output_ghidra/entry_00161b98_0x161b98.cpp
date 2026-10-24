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

// Function: entry_00161b98
// Address: 0x161b98 - 0x161ba8
void entry_00161b98_0x161b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161b98_0x161b98");
#endif

    ctx->pc = 0x161b98u;

    // 0x161b98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x161b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161b9c: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161ba0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x161BA0u;
    {
        const bool branch_taken_0x161ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ba0) {
            ctx->pc = 0x161BF0u;
            return;
        }
    }
    ctx->pc = 0x161BA8u;
}
