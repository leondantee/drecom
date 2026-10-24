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

// Function: entry_0011a670
// Address: 0x11a670 - 0x11a698
void entry_0011a670_0x11a670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a670_0x11a670");
#endif

    ctx->pc = 0x11a670u;

label_11a670:
    // 0x11a670: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x11a670u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11a674: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x11a674u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x11a678: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x11a678u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a67c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x11a67cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x11a680: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x11a680u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x11a684: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x11a684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x11a688: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11A688u;
    {
        const bool branch_taken_0x11a688 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A688u;
        // 0x11a68c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a688) {
            ctx->pc = 0x11A670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a670;
        }
    }
    ctx->pc = 0x11A690u;
    // 0x11a690: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11A690u;
    {
        const bool branch_taken_0x11a690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A690u;
        // 0x11a694: 0xf32823  subu        $a1, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a690) {
            ctx->pc = 0x11A6E4u;
            return;
        }
    }
    ctx->pc = 0x11A698u;
}
