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

// Function: e2d_id57_type03
// Address: 0x2b6ea0 - 0x2b6f10
void e2d_id57_type03_0x2b6ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id57_type03_0x2b6ea0");
#endif

    ctx->pc = 0x2b6ea0u;

    // 0x2b6ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6ea4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b6ea8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b6eac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6eb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6eb4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b6eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b6eb8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b6ebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6ec0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6ec4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b6ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b6ec8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b6ecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6ed0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6ed4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b6ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b6ed8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b6edc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6ee0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6ee4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b6ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b6ee8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2b6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2b6eec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6eecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6ef0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6ef4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6ef8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b6ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6efc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6f00: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b6f00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6f04: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b6f04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6f08: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6F10u;
}
