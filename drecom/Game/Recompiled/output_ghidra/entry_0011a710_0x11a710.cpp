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

// Function: entry_0011a710
// Address: 0x11a710 - 0x11a738
void entry_0011a710_0x11a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a710_0x11a710");
#endif

    ctx->pc = 0x11a710u;

label_11a710:
    // 0x11a710: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x11a710u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11a714: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x11a714u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x11a718: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x11a718u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a71c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x11a71cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x11a720: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x11a720u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x11a724: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x11a724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x11a728: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11A728u;
    {
        const bool branch_taken_0x11a728 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A728u;
        // 0x11a72c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a728) {
            ctx->pc = 0x11A710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a710;
        }
    }
    ctx->pc = 0x11A730u;
    // 0x11a730: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11A730u;
    {
        const bool branch_taken_0x11a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A730u;
        // 0x11a734: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a730) {
            ctx->pc = 0x11A76Cu;
            return;
        }
    }
    ctx->pc = 0x11A738u;
}
