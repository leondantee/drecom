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

// Function: entry_00268b3c
// Address: 0x268b3c - 0x268bd0
void entry_00268b3c_0x268b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00268b3c_0x268b3c");
#endif

    ctx->pc = 0x268b3cu;

    // 0x268b3c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x268b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x268b40: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x268b40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x268b44: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x268b44u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x268b48: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x268b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x268b4c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x268b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x268b50: 0x1203001f  beq         $s0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x268B50u;
    {
        const bool branch_taken_0x268b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x268b50) {
            ctx->pc = 0x268BD0u;
            return;
        }
    }
    ctx->pc = 0x268B58u;
    // 0x268b58: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x268b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x268b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268b60: 0x0  nop
    ctx->pc = 0x268b60u;
    // NOP
    // 0x268b64: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x268b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x268b68: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x268b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x268b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268b70: 0x0  nop
    ctx->pc = 0x268b70u;
    // NOP
    // 0x268b74: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x268b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x268b78: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x268b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x268b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268b80: 0x0  nop
    ctx->pc = 0x268b80u;
    // NOP
    // 0x268b84: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x268b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x268b88: 0x3c034208  lui         $v1, 0x4208
    ctx->pc = 0x268b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16904 << 16));
    // 0x268b8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268b90: 0x0  nop
    ctx->pc = 0x268b90u;
    // NOP
    // 0x268b94: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x268b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x268b98: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x268b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x268b9c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x268b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x268ba0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268ba4: 0x0  nop
    ctx->pc = 0x268ba4u;
    // NOP
    // 0x268ba8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x268ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x268bac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x268bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x268bb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268bb4: 0x0  nop
    ctx->pc = 0x268bb4u;
    // NOP
    // 0x268bb8: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x268bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x268bbc: 0x3c03442b  lui         $v1, 0x442B
    ctx->pc = 0x268bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17451 << 16));
    // 0x268bc0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x268bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x268bc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268bc8: 0x0  nop
    ctx->pc = 0x268bc8u;
    // NOP
    // 0x268bcc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x268bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->pc = 0x268bd0u;
}
