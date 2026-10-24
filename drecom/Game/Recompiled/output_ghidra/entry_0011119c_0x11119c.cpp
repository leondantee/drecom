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

// Function: entry_0011119c
// Address: 0x11119c - 0x1111cc
void entry_0011119c_0x11119c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011119c_0x11119c");
#endif

    switch (ctx->pc) {
        case 0x1111a4u: goto label_1111a4;
        case 0x1111b4u: goto label_1111b4;
        case 0x1111c0u: goto label_1111c0;
        default: break;
    }

    ctx->pc = 0x11119cu;

    // 0x11119c: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x11119Cu;
    SET_GPR_U32(ctx, 31, 0x1111A4u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x11119Cu, 0x1111A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111A4u;
label_1111a4:
    // 0x1111a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1111a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1111a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111ac: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1111ACu;
    SET_GPR_U32(ctx, 31, 0x1111B4u);
    ctx->pc = 0x1111B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111ACu;
    // 0x1111b0: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1111ACu, 0x1111B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111B4u;
label_1111b4:
    // 0x1111b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1111b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111b8: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1111B8u;
    SET_GPR_U32(ctx, 31, 0x1111C0u);
    ctx->pc = 0x1111BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111B8u;
    // 0x1111bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1111B8u, 0x1111C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111C0u;
label_1111c0:
    // 0x1111c0: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x1111c0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x1111c4: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x1111C4u;
    {
        const bool branch_taken_0x1111c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111C4u;
        // 0x1111c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111c4) {
            ctx->pc = 0x111524u;
            return;
        }
    }
    ctx->pc = 0x1111CCu;
}
