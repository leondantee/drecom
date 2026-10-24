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

// Function: entry_0033cb88
// Address: 0x33cb88 - 0x33cbd0
void entry_0033cb88_0x33cb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033cb88_0x33cb88");
#endif

    ctx->pc = 0x33cb88u;

    // 0x33cb88: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33cb88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33cb8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33cb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33cb90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33cb94: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33cb98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cb9c: 0xc4420094  lwc1        $f2, 0x94($v0)
    ctx->pc = 0x33cb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33cba0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x33cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cba4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x33cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x33cba8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33cba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33cbac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cbb0: 0x0  nop
    ctx->pc = 0x33cbb0u;
    // NOP
    // 0x33cbb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33cbb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33cbb8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x33cbb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33cbbc: 0x0  nop
    ctx->pc = 0x33cbbcu;
    // NOP
    // 0x33cbc0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x33CBC0u;
    {
        const bool branch_taken_0x33cbc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33cbc0) {
            ctx->pc = 0x33CBD0u;
            return;
        }
    }
    ctx->pc = 0x33CBC8u;
    // 0x33cbc8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33cbc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cbcc: 0x0  nop
    ctx->pc = 0x33cbccu;
    // NOP
    ctx->pc = 0x33cbd0u;
}
