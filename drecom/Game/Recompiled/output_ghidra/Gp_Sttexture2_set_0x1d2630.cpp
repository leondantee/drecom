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

// Function: Gp_Sttexture2_set
// Address: 0x1d2630 - 0x1d2688
void Gp_Sttexture2_set_0x1d2630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_Sttexture2_set_0x1d2630");
#endif

    ctx->pc = 0x1d2630u;

    // 0x1d2630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2634: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d2634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2638: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1d2638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1d263c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d263cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d2640: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1d2640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d2644: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x1d2644u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1d2648: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2648u;
    {
        const bool branch_taken_0x1d2648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2648) {
            ctx->pc = 0x1D2668u;
            goto label_1d2668;
        }
    }
    ctx->pc = 0x1D2650u;
    // 0x1d2650: 0x26030360  addiu       $v1, $s0, 0x360
    ctx->pc = 0x1d2650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x1d2654: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1d2654u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2658: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d265c: 0xfc640130  sd          $a0, 0x130($v1)
    ctx->pc = 0x1d265cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 304), GPR_U64(ctx, 4));
    // 0x1d2660: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2660u;
    {
        const bool branch_taken_0x1d2660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2660) {
            ctx->pc = 0x1D2678u;
            goto label_1d2678;
        }
    }
    ctx->pc = 0x1D2668u;
label_1d2668:
    // 0x1d2668: 0x260301f0  addiu       $v1, $s0, 0x1F0
    ctx->pc = 0x1d2668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1d266c: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1d266cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2670: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2674: 0xfc640130  sd          $a0, 0x130($v1)
    ctx->pc = 0x1d2674u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 304), GPR_U64(ctx, 4));
label_1d2678:
    // 0x1d2678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d267c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d267cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2680: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2688u;
}
