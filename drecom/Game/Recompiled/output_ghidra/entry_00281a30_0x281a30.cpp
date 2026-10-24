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

// Function: entry_00281a30
// Address: 0x281a30 - 0x281ac8
void entry_00281a30_0x281a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281a30_0x281a30");
#endif

    ctx->pc = 0x281a30u;

    // 0x281a30: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x281a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x281a34: 0x2455a610  addiu       $s5, $v0, -0x59F0
    ctx->pc = 0x281a34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x281a38: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x281a38u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x281a3c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x281a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x281a40: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x281a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x281a44: 0x12020020  beq         $s0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x281A44u;
    {
        const bool branch_taken_0x281a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x281a44) {
            ctx->pc = 0x281AC8u;
            return;
        }
    }
    ctx->pc = 0x281A4Cu;
    // 0x281a4c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x281a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x281a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281a54: 0x0  nop
    ctx->pc = 0x281a54u;
    // NOP
    // 0x281a58: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x281a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x281a5c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x281a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x281a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281a64: 0x0  nop
    ctx->pc = 0x281a64u;
    // NOP
    // 0x281a68: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x281a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x281a6c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x281a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x281a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281a74: 0x0  nop
    ctx->pc = 0x281a74u;
    // NOP
    // 0x281a78: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x281a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x281a7c: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x281a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x281a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281a84: 0x0  nop
    ctx->pc = 0x281a84u;
    // NOP
    // 0x281a88: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x281a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x281a8c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x281a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x281a90: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x281a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x281a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281a98: 0x0  nop
    ctx->pc = 0x281a98u;
    // NOP
    // 0x281a9c: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x281a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x281aa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x281aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x281aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281aa8: 0x0  nop
    ctx->pc = 0x281aa8u;
    // NOP
    // 0x281aac: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x281aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x281ab0: 0x3c024487  lui         $v0, 0x4487
    ctx->pc = 0x281ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17543 << 16));
    // 0x281ab4: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x281ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x281ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281abc: 0x0  nop
    ctx->pc = 0x281abcu;
    // NOP
    // 0x281ac0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x281ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x281ac4: 0x0  nop
    ctx->pc = 0x281ac4u;
    // NOP
    ctx->pc = 0x281ac8u;
}
