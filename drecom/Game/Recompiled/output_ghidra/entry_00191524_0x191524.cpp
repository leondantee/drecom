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

// Function: entry_00191524
// Address: 0x191524 - 0x191708
void entry_00191524_0x191524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191524_0x191524");
#endif

    switch (ctx->pc) {
        case 0x1915a8u: goto label_1915a8;
        case 0x1915b4u: goto label_1915b4;
        case 0x1915c0u: goto label_1915c0;
        case 0x1915ccu: goto label_1915cc;
        case 0x1916d8u: goto label_1916d8;
        case 0x1916ecu: goto label_1916ec;
        case 0x1916fcu: goto label_1916fc;
        default: break;
    }

    ctx->pc = 0x191524u;

    // 0x191524: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19152c: 0x0  nop
    ctx->pc = 0x19152cu;
    // NOP
    // 0x191530: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x191530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x191534: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19153c: 0x0  nop
    ctx->pc = 0x19153cu;
    // NOP
    // 0x191540: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x191540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x191544: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19154c: 0x0  nop
    ctx->pc = 0x19154cu;
    // NOP
    // 0x191550: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x191550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x191554: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19155c: 0x0  nop
    ctx->pc = 0x19155cu;
    // NOP
    // 0x191560: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x191560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x191564: 0xc62100f0  lwc1        $f1, 0xF0($s1)
    ctx->pc = 0x191564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191568: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x191568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19156c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19156cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x191570: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x191570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191574: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x191574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x191578: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x191578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19157c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x19157cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x191580: 0xc62100f0  lwc1        $f1, 0xF0($s1)
    ctx->pc = 0x191580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191584: 0xc620010c  lwc1        $f0, 0x10C($s1)
    ctx->pc = 0x191584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191588: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x191588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19158c: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x19158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191590: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x191590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x191594: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x191594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191598: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x191598u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19159c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19159cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1915a0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1915A0u;
    SET_GPR_U32(ctx, 31, 0x1915A8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1915A0u, 0x1915A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915A8u;
label_1915a8:
    // 0x1915a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1915a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1915ac: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1915ACu;
    SET_GPR_U32(ctx, 31, 0x1915B4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1915ACu, 0x1915B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915B4u;
label_1915b4:
    // 0x1915b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1915b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1915b8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1915B8u;
    SET_GPR_U32(ctx, 31, 0x1915C0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1915B8u, 0x1915C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915C0u;
label_1915c0:
    // 0x1915c0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1915c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1915c4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1915C4u;
    SET_GPR_U32(ctx, 31, 0x1915CCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1915C4u, 0x1915CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915CCu;
label_1915cc:
    // 0x1915cc: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1915ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1915d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1915d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1915d4: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x1915d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1915d8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1915d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1915dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1915dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1915e0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1915e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1915e4: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1915e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1915e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1915e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1915ec: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x1915ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1915f0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1915f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1915f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1915f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1915f8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1915f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1915fc: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1915fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x191600: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x191600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191604: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x191604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x191608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19160c: 0x0  nop
    ctx->pc = 0x19160cu;
    // NOP
    // 0x191610: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x191610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x191614: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x191614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x191618: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x191618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19161c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19161cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x191620: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x191620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x191624: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x191624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x191628: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x191628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19162c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x191630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191634: 0x0  nop
    ctx->pc = 0x191634u;
    // NOP
    // 0x191638: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x191638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19163c: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x19163cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x191640: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x191640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191644: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x191644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x191648: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x191648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x19164c: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x19164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x191650: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x191650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191654: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x191654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x191658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19165c: 0x0  nop
    ctx->pc = 0x19165cu;
    // NOP
    // 0x191660: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x191660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x191664: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x191664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x191668: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x191668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19166c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19166cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x191670: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x191670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x191674: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x191674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x191678: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x191678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19167c: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x19167cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x191680: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x191680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191684: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x191684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x191688: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x191688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x19168c: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x19168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x191690: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x191690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191694: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x191694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x191698: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x191698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19169c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19169cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1916a0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1916a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1916a4: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1916a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1916a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1916a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1916ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1916acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1916b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1916b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1916b4: 0x0  nop
    ctx->pc = 0x1916b4u;
    // NOP
    // 0x1916b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1916b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1916bc: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x1916bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1916c0: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1916c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1916c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1916c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1916c8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1916c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1916cc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1916ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1916d0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1916D0u;
    SET_GPR_U32(ctx, 31, 0x1916D8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1916D8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1916D8u) { return; }
    ctx->pc = 0x1916D8u;
label_1916d8:
    // 0x1916d8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1916d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1916dc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1916dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1916e0: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x1916e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1916e4: 0xc040d62  jal         func_103588
    ctx->pc = 0x1916E4u;
    SET_GPR_U32(ctx, 31, 0x1916ECu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x1916ECu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1916ECu) { return; }
    ctx->pc = 0x1916ECu;
label_1916ec:
    // 0x1916ec: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1916ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1916f0: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x1916f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x1916f4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1916F4u;
    SET_GPR_U32(ctx, 31, 0x1916FCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1916FCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1916FCu) { return; }
    ctx->pc = 0x1916FCu;
label_1916fc:
    // 0x1916fc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1916fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191700: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x191700u;
    {
        const bool branch_taken_0x191700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191700) {
            ctx->pc = 0x191730u;
            return;
        }
    }
    ctx->pc = 0x191708u;
}
