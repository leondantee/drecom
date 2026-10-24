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

// Function: entry_00279848
// Address: 0x279848 - 0x279990
void entry_00279848_0x279848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279848_0x279848");
#endif

    switch (ctx->pc) {
        case 0x27986cu: goto label_27986c;
        case 0x279878u: goto label_279878;
        case 0x27989cu: goto label_27989c;
        case 0x2798c0u: goto label_2798c0;
        case 0x2798e4u: goto label_2798e4;
        case 0x279918u: goto label_279918;
        case 0x279924u: goto label_279924;
        case 0x279980u: goto label_279980;
        case 0x27998cu: goto label_27998c;
        default: break;
    }

    ctx->pc = 0x279848u;

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
    ctx->pc = 0x279990u;
}
