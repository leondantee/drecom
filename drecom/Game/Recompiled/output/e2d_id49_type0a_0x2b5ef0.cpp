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

// Function: e2d_id49_type0a
// Address: 0x2b5ef0 - 0x2b5f88
void e2d_id49_type0a_0x2b5ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id49_type0a_0x2b5ef0");
#endif

    ctx->pc = 0x2b5ef0u;

    // 0x2b5ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5ef4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b5ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b5ef8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b5ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b5efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5f00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5f04: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b5f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b5f08: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b5f0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5f10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5f14: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b5f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b5f18: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b5f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5f20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5f24: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b5f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b5f28: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b5f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b5f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5f30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5f34: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b5f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b5f38: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2b5f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2b5f3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5f3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5f40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5f44: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b5f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b5f48: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5f4c: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x2b5f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5f50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5f54: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5f58: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b5f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5f5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5f60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5f64: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b5f64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5f68: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2b5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2b5f6c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b5f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b5f70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5f74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5f78: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b5f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b5f7c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b5f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5f80: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5F88u;
}
