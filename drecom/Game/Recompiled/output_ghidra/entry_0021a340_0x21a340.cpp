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

// Function: entry_0021a340
// Address: 0x21a340 - 0x21a3e4
void entry_0021a340_0x21a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a340_0x21a340");
#endif

    ctx->pc = 0x21a340u;

    // 0x21a340: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21a340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21a344: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21a344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21a348: 0x12030026  beq         $s0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x21A348u;
    {
        const bool branch_taken_0x21a348 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21a348) {
            ctx->pc = 0x21A3E4u;
            return;
        }
    }
    ctx->pc = 0x21A350u;
    // 0x21a350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21a350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a354: 0x0  nop
    ctx->pc = 0x21a354u;
    // NOP
    // 0x21a358: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21a358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21a35c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21a35cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a360: 0x0  nop
    ctx->pc = 0x21a360u;
    // NOP
    // 0x21a364: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21a364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21a368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21a368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a36c: 0x0  nop
    ctx->pc = 0x21a36cu;
    // NOP
    // 0x21a370: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21a370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21a374: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x21a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a378: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21a378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21a37c: 0x3c033f8b  lui         $v1, 0x3F8B
    ctx->pc = 0x21a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16267 << 16));
    // 0x21a380: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x21a380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x21a384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21a384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a388: 0x0  nop
    ctx->pc = 0x21a388u;
    // NOP
    // 0x21a38c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21a38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21a390: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x21a390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x21a394: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x21a394u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a398: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x21a398u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x21a39c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x21a39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a3a0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21a3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21a3a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21a3a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21a3a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a3ac: 0x0  nop
    ctx->pc = 0x21a3acu;
    // NOP
    // 0x21a3b0: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x21a3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x21a3b4: 0x3c03bd23  lui         $v1, 0xBD23
    ctx->pc = 0x21a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48419 << 16));
    // 0x21a3b8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x21a3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x21a3bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21a3bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a3c0: 0x0  nop
    ctx->pc = 0x21a3c0u;
    // NOP
    // 0x21a3c4: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21a3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x21a3c8: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x21a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x21a3cc: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x21a3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x21a3d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21a3d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a3d4: 0x0  nop
    ctx->pc = 0x21a3d4u;
    // NOP
    // 0x21a3d8: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x21a3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x21a3dc: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x21a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x21a3e0: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x21a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x21a3e4u;
}
