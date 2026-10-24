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

// Function: entry_0025ffb0
// Address: 0x25ffb0 - 0x260040
void entry_0025ffb0_0x25ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ffb0_0x25ffb0");
#endif

    ctx->pc = 0x25ffb0u;

    // 0x25ffb0: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x25ffb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25ffb4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25ffb8: 0x8cc602d4  lw          $a2, 0x2D4($a2)
    ctx->pc = 0x25ffb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 724)));
    // 0x25ffbc: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x25ffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x25ffc0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ffc4: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x25ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ffc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25ffc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ffcc: 0x0  nop
    ctx->pc = 0x25ffccu;
    // NOP
    // 0x25ffd0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x25FFD0u;
    {
        const bool branch_taken_0x25ffd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ffd0) {
            ctx->pc = 0x260040u;
            return;
        }
    }
    ctx->pc = 0x25FFD8u;
    // 0x25ffd8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25ffdc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x25ffdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25ffe0: 0x8c4602d4  lw          $a2, 0x2D4($v0)
    ctx->pc = 0x25ffe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x25ffe4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x25ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25ffe8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ffec: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x25ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x25fff0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25fff0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25fff4: 0x0  nop
    ctx->pc = 0x25fff4u;
    // NOP
    // 0x25fff8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x25fff8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25fffc: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x25fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260000: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x260000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260004: 0x0  nop
    ctx->pc = 0x260004u;
    // NOP
    // 0x260008: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x260008u;
    {
        const bool branch_taken_0x260008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x260008) {
            ctx->pc = 0x2600A0u;
            return;
        }
    }
    ctx->pc = 0x260010u;
    // 0x260010: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x260010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x260014: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x260014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x260018: 0x8ca402d4  lw          $a0, 0x2D4($a1)
    ctx->pc = 0x260018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 724)));
    // 0x26001c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x260020: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x260020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260024: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x260024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x260028: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x260028u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26002c: 0x0  nop
    ctx->pc = 0x26002cu;
    // NOP
    // 0x260030: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x260030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x260034: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x260034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x260038: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x260038u;
    {
        const bool branch_taken_0x260038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260038) {
            ctx->pc = 0x2600A0u;
            return;
        }
    }
    ctx->pc = 0x260040u;
}
