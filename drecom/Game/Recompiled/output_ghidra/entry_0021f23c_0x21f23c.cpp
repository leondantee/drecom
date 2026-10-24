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

// Function: entry_0021f23c
// Address: 0x21f23c - 0x21f2d0
void entry_0021f23c_0x21f23c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f23c_0x21f23c");
#endif

    ctx->pc = 0x21f23cu;

    // 0x21f23c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21f240: 0x245ea610  addiu       $fp, $v0, -0x59F0
    ctx->pc = 0x21f240u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x21f244: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x21f244u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f248: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21f248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21f24c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21f24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21f250: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x21F250u;
    {
        const bool branch_taken_0x21f250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x21f250) {
            ctx->pc = 0x21F2D0u;
            return;
        }
    }
    ctx->pc = 0x21F258u;
    // 0x21f258: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x21f258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x21f25c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21f25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x21f260: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x21f260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x21f264: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f26c: 0x0  nop
    ctx->pc = 0x21f26cu;
    // NOP
    // 0x21f270: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21f270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21f274: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f27c: 0x0  nop
    ctx->pc = 0x21f27cu;
    // NOP
    // 0x21f280: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21f280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21f284: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f28c: 0x0  nop
    ctx->pc = 0x21f28cu;
    // NOP
    // 0x21f290: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21f290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21f294: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x21f294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x21f298: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f29c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x21f29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f2a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f2a4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21f2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21f2a8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x21f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21f2ac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x21f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x21f2b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f2b4: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x21f2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f2b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21f2b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f2bc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x21f2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f2c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f2c4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21f2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21f2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f2cc: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    ctx->pc = 0x21f2d0u;
}
