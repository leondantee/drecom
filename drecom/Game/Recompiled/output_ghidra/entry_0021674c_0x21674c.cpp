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

// Function: entry_0021674c
// Address: 0x21674c - 0x21679c
void entry_0021674c_0x21674c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021674c_0x21674c");
#endif

    switch (ctx->pc) {
        case 0x216784u: goto label_216784;
        case 0x216794u: goto label_216794;
        default: break;
    }

    ctx->pc = 0x21674cu;

    // 0x21674c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x21674cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x216750: 0x2471c880  addiu       $s1, $v1, -0x3780
    ctx->pc = 0x216750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953088));
    // 0x216754: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x216754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x216758: 0xae42bc40  sw          $v0, -0x43C0($s2)
    ctx->pc = 0x216758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949952), GPR_U32(ctx, 2));
    // 0x21675c: 0x2484ca50  addiu       $a0, $a0, -0x35B0
    ctx->pc = 0x21675cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953552));
    // 0x216760: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x216760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216764: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x216764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x216768: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x216768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21676c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21676cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216770: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x216770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x216774: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x216774u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216778: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x216778u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21677c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x21677Cu;
    SET_GPR_U32(ctx, 31, 0x216784u);
    ctx->pc = 0x216780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21677Cu;
    // 0x216780: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x216784u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216784u) { return; }
    ctx->pc = 0x216784u;
label_216784:
    // 0x216784: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216784u;
    {
        const bool branch_taken_0x216784 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x216784) {
            ctx->pc = 0x216788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216784u;
            // 0x216788: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21679Cu;
            return;
        }
    }
    ctx->pc = 0x21678Cu;
    // 0x21678c: 0xc0858c8  jal         func_216320
    ctx->pc = 0x21678Cu;
    SET_GPR_U32(ctx, 31, 0x216794u);
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x21678Cu, 0x216794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216794u;
label_216794:
    // 0x216794: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x216794u;
    {
        const bool branch_taken_0x216794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216794u;
        // 0x216798: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216794) {
            ctx->pc = 0x2167B0u;
            return;
        }
    }
    ctx->pc = 0x21679Cu;
}
