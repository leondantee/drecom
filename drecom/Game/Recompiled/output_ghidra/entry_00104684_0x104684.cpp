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

// Function: entry_00104684
// Address: 0x104684 - 0x1046bc
void entry_00104684_0x104684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104684_0x104684");
#endif

    switch (ctx->pc) {
        case 0x1046b4u: goto label_1046b4;
        default: break;
    }

    ctx->pc = 0x104684u;

    // 0x104684: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x104684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x104688: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104688u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10468c: 0x8e2b0018  lw          $t3, 0x18($s1)
    ctx->pc = 0x10468cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x104690: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104690u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104694: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10469c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x10469cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1046a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1046a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046a4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1046a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1046a8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1046a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1046ac: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x1046ACu;
    SET_GPR_U32(ctx, 31, 0x1046B4u);
    ctx->pc = 0x1046B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1046ACu;
    // 0x1046b0: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x1046ACu, 0x1046B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1046B4u;
label_1046b4:
    // 0x1046b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1046B4u;
    {
        const bool branch_taken_0x1046b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046B4u;
        // 0x1046b8: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046b4) {
            ctx->pc = 0x1046CCu;
            return;
        }
    }
    ctx->pc = 0x1046BCu;
}
