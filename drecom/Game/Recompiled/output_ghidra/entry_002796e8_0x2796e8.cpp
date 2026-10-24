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

// Function: entry_002796e8
// Address: 0x2796e8 - 0x279830
void entry_002796e8_0x2796e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002796e8_0x2796e8");
#endif

    switch (ctx->pc) {
        case 0x27970cu: goto label_27970c;
        case 0x279718u: goto label_279718;
        case 0x27973cu: goto label_27973c;
        case 0x279760u: goto label_279760;
        case 0x279784u: goto label_279784;
        case 0x2797b8u: goto label_2797b8;
        case 0x2797c4u: goto label_2797c4;
        case 0x279820u: goto label_279820;
        case 0x27982cu: goto label_27982c;
        default: break;
    }

    ctx->pc = 0x2796e8u;

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
    ctx->pc = 0x279830u;
}
