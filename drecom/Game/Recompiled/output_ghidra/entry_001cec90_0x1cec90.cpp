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

// Function: entry_001cec90
// Address: 0x1cec90 - 0x1ceca4
void entry_001cec90_0x1cec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cec90_0x1cec90");
#endif

    ctx->pc = 0x1cec90u;

    // 0x1cec90: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1cec90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cec94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cec98: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cec98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cec9c: 0x100004be  b           . + 4 + (0x4BE << 2)
    ctx->pc = 0x1CEC9Cu;
    {
        const bool branch_taken_0x1cec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec9c) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CECA4u;
}
