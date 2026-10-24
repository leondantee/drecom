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

// Function: caseD_9
// Address: 0x147ef0 - 0x147fe4
void caseD_9_0x147ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x147ef0");
#endif

    switch (ctx->pc) {
        case 0x147f00u: goto label_147f00;
        case 0x147f28u: goto label_147f28;
        case 0x147f48u: goto label_147f48;
        case 0x147f5cu: goto label_147f5c;
        case 0x147f94u: goto label_147f94;
        default: break;
    }

    ctx->pc = 0x147ef0u;

    // 0x147ef0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147ef4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147ef4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147ef8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x147EF8u;
    SET_GPR_U32(ctx, 31, 0x147F00u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x147EF8u, 0x147F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F00u;
label_147f00:
    // 0x147f00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147f00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147f04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147f08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147f0c: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x147f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x147f10: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x147f14: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x147f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x147f18: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x147f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147f1c: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x147f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x147f20: 0xc058f50  jal         func_163D40
    ctx->pc = 0x147F20u;
    SET_GPR_U32(ctx, 31, 0x147F28u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x147F20u, 0x147F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F28u;
label_147f28:
    // 0x147f28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147f2c: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x147f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x147f30: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x147f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147f34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147f38: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x147f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x147f3c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x147f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147f40: 0xc05cd58  jal         func_173560
    ctx->pc = 0x147F40u;
    SET_GPR_U32(ctx, 31, 0x147F48u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x147F40u, 0x147F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F48u;
label_147f48:
    // 0x147f48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x147f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x147f4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147f50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x147f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x147f54: 0xc057480  jal         func_15D200
    ctx->pc = 0x147F54u;
    SET_GPR_U32(ctx, 31, 0x147F5Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x147F54u, 0x147F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F5Cu;
label_147f5c:
    // 0x147f5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147f5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147f60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147f64: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x147f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x147f68: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x147f68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147f6c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x147f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x147f70: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x147f70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x147f74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147f78: 0xc4401b5c  lwc1        $f0, 0x1B5C($v0)
    ctx->pc = 0x147f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147f7c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x147f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x147f80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147f84: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x147f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x147f88: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x147f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x147f8c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x147F8Cu;
    SET_GPR_U32(ctx, 31, 0x147F94u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x147F8Cu, 0x147F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F94u;
label_147f94:
    // 0x147f94: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x147f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x147f98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147f9c: 0xc4611b5c  lwc1        $f1, 0x1B5C($v1)
    ctx->pc = 0x147f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147fa0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x147fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147fa4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x147fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x147fa8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x147fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x147fac: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x147facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147fb0: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x147fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x147fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147fb8: 0x0  nop
    ctx->pc = 0x147fb8u;
    // NOP
    // 0x147fbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147fbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147fc0: 0x0  nop
    ctx->pc = 0x147fc0u;
    // NOP
    // 0x147fc4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147FC4u;
    {
        const bool branch_taken_0x147fc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147fc4) {
            ctx->pc = 0x147FE4u;
            return;
        }
    }
    ctx->pc = 0x147FCCu;
    // 0x147fcc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147fd0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x147fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147fd4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x147fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147fd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x147fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x147fdc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147fe0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x147fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x147fe4u;
}
