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

// Function: entry_0011e898
// Address: 0x11e898 - 0x11e8bc
void entry_0011e898_0x11e898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e898_0x11e898");
#endif

    ctx->pc = 0x11e898u;

    // 0x11e898: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x11e898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11e89c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x11e89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x11e8a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11e8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11e8a4: 0x2484fc01  addiu       $a0, $a0, -0x3FF
    ctx->pc = 0x11e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
    // 0x11e8a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11e8ac: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x11e8acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x11e8b0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x11e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x11e8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11E8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8B4u;
        // 0x11e8b8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E8BCu;
}
