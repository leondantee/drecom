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

// Function: entry_00243530
// Address: 0x243530 - 0x2435e4
void entry_00243530_0x243530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243530_0x243530");
#endif

    ctx->pc = 0x243530u;

    // 0x243530: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243534: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243538: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x243538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x24353c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x24353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x243540: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x243540u;
    {
        const bool branch_taken_0x243540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243540) {
            ctx->pc = 0x243788u;
            return;
        }
    }
    ctx->pc = 0x243548u;
    // 0x243548: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24354c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243550: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x243550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243554: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243558: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x243558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24355c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x24355cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243560: 0x0  nop
    ctx->pc = 0x243560u;
    // NOP
    // 0x243564: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x243564u;
    {
        const bool branch_taken_0x243564 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243564) {
            ctx->pc = 0x243668u;
            return;
        }
    }
    ctx->pc = 0x24356Cu;
    // 0x24356c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243570: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243574: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x243574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243578: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24357c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x24357cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243580: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243584: 0x0  nop
    ctx->pc = 0x243584u;
    // NOP
    // 0x243588: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x243588u;
    {
        const bool branch_taken_0x243588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243588) {
            ctx->pc = 0x2435E4u;
            return;
        }
    }
    ctx->pc = 0x243590u;
    // 0x243590: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243594: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243598: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x243598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24359c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24359cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2435a0: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2435a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2435a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2435a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2435a8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2435a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2435ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2435acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2435b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2435b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2435b4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2435b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2435b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2435b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2435bc: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2435bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2435c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2435c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2435c4: 0x0  nop
    ctx->pc = 0x2435c4u;
    // NOP
    // 0x2435c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2435C8u;
    {
        const bool branch_taken_0x2435c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2435c8) {
            ctx->pc = 0x2435E4u;
            return;
        }
    }
    ctx->pc = 0x2435D0u;
    // 0x2435d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2435d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2435d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2435d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2435d8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2435d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2435dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2435dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2435e0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2435e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x2435e4u;
}
