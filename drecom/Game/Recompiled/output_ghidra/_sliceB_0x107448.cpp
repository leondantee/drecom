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

// Function: _sliceB
// Address: 0x107448 - 0x1074b4
void _sliceB_0x107448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sliceB_0x107448");
#endif

    switch (ctx->pc) {
        case 0x107460u: goto label_107460;
        case 0x10746cu: goto label_10746c;
        case 0x10747cu: goto label_10747c;
        case 0x107488u: goto label_107488;
        case 0x107490u: goto label_107490;
        default: break;
    }

    ctx->pc = 0x107448u;

    // 0x107448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x107448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10744c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x10744cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x107450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x107454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x107458: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107458u;
    SET_GPR_U32(ctx, 31, 0x107460u);
    ctx->pc = 0x10745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107458u;
    // 0x10745c: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107458u, 0x107460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107460u;
label_107460:
    // 0x107460: 0xae023e40  sw          $v0, 0x3E40($s0)
    ctx->pc = 0x107460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15936), GPR_U32(ctx, 2));
    // 0x107464: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107464u;
    SET_GPR_U32(ctx, 31, 0x10746Cu);
    ctx->pc = 0x107468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107464u;
    // 0x107468: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107464u, 0x10746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10746Cu;
label_10746c:
    // 0x10746c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10746Cu;
    {
        const bool branch_taken_0x10746c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10746Cu;
        // 0x107470: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10746c) {
            ctx->pc = 0x107498u;
            goto label_107498;
        }
    }
    ctx->pc = 0x107474u;
    // 0x107474: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107474u;
    SET_GPR_U32(ctx, 31, 0x10747Cu);
    ctx->pc = 0x107478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107474u;
    // 0x107478: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107474u, 0x10747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10747Cu;
label_10747c:
    // 0x10747c: 0xae0244c0  sw          $v0, 0x44C0($s0)
    ctx->pc = 0x10747cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17600), GPR_U32(ctx, 2));
    // 0x107480: 0xc041c58  jal         func_107160
    ctx->pc = 0x107480u;
    SET_GPR_U32(ctx, 31, 0x107488u);
    ctx->pc = 0x107484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107480u;
    // 0x107484: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x107480u, 0x107488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107488u;
label_107488:
    // 0x107488: 0xc041e64  jal         func_107990
    ctx->pc = 0x107488u;
    SET_GPR_U32(ctx, 31, 0x107490u);
    ctx->pc = 0x107990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107990u, 0x107488u, 0x107490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107490u;
label_107490:
    // 0x107490: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x107490u;
    {
        const bool branch_taken_0x107490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107490u;
        // 0x107494: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107490) {
            ctx->pc = 0x1074A4u;
            goto label_1074a4;
        }
    }
    ctx->pc = 0x107498u;
label_107498:
    // 0x107498: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10749c: 0xac4044c0  sw          $zero, 0x44C0($v0)
    ctx->pc = 0x10749cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3844C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3844C0u, _value); } while (0);
    // 0x1074a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1074a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1074a4:
    // 0x1074a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1074a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1074a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1074ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1074ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1074B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074ACu;
        // 0x1074b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1074ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1074B4u;
}
