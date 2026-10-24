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

// Function: entry_00113f48
// Address: 0x113f48 - 0x113f58
void entry_00113f48_0x113f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113f48_0x113f48");
#endif

    ctx->pc = 0x113f48u;

    // 0x113f48: 0x4c20027  bltzl       $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x113F48u;
    {
        const bool branch_taken_0x113f48 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x113f48) {
            ctx->pc = 0x113F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113F48u;
            // 0x113f4c: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113FE8u;
            return;
        }
    }
    ctx->pc = 0x113F50u;
    // 0x113f50: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x113f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x113f54: 0x0  nop
    ctx->pc = 0x113f54u;
    // NOP
    ctx->pc = 0x113f58u;
}
