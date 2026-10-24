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

// Function: entry_0011f3d0
// Address: 0x11f3d0 - 0x11f3e4
void entry_0011f3d0_0x11f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f3d0_0x11f3d0");
#endif

    switch (ctx->pc) {
        case 0x11f3d8u: goto label_11f3d8;
        default: break;
    }

    ctx->pc = 0x11f3d0u;

    // 0x11f3d0: 0xc047fd6  jal         func_11FF58
    ctx->pc = 0x11F3D0u;
    SET_GPR_U32(ctx, 31, 0x11F3D8u);
    ctx->pc = 0x11F3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F3D0u;
    // 0x11f3d4: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF58u, 0x11F3D0u, 0x11F3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3D8u;
label_11f3d8:
    // 0x11f3d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11f3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11F3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3DCu;
        // 0x11f3e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F3E4u;
}
