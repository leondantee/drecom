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

// Function: Om86_R0_init
// Address: 0x35a380 - 0x35a434
void Om86_R0_init_0x35a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om86_R0_init_0x35a380");
#endif

    switch (ctx->pc) {
        case 0x35a39cu: goto label_35a39c;
        default: break;
    }

    ctx->pc = 0x35a380u;

    // 0x35a380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a384: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35a384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x35a388: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35a388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35a38c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a390: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x35a390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x35a394: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x35A394u;
    SET_GPR_U32(ctx, 31, 0x35A39Cu);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x35A394u, 0x35A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A39Cu;
label_35a39c:
    // 0x35a39c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a3a0: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x35a3a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x35a3a4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x35a3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x35a3a8: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x35a3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x35a3ac: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x35a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x35a3b0: 0x2464a8b0  addiu       $a0, $v1, -0x5750
    ctx->pc = 0x35a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944944));
    // 0x35a3b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a3b8: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x35a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x35a3bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a3c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a3c4: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x35a3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x35a3c8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x35a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x35a3cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a3d0: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x35a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x35a3d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a3d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a3dc: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x35a3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x35a3e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a3e4: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x35a3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a3e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x35a3ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a3ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a3f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a3f4: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x35a3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x35a3f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a3fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a400: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35a400u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35a404: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35a404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a408: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35a408u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a40c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a410: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35a410u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a414: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35a414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a418: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35a418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a41c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a420: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35a420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35a424: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35a424u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a428: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35a428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35a42c: 0x3e00008  jr          $ra
    ctx->pc = 0x35A42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A434u;
}
