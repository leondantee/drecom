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

// Function: entry_001ab650
// Address: 0x1ab650 - 0x1ab6ac
void entry_001ab650_0x1ab650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab650_0x1ab650");
#endif

    switch (ctx->pc) {
        case 0x1ab65cu: goto label_1ab65c;
        case 0x1ab668u: goto label_1ab668;
        case 0x1ab674u: goto label_1ab674;
        case 0x1ab680u: goto label_1ab680;
        case 0x1ab698u: goto label_1ab698;
        default: break;
    }

    ctx->pc = 0x1ab650u;

label_1ab650:
    // 0x1ab650: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1ab650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1ab654: 0xc06ae30  jal         func_1AB8C0
    ctx->pc = 0x1AB654u;
    SET_GPR_U32(ctx, 31, 0x1AB65Cu);
    ctx->pc = 0x1AB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB8C0u, 0x1AB654u, 0x1AB65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB65Cu;
label_1ab65c:
    // 0x1ab65c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1ab65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1ab660: 0xc06adac  jal         func_1AB6B0
    ctx->pc = 0x1AB660u;
    SET_GPR_U32(ctx, 31, 0x1AB668u);
    ctx->pc = 0x1AB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB6B0u, 0x1AB660u, 0x1AB668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB668u;
label_1ab668:
    // 0x1ab668: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1ab668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1ab66c: 0xc04f024  jal         func_13C090
    ctx->pc = 0x1AB66Cu;
    SET_GPR_U32(ctx, 31, 0x1AB674u);
    ctx->pc = 0x13C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C090u, 0x1AB66Cu, 0x1AB674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB674u;
label_1ab674:
    // 0x1ab674: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1ab674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1ab678: 0xc06aeb0  jal         func_1ABAC0
    ctx->pc = 0x1AB678u;
    SET_GPR_U32(ctx, 31, 0x1AB680u);
    ctx->pc = 0x1ABAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABAC0u, 0x1AB678u, 0x1AB680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB680u;
label_1ab680:
    // 0x1ab680: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ab680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ab684: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x1ab684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ab688: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1AB688u;
    {
        const bool branch_taken_0x1ab688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab688) {
            ctx->pc = 0x1AB650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab650;
        }
    }
    ctx->pc = 0x1AB690u;
    // 0x1ab690: 0xc06afc8  jal         func_1ABF20
    ctx->pc = 0x1AB690u;
    SET_GPR_U32(ctx, 31, 0x1AB698u);
    ctx->pc = 0x1ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF20u, 0x1AB690u, 0x1AB698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB698u;
label_1ab698:
    // 0x1ab698: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1ab698u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab69c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab6a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ab6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ab6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB6ACu;
}
