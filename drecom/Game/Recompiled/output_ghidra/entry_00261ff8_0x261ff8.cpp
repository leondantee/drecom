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

// Function: entry_00261ff8
// Address: 0x261ff8 - 0x262058
void entry_00261ff8_0x261ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00261ff8_0x261ff8");
#endif

    ctx->pc = 0x261ff8u;

    // 0x261ff8: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261ffc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x262000: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x262000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x262004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x262004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262008: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x262008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26200c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x26200cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x262010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262014: 0x0  nop
    ctx->pc = 0x262014u;
    // NOP
    // 0x262018: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x262018u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26201c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x26201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262020: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x262020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262024: 0x0  nop
    ctx->pc = 0x262024u;
    // NOP
    // 0x262028: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x262028u;
    {
        const bool branch_taken_0x262028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x262028) {
            ctx->pc = 0x262058u;
            return;
        }
    }
    ctx->pc = 0x262030u;
    // 0x262030: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x262030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262034: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x262034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x262038: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x262038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x26203c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26203cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262040: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x262040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262044: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x262044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x262048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26204c: 0x0  nop
    ctx->pc = 0x26204cu;
    // NOP
    // 0x262050: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x262050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262054: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x262054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    ctx->pc = 0x262058u;
}
