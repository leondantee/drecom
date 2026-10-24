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

// Function: entry_0028e1e8
// Address: 0x28e1e8 - 0x28e1fc
void entry_0028e1e8_0x28e1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e1e8_0x28e1e8");
#endif

    ctx->pc = 0x28e1e8u;

    // 0x28e1e8: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28e1ec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x28e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28e1f0: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28e1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x28e1f4: 0x1000024a  b           . + 4 + (0x24A << 2)
    ctx->pc = 0x28E1F4u;
    {
        const bool branch_taken_0x28e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e1f4) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28E1FCu;
}
