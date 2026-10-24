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

// Function: entry_0010d680
// Address: 0x10d680 - 0x10d6b4
void entry_0010d680_0x10d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d680_0x10d680");
#endif

    ctx->pc = 0x10d680u;

label_10d680:
    // 0x10d680: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10d684: 0x0  nop
    ctx->pc = 0x10d684u;
    // NOP
    // 0x10d688: 0x0  nop
    ctx->pc = 0x10d688u;
    // NOP
    // 0x10d68c: 0x0  nop
    ctx->pc = 0x10d68cu;
    // NOP
    // 0x10d690: 0x0  nop
    ctx->pc = 0x10d690u;
    // NOP
    // 0x10d694: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D694u;
    {
        const bool branch_taken_0x10d694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10d694) {
            ctx->pc = 0x10D680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d680;
        }
    }
    ctx->pc = 0x10D69Cu;
    // 0x10d69c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10d69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d6a0: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x10d6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x10d6a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D6A4u;
    {
        const bool branch_taken_0x10d6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6A4u;
        // 0x10d6a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6a4) {
            ctx->pc = 0x10D6B4u;
            return;
        }
    }
    ctx->pc = 0x10D6ACu;
    // 0x10d6ac: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x10D6ACu;
    {
        const bool branch_taken_0x10d6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6ACu;
        // 0x10d6b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6ac) {
            ctx->pc = 0x10D76Cu;
            return;
        }
    }
    ctx->pc = 0x10D6B4u;
}
