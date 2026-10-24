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

// Function: Change_Camera_Pos_Inter
// Address: 0x159460 - 0x15968c
void Change_Camera_Pos_Inter_0x159460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Change_Camera_Pos_Inter_0x159460");
#endif

    switch (ctx->pc) {
        case 0x1594fcu: goto label_1594fc;
        case 0x159528u: goto label_159528;
        case 0x15953cu: goto label_15953c;
        case 0x159550u: goto label_159550;
        case 0x1595fcu: goto label_1595fc;
        case 0x159654u: goto label_159654;
        case 0x159670u: goto label_159670;
        default: break;
    }

    ctx->pc = 0x159460u;

    // 0x159460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x159460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x159464: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x159464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x159468: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x159468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x15946c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15946cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x159470: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x159470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x159474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159478: 0x0  nop
    ctx->pc = 0x159478u;
    // NOP
    // 0x15947c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15947cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x159480: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159484: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x159484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159488: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15948c: 0xc4400190  lwc1        $f0, 0x190($v0)
    ctx->pc = 0x15948cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159490: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x159490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x159494: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x159494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x159498: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15949c: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x15949cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1594a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1594a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1594a4: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x1594a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1594a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1594a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1594ac: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1594acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1594b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1594b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1594b4: 0xc44101a8  lwc1        $f1, 0x1A8($v0)
    ctx->pc = 0x1594b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1594b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1594b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1594bc: 0xc4400198  lwc1        $f0, 0x198($v0)
    ctx->pc = 0x1594bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1594c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1594c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1594c4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1594c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1594c8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1594c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1594cc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1594ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1594d0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1594d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1594d4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1594d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1594d8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1594d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1594dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1594dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1594e0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1594e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1594e4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1594e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1594e8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1594e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1594ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1594ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1594f0: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x1594f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1594f4: 0xc045630  jal         func_1158C0
    ctx->pc = 0x1594F4u;
    SET_GPR_U32(ctx, 31, 0x1594FCu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x1594F4u, 0x1594FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1594FCu;
label_1594fc:
    // 0x1594fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1594fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159500: 0xe44001b8  swc1        $f0, 0x1B8($v0)
    ctx->pc = 0x159500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 440), bits); }
    // 0x159504: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x159504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159508: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x159508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15950c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15950cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159510: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x159510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159514: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x159514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159518: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x159518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15951c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15951cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x159520: 0xc045630  jal         func_1158C0
    ctx->pc = 0x159520u;
    SET_GPR_U32(ctx, 31, 0x159528u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x159520u, 0x159528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159528u;
label_159528:
    // 0x159528: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x159528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15952c: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x15952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159530: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x159530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x159534: 0xc0455e6  jal         func_115798
    ctx->pc = 0x159534u;
    SET_GPR_U32(ctx, 31, 0x15953Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x159534u, 0x15953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15953Cu;
label_15953c:
    // 0x15953c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x15953cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x159540: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x159540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159544: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x159544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x159548: 0xc0455e6  jal         func_115798
    ctx->pc = 0x159548u;
    SET_GPR_U32(ctx, 31, 0x159550u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x159548u, 0x159550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159550u;
label_159550:
    // 0x159550: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x159550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x159554: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x159554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x159558: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x159558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15955c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x15955cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x159560: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x159560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x159564: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x159564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x159568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15956c: 0x0  nop
    ctx->pc = 0x15956cu;
    // NOP
    // 0x159570: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x159570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x159574: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x159574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159578: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x159578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15957c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15957cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x159580: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159584: 0x0  nop
    ctx->pc = 0x159584u;
    // NOP
    // 0x159588: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x159588u;
    {
        const bool branch_taken_0x159588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159588) {
            ctx->pc = 0x1595ACu;
            goto label_1595ac;
        }
    }
    ctx->pc = 0x159590u;
    // 0x159590: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x159590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159594: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x159594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x159598: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x159598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15959c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1595a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1595a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1595a4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1595a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1595a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1595a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1595ac:
    // 0x1595ac: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1595acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1595b0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1595b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1595b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1595b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1595b8: 0x0  nop
    ctx->pc = 0x1595b8u;
    // NOP
    // 0x1595bc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1595BCu;
    {
        const bool branch_taken_0x1595bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1595bc) {
            ctx->pc = 0x1595E0u;
            goto label_1595e0;
        }
    }
    ctx->pc = 0x1595C4u;
    // 0x1595c4: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1595c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1595c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1595c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1595cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1595ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1595d0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1595d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1595d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1595d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1595d8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1595d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1595dc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1595dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1595e0:
    // 0x1595e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1595e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1595e4: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x1595e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1595e8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1595e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1595ec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1595ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1595f0: 0x24455550  addiu       $a1, $v0, 0x5550
    ctx->pc = 0x1595f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21840));
    // 0x1595f4: 0xc040d62  jal         func_103588
    ctx->pc = 0x1595F4u;
    SET_GPR_U32(ctx, 31, 0x1595FCu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x1595FCu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1595FCu) { return; }
    ctx->pc = 0x1595FCu;
label_1595fc:
    // 0x1595fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1595fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159600: 0xc4400190  lwc1        $f0, 0x190($v0)
    ctx->pc = 0x159600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159604: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x159604u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x159608: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x159608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15960c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159610: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x159610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159614: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x159614u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x159618: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x159618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15961c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15961cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159620: 0xc4400198  lwc1        $f0, 0x198($v0)
    ctx->pc = 0x159620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159624: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x159624u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x159628: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x159628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15962c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15962cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159630: 0x0  nop
    ctx->pc = 0x159630u;
    // NOP
    // 0x159634: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x159634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x159638: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15963c: 0x24440140  addiu       $a0, $v0, 0x140
    ctx->pc = 0x15963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x159640: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159644: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x159644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159648: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x159648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15964c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15964Cu;
    SET_GPR_U32(ctx, 31, 0x159654u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x159654u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159654u) { return; }
    ctx->pc = 0x159654u;
label_159654:
    // 0x159654: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15965c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159660: 0xe440014c  swc1        $f0, 0x14C($v0)
    ctx->pc = 0x159660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
    // 0x159664: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x159664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159668: 0xc0567fc  jal         func_159FF0
    ctx->pc = 0x159668u;
    SET_GPR_U32(ctx, 31, 0x159670u);
    ctx->pc = 0x159FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FF0u, 0x159668u, 0x159670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159670u;
label_159670:
    // 0x159670: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159674: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x159674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159678: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x159678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    // 0x15967c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15967cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159680: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x159680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159684: 0x3e00008  jr          $ra
    ctx->pc = 0x159684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15968Cu;
}
