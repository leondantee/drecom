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

// Function: isceSifSendCmd
// Address: 0x215138 - 0x215174
void isceSifSendCmd_0x215138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isceSifSendCmd_0x215138");
#endif

    switch (ctx->pc) {
        case 0x215168u: goto label_215168;
        default: break;
    }

    ctx->pc = 0x215138u;

    // 0x215138: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x215138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21513c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x21513cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215140: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x215140u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215148: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x215148u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21514c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21514cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215154: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x215154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215158: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x215158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21515c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x21515cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215160: 0xc0853f0  jal         func_214FC0
    ctx->pc = 0x215160u;
    SET_GPR_U32(ctx, 31, 0x215168u);
    ctx->pc = 0x215164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215160u;
    // 0x215164: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214FC0u, 0x215160u, 0x215168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215168u;
label_215168:
    // 0x215168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21516c: 0x3e00008  jr          $ra
    ctx->pc = 0x21516Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21516Cu;
        // 0x215170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21516Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215174u;
}
