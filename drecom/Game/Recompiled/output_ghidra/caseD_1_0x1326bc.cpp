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

// Function: caseD_1
// Address: 0x1326bc - 0x13278c
void caseD_1_0x1326bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1326bc");
#endif

    switch (ctx->pc) {
        case 0x1326e0u: goto label_1326e0;
        case 0x1326ecu: goto label_1326ec;
        case 0x1326fcu: goto label_1326fc;
        case 0x13272cu: goto label_13272c;
        default: break;
    }

    ctx->pc = 0x1326bcu;

    // 0x1326bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1326bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1326c0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1326c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1326c4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1326c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1326c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1326c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1326cc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1326ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1326d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1326d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1326d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1326d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1326d8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1326D8u;
    SET_GPR_U32(ctx, 31, 0x1326E0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1326D8u, 0x1326E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1326E0u;
label_1326e0:
    // 0x1326e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1326e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1326e4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1326E4u;
    SET_GPR_U32(ctx, 31, 0x1326ECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1326E4u, 0x1326ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1326ECu;
label_1326ec:
    // 0x1326ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1326ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1326f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1326f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1326f4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1326F4u;
    SET_GPR_U32(ctx, 31, 0x1326FCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1326F4u, 0x1326FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1326FCu;
label_1326fc:
    // 0x1326fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1326fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132700: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132704: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x132704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132708: 0x0  nop
    ctx->pc = 0x132708u;
    // NOP
    // 0x13270c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13270cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132710: 0x0  nop
    ctx->pc = 0x132710u;
    // NOP
    // 0x132714: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x132714u;
    {
        const bool branch_taken_0x132714 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132714) {
            ctx->pc = 0x13278Cu;
            return;
        }
    }
    ctx->pc = 0x13271Cu;
    // 0x13271c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13271cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132720: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x132720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x132724: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x132724u;
    SET_GPR_U32(ctx, 31, 0x13272Cu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x132724u, 0x13272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13272Cu;
label_13272c:
    // 0x13272c: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x13272cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
    // 0x132730: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x132730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x132734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x132734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x132738: 0x0  nop
    ctx->pc = 0x132738u;
    // NOP
    // 0x13273c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13273cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x132740: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x132740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x132744: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132748: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13274c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132750: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x132750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132754: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x132758: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x13275c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132760: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x132760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132764: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x132764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132768: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x132768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13276c: 0x0  nop
    ctx->pc = 0x13276cu;
    // NOP
    // 0x132770: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x132770u;
    {
        const bool branch_taken_0x132770 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132770) {
            ctx->pc = 0x13282Cu;
            return;
        }
    }
    ctx->pc = 0x132778u;
    // 0x132778: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x132778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13277c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132780: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x132784: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x132784u;
    {
        const bool branch_taken_0x132784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132784) {
            ctx->pc = 0x13282Cu;
            return;
        }
    }
    ctx->pc = 0x13278Cu;
}
