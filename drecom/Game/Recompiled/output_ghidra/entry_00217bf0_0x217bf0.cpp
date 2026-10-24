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

// Function: entry_00217bf0
// Address: 0x217bf0 - 0x217c10
void entry_00217bf0_0x217bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217bf0_0x217bf0");
#endif

    switch (ctx->pc) {
        case 0x217bf8u: goto label_217bf8;
        default: break;
    }

    ctx->pc = 0x217bf0u;

    // 0x217bf0: 0xc084b8c  jal         func_212E30
    ctx->pc = 0x217BF0u;
    SET_GPR_U32(ctx, 31, 0x217BF8u);
    ctx->pc = 0x217BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BF0u;
    // 0x217bf4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E30u;
    {
        ctx->pc = 0x217BF8u;
        ps2_stubs::sceSifGetReg(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217BF8u) { return; }
    ctx->pc = 0x217BF8u;
label_217bf8:
    // 0x217bf8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x217bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x217bfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217c00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x217c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x217c04: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x217c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x217c08: 0x3e00008  jr          $ra
    ctx->pc = 0x217C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C08u;
        // 0x217c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217C10u;
}
