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

// Function: caseD_0
// Address: 0x280444 - 0x2805f0
void caseD_0_0x280444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x280444");
#endif

    switch (ctx->pc) {
        case 0x2804b4u: goto label_2804b4;
        case 0x2804d8u: goto label_2804d8;
        case 0x280500u: goto label_280500;
        case 0x280534u: goto label_280534;
        case 0x280540u: goto label_280540;
        case 0x28055cu: goto label_28055c;
        case 0x280580u: goto label_280580;
        case 0x2805a8u: goto label_2805a8;
        case 0x2805dcu: goto label_2805dc;
        case 0x2805e8u: goto label_2805e8;
        default: break;
    }

    ctx->pc = 0x280444u;

    // 0x280444: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280448: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280448u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x28044c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x28044cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280450: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x280450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280454: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280458: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28045c: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x28045cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x280460: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280464: 0x8c267508  lw          $a2, 0x7508($at)
    ctx->pc = 0x280464u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387508u));
    // 0x280468: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x280468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28046c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x28046cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x280470: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x280470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x280474: 0x3065ff00  andi        $a1, $v1, 0xFF00
    ctx->pc = 0x280474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x280478: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x280478u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x28047c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28047cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x280480: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280484: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x280484u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x280488: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28048c: 0x3065007f  andi        $a1, $v1, 0x7F
    ctx->pc = 0x28048cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x280490: 0x14a002a9  bnez        $a1, . + 4 + (0x2A9 << 2)
    ctx->pc = 0x280490u;
    {
        const bool branch_taken_0x280490 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x280490) {
            ctx->pc = 0x280F38u;
            return;
        }
    }
    ctx->pc = 0x280498u;
    // 0x280498: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x280498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28049c: 0x24632070  addiu       $v1, $v1, 0x2070
    ctx->pc = 0x28049cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8304));
    // 0x2804a0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2804a0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x392070u));
    // 0x2804a4: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2804a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2804a8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2804a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2804ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2804ACu;
    SET_GPR_U32(ctx, 31, 0x2804B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2804ACu, 0x2804B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2804B4u;
label_2804b4:
    // 0x2804b4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2804b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2804b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2804b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2804bc: 0x0  nop
    ctx->pc = 0x2804bcu;
    // NOP
    // 0x2804c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2804c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2804c4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2804c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2804c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2804c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2804cc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2804ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2804d0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2804D0u;
    SET_GPR_U32(ctx, 31, 0x2804D8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2804D0u, 0x2804D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2804D8u;
label_2804d8:
    // 0x2804d8: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x2804d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x2804dc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2804dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2804e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2804e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2804e4: 0x0  nop
    ctx->pc = 0x2804e4u;
    // NOP
    // 0x2804e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2804e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2804ec: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2804ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2804f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2804f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2804f4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2804f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2804f8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2804F8u;
    SET_GPR_U32(ctx, 31, 0x280500u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2804F8u, 0x280500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280500u;
label_280500:
    // 0x280500: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x280500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x280504: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x280504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280508: 0x0  nop
    ctx->pc = 0x280508u;
    // NOP
    // 0x28050c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28050cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280510: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280514: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280518: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28051c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x28051cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x280520: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280520u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280524: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280528: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280528u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28052c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28052Cu;
    SET_GPR_U32(ctx, 31, 0x280534u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28052Cu, 0x280534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280534u;
label_280534:
    // 0x280534: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280534u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280538: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280538u;
    SET_GPR_U32(ctx, 31, 0x280540u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280538u, 0x280540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280540u;
label_280540:
    // 0x280540: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x280540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x280544: 0x24622070  addiu       $v0, $v1, 0x2070
    ctx->pc = 0x280544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8304));
    // 0x280548: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x280548u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392070u));
    // 0x28054c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x28054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280550: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x280550u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x280554: 0xc067648  jal         func_19D920
    ctx->pc = 0x280554u;
    SET_GPR_U32(ctx, 31, 0x28055Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280554u, 0x28055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28055Cu;
label_28055c:
    // 0x28055c: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x28055cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x280560: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x280560u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280564: 0x0  nop
    ctx->pc = 0x280564u;
    // NOP
    // 0x280568: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28056c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x28056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280574: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280578: 0xc067648  jal         func_19D920
    ctx->pc = 0x280578u;
    SET_GPR_U32(ctx, 31, 0x280580u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280578u, 0x280580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280580u;
label_280580:
    // 0x280580: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x280580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x280584: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x280584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x280588: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x280588u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28058c: 0x0  nop
    ctx->pc = 0x28058cu;
    // NOP
    // 0x280590: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280594: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280598: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28059c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x28059cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2805a0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2805A0u;
    SET_GPR_U32(ctx, 31, 0x2805A8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2805A0u, 0x2805A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805A8u;
label_2805a8:
    // 0x2805a8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2805a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2805ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2805acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2805b0: 0x0  nop
    ctx->pc = 0x2805b0u;
    // NOP
    // 0x2805b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2805b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2805b8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2805b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2805bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2805bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2805c0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2805c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2805c4: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2805c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2805c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2805c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2805cc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2805ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2805d0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2805d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2805d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2805D4u;
    SET_GPR_U32(ctx, 31, 0x2805DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2805D4u, 0x2805DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805DCu;
label_2805dc:
    // 0x2805dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2805dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2805e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2805E0u;
    SET_GPR_U32(ctx, 31, 0x2805E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2805E0u, 0x2805E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805E8u;
label_2805e8:
    // 0x2805e8: 0x10000253  b           . + 4 + (0x253 << 2)
    ctx->pc = 0x2805E8u;
    {
        const bool branch_taken_0x2805e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2805e8) {
            ctx->pc = 0x280F38u;
            return;
        }
    }
    ctx->pc = 0x2805F0u;
}
