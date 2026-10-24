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

// Function: R103_init
// Address: 0x270f20 - 0x271448
void R103_init_0x270f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R103_init_0x270f20");
#endif

    switch (ctx->pc) {
        case 0x270f40u: goto label_270f40;
        case 0x270f50u: goto label_270f50;
        case 0x270f5cu: goto label_270f5c;
        case 0x270f80u: goto label_270f80;
        case 0x270f8cu: goto label_270f8c;
        case 0x270fb0u: goto label_270fb0;
        case 0x270fd4u: goto label_270fd4;
        case 0x270ff8u: goto label_270ff8;
        case 0x27102cu: goto label_27102c;
        case 0x271038u: goto label_271038;
        case 0x271094u: goto label_271094;
        case 0x2710a0u: goto label_2710a0;
        case 0x2710c0u: goto label_2710c0;
        case 0x2710e0u: goto label_2710e0;
        case 0x271104u: goto label_271104;
        case 0x271110u: goto label_271110;
        case 0x271134u: goto label_271134;
        case 0x271158u: goto label_271158;
        case 0x27117cu: goto label_27117c;
        case 0x2711b0u: goto label_2711b0;
        case 0x2711bcu: goto label_2711bc;
        case 0x271218u: goto label_271218;
        case 0x271224u: goto label_271224;
        case 0x27125cu: goto label_27125c;
        case 0x271274u: goto label_271274;
        case 0x271284u: goto label_271284;
        case 0x271428u: goto label_271428;
        case 0x271434u: goto label_271434;
        default: break;
    }

    ctx->pc = 0x270f20u;

    // 0x270f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x270f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x270f24: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x270f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x270f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x270f2c: 0x278480d4  addiu       $a0, $gp, -0x7F2C
    ctx->pc = 0x270f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934740));
    // 0x270f30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270f30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270f34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x270f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270f38: 0xc046314  jal         func_118C50
    ctx->pc = 0x270F38u;
    SET_GPR_U32(ctx, 31, 0x270F40u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x270F40u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x270F40u) { return; }
    ctx->pc = 0x270F40u;
label_270f40:
    // 0x270f40: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x270f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x270f44: 0x2444c7d0  addiu       $a0, $v0, -0x3830
    ctx->pc = 0x270f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952912));
    // 0x270f48: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x270F48u;
    SET_GPR_U32(ctx, 31, 0x270F50u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x270F48u, 0x270F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F50u;
label_270f50:
    // 0x270f50: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x270f50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270f54: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x270F54u;
    {
        const bool branch_taken_0x270f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270f54) {
            ctx->pc = 0x2710A8u;
            goto label_2710a8;
        }
    }
    ctx->pc = 0x270F5Cu;
label_270f5c:
    // 0x270f5c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x270f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x270f60: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x270f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x270f64: 0x2442ca10  addiu       $v0, $v0, -0x35F0
    ctx->pc = 0x270f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    // 0x270f68: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x270f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x270f6c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x270f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x270f70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270f70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270f74: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x270f74u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270f78: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x270F78u;
    SET_GPR_U32(ctx, 31, 0x270F80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x270F78u, 0x270F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F80u;
label_270f80:
    // 0x270f80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x270f80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x270f84: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x270F84u;
    SET_GPR_U32(ctx, 31, 0x270F8Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x270F84u, 0x270F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F8Cu;
label_270f8c:
    // 0x270f8c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x270f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x270f90: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x270f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x270f94: 0x2442ca10  addiu       $v0, $v0, -0x35F0
    ctx->pc = 0x270f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    // 0x270f98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x270f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x270f9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x270f9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270fa0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x270fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x270fa4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x270fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x270fa8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x270FA8u;
    SET_GPR_U32(ctx, 31, 0x270FB0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x270FA8u, 0x270FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270FB0u;
label_270fb0:
    // 0x270fb0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x270fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x270fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x270fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270fb8: 0x0  nop
    ctx->pc = 0x270fb8u;
    // NOP
    // 0x270fbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x270fbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x270fc0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x270fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270fc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x270fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270fc8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x270fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x270fcc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x270FCCu;
    SET_GPR_U32(ctx, 31, 0x270FD4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x270FCCu, 0x270FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270FD4u;
label_270fd4:
    // 0x270fd4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x270fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x270fd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x270fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270fdc: 0x0  nop
    ctx->pc = 0x270fdcu;
    // NOP
    // 0x270fe0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x270fe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x270fe4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x270fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270fe8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x270fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270fec: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x270fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x270ff0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x270FF0u;
    SET_GPR_U32(ctx, 31, 0x270FF8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x270FF0u, 0x270FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270FF8u;
label_270ff8:
    // 0x270ff8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x270ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x270ffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x270ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271000: 0x0  nop
    ctx->pc = 0x271000u;
    // NOP
    // 0x271004: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x271004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x271008: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x271008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27100c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27100cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271010: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x271010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x271014: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x271014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x271018: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271018u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27101c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27101cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x271020: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x271020u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271024: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x271024u;
    SET_GPR_U32(ctx, 31, 0x27102Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x271024u, 0x27102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27102Cu;
label_27102c:
    // 0x27102c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27102cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x271030: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x271030u;
    SET_GPR_U32(ctx, 31, 0x271038u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x271030u, 0x271038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271038u;
label_271038:
    // 0x271038: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x271038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27103c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271040: 0x2442ca10  addiu       $v0, $v0, -0x35F0
    ctx->pc = 0x271040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    // 0x271044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x271044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x271048: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x271048u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27104c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x271050: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x271050u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x271054: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x271054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271058: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x271058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x27105c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27105cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271060: 0x0  nop
    ctx->pc = 0x271060u;
    // NOP
    // 0x271064: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x271064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x271068: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x271068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27106c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27106cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x271070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x271070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271074: 0x0  nop
    ctx->pc = 0x271074u;
    // NOP
    // 0x271078: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x271078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27107c: 0x24041719  addiu       $a0, $zero, 0x1719
    ctx->pc = 0x27107cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5913));
    // 0x271080: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271080u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271084: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x271084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x271088: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x271088u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27108c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27108Cu;
    SET_GPR_U32(ctx, 31, 0x271094u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27108Cu, 0x271094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271094u;
label_271094:
    // 0x271094: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x271094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x271098: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x271098u;
    SET_GPR_U32(ctx, 31, 0x2710A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x271098u, 0x2710A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710A0u;
label_2710a0:
    // 0x2710a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2710a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2710a4: 0x0  nop
    ctx->pc = 0x2710a4u;
    // NOP
label_2710a8:
    // 0x2710a8: 0x2e020013  sltiu       $v0, $s0, 0x13
    ctx->pc = 0x2710a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x2710ac: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x2710ACu;
    {
        const bool branch_taken_0x2710ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2710ac) {
            ctx->pc = 0x270F5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270f5c;
        }
    }
    ctx->pc = 0x2710B4u;
    // 0x2710b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2710b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2710b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2710B8u;
    {
        const bool branch_taken_0x2710b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2710b8) {
            ctx->pc = 0x2710C8u;
            goto label_2710c8;
        }
    }
    ctx->pc = 0x2710C0u;
label_2710c0:
    // 0x2710c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2710c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2710c4: 0x0  nop
    ctx->pc = 0x2710c4u;
    // NOP
label_2710c8:
    // 0x2710c8: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x2710c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2710cc: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2710CCu;
    {
        const bool branch_taken_0x2710cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2710cc) {
            ctx->pc = 0x2710C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2710c0;
        }
    }
    ctx->pc = 0x2710D4u;
    // 0x2710d4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2710d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2710d8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2710D8u;
    {
        const bool branch_taken_0x2710d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2710d8) {
            ctx->pc = 0x271228u;
            goto label_271228;
        }
    }
    ctx->pc = 0x2710E0u;
label_2710e0:
    // 0x2710e0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2710e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2710e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2710e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2710e8: 0x2442cb40  addiu       $v0, $v0, -0x34C0
    ctx->pc = 0x2710e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953792));
    // 0x2710ec: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2710ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2710f0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2710f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2710f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2710f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2710f8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2710f8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2710fc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2710FCu;
    SET_GPR_U32(ctx, 31, 0x271104u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2710FCu, 0x271104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271104u;
label_271104:
    // 0x271104: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x271104u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x271108: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x271108u;
    SET_GPR_U32(ctx, 31, 0x271110u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x271108u, 0x271110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271110u;
label_271110:
    // 0x271110: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x271110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x271114: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x271114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271118: 0x2442cb40  addiu       $v0, $v0, -0x34C0
    ctx->pc = 0x271118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953792));
    // 0x27111c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x271120: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x271120u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271124: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x271124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x271128: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x271128u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27112c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27112Cu;
    SET_GPR_U32(ctx, 31, 0x271134u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27112Cu, 0x271134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271134u;
label_271134:
    // 0x271134: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x271134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x271138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x271138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27113c: 0x0  nop
    ctx->pc = 0x27113cu;
    // NOP
    // 0x271140: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x271140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x271144: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x271144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271148: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x271148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27114c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27114cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x271150: 0xc06765c  jal         func_19D970
    ctx->pc = 0x271150u;
    SET_GPR_U32(ctx, 31, 0x271158u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x271150u, 0x271158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271158u;
label_271158:
    // 0x271158: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x271158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27115c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27115cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271160: 0x0  nop
    ctx->pc = 0x271160u;
    // NOP
    // 0x271164: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x271164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x271168: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x271168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27116c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27116cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271170: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x271170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x271174: 0xc06765c  jal         func_19D970
    ctx->pc = 0x271174u;
    SET_GPR_U32(ctx, 31, 0x27117Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x271174u, 0x27117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27117Cu;
label_27117c:
    // 0x27117c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27117cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x271180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x271180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271184: 0x0  nop
    ctx->pc = 0x271184u;
    // NOP
    // 0x271188: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x271188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27118c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271190: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x271190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271194: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x271194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x271198: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x271198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x27119c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27119cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2711a0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2711a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2711a4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2711a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2711a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2711A8u;
    SET_GPR_U32(ctx, 31, 0x2711B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2711A8u, 0x2711B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711B0u;
label_2711b0:
    // 0x2711b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2711b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2711b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2711B4u;
    SET_GPR_U32(ctx, 31, 0x2711BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2711B4u, 0x2711BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711BCu;
label_2711bc:
    // 0x2711bc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2711bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2711c0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2711c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2711c4: 0x2442cb40  addiu       $v0, $v0, -0x34C0
    ctx->pc = 0x2711c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953792));
    // 0x2711c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2711c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2711cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2711ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2711d0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2711d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2711d4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2711d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2711d8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2711d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2711dc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2711dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2711e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2711e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2711e4: 0x0  nop
    ctx->pc = 0x2711e4u;
    // NOP
    // 0x2711e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2711e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2711ec: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2711ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2711f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2711f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2711f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2711f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2711f8: 0x0  nop
    ctx->pc = 0x2711f8u;
    // NOP
    // 0x2711fc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2711fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x271200: 0x24041719  addiu       $a0, $zero, 0x1719
    ctx->pc = 0x271200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5913));
    // 0x271204: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271204u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271208: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x271208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27120c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27120cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271210: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x271210u;
    SET_GPR_U32(ctx, 31, 0x271218u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x271210u, 0x271218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271218u;
label_271218:
    // 0x271218: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x271218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27121c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27121Cu;
    SET_GPR_U32(ctx, 31, 0x271224u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27121Cu, 0x271224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271224u;
label_271224:
    // 0x271224: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x271224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_271228:
    // 0x271228: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x271228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27122c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x27122Cu;
    {
        const bool branch_taken_0x27122c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27122c) {
            ctx->pc = 0x2710E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2710e0;
        }
    }
    ctx->pc = 0x271234u;
    // 0x271234: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271238: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x271238u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27123c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27123cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x271240: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x271240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x271244: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271244u;
    {
        const bool branch_taken_0x271244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271244) {
            ctx->pc = 0x271264u;
            goto label_271264;
        }
    }
    ctx->pc = 0x27124Cu;
    // 0x27124c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27124cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271250: 0x2444ca00  addiu       $a0, $v0, -0x3600
    ctx->pc = 0x271250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953472));
    // 0x271254: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x271254u;
    SET_GPR_U32(ctx, 31, 0x27125Cu);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x271254u, 0x27125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27125Cu;
label_27125c:
    // 0x27125c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27125Cu;
    {
        const bool branch_taken_0x27125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27125c) {
            ctx->pc = 0x271284u;
            goto label_271284;
        }
    }
    ctx->pc = 0x271264u;
label_271264:
    // 0x271264: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x271264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271268: 0x2444c9f8  addiu       $a0, $v0, -0x3608
    ctx->pc = 0x271268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953464));
    // 0x27126c: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27126Cu;
    SET_GPR_U32(ctx, 31, 0x271274u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27126Cu, 0x271274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271274u;
label_271274:
    // 0x271274: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x271274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271278: 0x2444be80  addiu       $a0, $v0, -0x4180
    ctx->pc = 0x271278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950528));
    // 0x27127c: 0xc0a1048  jal         func_284120
    ctx->pc = 0x27127Cu;
    SET_GPR_U32(ctx, 31, 0x271284u);
    ctx->pc = 0x284120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284120u, 0x27127Cu, 0x271284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271284u;
label_271284:
    // 0x271284: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271288: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x271288u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27128c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x27128cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x271290: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x271290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x271294: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271294u;
    {
        const bool branch_taken_0x271294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271294) {
            ctx->pc = 0x2712B4u;
            goto label_2712b4;
        }
    }
    ctx->pc = 0x27129Cu;
    // 0x27129c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x27129cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2712a0: 0x24421980  addiu       $v0, $v0, 0x1980
    ctx->pc = 0x2712a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x2712a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712a8: 0xac22d69c  sw          $v0, -0x2964($at)
    ctx->pc = 0x2712a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD69Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD69Cu, _value); } while (0);
    // 0x2712ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2712ACu;
    {
        const bool branch_taken_0x2712ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2712ac) {
            ctx->pc = 0x2712C0u;
            goto label_2712c0;
        }
    }
    ctx->pc = 0x2712B4u;
label_2712b4:
    // 0x2712b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2712b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2712b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712bc: 0xa022d691  sb          $v0, -0x296F($at)
    ctx->pc = 0x2712bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD691u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD691u, _value); } while (0);
label_2712c0:
    // 0x2712c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2712c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2712c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712c8: 0xa022d411  sb          $v0, -0x2BEF($at)
    ctx->pc = 0x2712c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD411u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD411u, _value); } while (0);
    // 0x2712cc: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x2712ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x2712d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712d4: 0xa022d413  sb          $v0, -0x2BED($at)
    ctx->pc = 0x2712d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD413u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD413u, _value); } while (0);
    // 0x2712d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2712d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2712dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712e0: 0xa422d418  sh          $v0, -0x2BE8($at)
    ctx->pc = 0x2712e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD418u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD418u, _value); } while (0);
    // 0x2712e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712e8: 0xa420d41a  sh          $zero, -0x2BE6($at)
    ctx->pc = 0x2712e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD41Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Au, _value); } while (0);
    // 0x2712ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2712ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2712f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712f4: 0xa422d41c  sh          $v0, -0x2BE4($at)
    ctx->pc = 0x2712f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD41Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Cu, _value); } while (0);
    // 0x2712f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2712f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2712fc: 0xa420d41e  sh          $zero, -0x2BE2($at)
    ctx->pc = 0x2712fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD41Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Eu, _value); } while (0);
    // 0x271300: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x271300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x271304: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271308: 0xa022d551  sb          $v0, -0x2AAF($at)
    ctx->pc = 0x271308u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD551u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD551u, _value); } while (0);
    // 0x27130c: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x27130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x271310: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271314: 0xa022d553  sb          $v0, -0x2AAD($at)
    ctx->pc = 0x271314u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD553u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD553u, _value); } while (0);
    // 0x271318: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x271318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27131c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27131cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271320: 0xa422d558  sh          $v0, -0x2AA8($at)
    ctx->pc = 0x271320u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD558u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD558u, _value); } while (0);
    // 0x271324: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271328: 0xa420d55a  sh          $zero, -0x2AA6($at)
    ctx->pc = 0x271328u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD55Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD55Au, _value); } while (0);
    // 0x27132c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271330: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271334: 0xa422d55c  sh          $v0, -0x2AA4($at)
    ctx->pc = 0x271334u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD55Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD55Cu, _value); } while (0);
    // 0x271338: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27133c: 0xa420d55e  sh          $zero, -0x2AA2($at)
    ctx->pc = 0x27133cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD55Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD55Eu, _value); } while (0);
    // 0x271340: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271344: 0xac20fd58  sw          $zero, -0x2A8($at)
    ctx->pc = 0x271344u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61FD58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD58u, _value); } while (0);
    // 0x271348: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27134c: 0xac20fd68  sw          $zero, -0x298($at)
    ctx->pc = 0x27134cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61FD68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD68u, _value); } while (0);
    // 0x271350: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271354: 0x8c22fd60  lw          $v0, -0x2A0($at)
    ctx->pc = 0x271354u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FD60u));
    // 0x271358: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x271358u;
    {
        const bool branch_taken_0x271358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271358) {
            ctx->pc = 0x271408u;
            goto label_271408;
        }
    }
    ctx->pc = 0x271360u;
    // 0x271360: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x271360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x271364: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x271364u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271368: 0x3c0245b8  lui         $v0, 0x45B8
    ctx->pc = 0x271368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17848 << 16));
    // 0x27136c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x27136cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x271370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x271370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271374: 0x0  nop
    ctx->pc = 0x271374u;
    // NOP
    // 0x271378: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x271378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27137c: 0x0  nop
    ctx->pc = 0x27137cu;
    // NOP
    // 0x271380: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x271380u;
    {
        const bool branch_taken_0x271380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271380) {
            ctx->pc = 0x27139Cu;
            goto label_27139c;
        }
    }
    ctx->pc = 0x271388u;
    // 0x271388: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x271388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27138c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27138cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271390: 0xac22fd60  sw          $v0, -0x2A0($at)
    ctx->pc = 0x271390u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
    // 0x271394: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x271394u;
    {
        const bool branch_taken_0x271394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271394) {
            ctx->pc = 0x271408u;
            goto label_271408;
        }
    }
    ctx->pc = 0x27139Cu;
label_27139c:
    // 0x27139c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27139cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2713a0: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2713a0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2713a4: 0x3c024535  lui         $v0, 0x4535
    ctx->pc = 0x2713a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17717 << 16));
    // 0x2713a8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2713a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2713ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2713acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2713b0: 0x0  nop
    ctx->pc = 0x2713b0u;
    // NOP
    // 0x2713b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2713b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2713b8: 0x0  nop
    ctx->pc = 0x2713b8u;
    // NOP
    // 0x2713bc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2713BCu;
    {
        const bool branch_taken_0x2713bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2713bc) {
            ctx->pc = 0x2713D8u;
            goto label_2713d8;
        }
    }
    ctx->pc = 0x2713C4u;
    // 0x2713c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2713c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2713c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2713c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2713cc: 0xac22fd60  sw          $v0, -0x2A0($at)
    ctx->pc = 0x2713ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
    // 0x2713d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2713D0u;
    {
        const bool branch_taken_0x2713d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2713d0) {
            ctx->pc = 0x271408u;
            goto label_271408;
        }
    }
    ctx->pc = 0x2713D8u;
label_2713d8:
    // 0x2713d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2713d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2713dc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2713dcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2713e0: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2713e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2713e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2713e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2713e8: 0x0  nop
    ctx->pc = 0x2713e8u;
    // NOP
    // 0x2713ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2713ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2713f0: 0x0  nop
    ctx->pc = 0x2713f0u;
    // NOP
    // 0x2713f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2713F4u;
    {
        const bool branch_taken_0x2713f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2713f4) {
            ctx->pc = 0x271408u;
            goto label_271408;
        }
    }
    ctx->pc = 0x2713FCu;
    // 0x2713fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2713fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271400: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271404: 0xac22fd60  sw          $v0, -0x2A0($at)
    ctx->pc = 0x271404u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
label_271408:
    // 0x271408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27140c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27140cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271410: 0xac22fd70  sw          $v0, -0x290($at)
    ctx->pc = 0x271410u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD70u, _value); } while (0);
    // 0x271414: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x271414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x271418: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x271418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x27141c: 0x24451d30  addiu       $a1, $v0, 0x1D30
    ctx->pc = 0x27141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
    // 0x271420: 0xc0848cc  jal         func_212330
    ctx->pc = 0x271420u;
    SET_GPR_U32(ctx, 31, 0x271428u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x271420u, 0x271428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271428u;
label_271428:
    // 0x271428: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x271428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27142c: 0xc0c79e8  jal         func_31E7A0
    ctx->pc = 0x27142Cu;
    SET_GPR_U32(ctx, 31, 0x271434u);
    ctx->pc = 0x31E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7A0u, 0x27142Cu, 0x271434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271434u;
label_271434:
    // 0x271434: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x271434u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27143c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27143cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271440: 0x3e00008  jr          $ra
    ctx->pc = 0x271440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271448u;
}
