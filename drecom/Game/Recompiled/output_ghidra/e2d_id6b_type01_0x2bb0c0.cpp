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

// Function: e2d_id6b_type01
// Address: 0x2bb0c0 - 0x2bb100
void e2d_id6b_type01_0x2bb0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id6b_type01_0x2bb0c0");
#endif

    switch (ctx->pc) {
        case 0x2bb0d8u: goto label_2bb0d8;
        default: break;
    }

    ctx->pc = 0x2bb0c0u;

    // 0x2bb0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb0c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bb0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bb0c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bb0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bb0cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bb0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb0d0: 0xc0aea58  jal         func_2BA960
    ctx->pc = 0x2BB0D0u;
    SET_GPR_U32(ctx, 31, 0x2BB0D8u);
    ctx->pc = 0x2BA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA960u, 0x2BB0D0u, 0x2BB0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB0D8u;
label_2bb0d8:
    // 0x2bb0d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2bb0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2bb0dc: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x2bb0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2bb0e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bb0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bb0e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2bb0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bb0e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb0ec: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2bb0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bb0f0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bb0f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb0f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bb0f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB100u;
}
