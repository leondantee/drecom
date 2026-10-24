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

// Function: entry_0025fed8
// Address: 0x25fed8 - 0x25ff40
void entry_0025fed8_0x25fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025fed8_0x25fed8");
#endif

    ctx->pc = 0x25fed8u;

    // 0x25fed8: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x25fed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25fedc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25fee0: 0x8ca402d4  lw          $a0, 0x2D4($a1)
    ctx->pc = 0x25fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 724)));
    // 0x25fee4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25fee8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25fee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25feec: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x25feecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x25fef0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25fef0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25fef4: 0x0  nop
    ctx->pc = 0x25fef4u;
    // NOP
    // 0x25fef8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25fef8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25fefc: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x25fefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ff00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25ff00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ff04: 0x0  nop
    ctx->pc = 0x25ff04u;
    // NOP
    // 0x25ff08: 0x45000065  bc1f        . + 4 + (0x65 << 2)
    ctx->pc = 0x25FF08u;
    {
        const bool branch_taken_0x25ff08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ff08) {
            ctx->pc = 0x2600A0u;
            return;
        }
    }
    ctx->pc = 0x25FF10u;
    // 0x25ff10: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25ff14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25ff18: 0x8c4502d4  lw          $a1, 0x2D4($v0)
    ctx->pc = 0x25ff18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x25ff1c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x25ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25ff20: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ff24: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x25ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x25ff28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25ff28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ff2c: 0x0  nop
    ctx->pc = 0x25ff2cu;
    // NOP
    // 0x25ff30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25ff30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25ff34: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25ff34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x25ff38: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x25FF38u;
    {
        const bool branch_taken_0x25ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ff38) {
            ctx->pc = 0x2600A0u;
            return;
        }
    }
    ctx->pc = 0x25FF40u;
}
