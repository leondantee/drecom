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

// Function: entry_0011a2c0
// Address: 0x11a2c0 - 0x11a2e8
void entry_0011a2c0_0x11a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a2c0_0x11a2c0");
#endif

    ctx->pc = 0x11a2c0u;

label_11a2c0:
    // 0x11a2c0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x11a2c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a2c4: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x11a2c4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x11a2c8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x11a2c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11a2cc: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x11a2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x11a2d0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x11a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x11a2d4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x11a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x11a2d8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11A2D8u;
    {
        const bool branch_taken_0x11a2d8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2D8u;
        // 0x11a2dc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2d8) {
            ctx->pc = 0x11A2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a2c0;
        }
    }
    ctx->pc = 0x11A2E0u;
    // 0x11a2e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11A2E0u;
    {
        const bool branch_taken_0x11a2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2E0u;
        // 0x11a2e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2e0) {
            ctx->pc = 0x11A324u;
            return;
        }
    }
    ctx->pc = 0x11A2E8u;
}
