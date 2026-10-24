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

// Function: entry_0011a3c8
// Address: 0x11a3c8 - 0x11a3e8
void entry_0011a3c8_0x11a3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a3c8_0x11a3c8");
#endif

    ctx->pc = 0x11a3c8u;

label_11a3c8:
    // 0x11a3c8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11a3c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a3cc: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x11a3ccu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x11a3d0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x11a3d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11a3d4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11a3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11a3d8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x11a3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a3dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11a3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11a3e0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11A3E0u;
    {
        const bool branch_taken_0x11a3e0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3E0u;
        // 0x11a3e4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3e0) {
            ctx->pc = 0x11A3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a3c8;
        }
    }
    ctx->pc = 0x11A3E8u;
}
