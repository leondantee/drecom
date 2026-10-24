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

// Function: entry_0011a388
// Address: 0x11a388 - 0x11a3b0
void entry_0011a388_0x11a388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a388_0x11a388");
#endif

    ctx->pc = 0x11a388u;

label_11a388:
    // 0x11a388: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x11a388u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a38c: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x11a38cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x11a390: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x11a390u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11a394: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x11a394u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x11a398: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x11a398u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x11a39c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x11a39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x11a3a0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11A3A0u;
    {
        const bool branch_taken_0x11a3a0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3A0u;
        // 0x11a3a4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3a0) {
            ctx->pc = 0x11A388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a388;
        }
    }
    ctx->pc = 0x11A3A8u;
    // 0x11a3a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11A3A8u;
    {
        const bool branch_taken_0x11a3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3A8u;
        // 0x11a3ac: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3a8) {
            ctx->pc = 0x11A3ECu;
            return;
        }
    }
    ctx->pc = 0x11A3B0u;
}
