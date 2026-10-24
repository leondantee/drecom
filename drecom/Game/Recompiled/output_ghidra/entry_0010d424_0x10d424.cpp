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

// Function: entry_0010d424
// Address: 0x10d424 - 0x10d450
void entry_0010d424_0x10d424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d424_0x10d424");
#endif

    ctx->pc = 0x10d424u;

    // 0x10d424: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10d424u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10d428: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10d428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10d42c: 0x8e2245b8  lw          $v0, 0x45B8($s1)
    ctx->pc = 0x10d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3845B8u));
    // 0x10d430: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10D430u;
    {
        const bool branch_taken_0x10d430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D430u;
        // 0x10d434: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d430) {
            ctx->pc = 0x10D450u;
            return;
        }
    }
    ctx->pc = 0x10D438u;
    // 0x10d438: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10d438u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10d43c: 0x8e0245bc  lw          $v0, 0x45BC($s0)
    ctx->pc = 0x10d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3845BCu));
    // 0x10d440: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x10D440u;
    {
        const bool branch_taken_0x10d440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D440u;
        // 0x10d444: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d440) {
            ctx->pc = 0x10D49Cu;
            return;
        }
    }
    ctx->pc = 0x10D448u;
    // 0x10d448: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10D448u;
    {
        const bool branch_taken_0x10d448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D448u;
        // 0x10d44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d448) {
            ctx->pc = 0x10D458u;
            return;
        }
    }
    ctx->pc = 0x10D450u;
}
