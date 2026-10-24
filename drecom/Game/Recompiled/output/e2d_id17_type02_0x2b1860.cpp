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

// Function: e2d_id17_type02
// Address: 0x2b1860 - 0x2b190c
void e2d_id17_type02_0x2b1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type02_0x2b1860");
#endif

    ctx->pc = 0x2b1860u;

    // 0x2b1860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b1860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b1864: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b1864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b1868: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x2b1868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x2b186c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b186cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1870: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1874: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b1874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b1878: 0x3c034278  lui         $v1, 0x4278
    ctx->pc = 0x2b1878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17016 << 16));
    // 0x2b187c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b187cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1880: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1884: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b1884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b1888: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2b1888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2b188c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b188cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1890: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1894: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b1894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b1898: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b1898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b189c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b189cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b18a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b18a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b18a4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b18a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b18a8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b18a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b18ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b18acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b18b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b18b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b18b4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b18b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b18b8: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x2b18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x2b18bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b18bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b18c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b18c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b18c4: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b18c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b18c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b18c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b18cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b18ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b18d0: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b18d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b18d4: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2b18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2b18d8: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2b18d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2b18dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b18dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b18e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b18e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b18e4: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b18e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b18e8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2b18e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b18ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b18ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b18f0: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b18f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b18f4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x2b18f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2b18f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b18f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b18fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2b18fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2b1900: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b1900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b1904: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B190Cu;
}
