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

// Function: entry_00261598
// Address: 0x261598 - 0x2615f8
void entry_00261598_0x261598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00261598_0x261598");
#endif

    ctx->pc = 0x261598u;

    // 0x261598: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x26159c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x26159cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2615a0: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x2615a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x2615a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2615a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2615a8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2615a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2615ac: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2615acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2615b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2615b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2615b4: 0x0  nop
    ctx->pc = 0x2615b4u;
    // NOP
    // 0x2615b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2615b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2615bc: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x2615bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2615c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2615c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2615c4: 0x0  nop
    ctx->pc = 0x2615c4u;
    // NOP
    // 0x2615c8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2615C8u;
    {
        const bool branch_taken_0x2615c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2615c8) {
            ctx->pc = 0x2615F8u;
            return;
        }
    }
    ctx->pc = 0x2615D0u;
    // 0x2615d0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2615d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2615d4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2615d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2615d8: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x2615d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x2615dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2615dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2615e0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2615e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2615e4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2615e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2615e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2615e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2615ec: 0x0  nop
    ctx->pc = 0x2615ecu;
    // NOP
    // 0x2615f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2615f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2615f4: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2615f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    ctx->pc = 0x2615f8u;
}
