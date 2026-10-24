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

// Function: entry_0023c1f4
// Address: 0x23c1f4 - 0x23c28c
void entry_0023c1f4_0x23c1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c1f4_0x23c1f4");
#endif

    switch (ctx->pc) {
        case 0x23c21cu: goto label_23c21c;
        default: break;
    }

    ctx->pc = 0x23c1f4u;

    // 0x23c1f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c1f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c1fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c200: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c204: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23c204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23c208: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c20c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23c20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23c210: 0xc44d0038  lwc1        $f13, 0x38($v0)
    ctx->pc = 0x23c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23c214: 0xc05c848  jal         func_172120
    ctx->pc = 0x23C214u;
    SET_GPR_U32(ctx, 31, 0x23C21Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23C214u, 0x23C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C21Cu;
label_23c21c:
    // 0x23c21c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23c220: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x23c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c228: 0x0  nop
    ctx->pc = 0x23c228u;
    // NOP
    // 0x23c22c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23c22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c230: 0x0  nop
    ctx->pc = 0x23c230u;
    // NOP
    // 0x23c234: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x23C234u;
    {
        const bool branch_taken_0x23c234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c234) {
            ctx->pc = 0x23C28Cu;
            return;
        }
    }
    ctx->pc = 0x23C23Cu;
    // 0x23c23c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c240: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c244: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x23c244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c248: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c24c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23c24cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c250: 0x0  nop
    ctx->pc = 0x23c250u;
    // NOP
    // 0x23c254: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x23C254u;
    {
        const bool branch_taken_0x23c254 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c254) {
            ctx->pc = 0x23C2D4u;
            return;
        }
    }
    ctx->pc = 0x23C25Cu;
    // 0x23c25c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23c260: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23c260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23c264: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c268: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23c268u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x23c26c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23c270: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23c270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23c274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c278: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c27c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c280: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23c280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23c284: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23C284u;
    {
        const bool branch_taken_0x23c284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c284) {
            ctx->pc = 0x23C2D4u;
            return;
        }
    }
    ctx->pc = 0x23C28Cu;
}
