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

// Function: e2d_id02_type01
// Address: 0x2aafb0 - 0x2ab0cc
void e2d_id02_type01_0x2aafb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id02_type01_0x2aafb0");
#endif

    ctx->pc = 0x2aafb0u;

    // 0x2aafb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aafb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aafb4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2aafb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2aafb8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2aafb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aafbc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aafbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aafc0: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2aafc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aafc4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2aafc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2aafc8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aafc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aafcc: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2aafccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aafd0: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2aafd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2aafd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aafd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aafd8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aafd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aafdc: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2aafdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2aafe0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2aafe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2aafe4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aafe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aafe8: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2aafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2aafec: 0x3c03c1f0  lui         $v1, 0xC1F0
    ctx->pc = 0x2aafecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49648 << 16));
    // 0x2aaff0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aaff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaff4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aaff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aaff8: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2aaff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2aaffc: 0x3c03c168  lui         $v1, 0xC168
    ctx->pc = 0x2aaffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49512 << 16));
    // 0x2ab000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab004: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab008: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2ab008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2ab00c: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2ab00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2ab010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab014: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab018: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2ab018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2ab01c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2ab01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2ab020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab024: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab028: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2ab028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2ab02c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2ab02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2ab030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab034: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab038: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2ab038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2ab03c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2ab03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2ab040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab044: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab048: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2ab048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2ab04c: 0x3c03bf99  lui         $v1, 0xBF99
    ctx->pc = 0x2ab04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49049 << 16));
    // 0x2ab050: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2ab050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2ab054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab058: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab05c: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2ab05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2ab060: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2ab060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2ab064: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2ab064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2ab068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab06c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab070: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x2ab070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x2ab074: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab07c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab080: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ab080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ab084: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab08c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab090: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ab090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ab094: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab09c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab0a0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2ab0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2ab0a4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab0a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab0a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab0ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab0b0: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2ab0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2ab0b4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ab0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ab0b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab0bc: 0xa064011c  sb          $a0, 0x11C($v1)
    ctx->pc = 0x2ab0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ab0c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ab0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB0CCu;
}
