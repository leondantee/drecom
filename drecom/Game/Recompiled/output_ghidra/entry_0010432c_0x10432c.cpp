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

// Function: entry_0010432c
// Address: 0x10432c - 0x104360
void entry_0010432c_0x10432c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010432c_0x10432c");
#endif

    ctx->pc = 0x10432cu;

    // 0x10432c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x10432cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x104330: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x104330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104338: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x104338u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10433c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10433cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x104340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104344: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x104344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x104348: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x104348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10434c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x10434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x104350: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x104350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x104354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104358: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x104358u;
    {
        const bool branch_taken_0x104358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104358u;
        // 0x10435c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104358) {
            ctx->pc = 0x1044C4u;
            return;
        }
    }
    ctx->pc = 0x104360u;
}
