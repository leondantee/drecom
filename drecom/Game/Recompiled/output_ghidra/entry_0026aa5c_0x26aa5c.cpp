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

// Function: entry_0026aa5c
// Address: 0x26aa5c - 0x26aab8
void entry_0026aa5c_0x26aa5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026aa5c_0x26aa5c");
#endif

    ctx->pc = 0x26aa5cu;

    // 0x26aa5c: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26aa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aa60: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x26aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x26aa64: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26aa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26aa68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aa68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aa6c: 0x0  nop
    ctx->pc = 0x26aa6cu;
    // NOP
    // 0x26aa70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26aa70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26aa74: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26aa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
    // 0x26aa78: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x26aa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aa7c: 0x3c02bccc  lui         $v0, 0xBCCC
    ctx->pc = 0x26aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48332 << 16));
    // 0x26aa80: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26aa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26aa84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aa84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aa88: 0x0  nop
    ctx->pc = 0x26aa88u;
    // NOP
    // 0x26aa8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26aa8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26aa90: 0x0  nop
    ctx->pc = 0x26aa90u;
    // NOP
    // 0x26aa94: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x26AA94u;
    {
        const bool branch_taken_0x26aa94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26aa94) {
            ctx->pc = 0x26AB54u;
            return;
        }
    }
    ctx->pc = 0x26AA9Cu;
    // 0x26aa9c: 0x3c02bccc  lui         $v0, 0xBCCC
    ctx->pc = 0x26aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48332 << 16));
    // 0x26aaa0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26aaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26aaa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aaa8: 0x0  nop
    ctx->pc = 0x26aaa8u;
    // NOP
    // 0x26aaac: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x26aaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
    // 0x26aab0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26AAB0u;
    {
        const bool branch_taken_0x26aab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aab0) {
            ctx->pc = 0x26AB54u;
            return;
        }
    }
    ctx->pc = 0x26AAB8u;
}
