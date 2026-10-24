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

// Function: entry_00260040
// Address: 0x260040 - 0x2600a0
void entry_00260040_0x260040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00260040_0x260040");
#endif

    ctx->pc = 0x260040u;

    // 0x260040: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x260040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x260044: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x260044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x260048: 0x8c4502d4  lw          $a1, 0x2D4($v0)
    ctx->pc = 0x260048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x26004c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x26004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x260050: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x260050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260054: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x260054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x260058: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x260058u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26005c: 0x0  nop
    ctx->pc = 0x26005cu;
    // NOP
    // 0x260060: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x260060u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x260064: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x260064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260068: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x260068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26006c: 0x0  nop
    ctx->pc = 0x26006cu;
    // NOP
    // 0x260070: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x260070u;
    {
        const bool branch_taken_0x260070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x260070) {
            ctx->pc = 0x2600A0u;
            return;
        }
    }
    ctx->pc = 0x260078u;
    // 0x260078: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x260078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x26007c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x26007cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x260080: 0x8c4502d4  lw          $a1, 0x2D4($v0)
    ctx->pc = 0x260080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x260084: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x260084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x260088: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x260088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26008c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x26008cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x260090: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x260090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260094: 0x0  nop
    ctx->pc = 0x260094u;
    // NOP
    // 0x260098: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26009c: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x26009cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    ctx->pc = 0x2600a0u;
}
