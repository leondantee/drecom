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

// Function: entry_00119ea8
// Address: 0x119ea8 - 0x119ed0
void entry_00119ea8_0x119ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119ea8_0x119ea8");
#endif

    ctx->pc = 0x119ea8u;

label_119ea8:
    // 0x119ea8: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x119ea8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x119eac: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x119eacu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x119eb0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x119eb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119eb4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x119eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x119eb8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x119eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x119ebc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x119ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x119ec0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x119EC0u;
    {
        const bool branch_taken_0x119ec0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x119EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EC0u;
        // 0x119ec4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ec0) {
            ctx->pc = 0x119EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119ea8;
        }
    }
    ctx->pc = 0x119EC8u;
    // 0x119ec8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x119EC8u;
    {
        const bool branch_taken_0x119ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EC8u;
        // 0x119ecc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ec8) {
            ctx->pc = 0x119F04u;
            return;
        }
    }
    ctx->pc = 0x119ED0u;
}
