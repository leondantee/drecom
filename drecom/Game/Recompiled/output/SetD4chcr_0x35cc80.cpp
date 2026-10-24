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

// Function: SetD4chcr
// Address: 0x35cc80 - 0x35ccf8
void SetD4chcr_0x35cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetD4chcr_0x35cc80");
#endif

    ctx->pc = 0x35cc80u;

label_35cc80:
    // 0x35cc80: 0x42000039  di
    ctx->pc = 0x35cc80u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35cc84: 0x40f  sync.p
    ctx->pc = 0x35cc84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35cc88: 0x40056000  mfc0        $a1, Status
    ctx->pc = 0x35cc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_status);
    // 0x35cc8c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x35cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x35cc90: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x35cc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x35cc94: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35CC94u;
    {
        const bool branch_taken_0x35cc94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35cc94) {
            ctx->pc = 0x35CC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cc80;
        }
    }
    ctx->pc = 0x35CC9Cu;
    // 0x35cc9c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35cca0: 0x3463f520  ori         $v1, $v1, 0xF520
    ctx->pc = 0x35cca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62752);
    // 0x35cca4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x35cca4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x35cca8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x35cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x35ccac: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x35ccacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x35ccb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35ccb4: 0x3463f590  ori         $v1, $v1, 0xF590
    ctx->pc = 0x35ccb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62864);
    // 0x35ccb8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x35ccb8u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 5)); // MMIO: 0x1000f590
    // 0x35ccbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35ccc0: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x35ccc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x35ccc4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35ccc4u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4)); // MMIO: 0x1000b400
    // 0x35ccc8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35cccc: 0x3463f520  ori         $v1, $v1, 0xF520
    ctx->pc = 0x35ccccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62752);
    // 0x35ccd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x35ccd4: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x35ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x35ccd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35ccd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35ccdc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x35ccdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35cce0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35cce4: 0x3463f590  ori         $v1, $v1, 0xF590
    ctx->pc = 0x35cce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62864);
    // 0x35cce8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35cce8u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 4)); // MMIO: 0x1000f590
    // 0x35ccec: 0x42000038  ei
    ctx->pc = 0x35ccecu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35ccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x35CCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CCF8u;
}
