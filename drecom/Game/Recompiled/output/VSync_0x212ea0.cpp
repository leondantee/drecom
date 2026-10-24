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

// Function: VSync
// Address: 0x212ea0 - 0x212ee0
void VSync_0x212ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VSync_0x212ea0");
#endif

    switch (ctx->pc) {
        case 0x212eb0u: goto label_212eb0;
        default: break;
    }

    ctx->pc = 0x212ea0u;

    // 0x212ea0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x212ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x212ea4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x212ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212ea8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x212ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x212eac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x212eacu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 3)); // MMIO: 0x1000f000
label_212eb0:
    // 0x212eb0: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x212eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x212eb4: 0x8c42f000  lw          $v0, -0x1000($v0)
    ctx->pc = 0x212eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F000u)); // MMIO: 0x1000f000
    // 0x212eb8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x212eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x212ebc: 0x0  nop
    ctx->pc = 0x212ebcu;
    // NOP
    // 0x212ec0: 0x0  nop
    ctx->pc = 0x212ec0u;
    // NOP
    // 0x212ec4: 0x0  nop
    ctx->pc = 0x212ec4u;
    // NOP
    // 0x212ec8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x212EC8u;
    {
        const bool branch_taken_0x212ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212ec8) {
            ctx->pc = 0x212EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212eb0;
        }
    }
    ctx->pc = 0x212ED0u;
    // 0x212ed0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x212ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212ed4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x212ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x212ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x212ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212ED8u;
        // 0x212edc: 0xac22f000  sw          $v0, -0x1000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212EE0u;
}
