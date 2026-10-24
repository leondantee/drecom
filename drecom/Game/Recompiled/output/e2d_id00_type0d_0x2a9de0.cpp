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

// Function: e2d_id00_type0d
// Address: 0x2a9de0 - 0x2a9e70
void e2d_id00_type0d_0x2a9de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type0d_0x2a9de0");
#endif

    ctx->pc = 0x2a9de0u;

    // 0x2a9de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a9de4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2a9de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2a9de8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a9dec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9df0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9df4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2a9df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2a9df8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9dfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9dfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9e00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9e04: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2a9e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2a9e08: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9e0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9e0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9e10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9e14: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2a9e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2a9e18: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9e1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9e20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9e24: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2a9e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2a9e28: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9e2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9e30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9e34: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2a9e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2a9e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a9e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9e3c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9e40: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2a9e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9e44: 0x3c03bca3  lui         $v1, 0xBCA3
    ctx->pc = 0x2a9e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48291 << 16));
    // 0x2a9e48: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a9e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a9e4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9e50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9e54: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2a9e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2a9e58: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2a9e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2a9e5c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9e60: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2a9e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2a9e64: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2a9e64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a9e68: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9E70u;
}
