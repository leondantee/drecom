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

// Function: R100_main
// Address: 0x282be0 - 0x282c38
void R100_main_0x282be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R100_main_0x282be0");
#endif

    ctx->pc = 0x282be0u;

    // 0x282be0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282be4: 0x8c231b90  lw          $v1, 0x1B90($at)
    ctx->pc = 0x282be4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B90u));
    // 0x282be8: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x282BE8u;
    {
        const bool branch_taken_0x282be8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x282be8) {
            ctx->pc = 0x282C0Cu;
            goto label_282c0c;
        }
    }
    ctx->pc = 0x282BF0u;
    // 0x282bf0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282bf4: 0x8c231b90  lw          $v1, 0x1B90($at)
    ctx->pc = 0x282bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B90u));
    // 0x282bf8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x282bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x282bfc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282c00: 0xac231b90  sw          $v1, 0x1B90($at)
    ctx->pc = 0x282c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B90u, _value); } while (0);
    // 0x282c04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x282C04u;
    {
        const bool branch_taken_0x282c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282c04) {
            ctx->pc = 0x282C30u;
            goto label_282c30;
        }
    }
    ctx->pc = 0x282C0Cu;
label_282c0c:
    // 0x282c0c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282c10: 0x8c231b90  lw          $v1, 0x1B90($at)
    ctx->pc = 0x282c10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B90u));
    // 0x282c14: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x282C14u;
    {
        const bool branch_taken_0x282c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x282c14) {
            ctx->pc = 0x282C30u;
            goto label_282c30;
        }
    }
    ctx->pc = 0x282C1Cu;
    // 0x282c1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x282c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282c20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282c24: 0xac231b90  sw          $v1, 0x1B90($at)
    ctx->pc = 0x282c24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B90u, _value); } while (0);
    // 0x282c28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282c2c: 0xac20dc3c  sw          $zero, -0x23C4($at)
    ctx->pc = 0x282c2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CDC3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDC3Cu, _value); } while (0);
label_282c30:
    // 0x282c30: 0x3e00008  jr          $ra
    ctx->pc = 0x282C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282C38u;
}
