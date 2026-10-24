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

// Function: e2d_id49_type0e
// Address: 0x2b6170 - 0x2b6208
void e2d_id49_type0e_0x2b6170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id49_type0e_0x2b6170");
#endif

    ctx->pc = 0x2b6170u;

    // 0x2b6170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6174: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b6174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b6178: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b617c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b617cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6180: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6184: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b6184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b6188: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b6188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b618c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b618cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6190: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6194: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b6194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b6198: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b6198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b619c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b619cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b61a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b61a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b61a4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b61a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b61a8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b61a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b61ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b61acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b61b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b61b4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b61b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b61b8: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b61b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b61bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b61bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b61c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b61c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b61c4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b61c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b61c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b61c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b61cc: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x2b61ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b61d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b61d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b61d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b61d8: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b61d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b61dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b61dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b61e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b61e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b61e4: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b61e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b61e8: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2b61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2b61ec: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b61ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b61f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b61f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b61f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b61f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b61f8: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2b61f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2b61fc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b61fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6200: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6208u;
}
