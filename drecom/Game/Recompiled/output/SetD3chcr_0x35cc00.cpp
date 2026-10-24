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

// Function: SetD3chcr
// Address: 0x35cc00 - 0x35cc78
void SetD3chcr_0x35cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetD3chcr_0x35cc00");
#endif

    ctx->pc = 0x35cc00u;

label_35cc00:
    // 0x35cc00: 0x42000039  di
    ctx->pc = 0x35cc00u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35cc04: 0x40f  sync.p
    ctx->pc = 0x35cc04u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35cc08: 0x40056000  mfc0        $a1, Status
    ctx->pc = 0x35cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_status);
    // 0x35cc0c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x35cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x35cc10: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x35cc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x35cc14: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35CC14u;
    {
        const bool branch_taken_0x35cc14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35cc14) {
            ctx->pc = 0x35CC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cc00;
        }
    }
    ctx->pc = 0x35CC1Cu;
    // 0x35cc1c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35cc20: 0x3463f520  ori         $v1, $v1, 0xF520
    ctx->pc = 0x35cc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62752);
    // 0x35cc24: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x35cc24u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x35cc28: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x35cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x35cc2c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x35cc2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x35cc30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35cc34: 0x3463f590  ori         $v1, $v1, 0xF590
    ctx->pc = 0x35cc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62864);
    // 0x35cc38: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x35cc38u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 5)); // MMIO: 0x1000f590
    // 0x35cc3c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35cc40: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x35cc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x35cc44: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35cc44u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4)); // MMIO: 0x1000b000
    // 0x35cc48: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35cc4c: 0x3463f520  ori         $v1, $v1, 0xF520
    ctx->pc = 0x35cc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62752);
    // 0x35cc50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x35cc54: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x35cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x35cc58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35cc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35cc5c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x35cc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35cc60: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35cc64: 0x3463f590  ori         $v1, $v1, 0xF590
    ctx->pc = 0x35cc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62864);
    // 0x35cc68: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35cc68u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 4)); // MMIO: 0x1000f590
    // 0x35cc6c: 0x42000038  ei
    ctx->pc = 0x35cc6cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35cc70: 0x3e00008  jr          $ra
    ctx->pc = 0x35CC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CC78u;
}
