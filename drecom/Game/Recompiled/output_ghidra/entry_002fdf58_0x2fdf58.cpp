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

// Function: entry_002fdf58
// Address: 0x2fdf58 - 0x2fdfe0
void entry_002fdf58_0x2fdf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fdf58_0x2fdf58");
#endif

    ctx->pc = 0x2fdf58u;

    // 0x2fdf58: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fdf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fdf5c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fdf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fdf60: 0x1203001f  beq         $s0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FDF60u;
    {
        const bool branch_taken_0x2fdf60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fdf60) {
            ctx->pc = 0x2FDFE0u;
            return;
        }
    }
    ctx->pc = 0x2FDF68u;
    // 0x2fdf68: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2fdf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2fdf6c: 0xa203011c  sb          $v1, 0x11C($s0)
    ctx->pc = 0x2fdf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fdf70: 0x3c0342bc  lui         $v1, 0x42BC
    ctx->pc = 0x2fdf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17084 << 16));
    // 0x2fdf74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fdf74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdf78: 0x0  nop
    ctx->pc = 0x2fdf78u;
    // NOP
    // 0x2fdf7c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2fdf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2fdf80: 0x3c0342bc  lui         $v1, 0x42BC
    ctx->pc = 0x2fdf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17084 << 16));
    // 0x2fdf84: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2fdf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2fdf88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fdf88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdf8c: 0x0  nop
    ctx->pc = 0x2fdf8cu;
    // NOP
    // 0x2fdf90: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2fdf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2fdf94: 0x3c0342bc  lui         $v1, 0x42BC
    ctx->pc = 0x2fdf94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17084 << 16));
    // 0x2fdf98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fdf98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdf9c: 0x0  nop
    ctx->pc = 0x2fdf9cu;
    // NOP
    // 0x2fdfa0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2fdfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2fdfa4: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2fdfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2fdfa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fdfa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdfac: 0x0  nop
    ctx->pc = 0x2fdfacu;
    // NOP
    // 0x2fdfb0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2fdfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2fdfb4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2fdfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fdfb8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2fdfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2fdfbc: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2fdfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2fdfc0: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2fdfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x2fdfc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fdfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fdfc8: 0xa203011e  sb          $v1, 0x11E($s0)
    ctx->pc = 0x2fdfc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fdfcc: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2fdfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2fdfd0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2fdfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2fdfd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fdfd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdfd8: 0x0  nop
    ctx->pc = 0x2fdfd8u;
    // NOP
    // 0x2fdfdc: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2fdfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->pc = 0x2fdfe0u;
}
