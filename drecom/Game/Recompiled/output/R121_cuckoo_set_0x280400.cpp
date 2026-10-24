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

// Function: R121_cuckoo_set
// Address: 0x280400 - 0x280f48
void R121_cuckoo_set_0x280400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R121_cuckoo_set_0x280400");
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
        case 0x280660u: goto label_280660;
        case 0x280684u: goto label_280684;
        case 0x2806acu: goto label_2806ac;
        case 0x2806e0u: goto label_2806e0;
        case 0x2806ecu: goto label_2806ec;
        case 0x280708u: goto label_280708;
        case 0x28072cu: goto label_28072c;
        case 0x280754u: goto label_280754;
        case 0x280788u: goto label_280788;
        case 0x280794u: goto label_280794;
        case 0x280804u: goto label_280804;
        case 0x280828u: goto label_280828;
        case 0x280850u: goto label_280850;
        case 0x280884u: goto label_280884;
        case 0x280890u: goto label_280890;
        case 0x2808acu: goto label_2808ac;
        case 0x2808d0u: goto label_2808d0;
        case 0x2808f8u: goto label_2808f8;
        case 0x28092cu: goto label_28092c;
        case 0x280938u: goto label_280938;
        case 0x2809b0u: goto label_2809b0;
        case 0x2809d4u: goto label_2809d4;
        case 0x2809fcu: goto label_2809fc;
        case 0x280a30u: goto label_280a30;
        case 0x280a3cu: goto label_280a3c;
        case 0x280a58u: goto label_280a58;
        case 0x280a7cu: goto label_280a7c;
        case 0x280aa4u: goto label_280aa4;
        case 0x280ad8u: goto label_280ad8;
        case 0x280ae4u: goto label_280ae4;
        case 0x280b54u: goto label_280b54;
        case 0x280b78u: goto label_280b78;
        case 0x280ba0u: goto label_280ba0;
        case 0x280bd4u: goto label_280bd4;
        case 0x280be0u: goto label_280be0;
        case 0x280bfcu: goto label_280bfc;
        case 0x280c20u: goto label_280c20;
        case 0x280c48u: goto label_280c48;
        case 0x280c7cu: goto label_280c7c;
        case 0x280c88u: goto label_280c88;
        case 0x280d00u: goto label_280d00;
        case 0x280d24u: goto label_280d24;
        case 0x280d4cu: goto label_280d4c;
        case 0x280d80u: goto label_280d80;
        case 0x280d8cu: goto label_280d8c;
        case 0x280dacu: goto label_280dac;
        case 0x280dd0u: goto label_280dd0;
        case 0x280df8u: goto label_280df8;
        case 0x280e2cu: goto label_280e2c;
        case 0x280e3cu: goto label_280e3c;
        case 0x280eb0u: goto label_280eb0;
        case 0x280ed4u: goto label_280ed4;
        case 0x280ef8u: goto label_280ef8;
        case 0x280f2cu: goto label_280f2c;
        case 0x280f38u: goto label_280f38;
        default: break;
    }

    ctx->pc = 0x280400u;

    // 0x280400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x280404: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x280404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x280408: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x280408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x28040c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x28040cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x280410: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x280410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x280414: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x280414u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x280418: 0x20860001  addi        $a2, $a0, 0x1
    ctx->pc = 0x280418u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x28041c: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x28041cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x280420: 0x102002c5  beqz        $at, . + 4 + (0x2C5 << 2)
    ctx->pc = 0x280420u;
    {
        const bool branch_taken_0x280420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x280420) {
            ctx->pc = 0x280F38u;
            goto label_280f38;
        }
    }
    ctx->pc = 0x280428u;
    // 0x280428: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x280428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x28042c: 0x24841620  addiu       $a0, $a0, 0x1620
    ctx->pc = 0x28042cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5664));
    // 0x280430: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x280430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x280434: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280438: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x280438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28043c: 0x800008  jr          $a0
    ctx->pc = 0x28043Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280444u: goto label_280444;
            case 0x2805F0u: goto label_2805f0;
            case 0x280794u: goto label_280794;
            case 0x280940u: goto label_280940;
            case 0x280C90u: goto label_280c90;
            case 0x280F38u: goto label_280f38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28043Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280444u;
label_280444:
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
            goto label_280f38;
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
            goto label_280f38;
        }
    }
    ctx->pc = 0x2805F0u;
label_2805f0:
    // 0x2805f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2805f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2805f4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2805f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2805f8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2805f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2805fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2805fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280600: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280604: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280608: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x280608u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x28060c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28060cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280610: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280610u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280614: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280618: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x280618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28061c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28061cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280620: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x280620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x280624: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x280624u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x280628: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x280628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28062c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280630: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x280630u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x280634: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280638: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x280638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x28063c: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x28063Cu;
    {
        const bool branch_taken_0x28063c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28063c) {
            ctx->pc = 0x280794u;
            goto label_280794;
        }
    }
    ctx->pc = 0x280644u;
    // 0x280644: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280648: 0x24422080  addiu       $v0, $v0, 0x2080
    ctx->pc = 0x280648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8320));
    // 0x28064c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x28064cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392080u));
    // 0x280650: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x280650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280654: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x280654u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x280658: 0xc067648  jal         func_19D920
    ctx->pc = 0x280658u;
    SET_GPR_U32(ctx, 31, 0x280660u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280658u, 0x280660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280660u;
label_280660:
    // 0x280660: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280668: 0x0  nop
    ctx->pc = 0x280668u;
    // NOP
    // 0x28066c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28066cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280670: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280674: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280678: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28067c: 0xc067648  jal         func_19D920
    ctx->pc = 0x28067Cu;
    SET_GPR_U32(ctx, 31, 0x280684u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x28067Cu, 0x280684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280684u;
label_280684:
    // 0x280684: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x280684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x280688: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x28068c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28068cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280690: 0x0  nop
    ctx->pc = 0x280690u;
    // NOP
    // 0x280694: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280698: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28069c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28069cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2806a0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2806a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2806a4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2806A4u;
    SET_GPR_U32(ctx, 31, 0x2806ACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2806A4u, 0x2806ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806ACu;
label_2806ac:
    // 0x2806ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2806acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2806b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2806b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2806b4: 0x0  nop
    ctx->pc = 0x2806b4u;
    // NOP
    // 0x2806b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2806b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2806bc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2806bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2806c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2806c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2806c4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2806c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2806c8: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x2806c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x2806cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2806ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2806d0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2806d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2806d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2806d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2806d8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2806D8u;
    SET_GPR_U32(ctx, 31, 0x2806E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2806D8u, 0x2806E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806E0u;
label_2806e0:
    // 0x2806e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2806e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2806e4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2806E4u;
    SET_GPR_U32(ctx, 31, 0x2806ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2806E4u, 0x2806ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806ECu;
label_2806ec:
    // 0x2806ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2806ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2806f0: 0x24422080  addiu       $v0, $v0, 0x2080
    ctx->pc = 0x2806f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8320));
    // 0x2806f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2806f4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392080u));
    // 0x2806f8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2806f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2806fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2806fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x280700: 0xc067648  jal         func_19D920
    ctx->pc = 0x280700u;
    SET_GPR_U32(ctx, 31, 0x280708u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280700u, 0x280708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280708u;
label_280708:
    // 0x280708: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x28070c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28070cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280710: 0x0  nop
    ctx->pc = 0x280710u;
    // NOP
    // 0x280714: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280718: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28071c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28071cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280720: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280724: 0xc067648  jal         func_19D920
    ctx->pc = 0x280724u;
    SET_GPR_U32(ctx, 31, 0x28072Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280724u, 0x28072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28072Cu;
label_28072c:
    // 0x28072c: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x28072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x280730: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x280734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280738: 0x0  nop
    ctx->pc = 0x280738u;
    // NOP
    // 0x28073c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28073cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280740: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280744: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280748: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28074c: 0xc067648  jal         func_19D920
    ctx->pc = 0x28074Cu;
    SET_GPR_U32(ctx, 31, 0x280754u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x28074Cu, 0x280754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280754u;
label_280754:
    // 0x280754: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28075c: 0x0  nop
    ctx->pc = 0x28075cu;
    // NOP
    // 0x280760: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280764: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280768: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28076c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x28076cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280770: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x280770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x280774: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280774u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280778: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28077c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28077cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280780: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280780u;
    SET_GPR_U32(ctx, 31, 0x280788u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280780u, 0x280788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280788u;
label_280788:
    // 0x280788: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28078c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28078Cu;
    SET_GPR_U32(ctx, 31, 0x280794u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28078Cu, 0x280794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280794u;
label_280794:
    // 0x280794: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280798: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280798u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x28079c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x28079cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2807a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2807a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2807a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2807a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2807a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2807a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2807ac: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2807acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2807b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2807b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2807b4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2807b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2807b8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2807b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2807bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2807bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2807c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2807c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2807c4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2807c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2807c8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2807c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2807cc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2807ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2807d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2807d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2807d4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2807d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2807d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2807d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2807dc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2807dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2807e0: 0x146001d5  bnez        $v1, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x2807E0u;
    {
        const bool branch_taken_0x2807e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2807e0) {
            ctx->pc = 0x280F38u;
            goto label_280f38;
        }
    }
    ctx->pc = 0x2807E8u;
    // 0x2807e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2807e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2807ec: 0x24422090  addiu       $v0, $v0, 0x2090
    ctx->pc = 0x2807ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
    // 0x2807f0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2807f0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392090u));
    // 0x2807f4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2807f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2807f8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2807f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2807fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2807FCu;
    SET_GPR_U32(ctx, 31, 0x280804u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2807FCu, 0x280804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280804u;
label_280804:
    // 0x280804: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280808: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28080c: 0x0  nop
    ctx->pc = 0x28080cu;
    // NOP
    // 0x280810: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280814: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280818: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28081c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x28081cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280820: 0xc067648  jal         func_19D920
    ctx->pc = 0x280820u;
    SET_GPR_U32(ctx, 31, 0x280828u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280820u, 0x280828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280828u;
label_280828:
    // 0x280828: 0x3c024509  lui         $v0, 0x4509
    ctx->pc = 0x280828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17673 << 16));
    // 0x28082c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x28082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x280830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280834: 0x0  nop
    ctx->pc = 0x280834u;
    // NOP
    // 0x280838: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280838u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28083c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x28083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280840: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280844: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280848: 0xc067648  jal         func_19D920
    ctx->pc = 0x280848u;
    SET_GPR_U32(ctx, 31, 0x280850u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280848u, 0x280850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280850u;
label_280850:
    // 0x280850: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280854: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280858: 0x0  nop
    ctx->pc = 0x280858u;
    // NOP
    // 0x28085c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28085cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280860: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280864: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280868: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28086c: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x28086cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x280870: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280870u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280874: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280878: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280878u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28087c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28087Cu;
    SET_GPR_U32(ctx, 31, 0x280884u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28087Cu, 0x280884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280884u;
label_280884:
    // 0x280884: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280888: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280888u;
    SET_GPR_U32(ctx, 31, 0x280890u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280888u, 0x280890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280890u;
label_280890:
    // 0x280890: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280894: 0x24422090  addiu       $v0, $v0, 0x2090
    ctx->pc = 0x280894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
    // 0x280898: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x280898u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392090u));
    // 0x28089c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x28089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2808a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2808a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2808a4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2808A4u;
    SET_GPR_U32(ctx, 31, 0x2808ACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2808A4u, 0x2808ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808ACu;
label_2808ac:
    // 0x2808ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2808acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2808b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2808b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2808b4: 0x0  nop
    ctx->pc = 0x2808b4u;
    // NOP
    // 0x2808b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2808b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2808bc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2808bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2808c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2808c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2808c4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2808c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2808c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2808C8u;
    SET_GPR_U32(ctx, 31, 0x2808D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2808C8u, 0x2808D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808D0u;
label_2808d0:
    // 0x2808d0: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x2808d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x2808d4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x2808d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x2808d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2808d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2808dc: 0x0  nop
    ctx->pc = 0x2808dcu;
    // NOP
    // 0x2808e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2808e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2808e4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2808e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2808e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2808e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2808ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2808ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2808f0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2808F0u;
    SET_GPR_U32(ctx, 31, 0x2808F8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2808F0u, 0x2808F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808F8u;
label_2808f8:
    // 0x2808f8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2808f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2808fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2808fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280900: 0x0  nop
    ctx->pc = 0x280900u;
    // NOP
    // 0x280904: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280908: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28090c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28090cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280910: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280914: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x280914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x280918: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280918u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28091c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x28091cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280920: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280920u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280924: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280924u;
    SET_GPR_U32(ctx, 31, 0x28092Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280924u, 0x28092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28092Cu;
label_28092c:
    // 0x28092c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28092cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280930: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280930u;
    SET_GPR_U32(ctx, 31, 0x280938u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280930u, 0x280938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280938u;
label_280938:
    // 0x280938: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x280938u;
    {
        const bool branch_taken_0x280938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280938) {
            ctx->pc = 0x280F38u;
            goto label_280f38;
        }
    }
    ctx->pc = 0x280940u;
label_280940:
    // 0x280940: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280944: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280944u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280948: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28094c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28094cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280954: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280958: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x280958u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x28095c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28095cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280960: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280960u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280964: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280968: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x280968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28096c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280970: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x280970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x280974: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x280974u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x280978: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x280978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28097c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28097cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280980: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x280980u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x280984: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280988: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x280988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x28098c: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x28098Cu;
    {
        const bool branch_taken_0x28098c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28098c) {
            ctx->pc = 0x280AE4u;
            goto label_280ae4;
        }
    }
    ctx->pc = 0x280994u;
    // 0x280994: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280998: 0x24422080  addiu       $v0, $v0, 0x2080
    ctx->pc = 0x280998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8320));
    // 0x28099c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x28099cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392080u));
    // 0x2809a0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2809a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2809a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2809a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2809a8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2809A8u;
    SET_GPR_U32(ctx, 31, 0x2809B0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2809A8u, 0x2809B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809B0u;
label_2809b0:
    // 0x2809b0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2809b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2809b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2809b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2809b8: 0x0  nop
    ctx->pc = 0x2809b8u;
    // NOP
    // 0x2809bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2809bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2809c0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2809c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2809c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2809c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2809c8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2809c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2809cc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2809CCu;
    SET_GPR_U32(ctx, 31, 0x2809D4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2809CCu, 0x2809D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809D4u;
label_2809d4:
    // 0x2809d4: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x2809d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x2809d8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2809d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2809dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2809dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2809e0: 0x0  nop
    ctx->pc = 0x2809e0u;
    // NOP
    // 0x2809e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2809e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2809e8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2809e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2809ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2809ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2809f0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2809f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2809f4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2809F4u;
    SET_GPR_U32(ctx, 31, 0x2809FCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2809F4u, 0x2809FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809FCu;
label_2809fc:
    // 0x2809fc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2809fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280a00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280a04: 0x0  nop
    ctx->pc = 0x280a04u;
    // NOP
    // 0x280a08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280a0c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280a14: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280a18: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x280a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x280a1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280a1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280a20: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280a24: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280a24u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280a28: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280A28u;
    SET_GPR_U32(ctx, 31, 0x280A30u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280A28u, 0x280A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A30u;
label_280a30:
    // 0x280a30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280a30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280a34: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280A34u;
    SET_GPR_U32(ctx, 31, 0x280A3Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280A34u, 0x280A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A3Cu;
label_280a3c:
    // 0x280a3c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280a40: 0x24422080  addiu       $v0, $v0, 0x2080
    ctx->pc = 0x280a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8320));
    // 0x280a44: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x280a44u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392080u));
    // 0x280a48: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x280a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280a4c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x280a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x280a50: 0xc067648  jal         func_19D920
    ctx->pc = 0x280A50u;
    SET_GPR_U32(ctx, 31, 0x280A58u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280A50u, 0x280A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A58u;
label_280a58:
    // 0x280a58: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280a5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280a60: 0x0  nop
    ctx->pc = 0x280a60u;
    // NOP
    // 0x280a64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280a64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280a68: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280a6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280a70: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280a74: 0xc067648  jal         func_19D920
    ctx->pc = 0x280A74u;
    SET_GPR_U32(ctx, 31, 0x280A7Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280A74u, 0x280A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A7Cu;
label_280a7c:
    // 0x280a7c: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x280a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x280a80: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x280a84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280a88: 0x0  nop
    ctx->pc = 0x280a88u;
    // NOP
    // 0x280a8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280a90: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280a98: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280a9c: 0xc067648  jal         func_19D920
    ctx->pc = 0x280A9Cu;
    SET_GPR_U32(ctx, 31, 0x280AA4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280A9Cu, 0x280AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AA4u;
label_280aa4:
    // 0x280aa4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280aa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280aac: 0x0  nop
    ctx->pc = 0x280aacu;
    // NOP
    // 0x280ab0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280ab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280ab4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280ab8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280abc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280ac0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x280ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x280ac4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280ac4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280ac8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280acc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280accu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280ad0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280AD0u;
    SET_GPR_U32(ctx, 31, 0x280AD8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280AD0u, 0x280AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AD8u;
label_280ad8:
    // 0x280ad8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280ad8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280adc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280ADCu;
    SET_GPR_U32(ctx, 31, 0x280AE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280ADCu, 0x280AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AE4u;
label_280ae4:
    // 0x280ae4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280ae8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280aec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280af0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x280af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280af4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280af8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280afc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x280afcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x280b00: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280b04: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280b04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280b08: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280b0c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x280b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280b10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280b14: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x280b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x280b18: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x280b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x280b1c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x280b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x280b20: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280b24: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x280b24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x280b28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280b2c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x280b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x280b30: 0x14600101  bnez        $v1, . + 4 + (0x101 << 2)
    ctx->pc = 0x280B30u;
    {
        const bool branch_taken_0x280b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280b30) {
            ctx->pc = 0x280F38u;
            goto label_280f38;
        }
    }
    ctx->pc = 0x280B38u;
    // 0x280b38: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280b3c: 0x24422070  addiu       $v0, $v0, 0x2070
    ctx->pc = 0x280b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8304));
    // 0x280b40: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x280b40u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392070u));
    // 0x280b44: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x280b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280b48: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x280b48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x280b4c: 0xc067648  jal         func_19D920
    ctx->pc = 0x280B4Cu;
    SET_GPR_U32(ctx, 31, 0x280B54u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280B4Cu, 0x280B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B54u;
label_280b54:
    // 0x280b54: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280b58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280b5c: 0x0  nop
    ctx->pc = 0x280b5cu;
    // NOP
    // 0x280b60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280b60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280b64: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280b68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280b6c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280b70: 0xc067648  jal         func_19D920
    ctx->pc = 0x280B70u;
    SET_GPR_U32(ctx, 31, 0x280B78u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280B70u, 0x280B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B78u;
label_280b78:
    // 0x280b78: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x280b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x280b7c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x280b80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280b84: 0x0  nop
    ctx->pc = 0x280b84u;
    // NOP
    // 0x280b88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280b8c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280b90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280b94: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280b98: 0xc067648  jal         func_19D920
    ctx->pc = 0x280B98u;
    SET_GPR_U32(ctx, 31, 0x280BA0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280B98u, 0x280BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BA0u;
label_280ba0:
    // 0x280ba0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280ba4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280ba8: 0x0  nop
    ctx->pc = 0x280ba8u;
    // NOP
    // 0x280bac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280bacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280bb0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280bb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280bb8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280bbc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x280bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x280bc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280bc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280bc4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280bc8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280bc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280bcc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280BCCu;
    SET_GPR_U32(ctx, 31, 0x280BD4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280BCCu, 0x280BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BD4u;
label_280bd4:
    // 0x280bd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280bd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280bd8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280BD8u;
    SET_GPR_U32(ctx, 31, 0x280BE0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280BD8u, 0x280BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BE0u;
label_280be0:
    // 0x280be0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280be4: 0x24422070  addiu       $v0, $v0, 0x2070
    ctx->pc = 0x280be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8304));
    // 0x280be8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x280be8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392070u));
    // 0x280bec: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x280becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280bf0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x280bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x280bf4: 0xc067648  jal         func_19D920
    ctx->pc = 0x280BF4u;
    SET_GPR_U32(ctx, 31, 0x280BFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280BF4u, 0x280BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BFCu;
label_280bfc:
    // 0x280bfc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280c00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280c04: 0x0  nop
    ctx->pc = 0x280c04u;
    // NOP
    // 0x280c08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280c0c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280c10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280c14: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280c18: 0xc067648  jal         func_19D920
    ctx->pc = 0x280C18u;
    SET_GPR_U32(ctx, 31, 0x280C20u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280C18u, 0x280C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C20u;
label_280c20:
    // 0x280c20: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x280c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x280c24: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x280c28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280c2c: 0x0  nop
    ctx->pc = 0x280c2cu;
    // NOP
    // 0x280c30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280c30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280c34: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280c38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280c3c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280c40: 0xc067648  jal         func_19D920
    ctx->pc = 0x280C40u;
    SET_GPR_U32(ctx, 31, 0x280C48u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280C40u, 0x280C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C48u;
label_280c48:
    // 0x280c48: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280c4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280c50: 0x0  nop
    ctx->pc = 0x280c50u;
    // NOP
    // 0x280c54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280c58: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280c5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280c60: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280c64: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x280c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x280c68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280c68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280c6c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280c70: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280c70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280c74: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280C74u;
    SET_GPR_U32(ctx, 31, 0x280C7Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280C74u, 0x280C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C7Cu;
label_280c7c:
    // 0x280c7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280c7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280c80: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280C80u;
    SET_GPR_U32(ctx, 31, 0x280C88u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280C80u, 0x280C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C88u;
label_280c88:
    // 0x280c88: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x280C88u;
    {
        const bool branch_taken_0x280c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280c88) {
            ctx->pc = 0x280F38u;
            goto label_280f38;
        }
    }
    ctx->pc = 0x280C90u;
label_280c90:
    // 0x280c90: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280c94: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280c94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280c98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280c9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x280c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280ca0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280ca4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280ca8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x280ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x280cac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280cb0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280cb4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x280cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280cb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x280cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x280cbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280cc0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x280cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x280cc4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x280cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x280cc8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x280cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x280ccc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280cd0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x280cd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x280cd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280cd8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x280cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x280cdc: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x280CDCu;
    {
        const bool branch_taken_0x280cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280cdc) {
            ctx->pc = 0x280E40u;
            goto label_280e40;
        }
    }
    ctx->pc = 0x280CE4u;
    // 0x280ce4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280ce8: 0x24422090  addiu       $v0, $v0, 0x2090
    ctx->pc = 0x280ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
    // 0x280cec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x280cecu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x392090u));
    // 0x280cf0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x280cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280cf4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x280cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x280cf8: 0xc067648  jal         func_19D920
    ctx->pc = 0x280CF8u;
    SET_GPR_U32(ctx, 31, 0x280D00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280CF8u, 0x280D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D00u;
label_280d00:
    // 0x280d00: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280d04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280d08: 0x0  nop
    ctx->pc = 0x280d08u;
    // NOP
    // 0x280d0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280d0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280d10: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280d14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280d18: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280d1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x280D1Cu;
    SET_GPR_U32(ctx, 31, 0x280D24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280D1Cu, 0x280D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D24u;
label_280d24:
    // 0x280d24: 0x3c024509  lui         $v0, 0x4509
    ctx->pc = 0x280d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17673 << 16));
    // 0x280d28: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x280d2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280d30: 0x0  nop
    ctx->pc = 0x280d30u;
    // NOP
    // 0x280d34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280d34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280d38: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280d40: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280d44: 0xc067648  jal         func_19D920
    ctx->pc = 0x280D44u;
    SET_GPR_U32(ctx, 31, 0x280D4Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280D44u, 0x280D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D4Cu;
label_280d4c:
    // 0x280d4c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x280d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x280d50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x280d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280d54: 0x0  nop
    ctx->pc = 0x280d54u;
    // NOP
    // 0x280d58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280d58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280d5c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280d64: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280d68: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x280d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x280d6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280d6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280d70: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280d74: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280d74u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280d78: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280D78u;
    SET_GPR_U32(ctx, 31, 0x280D80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280D78u, 0x280D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D80u;
label_280d80:
    // 0x280d80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280d80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280d84: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280D84u;
    SET_GPR_U32(ctx, 31, 0x280D8Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280D84u, 0x280D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D8Cu;
label_280d8c:
    // 0x280d8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280d8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280d90: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x280d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x280d94: 0x24632090  addiu       $v1, $v1, 0x2090
    ctx->pc = 0x280d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8336));
    // 0x280d98: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x280d98u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x392090u));
    // 0x280d9c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x280d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280da0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x280da0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x280da4: 0xc067648  jal         func_19D920
    ctx->pc = 0x280DA4u;
    SET_GPR_U32(ctx, 31, 0x280DACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280DA4u, 0x280DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280DACu;
label_280dac:
    // 0x280dac: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x280dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x280db0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x280db0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280db4: 0x0  nop
    ctx->pc = 0x280db4u;
    // NOP
    // 0x280db8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280db8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280dbc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280dc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280dc4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280dc8: 0xc067648  jal         func_19D920
    ctx->pc = 0x280DC8u;
    SET_GPR_U32(ctx, 31, 0x280DD0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280DC8u, 0x280DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280DD0u;
label_280dd0:
    // 0x280dd0: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x280dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x280dd4: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x280dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x280dd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x280dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280ddc: 0x0  nop
    ctx->pc = 0x280ddcu;
    // NOP
    // 0x280de0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280de4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280de8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280de8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280dec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280df0: 0xc067648  jal         func_19D920
    ctx->pc = 0x280DF0u;
    SET_GPR_U32(ctx, 31, 0x280DF8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280DF0u, 0x280DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280DF8u;
label_280df8:
    // 0x280df8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x280df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x280dfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x280dfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280e00: 0x0  nop
    ctx->pc = 0x280e00u;
    // NOP
    // 0x280e04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280e04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280e08: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280e0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280e10: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280e14: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x280e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x280e18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280e18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280e1c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280e20: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280e20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280e24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280E24u;
    SET_GPR_U32(ctx, 31, 0x280E2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280E24u, 0x280E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E2Cu;
label_280e2c:
    // 0x280e2c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x280e2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280e30: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x280e30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x280e34: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280E34u;
    SET_GPR_U32(ctx, 31, 0x280E3Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280E34u, 0x280E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E3Cu;
label_280e3c:
    // 0x280e3c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x280e3cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_280e40:
    // 0x280e40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280e44: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280e44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280e48: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x280e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280e4c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x280e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x280e50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x280e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x280e54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280e58: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x280e58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x280e5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280e60: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x280e60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x280e64: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x280e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x280e68: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x280e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x280e6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x280e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x280e70: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x280e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x280e74: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x280e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x280e78: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x280e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x280e7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x280e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x280e80: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x280e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x280e84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x280e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x280e88: 0x3064007f  andi        $a0, $v1, 0x7F
    ctx->pc = 0x280e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x280e8c: 0x1480002a  bnez        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x280E8Cu;
    {
        const bool branch_taken_0x280e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x280e8c) {
            ctx->pc = 0x280F38u;
            goto label_280f38;
        }
    }
    ctx->pc = 0x280E94u;
    // 0x280e94: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x280e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x280e98: 0x24c220a0  addiu       $v0, $a2, 0x20A0
    ctx->pc = 0x280e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8352));
    // 0x280e9c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x280e9cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3920A0u));
    // 0x280ea0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x280ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280ea4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x280ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x280ea8: 0xc067648  jal         func_19D920
    ctx->pc = 0x280EA8u;
    SET_GPR_U32(ctx, 31, 0x280EB0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280EA8u, 0x280EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280EB0u;
label_280eb0:
    // 0x280eb0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280eb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280eb8: 0x0  nop
    ctx->pc = 0x280eb8u;
    // NOP
    // 0x280ebc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280ec0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x280ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280ec4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280ec8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x280ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280ecc: 0xc067648  jal         func_19D920
    ctx->pc = 0x280ECCu;
    SET_GPR_U32(ctx, 31, 0x280ED4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280ECCu, 0x280ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280ED4u;
label_280ed4:
    // 0x280ed4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x280ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x280ed8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x280ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280edc: 0x0  nop
    ctx->pc = 0x280edcu;
    // NOP
    // 0x280ee0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280ee4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x280ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280ee8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280eec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280ef0: 0xc067648  jal         func_19D920
    ctx->pc = 0x280EF0u;
    SET_GPR_U32(ctx, 31, 0x280EF8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x280EF0u, 0x280EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280EF8u;
label_280ef8:
    // 0x280ef8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x280ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x280efc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280f00: 0x0  nop
    ctx->pc = 0x280f00u;
    // NOP
    // 0x280f04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x280f04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x280f08: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x280f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280f0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280f10: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x280f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x280f14: 0x24040103  addiu       $a0, $zero, 0x103
    ctx->pc = 0x280f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x280f18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x280f18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280f1c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280f20: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280f20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280f24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x280F24u;
    SET_GPR_U32(ctx, 31, 0x280F2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x280F24u, 0x280F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280F2Cu;
label_280f2c:
    // 0x280f2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x280f2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x280f30: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x280F30u;
    SET_GPR_U32(ctx, 31, 0x280F38u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x280F30u, 0x280F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280F38u;
label_280f38:
    // 0x280f38: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x280f38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280f3c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x280f3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x280f40: 0x3e00008  jr          $ra
    ctx->pc = 0x280F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280F48u;
}
