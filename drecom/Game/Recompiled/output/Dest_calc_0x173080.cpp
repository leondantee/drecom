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

// Function: Dest_calc
// Address: 0x173080 - 0x173238
void Dest_calc_0x173080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Dest_calc_0x173080");
#endif

    switch (ctx->pc) {
        case 0x1730fcu: goto label_1730fc;
        default: break;
    }

    ctx->pc = 0x173080u;

    // 0x173080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x173080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x173084: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x173084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x173088: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x173088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x17308c: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x17308cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x173090: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x173090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x173094: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x173094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x173098: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x173098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17309c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x17309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1730a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1730a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1730a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1730a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1730a8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1730a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1730ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1730acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1730b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1730b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1730b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1730b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1730b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1730b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1730bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1730bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1730c0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1730c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1730c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1730c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1730c8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1730c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1730cc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1730ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1730d0: 0x0  nop
    ctx->pc = 0x1730d0u;
    // NOP
    // 0x1730d4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1730D4u;
    {
        const bool branch_taken_0x1730d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1730d4) {
            ctx->pc = 0x173140u;
            goto label_173140;
        }
    }
    ctx->pc = 0x1730DCu;
    // 0x1730dc: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1730dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1730e0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1730e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1730e4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1730e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1730e8: 0x0  nop
    ctx->pc = 0x1730e8u;
    // NOP
    // 0x1730ec: 0x0  nop
    ctx->pc = 0x1730ecu;
    // NOP
    // 0x1730f0: 0x0  nop
    ctx->pc = 0x1730f0u;
    // NOP
    // 0x1730f4: 0xc045330  jal         func_114CC0
    ctx->pc = 0x1730F4u;
    SET_GPR_U32(ctx, 31, 0x1730FCu);
    ctx->pc = 0x114CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CC0u, 0x1730F4u, 0x1730FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1730FCu;
label_1730fc:
    // 0x1730fc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1730fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x173100: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x173100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173104: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173108: 0x0  nop
    ctx->pc = 0x173108u;
    // NOP
    // 0x17310c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17310cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173110: 0x0  nop
    ctx->pc = 0x173110u;
    // NOP
    // 0x173114: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x173114u;
    {
        const bool branch_taken_0x173114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173114) {
            ctx->pc = 0x173194u;
            goto label_173194;
        }
    }
    ctx->pc = 0x17311Cu;
    // 0x17311c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x17311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173120: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x173120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x173124: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x173124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17312c: 0x0  nop
    ctx->pc = 0x17312cu;
    // NOP
    // 0x173130: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173134: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x173134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x173138: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x173138u;
    {
        const bool branch_taken_0x173138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173138) {
            ctx->pc = 0x173194u;
            goto label_173194;
        }
    }
    ctx->pc = 0x173140u;
label_173140:
    // 0x173140: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x173140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173144: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173148: 0x0  nop
    ctx->pc = 0x173148u;
    // NOP
    // 0x17314c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17314cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173150: 0x0  nop
    ctx->pc = 0x173150u;
    // NOP
    // 0x173154: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x173154u;
    {
        const bool branch_taken_0x173154 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173154) {
            ctx->pc = 0x173178u;
            goto label_173178;
        }
    }
    ctx->pc = 0x17315Cu;
    // 0x17315c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x17315cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x173160: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x173160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173168: 0x0  nop
    ctx->pc = 0x173168u;
    // NOP
    // 0x17316c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17316cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x173170: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x173170u;
    {
        const bool branch_taken_0x173170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173170) {
            ctx->pc = 0x17318Cu;
            goto label_17318c;
        }
    }
    ctx->pc = 0x173178u;
label_173178:
    // 0x173178: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x173178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x17317c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173184: 0x0  nop
    ctx->pc = 0x173184u;
    // NOP
    // 0x173188: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x173188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_17318c:
    // 0x17318c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x17318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173190: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x173190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_173194:
    // 0x173194: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x173194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173198: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x173198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17319c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17319cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1731a0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1731a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1731a4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1731a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1731a8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1731a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1731ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1731acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1731b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1731b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1731b4: 0x0  nop
    ctx->pc = 0x1731b4u;
    // NOP
    // 0x1731b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1731b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1731bc: 0x0  nop
    ctx->pc = 0x1731bcu;
    // NOP
    // 0x1731c0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1731C0u;
    {
        const bool branch_taken_0x1731c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1731c0) {
            ctx->pc = 0x1731E4u;
            goto label_1731e4;
        }
    }
    ctx->pc = 0x1731C8u;
    // 0x1731c8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1731c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1731cc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1731ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1731d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1731d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1731d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1731d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1731d8: 0x0  nop
    ctx->pc = 0x1731d8u;
    // NOP
    // 0x1731dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1731dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1731e0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1731e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1731e4:
    // 0x1731e4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1731e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1731e8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1731e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1731ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1731ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1731f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1731f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1731f4: 0x0  nop
    ctx->pc = 0x1731f4u;
    // NOP
    // 0x1731f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1731f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1731fc: 0x0  nop
    ctx->pc = 0x1731fcu;
    // NOP
    // 0x173200: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x173200u;
    {
        const bool branch_taken_0x173200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173200) {
            ctx->pc = 0x173224u;
            goto label_173224;
        }
    }
    ctx->pc = 0x173208u;
    // 0x173208: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x173208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17320c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x17320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x173210: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x173210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173218: 0x0  nop
    ctx->pc = 0x173218u;
    // NOP
    // 0x17321c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17321cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x173220: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x173220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_173224:
    // 0x173224: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x173224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173228: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x173228u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17322c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17322cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x173230: 0x3e00008  jr          $ra
    ctx->pc = 0x173230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173238u;
}
