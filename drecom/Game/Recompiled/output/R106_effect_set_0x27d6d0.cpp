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

// Function: R106_effect_set
// Address: 0x27d6d0 - 0x27dce0
void R106_effect_set_0x27d6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R106_effect_set_0x27d6d0");
#endif

    switch (ctx->pc) {
        case 0x27d6e8u: goto label_27d6e8;
        case 0x27d70cu: goto label_27d70c;
        case 0x27d718u: goto label_27d718;
        case 0x27d73cu: goto label_27d73c;
        case 0x27d760u: goto label_27d760;
        case 0x27d784u: goto label_27d784;
        case 0x27d7b8u: goto label_27d7b8;
        case 0x27d7c4u: goto label_27d7c4;
        case 0x27d7e0u: goto label_27d7e0;
        case 0x27d848u: goto label_27d848;
        case 0x27d854u: goto label_27d854;
        case 0x27d8b4u: goto label_27d8b4;
        case 0x27d8c0u: goto label_27d8c0;
        case 0x27d910u: goto label_27d910;
        case 0x27d91cu: goto label_27d91c;
        case 0x27d924u: goto label_27d924;
        case 0x27d948u: goto label_27d948;
        case 0x27d96cu: goto label_27d96c;
        case 0x27d9a0u: goto label_27d9a0;
        case 0x27d9acu: goto label_27d9ac;
        case 0x27da08u: goto label_27da08;
        case 0x27da14u: goto label_27da14;
        case 0x27da40u: goto label_27da40;
        case 0x27da4cu: goto label_27da4c;
        case 0x27da70u: goto label_27da70;
        case 0x27da94u: goto label_27da94;
        case 0x27dab8u: goto label_27dab8;
        case 0x27daecu: goto label_27daec;
        case 0x27daf8u: goto label_27daf8;
        case 0x27db54u: goto label_27db54;
        case 0x27db60u: goto label_27db60;
        case 0x27db80u: goto label_27db80;
        case 0x27dba4u: goto label_27dba4;
        case 0x27dbb0u: goto label_27dbb0;
        case 0x27dbe8u: goto label_27dbe8;
        case 0x27dbf4u: goto label_27dbf4;
        case 0x27dc74u: goto label_27dc74;
        case 0x27dc80u: goto label_27dc80;
        case 0x27dcacu: goto label_27dcac;
        case 0x27dcb8u: goto label_27dcb8;
        default: break;
    }

    ctx->pc = 0x27d6d0u;

    // 0x27d6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27d6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27d6d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27d6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27d6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27d6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27d6dc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27d6dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d6e0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x27D6E0u;
    {
        const bool branch_taken_0x27d6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d6e0) {
            ctx->pc = 0x27D7C8u;
            goto label_27d7c8;
        }
    }
    ctx->pc = 0x27D6E8u;
label_27d6e8:
    // 0x27d6e8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27d6ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d6f0: 0x24420dd0  addiu       $v0, $v0, 0xDD0
    ctx->pc = 0x27d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3536));
    // 0x27d6f4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27d6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d6f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27d6fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d6fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d700: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d700u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d704: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27D704u;
    SET_GPR_U32(ctx, 31, 0x27D70Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27D704u, 0x27D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D70Cu;
label_27d70c:
    // 0x27d70c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27d70cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27d710: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27D710u;
    SET_GPR_U32(ctx, 31, 0x27D718u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27D710u, 0x27D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D718u;
label_27d718:
    // 0x27d718: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27d718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27d71c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d720: 0x24420dd0  addiu       $v0, $v0, 0xDD0
    ctx->pc = 0x27d720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3536));
    // 0x27d724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d728: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27d728u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d72c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d730: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27d730u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27d734: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D734u;
    SET_GPR_U32(ctx, 31, 0x27D73Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D734u, 0x27D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D73Cu;
label_27d73c:
    // 0x27d73c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27d740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d744: 0x0  nop
    ctx->pc = 0x27d744u;
    // NOP
    // 0x27d748: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d74c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27d74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d750: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d754: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27d754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27d758: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D758u;
    SET_GPR_U32(ctx, 31, 0x27D760u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D758u, 0x27D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D760u;
label_27d760:
    // 0x27d760: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27d760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27d764: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d768: 0x0  nop
    ctx->pc = 0x27d768u;
    // NOP
    // 0x27d76c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d76cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d770: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x27d770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d774: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d778: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27d778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27d77c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D77Cu;
    SET_GPR_U32(ctx, 31, 0x27D784u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D77Cu, 0x27D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D784u;
label_27d784:
    // 0x27d784: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27d784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27d788: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d78c: 0x0  nop
    ctx->pc = 0x27d78cu;
    // NOP
    // 0x27d790: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d790u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d794: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27d794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d798: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d79c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27d79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27d7a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27d7a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d7a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d7a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27d7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d7ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d7acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d7b0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27D7B0u;
    SET_GPR_U32(ctx, 31, 0x27D7B8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27D7B0u, 0x27D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7B8u;
label_27d7b8:
    // 0x27d7b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27d7b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27d7bc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27D7BCu;
    SET_GPR_U32(ctx, 31, 0x27D7C4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27D7BCu, 0x27D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7C4u;
label_27d7c4:
    // 0x27d7c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27d7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27d7c8:
    // 0x27d7c8: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x27d7c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x27d7cc: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x27D7CCu;
    {
        const bool branch_taken_0x27d7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d7cc) {
            ctx->pc = 0x27D6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d6e8;
        }
    }
    ctx->pc = 0x27D7D4u;
    // 0x27d7d4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27d7d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d7d8: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x27D7D8u;
    {
        const bool branch_taken_0x27d7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d7d8) {
            ctx->pc = 0x27DB68u;
            goto label_27db68;
        }
    }
    ctx->pc = 0x27D7E0u;
label_27d7e0:
    // 0x27d7e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x27d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27d7e4: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x27D7E4u;
    {
        const bool branch_taken_0x27d7e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d7e4) {
            ctx->pc = 0x27D8C8u;
            goto label_27d8c8;
        }
    }
    ctx->pc = 0x27D7ECu;
    // 0x27d7ec: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x27d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x27d7f0: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D7F0u;
    {
        const bool branch_taken_0x27d7f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27d7f0) {
            ctx->pc = 0x27D800u;
            goto label_27d800;
        }
    }
    ctx->pc = 0x27D7F8u;
    // 0x27d7f8: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x27D7F8u;
    {
        const bool branch_taken_0x27d7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d7f8) {
            ctx->pc = 0x27DA1Cu;
            goto label_27da1c;
        }
    }
    ctx->pc = 0x27D800u;
label_27d800:
    // 0x27d800: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27d800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27d804: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d808: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27d808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27d80c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d810: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27d810u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d814: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27d814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d818: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27d818u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27d81c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x27d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x27d820: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x27d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x27d824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d828: 0x0  nop
    ctx->pc = 0x27d828u;
    // NOP
    // 0x27d82c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27d82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27d830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d834: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d834u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d838: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27d838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d83c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d83cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d840: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27D840u;
    SET_GPR_U32(ctx, 31, 0x27D848u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27D840u, 0x27D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D848u;
label_27d848:
    // 0x27d848: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27d848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27d84c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27D84Cu;
    SET_GPR_U32(ctx, 31, 0x27D854u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27D84Cu, 0x27D854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D854u;
label_27d854:
    // 0x27d854: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27d854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27d858: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d85c: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27d860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d864: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27d864u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d868: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27d868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d86c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27d86cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27d870: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27d870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d874: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x27d874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x27d878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d87c: 0x0  nop
    ctx->pc = 0x27d87cu;
    // NOP
    // 0x27d880: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27d880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27d884: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27d884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27d888: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x27d888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x27d88c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x27d88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x27d890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d894: 0x0  nop
    ctx->pc = 0x27d894u;
    // NOP
    // 0x27d898: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27d898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27d89c: 0x2404170a  addiu       $a0, $zero, 0x170A
    ctx->pc = 0x27d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5898));
    // 0x27d8a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d8a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d8a4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27d8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d8a8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d8a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d8ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27D8ACu;
    SET_GPR_U32(ctx, 31, 0x27D8B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27D8ACu, 0x27D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8B4u;
label_27d8b4:
    // 0x27d8b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27d8b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27d8b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27D8B8u;
    SET_GPR_U32(ctx, 31, 0x27D8C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27D8B8u, 0x27D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8C0u;
label_27d8c0:
    // 0x27d8c0: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x27D8C0u;
    {
        const bool branch_taken_0x27d8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d8c0) {
            ctx->pc = 0x27DB60u;
            goto label_27db60;
        }
    }
    ctx->pc = 0x27D8C8u;
label_27d8c8:
    // 0x27d8c8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27d8cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d8d0: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27d8d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d8d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27d8d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d8dc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d8e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27d8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27d8e4: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x27d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x27d8e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x27d8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x27d8ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d8f0: 0x0  nop
    ctx->pc = 0x27d8f0u;
    // NOP
    // 0x27d8f4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27d8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27d8f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d8fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d8fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d900: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27d900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d904: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d904u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d908: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27D908u;
    SET_GPR_U32(ctx, 31, 0x27D910u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27D908u, 0x27D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D910u;
label_27d910:
    // 0x27d910: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27d910u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27d914: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27D914u;
    SET_GPR_U32(ctx, 31, 0x27D91Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27D914u, 0x27D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D91Cu;
label_27d91c:
    // 0x27d91c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D91Cu;
    SET_GPR_U32(ctx, 31, 0x27D924u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D91Cu, 0x27D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D924u;
label_27d924:
    // 0x27d924: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27d924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27d928: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d92c: 0x0  nop
    ctx->pc = 0x27d92cu;
    // NOP
    // 0x27d930: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d934: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d938: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d93c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27d93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27d940: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D940u;
    SET_GPR_U32(ctx, 31, 0x27D948u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D940u, 0x27D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D948u;
label_27d948:
    // 0x27d948: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27d948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27d94c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d950: 0x0  nop
    ctx->pc = 0x27d950u;
    // NOP
    // 0x27d954: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d958: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x27d958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d95c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d95cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d960: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27d960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27d964: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D964u;
    SET_GPR_U32(ctx, 31, 0x27D96Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D964u, 0x27D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D96Cu;
label_27d96c:
    // 0x27d96c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27d970: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d974: 0x0  nop
    ctx->pc = 0x27d974u;
    // NOP
    // 0x27d978: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d978u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d97c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27d97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d980: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d984: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27d984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27d988: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d98c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d98cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d990: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27d990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d994: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d994u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d998: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27D998u;
    SET_GPR_U32(ctx, 31, 0x27D9A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27D998u, 0x27D9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9A0u;
label_27d9a0:
    // 0x27d9a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27d9a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27d9a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27D9A4u;
    SET_GPR_U32(ctx, 31, 0x27D9ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27D9A4u, 0x27D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9ACu;
label_27d9ac:
    // 0x27d9ac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27d9b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d9b4: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27d9b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d9bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27d9bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d9c0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d9c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27d9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27d9c8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27d9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d9cc: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x27d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
    // 0x27d9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d9d4: 0x0  nop
    ctx->pc = 0x27d9d4u;
    // NOP
    // 0x27d9d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27d9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27d9dc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27d9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27d9e0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x27d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x27d9e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d9e8: 0x0  nop
    ctx->pc = 0x27d9e8u;
    // NOP
    // 0x27d9ec: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27d9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27d9f0: 0x2404170a  addiu       $a0, $zero, 0x170A
    ctx->pc = 0x27d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5898));
    // 0x27d9f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d9f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d9f8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27d9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d9fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d9fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27da00: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DA00u;
    SET_GPR_U32(ctx, 31, 0x27DA08u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DA00u, 0x27DA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA08u;
label_27da08:
    // 0x27da08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27da08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27da0c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DA0Cu;
    SET_GPR_U32(ctx, 31, 0x27DA14u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DA0Cu, 0x27DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA14u;
label_27da14:
    // 0x27da14: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x27DA14u;
    {
        const bool branch_taken_0x27da14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27da14) {
            ctx->pc = 0x27DB60u;
            goto label_27db60;
        }
    }
    ctx->pc = 0x27DA1Cu;
label_27da1c:
    // 0x27da1c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27da20: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27da20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27da24: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27da24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27da28: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27da28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27da2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27da30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27da30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27da34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27da34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27da38: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DA38u;
    SET_GPR_U32(ctx, 31, 0x27DA40u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DA38u, 0x27DA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA40u;
label_27da40:
    // 0x27da40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27da40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27da44: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DA44u;
    SET_GPR_U32(ctx, 31, 0x27DA4Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DA44u, 0x27DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA4Cu;
label_27da4c:
    // 0x27da4c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27da50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27da50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27da54: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27da58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27da5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27da5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27da60: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27da64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27da64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27da68: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27DA68u;
    SET_GPR_U32(ctx, 31, 0x27DA70u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27DA68u, 0x27DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA70u;
label_27da70:
    // 0x27da70: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27da70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27da74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27da74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27da78: 0x0  nop
    ctx->pc = 0x27da78u;
    // NOP
    // 0x27da7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27da7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27da80: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27da84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27da84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27da88: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27da88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27da8c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27DA8Cu;
    SET_GPR_U32(ctx, 31, 0x27DA94u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27DA8Cu, 0x27DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA94u;
label_27da94:
    // 0x27da94: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27da94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27da98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27da98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27da9c: 0x0  nop
    ctx->pc = 0x27da9cu;
    // NOP
    // 0x27daa0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27daa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27daa4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x27daa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27daa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27daa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27daac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27daacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27dab0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27DAB0u;
    SET_GPR_U32(ctx, 31, 0x27DAB8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27DAB0u, 0x27DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DAB8u;
label_27dab8:
    // 0x27dab8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27dabc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27dabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27dac0: 0x0  nop
    ctx->pc = 0x27dac0u;
    // NOP
    // 0x27dac4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27dac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27dac8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dacc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27daccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27dad0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27dad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27dad4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27dad8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27dad8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dadc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27dadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27dae0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27dae0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dae4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DAE4u;
    SET_GPR_U32(ctx, 31, 0x27DAECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DAE4u, 0x27DAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DAECu;
label_27daec:
    // 0x27daec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27daecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27daf0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DAF0u;
    SET_GPR_U32(ctx, 31, 0x27DAF8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DAF0u, 0x27DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DAF8u;
label_27daf8:
    // 0x27daf8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27dafc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27db00: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27db04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27db04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27db08: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27db08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27db0c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27db10: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27db10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27db14: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27db14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27db18: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x27db18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x27db1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27db1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27db20: 0x0  nop
    ctx->pc = 0x27db20u;
    // NOP
    // 0x27db24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27db24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27db28: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27db28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27db2c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x27db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x27db30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27db30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27db34: 0x0  nop
    ctx->pc = 0x27db34u;
    // NOP
    // 0x27db38: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27db38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27db3c: 0x2404170a  addiu       $a0, $zero, 0x170A
    ctx->pc = 0x27db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5898));
    // 0x27db40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27db40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27db44: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27db44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27db48: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27db48u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27db4c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DB4Cu;
    SET_GPR_U32(ctx, 31, 0x27DB54u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DB4Cu, 0x27DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB54u;
label_27db54:
    // 0x27db54: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27db54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27db58: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DB58u;
    SET_GPR_U32(ctx, 31, 0x27DB60u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DB58u, 0x27DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB60u;
label_27db60:
    // 0x27db60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27db60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27db64: 0x0  nop
    ctx->pc = 0x27db64u;
    // NOP
label_27db68:
    // 0x27db68: 0x2e030013  sltiu       $v1, $s0, 0x13
    ctx->pc = 0x27db68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x27db6c: 0x1460ff1c  bnez        $v1, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x27DB6Cu;
    {
        const bool branch_taken_0x27db6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27db6c) {
            ctx->pc = 0x27D7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d7e0;
        }
    }
    ctx->pc = 0x27DB74u;
    // 0x27db74: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27db74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27db78: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x27DB78u;
    {
        const bool branch_taken_0x27db78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27db78) {
            ctx->pc = 0x27DCC0u;
            goto label_27dcc0;
        }
    }
    ctx->pc = 0x27DB80u;
label_27db80:
    // 0x27db80: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27db80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27db84: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27db84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27db88: 0x24420f50  addiu       $v0, $v0, 0xF50
    ctx->pc = 0x27db88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x27db8c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27db8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27db90: 0x24045700  addiu       $a0, $zero, 0x5700
    ctx->pc = 0x27db90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22272));
    // 0x27db94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27db94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27db98: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27db98u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27db9c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DB9Cu;
    SET_GPR_U32(ctx, 31, 0x27DBA4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DB9Cu, 0x27DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBA4u;
label_27dba4:
    // 0x27dba4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27dba4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27dba8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DBA8u;
    SET_GPR_U32(ctx, 31, 0x27DBB0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DBA8u, 0x27DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBB0u;
label_27dbb0:
    // 0x27dbb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27dbb4: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DBB4u;
    {
        const bool branch_taken_0x27dbb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27dbb4) {
            ctx->pc = 0x27DBC4u;
            goto label_27dbc4;
        }
    }
    ctx->pc = 0x27DBBCu;
    // 0x27dbbc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27DBBCu;
    {
        const bool branch_taken_0x27dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dbbc) {
            ctx->pc = 0x27DBFCu;
            goto label_27dbfc;
        }
    }
    ctx->pc = 0x27DBC4u;
label_27dbc4:
    // 0x27dbc4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27dbc8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27dbcc: 0x24420f50  addiu       $v0, $v0, 0xF50
    ctx->pc = 0x27dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x27dbd0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27dbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dbd4: 0x24045a00  addiu       $a0, $zero, 0x5A00
    ctx->pc = 0x27dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x27dbd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27dbd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dbdc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27dbdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dbe0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DBE0u;
    SET_GPR_U32(ctx, 31, 0x27DBE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DBE0u, 0x27DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBE8u;
label_27dbe8:
    // 0x27dbe8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27dbe8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27dbec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DBECu;
    SET_GPR_U32(ctx, 31, 0x27DBF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DBECu, 0x27DBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBF4u;
label_27dbf4:
    // 0x27dbf4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27DBF4u;
    {
        const bool branch_taken_0x27dbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dbf4) {
            ctx->pc = 0x27DCB8u;
            goto label_27dcb8;
        }
    }
    ctx->pc = 0x27DBFCu;
label_27dbfc:
    // 0x27dbfc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27dbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27dc00: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27dc04: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27dc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27dc08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27dc0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dc10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27dc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27dc14: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27dc18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27dc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27dc1c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27dc20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27dc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27dc24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27dc28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dc2c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27dc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27dc30: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27dc34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27dc38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27dc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27dc3c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27dc3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27dc40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27dc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27dc44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27dc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27dc48: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27DC48u;
    {
        const bool branch_taken_0x27dc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dc48) {
            ctx->pc = 0x27DC88u;
            goto label_27dc88;
        }
    }
    ctx->pc = 0x27DC50u;
    // 0x27dc50: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27dc54: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27dc58: 0x24420f50  addiu       $v0, $v0, 0xF50
    ctx->pc = 0x27dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x27dc5c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27dc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dc60: 0x24047300  addiu       $a0, $zero, 0x7300
    ctx->pc = 0x27dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29440));
    // 0x27dc64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27dc64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dc68: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27dc68u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dc6c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DC6Cu;
    SET_GPR_U32(ctx, 31, 0x27DC74u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DC6Cu, 0x27DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC74u;
label_27dc74:
    // 0x27dc74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27dc74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27dc78: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DC78u;
    SET_GPR_U32(ctx, 31, 0x27DC80u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DC78u, 0x27DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC80u;
label_27dc80:
    // 0x27dc80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27DC80u;
    {
        const bool branch_taken_0x27dc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dc80) {
            ctx->pc = 0x27DCB8u;
            goto label_27dcb8;
        }
    }
    ctx->pc = 0x27DC88u;
label_27dc88:
    // 0x27dc88: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27dc8c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27dc90: 0x24420f50  addiu       $v0, $v0, 0xF50
    ctx->pc = 0x27dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x27dc94: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27dc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dc98: 0x24047400  addiu       $a0, $zero, 0x7400
    ctx->pc = 0x27dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29696));
    // 0x27dc9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27dc9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dca0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27dca0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27dca4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DCA4u;
    SET_GPR_U32(ctx, 31, 0x27DCACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DCA4u, 0x27DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCACu;
label_27dcac:
    // 0x27dcac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27dcacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27dcb0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DCB0u;
    SET_GPR_U32(ctx, 31, 0x27DCB8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DCB0u, 0x27DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCB8u;
label_27dcb8:
    // 0x27dcb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27dcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27dcbc: 0x0  nop
    ctx->pc = 0x27dcbcu;
    // NOP
label_27dcc0:
    // 0x27dcc0: 0x2e03000a  sltiu       $v1, $s0, 0xA
    ctx->pc = 0x27dcc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x27dcc4: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x27DCC4u;
    {
        const bool branch_taken_0x27dcc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dcc4) {
            ctx->pc = 0x27DB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27db80;
        }
    }
    ctx->pc = 0x27DCCCu;
    // 0x27dccc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27dcccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dcd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27dcd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dcd4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27dcd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27dcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x27DCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DCE0u;
}
