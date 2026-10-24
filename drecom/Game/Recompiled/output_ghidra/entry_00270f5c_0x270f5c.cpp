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

// Function: entry_00270f5c
// Address: 0x270f5c - 0x2710a8
void entry_00270f5c_0x270f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270f5c_0x270f5c");
#endif

    switch (ctx->pc) {
        case 0x270f80u: goto label_270f80;
        case 0x270f8cu: goto label_270f8c;
        case 0x270fb0u: goto label_270fb0;
        case 0x270fd4u: goto label_270fd4;
        case 0x270ff8u: goto label_270ff8;
        case 0x27102cu: goto label_27102c;
        case 0x271038u: goto label_271038;
        case 0x271094u: goto label_271094;
        case 0x2710a0u: goto label_2710a0;
        default: break;
    }

    ctx->pc = 0x270f5cu;

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
    ctx->pc = 0x2710a8u;
}
