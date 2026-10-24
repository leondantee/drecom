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

// Function: e2d_id2d_type03
// Address: 0x2b4880 - 0x2b4910
void e2d_id2d_type03_0x2b4880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2d_type03_0x2b4880");
#endif

    ctx->pc = 0x2b4880u;

    // 0x2b4880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4884: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b4884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b4888: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x2b4888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
    // 0x2b488c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b488cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4890: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4894: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b4894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b4898: 0x3c03437d  lui         $v1, 0x437D
    ctx->pc = 0x2b4898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17277 << 16));
    // 0x2b489c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b489cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b48a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b48a4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b48a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b48a8: 0x3c03435b  lui         $v1, 0x435B
    ctx->pc = 0x2b48a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17243 << 16));
    // 0x2b48ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b48acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b48b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b48b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b48b4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b48b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b48b8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b48bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b48bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b48c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b48c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b48c4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b48c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b48c8: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x2b48c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
    // 0x2b48cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b48ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b48d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b48d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b48d4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b48d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b48d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b48d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b48dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b48dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b48e0: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b48e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b48e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b48e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b48e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b48ec: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b48ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b48f0: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2b48f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2b48f4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b48f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b48f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b48f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b48fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b48fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4900: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b4900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b4904: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4908: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4910u;
}
