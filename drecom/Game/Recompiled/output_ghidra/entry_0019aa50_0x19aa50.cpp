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

// Function: entry_0019aa50
// Address: 0x19aa50 - 0x19aad4
void entry_0019aa50_0x19aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aa50_0x19aa50");
#endif

    ctx->pc = 0x19aa50u;

    // 0x19aa50: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19aa54: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19aa54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19aa58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19aa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19aa5c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19aa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19aa60: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x19AA60u;
    {
        const bool branch_taken_0x19aa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aa60) {
            ctx->pc = 0x19ABF8u;
            return;
        }
    }
    ctx->pc = 0x19AA68u;
    // 0x19aa68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19aa6c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19aa70: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x19aa70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x19aa74: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19aa78: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x19aa78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x19aa7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19aa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19aa80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19aa80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19aa84: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x19aa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x19aa88: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x19AA88u;
    {
        const bool branch_taken_0x19aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19aa88) {
            ctx->pc = 0x19ABF8u;
            return;
        }
    }
    ctx->pc = 0x19AA90u;
    // 0x19aa90: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x19aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x19aa94: 0x24508cb0  addiu       $s0, $v0, -0x7350
    ctx->pc = 0x19aa94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937776));
    // 0x19aa98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19aa98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aa9c: 0xc421d380  lwc1        $f1, -0x2C80($at)
    ctx->pc = 0x19aa9cu;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aaa0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x19aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x19aaa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aaa8: 0x0  nop
    ctx->pc = 0x19aaa8u;
    // NOP
    // 0x19aaac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19aaacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aab0: 0x0  nop
    ctx->pc = 0x19aab0u;
    // NOP
    // 0x19aab4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19AAB4u;
    {
        const bool branch_taken_0x19aab4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19aab4) {
            ctx->pc = 0x19AAD4u;
            return;
        }
    }
    ctx->pc = 0x19AABCu;
    // 0x19aabc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x19aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x19aac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aac4: 0x0  nop
    ctx->pc = 0x19aac4u;
    // NOP
    // 0x19aac8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x19aac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x19aacc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19AACCu;
    {
        const bool branch_taken_0x19aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aacc) {
            ctx->pc = 0x19AAE0u;
            return;
        }
    }
    ctx->pc = 0x19AAD4u;
}
