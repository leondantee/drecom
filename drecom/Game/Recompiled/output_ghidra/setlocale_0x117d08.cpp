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

// Function: setlocale
// Address: 0x117d08 - 0x117d34
void setlocale_0x117d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setlocale_0x117d08");
#endif

    switch (ctx->pc) {
        case 0x117d28u: goto label_117d28;
        default: break;
    }

    ctx->pc = 0x117d08u;

    // 0x117d08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x117d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d0c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x117d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x117d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117d14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x117d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d18: 0x8c64490c  lw          $a0, 0x490C($v1)
    ctx->pc = 0x117d18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38490Cu));
    // 0x117d1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117d20: 0xc045f1c  jal         func_117C70
    ctx->pc = 0x117D20u;
    SET_GPR_U32(ctx, 31, 0x117D28u);
    ctx->pc = 0x117D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D20u;
    // 0x117d24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C70u, 0x117D20u, 0x117D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D28u;
label_117d28:
    // 0x117d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x117D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D2Cu;
        // 0x117d30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117D34u;
}
