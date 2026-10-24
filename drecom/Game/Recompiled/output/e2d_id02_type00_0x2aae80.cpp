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

// Function: e2d_id02_type00
// Address: 0x2aae80 - 0x2aafa8
void e2d_id02_type00_0x2aae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id02_type00_0x2aae80");
#endif

    ctx->pc = 0x2aae80u;

    // 0x2aae80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aae84: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2aae84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2aae88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2aae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aae8c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aae90: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2aae90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aae94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2aae94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aae98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aae98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aae9c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2aae9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aaea0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2aaea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2aaea4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaea8: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2aaea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aaeac: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2aaeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2aaeb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaeb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaeb4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaeb8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2aaeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2aaebc: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2aaebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2aaec0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaec4: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2aaec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2aaec8: 0x3c03c1f0  lui         $v1, 0xC1F0
    ctx->pc = 0x2aaec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49648 << 16));
    // 0x2aaecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaeccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaed0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaed4: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2aaed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2aaed8: 0x3c034168  lui         $v1, 0x4168
    ctx->pc = 0x2aaed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16744 << 16));
    // 0x2aaedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaee0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaee4: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2aaee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2aaee8: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2aaee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2aaeec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaeecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaef0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaef4: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2aaef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2aaef8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2aaef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2aaefc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaefcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaf00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaf04: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2aaf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2aaf08: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2aaf08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2aaf0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaf0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaf10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaf14: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2aaf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2aaf18: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2aaf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2aaf1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaf1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaf20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaf24: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2aaf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2aaf28: 0x3c03bf99  lui         $v1, 0xBF99
    ctx->pc = 0x2aaf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49049 << 16));
    // 0x2aaf2c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2aaf2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2aaf30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaf30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaf34: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaf38: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2aaf38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2aaf3c: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2aaf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2aaf40: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2aaf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2aaf44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaf44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaf48: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaf4c: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x2aaf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x2aaf50: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2aaf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2aaf54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaf54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaf58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaf5c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2aaf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2aaf60: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2aaf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2aaf64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaf64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaf68: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaf6c: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2aaf6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2aaf70: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2aaf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2aaf74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaf74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaf78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaf7c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2aaf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2aaf80: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2aaf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2aaf84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaf84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaf88: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaf8c: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2aaf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2aaf90: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2aaf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2aaf94: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaf98: 0xa064011c  sb          $a0, 0x11C($v1)
    ctx->pc = 0x2aaf98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aaf9c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2aaf9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aafa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAFA8u;
}
