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

// Function: entry_0011a6b0
// Address: 0x11a6b0 - 0x11a6d8
void entry_0011a6b0_0x11a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a6b0_0x11a6b0");
#endif

    ctx->pc = 0x11a6b0u;

label_11a6b0:
    // 0x11a6b0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x11a6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11a6b4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x11a6b4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x11a6b8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x11a6b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a6bc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11a6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11a6c0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x11a6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a6c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11a6c8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11A6C8u;
    {
        const bool branch_taken_0x11a6c8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6C8u;
        // 0x11a6cc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6c8) {
            ctx->pc = 0x11A6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a6b0;
        }
    }
    ctx->pc = 0x11A6D0u;
    // 0x11a6d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11A6D0u;
    {
        const bool branch_taken_0x11a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6D0u;
        // 0x11a6d4: 0xf32823  subu        $a1, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6d0) {
            ctx->pc = 0x11A6E4u;
            return;
        }
    }
    ctx->pc = 0x11A6D8u;
}
