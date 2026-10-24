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

// Function: _nextStartCode
// Address: 0x1073e0 - 0x107448
void _nextStartCode_0x1073e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_nextStartCode_0x1073e0");
#endif

    switch (ctx->pc) {
        case 0x1073f0u: goto label_1073f0;
        case 0x107418u: goto label_107418;
        case 0x107420u: goto label_107420;
        case 0x107428u: goto label_107428;
        case 0x107430u: goto label_107430;
        default: break;
    }

    ctx->pc = 0x1073e0u;

    // 0x1073e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1073e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1073e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1073e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1073e8: 0xc041b46  jal         func_106D18
    ctx->pc = 0x1073E8u;
    SET_GPR_U32(ctx, 31, 0x1073F0u);
    ctx->pc = 0x1073ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1073E8u;
    // 0x1073ec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x1073E8u, 0x1073F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073F0u;
label_1073f0:
    // 0x1073f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1073f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1073f4: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1073f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1073f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1073f8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x1073fc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1073fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x107400: 0x31823  negu        $v1, $v1
    ctx->pc = 0x107400u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x107404: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x107404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x107408: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107408u;
    {
        const bool branch_taken_0x107408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107408u;
        // 0x10740c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107408) {
            ctx->pc = 0x107428u;
            goto label_107428;
        }
    }
    ctx->pc = 0x107410u;
    // 0x107410: 0xc041c58  jal         func_107160
    ctx->pc = 0x107410u;
    SET_GPR_U32(ctx, 31, 0x107418u);
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x107410u, 0x107418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107418u;
label_107418:
    // 0x107418: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x107418u;
    {
        const bool branch_taken_0x107418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107418) {
            ctx->pc = 0x107428u;
            goto label_107428;
        }
    }
    ctx->pc = 0x107420u;
label_107420:
    // 0x107420: 0xc041c58  jal         func_107160
    ctx->pc = 0x107420u;
    SET_GPR_U32(ctx, 31, 0x107428u);
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x107420u, 0x107428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107428u;
label_107428:
    // 0x107428: 0xc041c0a  jal         func_107028
    ctx->pc = 0x107428u;
    SET_GPR_U32(ctx, 31, 0x107430u);
    ctx->pc = 0x10742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107428u;
    // 0x10742c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107028u, 0x107428u, 0x107430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107430u;
label_107430:
    // 0x107430: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x107430u;
    {
        const bool branch_taken_0x107430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x107434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107430u;
        // 0x107434: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107430) {
            ctx->pc = 0x107420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107420;
        }
    }
    ctx->pc = 0x107438u;
    // 0x107438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x107438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10743c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10743cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107440: 0x3e00008  jr          $ra
    ctx->pc = 0x107440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107440u;
        // 0x107444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107448u;
}
