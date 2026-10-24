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

// Function: entry_0021f5bc
// Address: 0x21f5bc - 0x21f654
void entry_0021f5bc_0x21f5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f5bc_0x21f5bc");
#endif

    ctx->pc = 0x21f5bcu;

    // 0x21f5bc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21f5c0: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x21f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21f5c4: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x21f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x21f5c8: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x21f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x21f5cc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x21f5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f5d0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21f5d4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21f5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21f5d8: 0x1203001e  beq         $s0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x21F5D8u;
    {
        const bool branch_taken_0x21f5d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f5d8) {
            ctx->pc = 0x21F654u;
            return;
        }
    }
    ctx->pc = 0x21F5E0u;
    // 0x21f5e0: 0x96030118  lhu         $v1, 0x118($s0)
    ctx->pc = 0x21f5e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x21f5e4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x21f5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x21f5e8: 0xa6030118  sh          $v1, 0x118($s0)
    ctx->pc = 0x21f5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x21f5ec: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21f5f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f5f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f5f4: 0x0  nop
    ctx->pc = 0x21f5f4u;
    // NOP
    // 0x21f5f8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21f5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21f5fc: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x21f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x21f600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f604: 0x0  nop
    ctx->pc = 0x21f604u;
    // NOP
    // 0x21f608: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21f608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21f60c: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x21f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x21f610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f614: 0x0  nop
    ctx->pc = 0x21f614u;
    // NOP
    // 0x21f618: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21f618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21f61c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x21f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x21f620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f624: 0x0  nop
    ctx->pc = 0x21f624u;
    // NOP
    // 0x21f628: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21f628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21f62c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x21f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21f630: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x21f630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x21f634: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21f634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f638: 0xc4800104  lwc1        $f0, 0x104($a0)
    ctx->pc = 0x21f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f63c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21f63cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f640: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x21f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f644: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f648: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21f648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21f64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f650: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x21f650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x21f654u;
}
