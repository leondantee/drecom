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

// Function: entry_0021f084
// Address: 0x21f084 - 0x21f118
void entry_0021f084_0x21f084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f084_0x21f084");
#endif

    ctx->pc = 0x21f084u;

    // 0x21f084: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21f084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21f088: 0x2456a610  addiu       $s6, $v0, -0x59F0
    ctx->pc = 0x21f088u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x21f08c: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x21f08cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f090: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21f090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21f094: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21f094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21f098: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x21F098u;
    {
        const bool branch_taken_0x21f098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x21f098) {
            ctx->pc = 0x21F118u;
            return;
        }
    }
    ctx->pc = 0x21F0A0u;
    // 0x21f0a0: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x21f0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x21f0a4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21f0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x21f0a8: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x21f0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x21f0ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f0b4: 0x0  nop
    ctx->pc = 0x21f0b4u;
    // NOP
    // 0x21f0b8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21f0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21f0bc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f0c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f0c4: 0x0  nop
    ctx->pc = 0x21f0c4u;
    // NOP
    // 0x21f0c8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21f0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21f0cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21f0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f0d4: 0x0  nop
    ctx->pc = 0x21f0d4u;
    // NOP
    // 0x21f0d8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21f0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21f0dc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x21f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x21f0e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f0e4: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x21f0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f0e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f0e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f0ec: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21f0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21f0f0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x21f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21f0f4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x21f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x21f0f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f0fc: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x21f0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f100: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21f100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f104: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x21f104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f108: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21f108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f10c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21f10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21f110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f114: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21f114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    ctx->pc = 0x21f118u;
}
