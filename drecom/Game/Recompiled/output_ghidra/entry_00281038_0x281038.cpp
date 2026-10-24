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

// Function: entry_00281038
// Address: 0x281038 - 0x281180
void entry_00281038_0x281038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281038_0x281038");
#endif

    switch (ctx->pc) {
        case 0x28105cu: goto label_28105c;
        case 0x281068u: goto label_281068;
        case 0x28108cu: goto label_28108c;
        case 0x2810b0u: goto label_2810b0;
        case 0x2810d4u: goto label_2810d4;
        case 0x281108u: goto label_281108;
        case 0x281114u: goto label_281114;
        case 0x281170u: goto label_281170;
        case 0x28117cu: goto label_28117c;
        default: break;
    }

    ctx->pc = 0x281038u;

    // 0x281038: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28103c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281040: 0x244235d0  addiu       $v0, $v0, 0x35D0
    ctx->pc = 0x281040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
    // 0x281044: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x281044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281048: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x281048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28104c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28104cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281050: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281050u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281054: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281054u;
    SET_GPR_U32(ctx, 31, 0x28105Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281054u, 0x28105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28105Cu;
label_28105c:
    // 0x28105c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28105cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281060: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281060u;
    SET_GPR_U32(ctx, 31, 0x281068u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281060u, 0x281068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281068u;
label_281068:
    // 0x281068: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28106c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28106cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281070: 0x244235d0  addiu       $v0, $v0, 0x35D0
    ctx->pc = 0x281070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
    // 0x281074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281078: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x281078u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28107c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281080: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x281080u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x281084: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281084u;
    SET_GPR_U32(ctx, 31, 0x28108Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281084u, 0x28108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28108Cu;
label_28108c:
    // 0x28108c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x28108cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281090: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281094: 0x0  nop
    ctx->pc = 0x281094u;
    // NOP
    // 0x281098: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281098u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28109c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2810a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2810a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2810a4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2810a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2810a8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2810A8u;
    SET_GPR_U32(ctx, 31, 0x2810B0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2810A8u, 0x2810B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2810B0u;
label_2810b0:
    // 0x2810b0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2810b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2810b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2810b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2810b8: 0x0  nop
    ctx->pc = 0x2810b8u;
    // NOP
    // 0x2810bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2810bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2810c0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2810c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2810c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2810c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2810c8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2810c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2810cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2810CCu;
    SET_GPR_U32(ctx, 31, 0x2810D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2810CCu, 0x2810D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2810D4u;
label_2810d4:
    // 0x2810d4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2810d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2810d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2810d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2810dc: 0x0  nop
    ctx->pc = 0x2810dcu;
    // NOP
    // 0x2810e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2810e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2810e4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2810e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2810e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2810e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2810ec: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2810ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2810f0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2810f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2810f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2810f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2810f8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2810f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2810fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2810fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281100: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281100u;
    SET_GPR_U32(ctx, 31, 0x281108u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281100u, 0x281108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281108u;
label_281108:
    // 0x281108: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28110c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28110Cu;
    SET_GPR_U32(ctx, 31, 0x281114u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28110Cu, 0x281114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281114u;
label_281114:
    // 0x281114: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x281118: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x281118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28111c: 0x244235d0  addiu       $v0, $v0, 0x35D0
    ctx->pc = 0x28111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
    // 0x281120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281124: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x281124u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281128: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x281128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28112c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x28112cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x281130: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x281130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281134: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x281134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x281138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28113c: 0x0  nop
    ctx->pc = 0x28113cu;
    // NOP
    // 0x281140: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x281140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x281144: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x281144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x281148: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x281148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28114c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28114cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281150: 0x0  nop
    ctx->pc = 0x281150u;
    // NOP
    // 0x281154: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x281154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x281158: 0x2404171e  addiu       $a0, $zero, 0x171E
    ctx->pc = 0x281158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5918));
    // 0x28115c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28115cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281160: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x281160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281164: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281164u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281168: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281168u;
    SET_GPR_U32(ctx, 31, 0x281170u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281168u, 0x281170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281170u;
label_281170:
    // 0x281170: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281170u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281174: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281174u;
    SET_GPR_U32(ctx, 31, 0x28117Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281174u, 0x28117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28117Cu;
label_28117c:
    // 0x28117c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28117cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x281180u;
}
