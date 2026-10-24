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

// Function: entry_002827c8
// Address: 0x2827c8 - 0x282910
void entry_002827c8_0x2827c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002827c8_0x2827c8");
#endif

    switch (ctx->pc) {
        case 0x2827ecu: goto label_2827ec;
        case 0x2827f8u: goto label_2827f8;
        case 0x28281cu: goto label_28281c;
        case 0x282840u: goto label_282840;
        case 0x282864u: goto label_282864;
        case 0x282898u: goto label_282898;
        case 0x2828a4u: goto label_2828a4;
        case 0x282900u: goto label_282900;
        case 0x28290cu: goto label_28290c;
        default: break;
    }

    ctx->pc = 0x2827c8u;

    // 0x2827c8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2827c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2827cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2827ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2827d0: 0x24424e00  addiu       $v0, $v0, 0x4E00
    ctx->pc = 0x2827d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
    // 0x2827d4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2827d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2827d8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2827d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2827dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2827dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2827e0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2827e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2827e4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2827E4u;
    SET_GPR_U32(ctx, 31, 0x2827ECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2827E4u, 0x2827ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827ECu;
label_2827ec:
    // 0x2827ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2827ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2827f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2827F0u;
    SET_GPR_U32(ctx, 31, 0x2827F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2827F0u, 0x2827F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827F8u;
label_2827f8:
    // 0x2827f8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2827f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2827fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2827fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x282800: 0x24424e00  addiu       $v0, $v0, 0x4E00
    ctx->pc = 0x282800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
    // 0x282804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282808: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x282808u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28280c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28280cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x282810: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x282810u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x282814: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282814u;
    SET_GPR_U32(ctx, 31, 0x28281Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282814u, 0x28281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28281Cu;
label_28281c:
    // 0x28281c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x28281cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x282820: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282824: 0x0  nop
    ctx->pc = 0x282824u;
    // NOP
    // 0x282828: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28282c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282830: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282834: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x282834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x282838: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282838u;
    SET_GPR_U32(ctx, 31, 0x282840u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282838u, 0x282840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282840u;
label_282840:
    // 0x282840: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x282840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x282844: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282848: 0x0  nop
    ctx->pc = 0x282848u;
    // NOP
    // 0x28284c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28284cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282850: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x282850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282854: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282858: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x282858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28285c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x28285Cu;
    SET_GPR_U32(ctx, 31, 0x282864u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x28285Cu, 0x282864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282864u;
label_282864:
    // 0x282864: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x282864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x282868: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28286c: 0x0  nop
    ctx->pc = 0x28286cu;
    // NOP
    // 0x282870: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282874: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x282874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282878: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28287c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x28287cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x282880: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x282880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x282884: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x282884u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282888: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x282888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28288c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28288cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282890: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x282890u;
    SET_GPR_U32(ctx, 31, 0x282898u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x282890u, 0x282898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282898u;
label_282898:
    // 0x282898: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x282898u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28289c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28289Cu;
    SET_GPR_U32(ctx, 31, 0x2828A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28289Cu, 0x2828A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2828A4u;
label_2828a4:
    // 0x2828a4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2828a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2828a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2828a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2828ac: 0x24424e00  addiu       $v0, $v0, 0x4E00
    ctx->pc = 0x2828acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
    // 0x2828b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2828b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2828b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2828b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2828b8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2828b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2828bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2828bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2828c0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2828c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2828c4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2828c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2828c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2828c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2828cc: 0x0  nop
    ctx->pc = 0x2828ccu;
    // NOP
    // 0x2828d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2828d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2828d4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2828d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2828d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2828d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2828dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2828dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2828e0: 0x0  nop
    ctx->pc = 0x2828e0u;
    // NOP
    // 0x2828e4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2828e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2828e8: 0x2404171d  addiu       $a0, $zero, 0x171D
    ctx->pc = 0x2828e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5917));
    // 0x2828ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2828ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2828f0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2828f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2828f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2828f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2828f8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2828F8u;
    SET_GPR_U32(ctx, 31, 0x282900u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2828F8u, 0x282900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282900u;
label_282900:
    // 0x282900: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x282900u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x282904: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x282904u;
    SET_GPR_U32(ctx, 31, 0x28290Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x282904u, 0x28290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28290Cu;
label_28290c:
    // 0x28290c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28290cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x282910u;
}
