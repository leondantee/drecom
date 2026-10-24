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

// Function: entry_0023853c
// Address: 0x23853c - 0x2385ec
void entry_0023853c_0x23853c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023853c_0x23853c");
#endif

    ctx->pc = 0x23853cu;

    // 0x23853c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238540: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238544: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x238544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238548: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23854c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238550: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x238550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238554: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x238554u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238558: 0x0  nop
    ctx->pc = 0x238558u;
    // NOP
    // 0x23855c: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x23855Cu;
    {
        const bool branch_taken_0x23855c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23855c) {
            ctx->pc = 0x238674u;
            return;
        }
    }
    ctx->pc = 0x238564u;
    // 0x238564: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238568: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23856c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x23856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238570: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238574: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238578: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x238578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23857c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23857cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238580: 0x0  nop
    ctx->pc = 0x238580u;
    // NOP
    // 0x238584: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x238584u;
    {
        const bool branch_taken_0x238584 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238584) {
            ctx->pc = 0x2385ECu;
            return;
        }
    }
    ctx->pc = 0x23858Cu;
    // 0x23858c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238590: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238594: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x238594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238598: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23859c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2385a0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2385a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2385a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2385a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2385a8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2385a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2385ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2385acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2385b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2385b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2385b4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2385b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2385b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2385b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2385bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2385bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2385c0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2385c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2385c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2385c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2385c8: 0x0  nop
    ctx->pc = 0x2385c8u;
    // NOP
    // 0x2385cc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2385CCu;
    {
        const bool branch_taken_0x2385cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2385cc) {
            ctx->pc = 0x2385ECu;
            return;
        }
    }
    ctx->pc = 0x2385D4u;
    // 0x2385d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2385d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2385d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2385d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2385dc: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x2385dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2385e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2385e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2385e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2385e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2385e8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2385e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->pc = 0x2385ecu;
}
