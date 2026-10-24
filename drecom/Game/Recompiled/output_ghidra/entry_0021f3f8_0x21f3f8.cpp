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

// Function: entry_0021f3f8
// Address: 0x21f3f8 - 0x21f494
void entry_0021f3f8_0x21f3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f3f8_0x21f3f8");
#endif

    ctx->pc = 0x21f3f8u;

    // 0x21f3f8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21f3fc: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x21f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x21f400: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x21f400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x21f404: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x21f404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x21f408: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21f408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21f40c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21f410: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21f410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21f414: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x21F414u;
    {
        const bool branch_taken_0x21f414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x21f414) {
            ctx->pc = 0x21F494u;
            return;
        }
    }
    ctx->pc = 0x21F41Cu;
    // 0x21f41c: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x21f41cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x21f420: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21f420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x21f424: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x21f424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x21f428: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f430: 0x0  nop
    ctx->pc = 0x21f430u;
    // NOP
    // 0x21f434: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21f434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21f438: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x21f438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x21f43c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f440: 0x0  nop
    ctx->pc = 0x21f440u;
    // NOP
    // 0x21f444: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21f444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21f448: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x21f448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x21f44c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f450: 0x0  nop
    ctx->pc = 0x21f450u;
    // NOP
    // 0x21f454: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21f454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21f458: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x21f458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x21f45c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f460: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x21f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f464: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f468: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21f468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21f46c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x21f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21f470: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21f470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21f474: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f478: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x21f478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f47c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21f47cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f480: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x21f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f484: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f488: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21f488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21f48c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f490: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21f490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    ctx->pc = 0x21f494u;
}
