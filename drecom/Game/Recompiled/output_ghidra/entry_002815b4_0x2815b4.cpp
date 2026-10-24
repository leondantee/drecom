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

// Function: entry_002815b4
// Address: 0x2815b4 - 0x2816d8
void entry_002815b4_0x2815b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002815b4_0x2815b4");
#endif

    switch (ctx->pc) {
        case 0x2815d8u: goto label_2815d8;
        case 0x2815e4u: goto label_2815e4;
        case 0x281608u: goto label_281608;
        case 0x28162cu: goto label_28162c;
        case 0x281650u: goto label_281650;
        case 0x281684u: goto label_281684;
        case 0x281690u: goto label_281690;
        default: break;
    }

    ctx->pc = 0x2815b4u;

    // 0x2815b4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2815b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2815b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2815b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2815bc: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x2815bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x2815c0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2815c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2815c4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2815c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2815c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2815c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2815cc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2815ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2815d0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2815D0u;
    SET_GPR_U32(ctx, 31, 0x2815D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2815D0u, 0x2815D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815D8u;
label_2815d8:
    // 0x2815d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2815d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2815dc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2815DCu;
    SET_GPR_U32(ctx, 31, 0x2815E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2815DCu, 0x2815E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815E4u;
label_2815e4:
    // 0x2815e4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2815e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2815e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2815e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2815ec: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x2815ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x2815f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2815f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2815f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2815f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2815f8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2815f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2815fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2815fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x281600: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281600u;
    SET_GPR_U32(ctx, 31, 0x281608u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281600u, 0x281608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281608u;
label_281608:
    // 0x281608: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x281608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x28160c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28160cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281610: 0x0  nop
    ctx->pc = 0x281610u;
    // NOP
    // 0x281614: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281618: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x281618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28161c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28161cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281620: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x281620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x281624: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281624u;
    SET_GPR_U32(ctx, 31, 0x28162Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281624u, 0x28162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28162Cu;
label_28162c:
    // 0x28162c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x28162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281630: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281634: 0x0  nop
    ctx->pc = 0x281634u;
    // NOP
    // 0x281638: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281638u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28163c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x28163cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281640: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281644: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x281644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x281648: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281648u;
    SET_GPR_U32(ctx, 31, 0x281650u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281648u, 0x281650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281650u;
label_281650:
    // 0x281650: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x281650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281654: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281658: 0x0  nop
    ctx->pc = 0x281658u;
    // NOP
    // 0x28165c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28165cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281660: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x281660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281664: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281668: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x281668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28166c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x28166cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x281670: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x281670u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281674: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x281674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281678: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281678u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28167c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28167Cu;
    SET_GPR_U32(ctx, 31, 0x281684u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28167Cu, 0x281684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281684u;
label_281684:
    // 0x281684: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281684u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281688: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281688u;
    SET_GPR_U32(ctx, 31, 0x281690u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281688u, 0x281690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281690u;
label_281690:
    // 0x281690: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x281694: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x281694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281698: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x281698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x28169c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28169cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2816a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2816a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2816a4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2816a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2816a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2816a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2816ac: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2816acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2816b0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2816b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2816b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2816b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2816b8: 0x0  nop
    ctx->pc = 0x2816b8u;
    // NOP
    // 0x2816bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2816bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2816c0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2816c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2816c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2816c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2816c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2816c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2816cc: 0x0  nop
    ctx->pc = 0x2816ccu;
    // NOP
    // 0x2816d0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2816d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2816d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2816d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2816d8u;
}
