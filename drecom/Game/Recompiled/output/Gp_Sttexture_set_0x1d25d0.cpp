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

// Function: Gp_Sttexture_set
// Address: 0x1d25d0 - 0x1d2628
void Gp_Sttexture_set_0x1d25d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_Sttexture_set_0x1d25d0");
#endif

    ctx->pc = 0x1d25d0u;

    // 0x1d25d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d25d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d25d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d25d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d25d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1d25d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1d25dc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d25dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d25e0: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1d25e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d25e4: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x1d25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1d25e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D25E8u;
    {
        const bool branch_taken_0x1d25e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d25e8) {
            ctx->pc = 0x1D2608u;
            goto label_1d2608;
        }
    }
    ctx->pc = 0x1D25F0u;
    // 0x1d25f0: 0x26030360  addiu       $v1, $s0, 0x360
    ctx->pc = 0x1d25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x1d25f4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1d25f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d25f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d25f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d25fc: 0xfc640130  sd          $a0, 0x130($v1)
    ctx->pc = 0x1d25fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 304), GPR_U64(ctx, 4));
    // 0x1d2600: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2600u;
    {
        const bool branch_taken_0x1d2600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2600) {
            ctx->pc = 0x1D2618u;
            goto label_1d2618;
        }
    }
    ctx->pc = 0x1D2608u;
label_1d2608:
    // 0x1d2608: 0x260301f0  addiu       $v1, $s0, 0x1F0
    ctx->pc = 0x1d2608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1d260c: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1d260cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2610: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2614: 0xfc640130  sd          $a0, 0x130($v1)
    ctx->pc = 0x1d2614u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 304), GPR_U64(ctx, 4));
label_1d2618:
    // 0x1d2618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d261c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d261cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2620: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2628u;
}
