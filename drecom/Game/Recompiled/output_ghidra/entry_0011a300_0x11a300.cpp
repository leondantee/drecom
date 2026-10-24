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

// Function: entry_0011a300
// Address: 0x11a300 - 0x11a320
void entry_0011a300_0x11a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a300_0x11a300");
#endif

    ctx->pc = 0x11a300u;

label_11a300:
    // 0x11a300: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11a300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a304: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x11a304u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x11a308: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x11a308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11a30c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11a30cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11a310: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x11a310u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a314: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11a314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11a318: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11A318u;
    {
        const bool branch_taken_0x11a318 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A318u;
        // 0x11a31c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a318) {
            ctx->pc = 0x11A300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a300;
        }
    }
    ctx->pc = 0x11A320u;
}
