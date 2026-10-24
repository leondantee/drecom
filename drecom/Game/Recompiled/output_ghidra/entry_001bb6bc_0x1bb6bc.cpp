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

// Function: entry_001bb6bc
// Address: 0x1bb6bc - 0x1bb790
void entry_001bb6bc_0x1bb6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb6bc_0x1bb6bc");
#endif

    switch (ctx->pc) {
        case 0x1bb6e8u: goto label_1bb6e8;
        case 0x1bb6fcu: goto label_1bb6fc;
        case 0x1bb710u: goto label_1bb710;
        case 0x1bb728u: goto label_1bb728;
        default: break;
    }

    ctx->pc = 0x1bb6bcu;

    // 0x1bb6bc: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x1bb6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb6c0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1bb6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1bb6c4: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1bb6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x1bb6c8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1bb6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1bb6cc: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x1bb6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x1bb6d0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb6d4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1bb6d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1bb6d8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1bb6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bb6dc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1bb6dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1bb6e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BB6E0u;
    SET_GPR_U32(ctx, 31, 0x1BB6E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BB6E0u, 0x1BB6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6E8u;
label_1bb6e8:
    // 0x1bb6e8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1bb6e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bb6ec: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x1bb6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb6f0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1bb6f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1bb6f4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BB6F4u;
    SET_GPR_U32(ctx, 31, 0x1BB6FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BB6F4u, 0x1BB6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6FCu;
label_1bb6fc:
    // 0x1bb6fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bb6fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bb700: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb704: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb704u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb708: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BB708u;
    SET_GPR_U32(ctx, 31, 0x1BB710u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BB708u, 0x1BB710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB710u;
label_1bb710:
    // 0x1bb710: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb714: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb718: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1bb718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1bb71c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1bb71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1bb720: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BB720u;
    SET_GPR_U32(ctx, 31, 0x1BB728u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BB720u, 0x1BB728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB728u;
label_1bb728:
    // 0x1bb728: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bb72c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb730: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1bb730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb734: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb738: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1bb738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb73c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bb73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bb740: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bb740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1bb744: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb748: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1bb748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb74c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb750: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1bb750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb754: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bb754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bb758: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1bb758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1bb75c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb760: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1bb760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb764: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb768: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bb768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb76c: 0x0  nop
    ctx->pc = 0x1bb76cu;
    // NOP
    // 0x1bb770: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB770u;
    {
        const bool branch_taken_0x1bb770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb770) {
            ctx->pc = 0x1BB790u;
            return;
        }
    }
    ctx->pc = 0x1BB778u;
    // 0x1bb778: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1bb778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb77c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb780: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bb780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1bb784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb788: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb78c: 0xac821b60  sw          $v0, 0x1B60($a0)
    ctx->pc = 0x1bb78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 2));
    ctx->pc = 0x1bb790u;
}
