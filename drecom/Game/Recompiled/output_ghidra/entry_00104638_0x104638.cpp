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

// Function: entry_00104638
// Address: 0x104638 - 0x10467c
void entry_00104638_0x104638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104638_0x104638");
#endif

    switch (ctx->pc) {
        case 0x104668u: goto label_104668;
        default: break;
    }

    ctx->pc = 0x104638u;

    // 0x104638: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x104638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x10463c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10463cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104640: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x104640u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x104644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104648: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10464c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10464cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104650: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x104650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x104654: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x104654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104658: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x104658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x10465c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x10465cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104660: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x104660u;
    SET_GPR_U32(ctx, 31, 0x104668u);
    ctx->pc = 0x104664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104660u;
    // 0x104664: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x104660u, 0x104668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104668u;
label_104668:
    // 0x104668: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x104668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x10466c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10466Cu;
    {
        const bool branch_taken_0x10466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10466Cu;
        // 0x104670: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10466c) {
            ctx->pc = 0x10467Cu;
            return;
        }
    }
    ctx->pc = 0x104674u;
    // 0x104674: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x104674u;
    {
        const bool branch_taken_0x104674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104674u;
        // 0x104678: 0x8c443c1c  lw          $a0, 0x3C1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104674) {
            ctx->pc = 0x104684u;
            return;
        }
    }
    ctx->pc = 0x10467Cu;
}
