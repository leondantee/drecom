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

// Function: entry_00214668
// Address: 0x214668 - 0x214690
void entry_00214668_0x214668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214668_0x214668");
#endif

    ctx->pc = 0x214668u;

label_214668:
    // 0x214668: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x214668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x21466c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x21466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x214670: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x214670u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x214674: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x214674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x214678: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x214678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x21467c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x21467cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x214680: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x214680u;
    {
        const bool branch_taken_0x214680 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x214680) {
            ctx->pc = 0x214668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214668;
        }
    }
    ctx->pc = 0x214688u;
    // 0x214688: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x214688u;
    {
        const bool branch_taken_0x214688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214688u;
        // 0x21468c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214688) {
            ctx->pc = 0x2145D8u;
            return;
        }
    }
    ctx->pc = 0x214690u;
}
