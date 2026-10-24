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

// Function: Set_VU1_DIRECT_IMAGE_WORK
// Address: 0x1ac2a0 - 0x1ac350
void Set_VU1_DIRECT_IMAGE_WORK_0x1ac2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_VU1_DIRECT_IMAGE_WORK_0x1ac2a0");
#endif

    ctx->pc = 0x1ac2a0u;

    // 0x1ac2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ac2a4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1ac2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1ac2a8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1ac2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1ac2ac: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x1ac2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x1ac2b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ac2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac2b4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ac2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ac2b8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1ac2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1ac2bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ac2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac2c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac2c4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1ac2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1ac2c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ac2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac2cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ac2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac2d0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1ac2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1ac2d4: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1ac2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1ac2d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac2dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac2e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac2e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ac2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac2e8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ac2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac2ec: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ac2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ac2f0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ac2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ac2f4: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1ac2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1ac2f8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ac2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac2fc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ac2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ac300: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1ac300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1ac304: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ac304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ac308: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ac308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac30c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ac30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ac310: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1ac310u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1ac314: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1ac314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1ac318: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ac318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac31c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ac31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac320: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ac320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ac324: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1ac324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1ac328: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ac328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ac32c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1ac32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac330: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ac330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ac334: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ac334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ac338: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ac338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1ac33c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ac33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac340: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ac340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ac344: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ac344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ac348: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC350u;
}
