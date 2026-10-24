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

// Function: entry_0010c36c
// Address: 0x10c36c - 0x10c3b8
void entry_0010c36c_0x10c36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c36c_0x10c36c");
#endif

    switch (ctx->pc) {
        case 0x10c394u: goto label_10c394;
        default: break;
    }

    ctx->pc = 0x10c36cu;

    // 0x10c36c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10c370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c374: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10c374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10c378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c37c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x10c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10c380: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10c380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10c384: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x10c384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10c388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c38c: 0xc084cb6  jal         func_2132D8
    ctx->pc = 0x10C38Cu;
    SET_GPR_U32(ctx, 31, 0x10C394u);
    ctx->pc = 0x10C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C38Cu;
    // 0x10c390: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132D8u, 0x10C38Cu, 0x10C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C394u;
label_10c394:
    // 0x10c394: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x10c394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x10c398: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x10c398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x10c39c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c3a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10c3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10c3a4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x10c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x10c3a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10c3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x10C3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C3B0u;
        // 0x10c3b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C3B8u;
}
