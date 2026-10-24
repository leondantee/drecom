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

// Function: R102_init
// Address: 0x2796c0 - 0x279a54
void R102_init_0x2796c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R102_init_0x2796c0");
#endif

    switch (ctx->pc) {
        case 0x2796dcu: goto label_2796dc;
        case 0x2796e8u: goto label_2796e8;
        case 0x27970cu: goto label_27970c;
        case 0x279718u: goto label_279718;
        case 0x27973cu: goto label_27973c;
        case 0x279760u: goto label_279760;
        case 0x279784u: goto label_279784;
        case 0x2797b8u: goto label_2797b8;
        case 0x2797c4u: goto label_2797c4;
        case 0x279820u: goto label_279820;
        case 0x27982cu: goto label_27982c;
        case 0x279848u: goto label_279848;
        case 0x27986cu: goto label_27986c;
        case 0x279878u: goto label_279878;
        case 0x27989cu: goto label_27989c;
        case 0x2798c0u: goto label_2798c0;
        case 0x2798e4u: goto label_2798e4;
        case 0x279918u: goto label_279918;
        case 0x279924u: goto label_279924;
        case 0x279980u: goto label_279980;
        case 0x27998cu: goto label_27998c;
        case 0x2799a8u: goto label_2799a8;
        case 0x2799e4u: goto label_2799e4;
        case 0x279a1cu: goto label_279a1c;
        case 0x279a34u: goto label_279a34;
        case 0x279a40u: goto label_279a40;
        default: break;
    }

    ctx->pc = 0x2796c0u;

    // 0x2796c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2796c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2796c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2796c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2796c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2796c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2796cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2796ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2796d0: 0x2444fd80  addiu       $a0, $v0, -0x280
    ctx->pc = 0x2796d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966656));
    // 0x2796d4: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x2796D4u;
    SET_GPR_U32(ctx, 31, 0x2796DCu);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x2796D4u, 0x2796DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2796DCu;
label_2796dc:
    // 0x2796dc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2796dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2796e0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2796E0u;
    {
        const bool branch_taken_0x2796e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2796e0) {
            ctx->pc = 0x279830u;
            goto label_279830;
        }
    }
    ctx->pc = 0x2796E8u;
label_2796e8:
    // 0x2796e8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2796e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2796ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2796ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2796f0: 0x2442ff20  addiu       $v0, $v0, -0xE0
    ctx->pc = 0x2796f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967072));
    // 0x2796f4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2796f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2796f8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2796f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2796fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2796fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279700: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279700u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279704: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x279704u;
    SET_GPR_U32(ctx, 31, 0x27970Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x279704u, 0x27970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27970Cu;
label_27970c:
    // 0x27970c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27970cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279710: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279710u;
    SET_GPR_U32(ctx, 31, 0x279718u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279710u, 0x279718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279718u;
label_279718:
    // 0x279718: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x279718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27971c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279720: 0x2442ff20  addiu       $v0, $v0, -0xE0
    ctx->pc = 0x279720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967072));
    // 0x279724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x279724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279728: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x279728u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27972c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x279730: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x279730u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x279734: 0xc06765c  jal         func_19D970
    ctx->pc = 0x279734u;
    SET_GPR_U32(ctx, 31, 0x27973Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x279734u, 0x27973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27973Cu;
label_27973c:
    // 0x27973c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27973cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x279740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x279740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279744: 0x0  nop
    ctx->pc = 0x279744u;
    // NOP
    // 0x279748: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x279748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27974c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27974cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279750: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x279750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x279754: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x279754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x279758: 0xc06765c  jal         func_19D970
    ctx->pc = 0x279758u;
    SET_GPR_U32(ctx, 31, 0x279760u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x279758u, 0x279760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279760u;
label_279760:
    // 0x279760: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x279760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x279764: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x279764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279768: 0x0  nop
    ctx->pc = 0x279768u;
    // NOP
    // 0x27976c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27976cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x279770: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x279770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279774: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x279774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x279778: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x279778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27977c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27977Cu;
    SET_GPR_U32(ctx, 31, 0x279784u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27977Cu, 0x279784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279784u;
label_279784:
    // 0x279784: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x279784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x279788: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x279788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27978c: 0x0  nop
    ctx->pc = 0x27978cu;
    // NOP
    // 0x279790: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x279790u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x279794: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x279794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279798: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x279798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27979c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27979cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2797a0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2797a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2797a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2797a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2797a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2797a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2797ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2797acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2797b0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2797B0u;
    SET_GPR_U32(ctx, 31, 0x2797B8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2797B0u, 0x2797B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797B8u;
label_2797b8:
    // 0x2797b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2797b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2797bc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2797BCu;
    SET_GPR_U32(ctx, 31, 0x2797C4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2797BCu, 0x2797C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797C4u;
label_2797c4:
    // 0x2797c4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2797c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2797c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2797c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2797cc: 0x2442ff20  addiu       $v0, $v0, -0xE0
    ctx->pc = 0x2797ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967072));
    // 0x2797d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2797d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2797d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2797d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2797d8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2797d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2797dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2797dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2797e0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2797e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2797e4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2797e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2797e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2797e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2797ec: 0x0  nop
    ctx->pc = 0x2797ecu;
    // NOP
    // 0x2797f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2797f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2797f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2797f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2797f8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2797f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2797fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2797fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279800: 0x0  nop
    ctx->pc = 0x279800u;
    // NOP
    // 0x279804: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x279804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x279808: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x279808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x27980c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27980cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279810: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x279810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x279814: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279814u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279818: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x279818u;
    SET_GPR_U32(ctx, 31, 0x279820u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x279818u, 0x279820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279820u;
label_279820:
    // 0x279820: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x279820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279824: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279824u;
    SET_GPR_U32(ctx, 31, 0x27982Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279824u, 0x27982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27982Cu;
label_27982c:
    // 0x27982c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27982cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_279830:
    // 0x279830: 0x2e020017  sltiu       $v0, $s0, 0x17
    ctx->pc = 0x279830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x279834: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x279834u;
    {
        const bool branch_taken_0x279834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279834) {
            ctx->pc = 0x2796E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2796e8;
        }
    }
    ctx->pc = 0x27983Cu;
    // 0x27983c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27983cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279840: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x279840u;
    {
        const bool branch_taken_0x279840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279840) {
            ctx->pc = 0x279990u;
            goto label_279990;
        }
    }
    ctx->pc = 0x279848u;
label_279848:
    // 0x279848: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x279848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27984c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27984cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279850: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x279850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x279854: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x279854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279858: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x279858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27985c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27985cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279860: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279860u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279864: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x279864u;
    SET_GPR_U32(ctx, 31, 0x27986Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x279864u, 0x27986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27986Cu;
label_27986c:
    // 0x27986c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27986cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279870: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279870u;
    SET_GPR_U32(ctx, 31, 0x279878u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279870u, 0x279878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279878u;
label_279878:
    // 0x279878: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x279878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27987c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27987cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279880: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x279880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x279884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x279884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279888: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x279888u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27988c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x279890: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x279890u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x279894: 0xc06765c  jal         func_19D970
    ctx->pc = 0x279894u;
    SET_GPR_U32(ctx, 31, 0x27989Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x279894u, 0x27989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27989Cu;
label_27989c:
    // 0x27989c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27989cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2798a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2798a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2798a4: 0x0  nop
    ctx->pc = 0x2798a4u;
    // NOP
    // 0x2798a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2798a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2798ac: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2798acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2798b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2798b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2798b4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2798b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2798b8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2798B8u;
    SET_GPR_U32(ctx, 31, 0x2798C0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2798B8u, 0x2798C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2798C0u;
label_2798c0:
    // 0x2798c0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2798c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2798c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2798c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2798c8: 0x0  nop
    ctx->pc = 0x2798c8u;
    // NOP
    // 0x2798cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2798ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2798d0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2798d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2798d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2798d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2798d8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2798d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2798dc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2798DCu;
    SET_GPR_U32(ctx, 31, 0x2798E4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2798DCu, 0x2798E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2798E4u;
label_2798e4:
    // 0x2798e4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2798e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2798e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2798e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2798ec: 0x0  nop
    ctx->pc = 0x2798ecu;
    // NOP
    // 0x2798f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2798f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2798f4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2798f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2798f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2798f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2798fc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2798fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x279900: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x279900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x279904: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279908: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x279908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27990c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27990cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279910: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x279910u;
    SET_GPR_U32(ctx, 31, 0x279918u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x279910u, 0x279918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279918u;
label_279918:
    // 0x279918: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x279918u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27991c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27991Cu;
    SET_GPR_U32(ctx, 31, 0x279924u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27991Cu, 0x279924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279924u;
label_279924:
    // 0x279924: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x279924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x279928: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27992c: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x27992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x279930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x279930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279934: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x279934u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279938: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x279938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27993c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27993cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x279940: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x279940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279944: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x279944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x279948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x279948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27994c: 0x0  nop
    ctx->pc = 0x27994cu;
    // NOP
    // 0x279950: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x279950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x279954: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x279954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x279958: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x279958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27995c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27995cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279960: 0x0  nop
    ctx->pc = 0x279960u;
    // NOP
    // 0x279964: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x279964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x279968: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x279968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x27996c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27996cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279970: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x279970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x279974: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279974u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279978: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x279978u;
    SET_GPR_U32(ctx, 31, 0x279980u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x279978u, 0x279980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279980u;
label_279980:
    // 0x279980: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x279980u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279984: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279984u;
    SET_GPR_U32(ctx, 31, 0x27998Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279984u, 0x27998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27998Cu;
label_27998c:
    // 0x27998c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27998cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_279990:
    // 0x279990: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x279990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x279994: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x279994u;
    {
        const bool branch_taken_0x279994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279994) {
            ctx->pc = 0x279848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279848;
        }
    }
    ctx->pc = 0x27999Cu;
    // 0x27999c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27999cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2799a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2799A0u;
    {
        const bool branch_taken_0x2799a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2799a0) {
            ctx->pc = 0x2799E8u;
            goto label_2799e8;
        }
    }
    ctx->pc = 0x2799A8u;
label_2799a8:
    // 0x2799a8: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x2799a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2799ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2799acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2799b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2799b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2799b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2799b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2799b8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2799b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2799bc: 0x3444001b  ori         $a0, $v0, 0x1B
    ctx->pc = 0x2799bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x2799c0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2799c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2799c4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2799c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2799c8: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x2799c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x2799cc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2799ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2799d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2799d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2799d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2799d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2799d8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2799d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2799dc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2799DCu;
    SET_GPR_U32(ctx, 31, 0x2799E4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2799DCu, 0x2799E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2799E4u;
label_2799e4:
    // 0x2799e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2799e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2799e8:
    // 0x2799e8: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x2799e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2799ec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2799ECu;
    {
        const bool branch_taken_0x2799ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2799ec) {
            ctx->pc = 0x2799A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2799a8;
        }
    }
    ctx->pc = 0x2799F4u;
    // 0x2799f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2799f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2799f8: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x2799f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x2799fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2799fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x279a00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x279a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x279a04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279A04u;
    {
        const bool branch_taken_0x279a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279a04) {
            ctx->pc = 0x279A1Cu;
            goto label_279a1c;
        }
    }
    ctx->pc = 0x279A0Cu;
    // 0x279a0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279a10: 0x2444ff18  addiu       $a0, $v0, -0xE8
    ctx->pc = 0x279a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967064));
    // 0x279a14: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x279A14u;
    SET_GPR_U32(ctx, 31, 0x279A1Cu);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x279A14u, 0x279A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A1Cu;
label_279a1c:
    // 0x279a1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279a20: 0xac201aa0  sw          $zero, 0x1AA0($at)
    ctx->pc = 0x279a20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621AA0u, _value); } while (0);
    // 0x279a24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279a28: 0x2444f0f0  addiu       $a0, $v0, -0xF10
    ctx->pc = 0x279a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x279a2c: 0xc0a1048  jal         func_284120
    ctx->pc = 0x279A2Cu;
    SET_GPR_U32(ctx, 31, 0x279A34u);
    ctx->pc = 0x284120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284120u, 0x279A2Cu, 0x279A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A34u;
label_279a34:
    // 0x279a34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279a38: 0xc0c79e8  jal         func_31E7A0
    ctx->pc = 0x279A38u;
    SET_GPR_U32(ctx, 31, 0x279A40u);
    ctx->pc = 0x31E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7A0u, 0x279A38u, 0x279A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A40u;
label_279a40:
    // 0x279a40: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x279a40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279a48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x279a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x279a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x279A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279A54u;
}
