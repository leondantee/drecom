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

// Function: entry_0011a470
// Address: 0x11a470 - 0x11a498
void entry_0011a470_0x11a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a470_0x11a470");
#endif

    ctx->pc = 0x11a470u;

label_11a470:
    // 0x11a470: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x11a470u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11a474: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x11a474u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x11a478: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x11a478u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a47c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x11a47cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x11a480: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x11a480u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x11a484: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x11a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x11a488: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11A488u;
    {
        const bool branch_taken_0x11a488 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A488u;
        // 0x11a48c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a488) {
            ctx->pc = 0x11A470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a470;
        }
    }
    ctx->pc = 0x11A490u;
    // 0x11a490: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11A490u;
    {
        const bool branch_taken_0x11a490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A490u;
        // 0x11a494: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a490) {
            ctx->pc = 0x11A4CCu;
            return;
        }
    }
    ctx->pc = 0x11A498u;
}
