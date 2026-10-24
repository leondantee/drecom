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

// Function: entry_002382f0
// Address: 0x2382f0 - 0x2383a4
void entry_002382f0_0x2382f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002382f0_0x2382f0");
#endif

    ctx->pc = 0x2382f0u;

    // 0x2382f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2382f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2382f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2382f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2382f8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2382f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2382fc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2382fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x238300: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x238300u;
    {
        const bool branch_taken_0x238300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238300) {
            ctx->pc = 0x23853Cu;
            return;
        }
    }
    ctx->pc = 0x238308u;
    // 0x238308: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23830c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238310: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x238310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238314: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238318: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x238318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23831c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23831cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238320: 0x0  nop
    ctx->pc = 0x238320u;
    // NOP
    // 0x238324: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x238324u;
    {
        const bool branch_taken_0x238324 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238324) {
            ctx->pc = 0x238428u;
            return;
        }
    }
    ctx->pc = 0x23832Cu;
    // 0x23832c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238330: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238334: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x238334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238338: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23833c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23833cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238340: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238344: 0x0  nop
    ctx->pc = 0x238344u;
    // NOP
    // 0x238348: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x238348u;
    {
        const bool branch_taken_0x238348 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238348) {
            ctx->pc = 0x2383A4u;
            return;
        }
    }
    ctx->pc = 0x238350u;
    // 0x238350: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238354: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238358: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x238358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23835c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238360: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x238360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238364: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x238364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x238368: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x238368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x23836c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238370: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238374: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x238374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238378: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23837c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238380: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238384: 0x0  nop
    ctx->pc = 0x238384u;
    // NOP
    // 0x238388: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x238388u;
    {
        const bool branch_taken_0x238388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238388) {
            ctx->pc = 0x2383A4u;
            return;
        }
    }
    ctx->pc = 0x238390u;
    // 0x238390: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238394: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238398: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x238398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23839c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2383a0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2383a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x2383a4u;
}
