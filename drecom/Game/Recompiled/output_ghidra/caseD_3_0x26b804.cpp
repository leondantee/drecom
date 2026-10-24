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

// Function: caseD_3
// Address: 0x26b804 - 0x26b8b0
void caseD_3_0x26b804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x26b804");
#endif

    switch (ctx->pc) {
        case 0x26b814u: goto label_26b814;
        case 0x26b828u: goto label_26b828;
        case 0x26b838u: goto label_26b838;
        default: break;
    }

    ctx->pc = 0x26b804u;

    // 0x26b804: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b808: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b808u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26b80c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26B80Cu;
    SET_GPR_U32(ctx, 31, 0x26B814u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26B80Cu, 0x26B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B814u;
label_26b814:
    // 0x26b814: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26b814u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26b818: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b81c: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x26b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x26b820: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26B820u;
    SET_GPR_U32(ctx, 31, 0x26B828u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B820u, 0x26B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B828u;
label_26b828:
    // 0x26b828: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26b828u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26b82c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b830: 0xc05cd10  jal         func_173440
    ctx->pc = 0x26B830u;
    SET_GPR_U32(ctx, 31, 0x26B838u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26B830u, 0x26B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B838u;
label_26b838:
    // 0x26b838: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b83c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x26b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b844: 0x0  nop
    ctx->pc = 0x26b844u;
    // NOP
    // 0x26b848: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26b848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b84c: 0x0  nop
    ctx->pc = 0x26b84cu;
    // NOP
    // 0x26b850: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x26B850u;
    {
        const bool branch_taken_0x26b850 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b850) {
            ctx->pc = 0x26B8C8u;
            return;
        }
    }
    ctx->pc = 0x26B858u;
    // 0x26b858: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b85c: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x26b85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b860: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b864: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x26b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b868: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26b868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26b86c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x26b86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x26b870: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x26b870u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26b874: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26b874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26b878: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26b878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x26b87c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26B87Cu;
    {
        const bool branch_taken_0x26b87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b87c) {
            ctx->pc = 0x26B8B0u;
            return;
        }
    }
    ctx->pc = 0x26B884u;
    // 0x26b884: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b888: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x26b888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x26b88c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26b88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b890: 0xc4601280  lwc1        $f0, 0x1280($v1)
    ctx->pc = 0x26b890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b894: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x26b894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26b898: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b89c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x26b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b8a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26b8a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26b8a4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x26b8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x26b8a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26B8A8u;
    {
        const bool branch_taken_0x26b8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b8a8) {
            ctx->pc = 0x26B8C8u;
            return;
        }
    }
    ctx->pc = 0x26B8B0u;
}
