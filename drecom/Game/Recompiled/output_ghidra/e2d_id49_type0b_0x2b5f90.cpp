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

// Function: e2d_id49_type0b
// Address: 0x2b5f90 - 0x2b6028
void e2d_id49_type0b_0x2b5f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id49_type0b_0x2b5f90");
#endif

    ctx->pc = 0x2b5f90u;

    // 0x2b5f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5f94: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b5f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b5f98: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b5f9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5fa0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5fa4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b5fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b5fa8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b5fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b5fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5fb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5fb4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b5fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b5fb8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b5fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b5fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5fc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5fc4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b5fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b5fc8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b5fcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5fccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5fd0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5fd4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b5fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b5fd8: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b5fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b5fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5fe0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5fe4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b5fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b5fe8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5fec: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x2b5fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5ff0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5ff4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5ff8: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b5ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5ffc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6000: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6004: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b6004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6008: 0x3c03bca3  lui         $v1, 0xBCA3
    ctx->pc = 0x2b6008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48291 << 16));
    // 0x2b600c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b600cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b6010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6014: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6018: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b6018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b601c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b601cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6020: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6028u;
}
