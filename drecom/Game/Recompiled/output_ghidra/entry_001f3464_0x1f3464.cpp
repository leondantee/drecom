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

// Function: entry_001f3464
// Address: 0x1f3464 - 0x1f3564
void entry_001f3464_0x1f3464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3464_0x1f3464");
#endif

    ctx->pc = 0x1f3464u;

    // 0x1f3464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3468: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f346c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3470: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f3470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f3474: 0x26021330  addiu       $v0, $s0, 0x1330
    ctx->pc = 0x1f3474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f3478: 0x26021330  addiu       $v0, $s0, 0x1330
    ctx->pc = 0x1f3478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f347c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1f347cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3480: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3484: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3488: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f3488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f348c: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f3490: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1f3490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1f3494: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1f3494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1f3498: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f349c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1f349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f34a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f34a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f34a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f34a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f34ac: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f34acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f34b0: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f34b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f34b4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1f34b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1f34b8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1f34b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1f34bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f34bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f34c0: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1f34c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f34c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f34c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f34c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f34cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f34d0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f34d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f34d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f34d8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f34dc: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1f34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x1f34e0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1f34e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1f34e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f34e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f34e8: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f34e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f34ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f34ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f34f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f34f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f34f8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f34f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f34fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3500: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f3500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3504: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1f3504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x1f3508: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1f3508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1f350c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f350cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3510: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f3510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3514: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f3514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f3518: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f351c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3520: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f3520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f3524: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3528: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f352c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1f352cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3534: 0x0  nop
    ctx->pc = 0x1f3534u;
    // NOP
    // 0x1f3538: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f3538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f353c: 0x0  nop
    ctx->pc = 0x1f353cu;
    // NOP
    // 0x1f3540: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F3540u;
    {
        const bool branch_taken_0x1f3540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3540) {
            ctx->pc = 0x1F3564u;
            return;
        }
    }
    ctx->pc = 0x1F3548u;
    // 0x1f3548: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f354c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f354cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3550: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1f3550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1f3554: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3558: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f3558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f355c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f355cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f3560: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f3560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x1f3564u;
}
