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

// Function: entry_00282668
// Address: 0x282668 - 0x2827b0
void entry_00282668_0x282668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282668_0x282668");
#endif

    switch (ctx->pc) {
        case 0x28268cu: goto label_28268c;
        case 0x282698u: goto label_282698;
        case 0x2826bcu: goto label_2826bc;
        case 0x2826e0u: goto label_2826e0;
        case 0x282704u: goto label_282704;
        case 0x282738u: goto label_282738;
        case 0x282744u: goto label_282744;
        case 0x2827a0u: goto label_2827a0;
        case 0x2827acu: goto label_2827ac;
        default: break;
    }

    ctx->pc = 0x282668u;

    // 0x282668: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x282668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28266c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28266cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x282670: 0x24424e10  addiu       $v0, $v0, 0x4E10
    ctx->pc = 0x282670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19984));
    // 0x282674: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x282674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282678: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x282678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28267c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28267cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282680: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x282680u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282684: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x282684u;
    SET_GPR_U32(ctx, 31, 0x28268Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x282684u, 0x28268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28268Cu;
label_28268c:
    // 0x28268c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28268cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x282690: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x282690u;
    SET_GPR_U32(ctx, 31, 0x282698u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x282690u, 0x282698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282698u;
label_282698:
    // 0x282698: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x282698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28269c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2826a0: 0x24424e10  addiu       $v0, $v0, 0x4E10
    ctx->pc = 0x2826a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19984));
    // 0x2826a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2826a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2826a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2826a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2826ac: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2826acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2826b0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2826b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2826b4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2826B4u;
    SET_GPR_U32(ctx, 31, 0x2826BCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2826B4u, 0x2826BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826BCu;
label_2826bc:
    // 0x2826bc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2826bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2826c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2826c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2826c4: 0x0  nop
    ctx->pc = 0x2826c4u;
    // NOP
    // 0x2826c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2826c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2826cc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2826ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2826d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2826d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2826d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2826d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2826d8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2826D8u;
    SET_GPR_U32(ctx, 31, 0x2826E0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2826D8u, 0x2826E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826E0u;
label_2826e0:
    // 0x2826e0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2826e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2826e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2826e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2826e8: 0x0  nop
    ctx->pc = 0x2826e8u;
    // NOP
    // 0x2826ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2826ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2826f0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2826f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2826f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2826f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2826f8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2826f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2826fc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2826FCu;
    SET_GPR_U32(ctx, 31, 0x282704u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2826FCu, 0x282704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282704u;
label_282704:
    // 0x282704: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x282704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x282708: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28270c: 0x0  nop
    ctx->pc = 0x28270cu;
    // NOP
    // 0x282710: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282714: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x282714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28271c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x28271cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x282720: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x282720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x282724: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x282724u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282728: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x282728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28272c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28272cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282730: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x282730u;
    SET_GPR_U32(ctx, 31, 0x282738u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x282730u, 0x282738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282738u;
label_282738:
    // 0x282738: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x282738u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28273c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28273Cu;
    SET_GPR_U32(ctx, 31, 0x282744u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28273Cu, 0x282744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282744u;
label_282744:
    // 0x282744: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x282744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x282748: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x282748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28274c: 0x24424e10  addiu       $v0, $v0, 0x4E10
    ctx->pc = 0x28274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19984));
    // 0x282750: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282754: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x282754u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282758: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x282758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28275c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x28275cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x282760: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x282760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282764: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x282764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x282768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28276c: 0x0  nop
    ctx->pc = 0x28276cu;
    // NOP
    // 0x282770: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x282770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282774: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x282774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x282778: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x282778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28277c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28277cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282780: 0x0  nop
    ctx->pc = 0x282780u;
    // NOP
    // 0x282784: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x282784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x282788: 0x2404171e  addiu       $a0, $zero, 0x171E
    ctx->pc = 0x282788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5918));
    // 0x28278c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28278cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282790: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x282790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x282794: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x282794u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282798: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x282798u;
    SET_GPR_U32(ctx, 31, 0x2827A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x282798u, 0x2827A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827A0u;
label_2827a0:
    // 0x2827a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2827a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2827a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2827A4u;
    SET_GPR_U32(ctx, 31, 0x2827ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2827A4u, 0x2827ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827ACu;
label_2827ac:
    // 0x2827ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2827acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2827b0u;
}
