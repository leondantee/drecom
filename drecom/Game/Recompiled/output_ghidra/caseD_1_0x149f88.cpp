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
// Address: 0x149f88 - 0x14a03c
void caseD_1_0x149f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x149f88");
#endif

    switch (ctx->pc) {
        case 0x149facu: goto label_149fac;
        case 0x149fc4u: goto label_149fc4;
        case 0x149ff4u: goto label_149ff4;
        case 0x14a008u: goto label_14a008;
        case 0x14a014u: goto label_14a014;
        default: break;
    }

    ctx->pc = 0x149f88u;

    // 0x149f88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149f8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149f90: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x149f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x149f94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x149f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x149f98: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x149f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x149f9c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x149f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x149fa0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x149fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x149fa4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x149FA4u;
    SET_GPR_U32(ctx, 31, 0x149FACu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x149FA4u, 0x149FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FACu;
label_149fac:
    // 0x149fac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149fb0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x149fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x149fb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149fb8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149fb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149fbc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x149FBCu;
    SET_GPR_U32(ctx, 31, 0x149FC4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149FBCu, 0x149FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FC4u;
label_149fc4:
    // 0x149fc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149fc8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x149fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149fcc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x149fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x149fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149fd4: 0x0  nop
    ctx->pc = 0x149fd4u;
    // NOP
    // 0x149fd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x149fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x149fdc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x149fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x149fe0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149fe4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149fe8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x149fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x149fec: 0xc05cd58  jal         func_173560
    ctx->pc = 0x149FECu;
    SET_GPR_U32(ctx, 31, 0x149FF4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x149FECu, 0x149FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FF4u;
label_149ff4:
    // 0x149ff4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x149ff8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149ffc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x149ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14a000: 0xc057480  jal         func_15D200
    ctx->pc = 0x14A000u;
    SET_GPR_U32(ctx, 31, 0x14A008u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x14A000u, 0x14A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A008u;
label_14a008:
    // 0x14a008: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14a008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14a00c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14A00Cu;
    SET_GPR_U32(ctx, 31, 0x14A014u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14A00Cu, 0x14A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A014u;
label_14a014:
    // 0x14a014: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a018: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14a018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14a01c: 0x106000db  beqz        $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x14A01Cu;
    {
        const bool branch_taken_0x14a01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a01c) {
            ctx->pc = 0x14A38Cu;
            return;
        }
    }
    ctx->pc = 0x14A024u;
    // 0x14a024: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a028: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14a028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14a02c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a030: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14a030u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14a034: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x14A034u;
    {
        const bool branch_taken_0x14a034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a034) {
            ctx->pc = 0x14A38Cu;
            return;
        }
    }
    ctx->pc = 0x14A03Cu;
}
