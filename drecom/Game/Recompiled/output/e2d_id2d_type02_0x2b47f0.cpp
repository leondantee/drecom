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

// Function: e2d_id2d_type02
// Address: 0x2b47f0 - 0x2b4880
void e2d_id2d_type02_0x2b47f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2d_type02_0x2b47f0");
#endif

    ctx->pc = 0x2b47f0u;

    // 0x2b47f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b47f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b47f4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b47f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b47f8: 0x3c034351  lui         $v1, 0x4351
    ctx->pc = 0x2b47f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17233 << 16));
    // 0x2b47fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b47fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4800: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4804: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b4804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b4808: 0x3c0342b6  lui         $v1, 0x42B6
    ctx->pc = 0x2b4808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17078 << 16));
    // 0x2b480c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b480cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4810: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4814: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b4814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b4818: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2b4818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2b481c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b481cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4820: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4824: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b4824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b4828: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b4828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b482c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b482cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4830: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4834: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b4834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b4838: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x2b4838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
    // 0x2b483c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b483cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4840: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4844: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b4844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b4848: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b484c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b484cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4850: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b4850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4854: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4858: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b485c: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b485cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4860: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2b4860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2b4864: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b4864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b4868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b486c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4870: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b4870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b4874: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4878: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4880u;
}
