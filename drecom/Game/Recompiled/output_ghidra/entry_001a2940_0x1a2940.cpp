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

// Function: entry_001a2940
// Address: 0x1a2940 - 0x1a2950
void entry_001a2940_0x1a2940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2940_0x1a2940");
#endif

    ctx->pc = 0x1a2940u;

    // 0x1a2940: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a2940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2944: 0x24510088  addiu       $s1, $v0, 0x88
    ctx->pc = 0x1a2944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x1a2948: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2948u;
    {
        const bool branch_taken_0x1a2948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2948) {
            ctx->pc = 0x1A2958u;
            return;
        }
    }
    ctx->pc = 0x1A2950u;
}
