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

// Function: e2d_id49_type0d
// Address: 0x2b60d0 - 0x2b6168
void e2d_id49_type0d_0x2b60d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id49_type0d_0x2b60d0");
#endif

    ctx->pc = 0x2b60d0u;

    // 0x2b60d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b60d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b60d4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b60d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b60d8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2b60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2b60dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b60dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b60e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b60e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b60e4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b60e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b60e8: 0x3c034313  lui         $v1, 0x4313
    ctx->pc = 0x2b60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17171 << 16));
    // 0x2b60ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b60ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b60f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b60f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b60f4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b60f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b60f8: 0x3c0342be  lui         $v1, 0x42BE
    ctx->pc = 0x2b60f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17086 << 16));
    // 0x2b60fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b60fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6100: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6104: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b6104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b6108: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b610c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b610cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6110: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6114: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b6114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b6118: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b611c: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x2b611cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6120: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b6120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b6124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6128: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b612c: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b612cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6130: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b6130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6134: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6138: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b6138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b613c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b613cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6140: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6144: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b6144u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6148: 0x3c03bca3  lui         $v1, 0xBCA3
    ctx->pc = 0x2b6148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48291 << 16));
    // 0x2b614c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b614cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b6150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6154: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6158: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b6158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b615c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b615cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6160: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6168u;
}
