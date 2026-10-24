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

// Function: entry_0011a1f0
// Address: 0x11a1f0 - 0x11a218
void entry_0011a1f0_0x11a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a1f0_0x11a1f0");
#endif

    ctx->pc = 0x11a1f0u;

label_11a1f0:
    // 0x11a1f0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x11a1f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a1f4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x11a1f4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x11a1f8: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x11a1f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11a1fc: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x11a1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x11a200: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x11a200u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x11a204: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x11a204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x11a208: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11A208u;
    {
        const bool branch_taken_0x11a208 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A208u;
        // 0x11a20c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a208) {
            ctx->pc = 0x11A1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a1f0;
        }
    }
    ctx->pc = 0x11A210u;
    // 0x11a210: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11A210u;
    {
        const bool branch_taken_0x11a210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A210u;
        // 0x11a214: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a210) {
            ctx->pc = 0x11A254u;
            return;
        }
    }
    ctx->pc = 0x11A218u;
}
