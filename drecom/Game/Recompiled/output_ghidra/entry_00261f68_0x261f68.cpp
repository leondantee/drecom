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

// Function: entry_00261f68
// Address: 0x261f68 - 0x261ff8
void entry_00261f68_0x261f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00261f68_0x261f68");
#endif

    ctx->pc = 0x261f68u;

    // 0x261f68: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261f6c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261f70: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261f78: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x261f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261f7c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x261f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261f80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x261f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261f84: 0x0  nop
    ctx->pc = 0x261f84u;
    // NOP
    // 0x261f88: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x261F88u;
    {
        const bool branch_taken_0x261f88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261f88) {
            ctx->pc = 0x261FF8u;
            return;
        }
    }
    ctx->pc = 0x261F90u;
    // 0x261f90: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261f94: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261f98: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261f9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261fa0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x261fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261fa4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x261fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x261fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261fac: 0x0  nop
    ctx->pc = 0x261facu;
    // NOP
    // 0x261fb0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x261fb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x261fb4: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x261fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261fb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x261fb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261fbc: 0x0  nop
    ctx->pc = 0x261fbcu;
    // NOP
    // 0x261fc0: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x261FC0u;
    {
        const bool branch_taken_0x261fc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261fc0) {
            ctx->pc = 0x262058u;
            return;
        }
    }
    ctx->pc = 0x261FC8u;
    // 0x261fc8: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261fcc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261fd0: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261fd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261fd8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x261fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261fdc: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x261fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x261fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261fe4: 0x0  nop
    ctx->pc = 0x261fe4u;
    // NOP
    // 0x261fe8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x261fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x261fec: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x261fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x261ff0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x261FF0u;
    {
        const bool branch_taken_0x261ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261ff0) {
            ctx->pc = 0x262058u;
            return;
        }
    }
    ctx->pc = 0x261FF8u;
}
