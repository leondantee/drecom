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

// Function: Set_effect_pl00_denki_lra
// Address: 0x2f3740 - 0x2f3d38
void Set_effect_pl00_denki_lra_0x2f3740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_denki_lra_0x2f3740");
#endif

    switch (ctx->pc) {
        case 0x2f377cu: goto label_2f377c;
        case 0x2f3798u: goto label_2f3798;
        case 0x2f37b4u: goto label_2f37b4;
        case 0x2f3848u: goto label_2f3848;
        case 0x2f38acu: goto label_2f38ac;
        case 0x2f3918u: goto label_2f3918;
        case 0x2f3980u: goto label_2f3980;
        case 0x2f39f4u: goto label_2f39f4;
        case 0x2f3a58u: goto label_2f3a58;
        case 0x2f3ac4u: goto label_2f3ac4;
        case 0x2f3b2cu: goto label_2f3b2c;
        case 0x2f3b98u: goto label_2f3b98;
        case 0x2f3cb0u: goto label_2f3cb0;
        case 0x2f3d24u: goto label_2f3d24;
        default: break;
    }

    ctx->pc = 0x2f3740u;

    // 0x2f3740: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f3740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f3744: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2f3744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2f3748: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2f3748u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f374c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f374cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f3750: 0x24428e40  addiu       $v0, $v0, -0x71C0
    ctx->pc = 0x2f3750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938176));
    // 0x2f3754: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2f3754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3758: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f3758u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398E40u));
    // 0x2f375c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f375cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f3760: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f3760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f3764: 0x24428e50  addiu       $v0, $v0, -0x71B0
    ctx->pc = 0x2f3764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938192));
    // 0x2f3768: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2f3768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f376c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f376cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398E50u));
    // 0x2f3770: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f3770u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f3774: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3774u;
    SET_GPR_U32(ctx, 31, 0x2F377Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3774u, 0x2F377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F377Cu;
label_2f377c:
    // 0x2f377c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f377cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f3780: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3784: 0x0  nop
    ctx->pc = 0x2f3784u;
    // NOP
    // 0x2f3788: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f3788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f378c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f378cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f3790: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3790u;
    SET_GPR_U32(ctx, 31, 0x2F3798u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3790u, 0x2F3798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3798u;
label_2f3798:
    // 0x2f3798: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f3798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f379c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f379cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f37a0: 0x0  nop
    ctx->pc = 0x2f37a0u;
    // NOP
    // 0x2f37a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f37a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f37a8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f37a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f37ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F37ACu;
    SET_GPR_U32(ctx, 31, 0x2F37B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F37ACu, 0x2F37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F37B4u;
label_2f37b4:
    // 0x2f37b4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f37b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f37b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f37bc: 0x0  nop
    ctx->pc = 0x2f37bcu;
    // NOP
    // 0x2f37c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f37c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f37c4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f37c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f37c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f37c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f37cc: 0x0  nop
    ctx->pc = 0x2f37ccu;
    // NOP
    // 0x2f37d0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f37d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f37d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f37d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f37d8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f37dc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f37dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f37e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f37e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f37e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f37e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f37e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f37ec: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f37ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f37f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f37f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f37f4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f37f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f37f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f37fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f37fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3804: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3808: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3808u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f380c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3810: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3814: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3818: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f381c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3820: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f3820u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f3824: 0x0  nop
    ctx->pc = 0x2f3824u;
    // NOP
    // 0x2f3828: 0x0  nop
    ctx->pc = 0x2f3828u;
    // NOP
    // 0x2f382c: 0x1010  mfhi        $v0
    ctx->pc = 0x2f382cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f3830: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F3830u;
    {
        const bool branch_taken_0x2f3830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3830) {
            ctx->pc = 0x2F38ACu;
            goto label_2f38ac;
        }
    }
    ctx->pc = 0x2F3838u;
    // 0x2f3838: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f383c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2f383cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f3840: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3840u;
    SET_GPR_U32(ctx, 31, 0x2F3848u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3840u, 0x2F3848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3848u;
label_2f3848:
    // 0x2f3848: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2f3848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2f384c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f384cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3850: 0x0  nop
    ctx->pc = 0x2f3850u;
    // NOP
    // 0x2f3854: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3854u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3858: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f3858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f385c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f385cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3860: 0x0  nop
    ctx->pc = 0x2f3860u;
    // NOP
    // 0x2f3864: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f3864u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f3868: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f386c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f386cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f3870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3874: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f3874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f3878: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f387c: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f387cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3880: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f3880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f3884: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f3884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3888: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f388c: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f388cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3890: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x2f3890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f3894: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f3894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3898: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f3898u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f389c: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f389cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f38a0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f38a0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f38a4: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F38A4u;
    SET_GPR_U32(ctx, 31, 0x2F38ACu);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F38A4u, 0x2F38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F38ACu;
label_2f38ac:
    // 0x2f38ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f38acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f38b0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f38b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f38b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f38b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f38b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f38bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f38c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f38c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f38c4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f38c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f38c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f38c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f38cc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f38d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f38d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f38d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f38d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f38d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f38dc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f38dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f38e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f38e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f38e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f38e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f38ec: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f38ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f38f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f38f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f38f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f38f8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f38f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f38fc: 0x0  nop
    ctx->pc = 0x2f38fcu;
    // NOP
    // 0x2f3900: 0x0  nop
    ctx->pc = 0x2f3900u;
    // NOP
    // 0x2f3904: 0x1010  mfhi        $v0
    ctx->pc = 0x2f3904u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f3908: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F3908u;
    {
        const bool branch_taken_0x2f3908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3908) {
            ctx->pc = 0x2F3980u;
            goto label_2f3980;
        }
    }
    ctx->pc = 0x2F3910u;
    // 0x2f3910: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3910u;
    SET_GPR_U32(ctx, 31, 0x2F3918u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3910u, 0x2F3918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3918u;
label_2f3918:
    // 0x2f3918: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2f3918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2f391c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f391cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3920: 0x0  nop
    ctx->pc = 0x2f3920u;
    // NOP
    // 0x2f3924: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3928: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f3928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f392c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f392cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3930: 0x0  nop
    ctx->pc = 0x2f3930u;
    // NOP
    // 0x2f3934: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f3934u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f3938: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f393c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f393cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f3940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3944: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f3944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f3948: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f394c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f394cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f3950: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3954: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f3954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3958: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f3958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f395c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f395cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3960: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3964: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f3964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3968: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x2f3968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f396c: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f396cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3970: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f3970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3974: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f3974u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3978: 0xc0bbf2c  jal         func_2EFCB0
    ctx->pc = 0x2F3978u;
    SET_GPR_U32(ctx, 31, 0x2F3980u);
    ctx->pc = 0x2EFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFCB0u, 0x2F3978u, 0x2F3980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3980u;
label_2f3980:
    // 0x2f3980: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3984: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3988: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f398c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f398cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3990: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3994: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3998: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f399c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f399cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f39a0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f39a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f39a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f39a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f39a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f39ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f39acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f39b0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f39b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f39b4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f39b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f39bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f39bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f39c0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f39c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f39c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f39c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f39c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f39c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f39cc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f39ccu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f39d0: 0x0  nop
    ctx->pc = 0x2f39d0u;
    // NOP
    // 0x2f39d4: 0x0  nop
    ctx->pc = 0x2f39d4u;
    // NOP
    // 0x2f39d8: 0x1010  mfhi        $v0
    ctx->pc = 0x2f39d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f39dc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F39DCu;
    {
        const bool branch_taken_0x2f39dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f39dc) {
            ctx->pc = 0x2F3A58u;
            goto label_2f3a58;
        }
    }
    ctx->pc = 0x2F39E4u;
    // 0x2f39e4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f39e8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2f39e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f39ec: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F39ECu;
    SET_GPR_U32(ctx, 31, 0x2F39F4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F39ECu, 0x2F39F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39F4u;
label_2f39f4:
    // 0x2f39f4: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2f39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2f39f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f39f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f39fc: 0x0  nop
    ctx->pc = 0x2f39fcu;
    // NOP
    // 0x2f3a00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3a04: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f3a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3a0c: 0x0  nop
    ctx->pc = 0x2f3a0cu;
    // NOP
    // 0x2f3a10: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f3a10u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f3a14: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3a18: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f3a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f3a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3a20: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f3a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f3a24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3a28: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f3a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3a2c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2f3a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f3a30: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f3a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3a34: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3a38: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f3a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3a3c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2f3a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f3a40: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f3a40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3a44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f3a44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f3a48: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f3a48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3a4c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f3a4cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3a50: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F3A50u;
    SET_GPR_U32(ctx, 31, 0x2F3A58u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F3A50u, 0x2F3A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A58u;
label_2f3a58:
    // 0x2f3a58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3a5c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3a60: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3a64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3a68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3a6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3a70: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3a74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3a78: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3a7c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3a80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3a88: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3a8c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f3a90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3a94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3a98: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3a98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3a9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3aa0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f3aa4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f3aa4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f3aa8: 0x0  nop
    ctx->pc = 0x2f3aa8u;
    // NOP
    // 0x2f3aac: 0x0  nop
    ctx->pc = 0x2f3aacu;
    // NOP
    // 0x2f3ab0: 0x1010  mfhi        $v0
    ctx->pc = 0x2f3ab0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f3ab4: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F3AB4u;
    {
        const bool branch_taken_0x2f3ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3ab4) {
            ctx->pc = 0x2F3B2Cu;
            goto label_2f3b2c;
        }
    }
    ctx->pc = 0x2F3ABCu;
    // 0x2f3abc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3ABCu;
    SET_GPR_U32(ctx, 31, 0x2F3AC4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3ABCu, 0x2F3AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3AC4u;
label_2f3ac4:
    // 0x2f3ac4: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2f3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2f3ac8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3acc: 0x0  nop
    ctx->pc = 0x2f3accu;
    // NOP
    // 0x2f3ad0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3ad4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f3ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3adc: 0x0  nop
    ctx->pc = 0x2f3adcu;
    // NOP
    // 0x2f3ae0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f3ae0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f3ae4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3ae8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f3ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f3aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3af0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f3af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f3af4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3af8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f3af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f3afc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3b00: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f3b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3b04: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2f3b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f3b08: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f3b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3b0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3b10: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f3b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3b14: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2f3b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f3b18: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f3b18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3b1c: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f3b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3b20: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f3b20u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3b24: 0xc0bbf2c  jal         func_2EFCB0
    ctx->pc = 0x2F3B24u;
    SET_GPR_U32(ctx, 31, 0x2F3B2Cu);
    ctx->pc = 0x2EFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFCB0u, 0x2F3B24u, 0x2F3B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B2Cu;
label_2f3b2c:
    // 0x2f3b2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3b30: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3b34: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3b38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3b3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3b40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3b44: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3b48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3b4c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3b50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3b54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3b5c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3b60: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f3b64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3b68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3b6c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3b6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3b70: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3b74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f3b78: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f3b78u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f3b7c: 0x0  nop
    ctx->pc = 0x2f3b7cu;
    // NOP
    // 0x2f3b80: 0x0  nop
    ctx->pc = 0x2f3b80u;
    // NOP
    // 0x2f3b84: 0x1010  mfhi        $v0
    ctx->pc = 0x2f3b84u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f3b88: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2F3B88u;
    {
        const bool branch_taken_0x2f3b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3b88) {
            ctx->pc = 0x2F3CB0u;
            goto label_2f3cb0;
        }
    }
    ctx->pc = 0x2F3B90u;
    // 0x2f3b90: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3B90u;
    SET_GPR_U32(ctx, 31, 0x2F3B98u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3B90u, 0x2F3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B98u;
label_2f3b98:
    // 0x2f3b98: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3b9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3ba0: 0x0  nop
    ctx->pc = 0x2f3ba0u;
    // NOP
    // 0x2f3ba4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3ba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3ba8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2f3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2f3bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3bb0: 0x0  nop
    ctx->pc = 0x2f3bb0u;
    // NOP
    // 0x2f3bb4: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f3bb4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f3bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3bbc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f3bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f3bc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3bc4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3bc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3bcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3bd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3bd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3bd8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3bdc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3be0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3be0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3be4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3be8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3bf0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3bf4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f3bf8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3bfc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3c00: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3c04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3c08: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2f3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2f3c0c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f3c0cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f3c10: 0x0  nop
    ctx->pc = 0x2f3c10u;
    // NOP
    // 0x2f3c14: 0x0  nop
    ctx->pc = 0x2f3c14u;
    // NOP
    // 0x2f3c18: 0x2810  mfhi        $a1
    ctx->pc = 0x2f3c18u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2f3c1c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3c20: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3c24: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3c28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3c30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3c34: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3c34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3c38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3c3c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3c40: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3c44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3c4c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3c50: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f3c54: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3c58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3c5c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3c5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3c60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3c64: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2f3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2f3c68: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f3c68u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f3c6c: 0x0  nop
    ctx->pc = 0x2f3c6cu;
    // NOP
    // 0x2f3c70: 0x0  nop
    ctx->pc = 0x2f3c70u;
    // NOP
    // 0x2f3c74: 0x4010  mfhi        $t0
    ctx->pc = 0x2f3c74u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x2f3c78: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3c7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f3c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f3c80: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3c84: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f3c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f3c88: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3c8c: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f3c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3c90: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f3c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3c94: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3c98: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f3c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3c9c: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f3c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3ca0: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f3ca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3ca4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f3ca4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3ca8: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F3CA8u;
    SET_GPR_U32(ctx, 31, 0x2F3CB0u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F3CA8u, 0x2F3CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3CB0u;
label_2f3cb0:
    // 0x2f3cb0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f3cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f3cb4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2f3cb4u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3cb8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2f3cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2f3cbc: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x2f3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x2f3cc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3cc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f3cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f3cc8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2f3cc8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3ccc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f3cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f3cd0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2f3cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2f3cd4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f3cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f3cd8: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2f3cd8u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3cdc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f3cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f3ce0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3ce8: 0x0  nop
    ctx->pc = 0x2f3ce8u;
    // NOP
    // 0x2f3cec: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f3cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2f3cf0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2f3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2f3cf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f3cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f3cf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3cfc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f3cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f3d00: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x2f3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x2f3d04: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2f3d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2f3d08: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f3d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f3d0c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f3d0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3d10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f3d10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3d14: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2f3d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f3d18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f3d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3d1c: 0xc086488  jal         func_219220
    ctx->pc = 0x2F3D1Cu;
    SET_GPR_U32(ctx, 31, 0x2F3D24u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2F3D1Cu, 0x2F3D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D24u;
label_2f3d24:
    // 0x2f3d24: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2f3d24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3d28: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f3d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f3d2c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2f3d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f3d30: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3D38u;
}
