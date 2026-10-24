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

// Function: entry_0033d5a8
// Address: 0x33d5a8 - 0x33d638
void entry_0033d5a8_0x33d5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d5a8_0x33d5a8");
#endif

    ctx->pc = 0x33d5a8u;

    // 0x33d5a8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d5ac: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x33d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d5b0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x33d5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d5b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33d5b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d5b8: 0x0  nop
    ctx->pc = 0x33d5b8u;
    // NOP
    // 0x33d5bc: 0x450100c4  bc1t        . + 4 + (0xC4 << 2)
    ctx->pc = 0x33D5BCu;
    {
        const bool branch_taken_0x33d5bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d5bc) {
            ctx->pc = 0x33D8D0u;
            return;
        }
    }
    ctx->pc = 0x33D5C4u;
    // 0x33d5c4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d5c8: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x33d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d5cc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d5d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33d5d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d5d4: 0x0  nop
    ctx->pc = 0x33d5d4u;
    // NOP
    // 0x33d5d8: 0x450100bd  bc1t        . + 4 + (0xBD << 2)
    ctx->pc = 0x33D5D8u;
    {
        const bool branch_taken_0x33d5d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d5d8) {
            ctx->pc = 0x33D8D0u;
            return;
        }
    }
    ctx->pc = 0x33D5E0u;
    // 0x33d5e0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d5e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d5e8: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x33d5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x33d5ec: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x33d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d5f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d5f4: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x33d5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x33d5f8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d5fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d600: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x33d600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x33d604: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d608: 0xe64001a0  swc1        $f0, 0x1A0($s2)
    ctx->pc = 0x33d608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x33d60c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x33d60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d610: 0xe64001a4  swc1        $f0, 0x1A4($s2)
    ctx->pc = 0x33d610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
    // 0x33d614: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d618: 0xe64001a8  swc1        $f0, 0x1A8($s2)
    ctx->pc = 0x33d618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
    // 0x33d61c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x33d61cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33d620: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d624: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x33d624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x33d628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d62c: 0xa20200b8  sb          $v0, 0xB8($s0)
    ctx->pc = 0x33d62cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 2));
    // 0x33d630: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x33D630u;
    {
        const bool branch_taken_0x33d630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d630) {
            ctx->pc = 0x33D8D0u;
            return;
        }
    }
    ctx->pc = 0x33D638u;
}
