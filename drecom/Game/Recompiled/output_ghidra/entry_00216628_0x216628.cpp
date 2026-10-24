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

// Function: entry_00216628
// Address: 0x216628 - 0x21667c
void entry_00216628_0x216628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216628_0x216628");
#endif

    switch (ctx->pc) {
        case 0x216664u: goto label_216664;
        case 0x216674u: goto label_216674;
        default: break;
    }

    ctx->pc = 0x216628u;

    // 0x216628: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x216628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x21662c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21662cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x216630: 0x2530c880  addiu       $s0, $t1, -0x3780
    ctx->pc = 0x216630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953088));
    // 0x216634: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x216634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x216638: 0x24a4ca50  addiu       $a0, $a1, -0x35B0
    ctx->pc = 0x216638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953552));
    // 0x21663c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x21663cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x216640: 0x2687bc40  addiu       $a3, $s4, -0x43C0
    ctx->pc = 0x216640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949952));
    // 0x216644: 0x25080009  addiu       $t0, $t0, 0x9
    ctx->pc = 0x216644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9));
    // 0x216648: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x216648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21664c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21664cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x216650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216654: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x216654u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216658: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x216658u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21665c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x21665Cu;
    SET_GPR_U32(ctx, 31, 0x216664u);
    ctx->pc = 0x216660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21665Cu;
    // 0x216660: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x216664u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216664u) { return; }
    ctx->pc = 0x216664u;
label_216664:
    // 0x216664: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216664u;
    {
        const bool branch_taken_0x216664 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x216668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216664u;
        // 0x216668: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216664) {
            ctx->pc = 0x21667Cu;
            return;
        }
    }
    ctx->pc = 0x21666Cu;
    // 0x21666c: 0xc0858c8  jal         func_216320
    ctx->pc = 0x21666Cu;
    SET_GPR_U32(ctx, 31, 0x216674u);
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x21666Cu, 0x216674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216674u;
label_216674:
    // 0x216674: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x216674u;
    {
        const bool branch_taken_0x216674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216674u;
        // 0x216678: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216674) {
            ctx->pc = 0x2166B8u;
            return;
        }
    }
    ctx->pc = 0x21667Cu;
}
