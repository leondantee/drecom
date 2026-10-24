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
// Address: 0x149a68 - 0x149b1c
void caseD_1_0x149a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x149a68");
#endif

    switch (ctx->pc) {
        case 0x149a8cu: goto label_149a8c;
        case 0x149aa4u: goto label_149aa4;
        case 0x149ad4u: goto label_149ad4;
        case 0x149ae8u: goto label_149ae8;
        case 0x149af4u: goto label_149af4;
        default: break;
    }

    ctx->pc = 0x149a68u;

    // 0x149a68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149a6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149a70: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x149a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x149a74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x149a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x149a78: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x149a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x149a7c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x149a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x149a80: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x149a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x149a84: 0xc058f50  jal         func_163D40
    ctx->pc = 0x149A84u;
    SET_GPR_U32(ctx, 31, 0x149A8Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x149A84u, 0x149A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A8Cu;
label_149a8c:
    // 0x149a8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149a90: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x149a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x149a94: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149a98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149a98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149a9c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x149A9Cu;
    SET_GPR_U32(ctx, 31, 0x149AA4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149A9Cu, 0x149AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AA4u;
label_149aa4:
    // 0x149aa4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149aa8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x149aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149aac: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x149aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x149ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149ab4: 0x0  nop
    ctx->pc = 0x149ab4u;
    // NOP
    // 0x149ab8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x149ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x149abc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x149abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x149ac0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149ac4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149ac8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x149ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x149acc: 0xc05cd58  jal         func_173560
    ctx->pc = 0x149ACCu;
    SET_GPR_U32(ctx, 31, 0x149AD4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x149ACCu, 0x149AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AD4u;
label_149ad4:
    // 0x149ad4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149ad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x149ad8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149adc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149adcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149ae0: 0xc057480  jal         func_15D200
    ctx->pc = 0x149AE0u;
    SET_GPR_U32(ctx, 31, 0x149AE8u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x149AE0u, 0x149AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AE8u;
label_149ae8:
    // 0x149ae8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x149ae8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149aec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x149AECu;
    SET_GPR_U32(ctx, 31, 0x149AF4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x149AECu, 0x149AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AF4u;
label_149af4:
    // 0x149af4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149af8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x149af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x149afc: 0x106000c4  beqz        $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x149AFCu;
    {
        const bool branch_taken_0x149afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149afc) {
            ctx->pc = 0x149E10u;
            return;
        }
    }
    ctx->pc = 0x149B04u;
    // 0x149b04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149b08: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x149b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x149b0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149b10: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x149b10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x149b14: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x149B14u;
    {
        const bool branch_taken_0x149b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149b14) {
            ctx->pc = 0x149E10u;
            return;
        }
    }
    ctx->pc = 0x149B1Cu;
}
