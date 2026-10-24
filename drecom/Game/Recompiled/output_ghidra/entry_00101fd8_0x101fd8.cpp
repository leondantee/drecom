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

// Function: entry_00101fd8
// Address: 0x101fd8 - 0x101fec
void entry_00101fd8_0x101fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101fd8_0x101fd8");
#endif

    ctx->pc = 0x101fd8u;

    // 0x101fd8: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x101fd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x101fdc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x101FDCu;
    {
        const bool branch_taken_0x101fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101fdc) {
            ctx->pc = 0x101FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101FDCu;
            // 0x101fe0: 0x91220002  lbu         $v0, 0x2($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101FECu;
            return;
        }
    }
    ctx->pc = 0x101FE4u;
    // 0x101fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x101FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FE4u;
        // 0x101fe8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101FECu;
}
