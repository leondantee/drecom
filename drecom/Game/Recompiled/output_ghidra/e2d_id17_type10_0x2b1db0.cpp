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

// Function: e2d_id17_type10
// Address: 0x2b1db0 - 0x2b1e54
void e2d_id17_type10_0x2b1db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type10_0x2b1db0");
#endif

    ctx->pc = 0x2b1db0u;

    // 0x2b1db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b1db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b1db4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b1db8: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x2b1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x2b1dbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1dc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1dc4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b1dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b1dc8: 0x3c034278  lui         $v1, 0x4278
    ctx->pc = 0x2b1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17016 << 16));
    // 0x2b1dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1dd0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1dd4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b1dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b1dd8: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2b1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2b1ddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1de0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1de4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b1de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b1de8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b1dec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1df0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1df4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b1df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b1df8: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x2b1df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x2b1dfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1dfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1e00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1e04: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1e08: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2b1e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b1e0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1e10: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b1e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b1e14: 0x3c03bc23  lui         $v1, 0xBC23
    ctx->pc = 0x2b1e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
    // 0x2b1e18: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b1e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b1e1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1e20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1e24: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b1e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b1e28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1e2c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1e30: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b1e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1e34: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2b1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2b1e38: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2b1e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2b1e3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1e40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1e44: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b1e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b1e48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b1e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b1e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1E54u;
}
