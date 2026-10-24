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

// Function: Em10_set_fire
// Address: 0x1204c0 - 0x120520
void Em10_set_fire_0x1204c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_set_fire_0x1204c0");
#endif

    switch (ctx->pc) {
        case 0x1204e0u: goto label_1204e0;
        case 0x1204f8u: goto label_1204f8;
        case 0x120510u: goto label_120510;
        default: break;
    }

    ctx->pc = 0x1204c0u;

    // 0x1204c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1204c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1204c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1204c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1204c8: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1204c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x1204cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1204ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1204d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1204d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1204d4: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1204d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1204d8: 0xc040c44  jal         func_103110
    ctx->pc = 0x1204D8u;
    SET_GPR_U32(ctx, 31, 0x1204E0u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x1204E0u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1204E0u) { return; }
    ctx->pc = 0x1204E0u;
label_1204e0:
    // 0x1204e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1204e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1204e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1204e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1204e8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1204e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1204ec: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x1204ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x1204f0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1204F0u;
    SET_GPR_U32(ctx, 31, 0x1204F8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1204F8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1204F8u) { return; }
    ctx->pc = 0x1204F8u;
label_1204f8:
    // 0x1204f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1204f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1204fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1204fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x120500: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x120500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x120504: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x120504u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x120508: 0xc087170  jal         func_21C5C0
    ctx->pc = 0x120508u;
    SET_GPR_U32(ctx, 31, 0x120510u);
    ctx->pc = 0x21C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C5C0u, 0x120508u, 0x120510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120510u;
label_120510:
    // 0x120510: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x120510u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120514: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x120514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x120518: 0x3e00008  jr          $ra
    ctx->pc = 0x120518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120520u;
}
