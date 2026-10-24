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
// Address: 0x139ee0 - 0x139fd0
void caseD_1_0x139ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x139ee0");
#endif

    switch (ctx->pc) {
        case 0x139f04u: goto label_139f04;
        case 0x139f1cu: goto label_139f1c;
        case 0x139f30u: goto label_139f30;
        case 0x139f44u: goto label_139f44;
        case 0x139f58u: goto label_139f58;
        case 0x139f7cu: goto label_139f7c;
        case 0x139fa8u: goto label_139fa8;
        default: break;
    }

    ctx->pc = 0x139ee0u;

    // 0x139ee0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139ee4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139ee8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x139ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x139eec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x139eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x139ef0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x139ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x139ef4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x139ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x139ef8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x139ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x139efc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x139EFCu;
    SET_GPR_U32(ctx, 31, 0x139F04u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x139EFCu, 0x139F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F04u;
label_139f04:
    // 0x139f04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139f08: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x139f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x139f0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139f10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x139f10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139f14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x139F14u;
    SET_GPR_U32(ctx, 31, 0x139F1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x139F14u, 0x139F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F1Cu;
label_139f1c:
    // 0x139f1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139f20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139f24: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x139f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x139f28: 0xc05cd58  jal         func_173560
    ctx->pc = 0x139F28u;
    SET_GPR_U32(ctx, 31, 0x139F30u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x139F28u, 0x139F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F30u;
label_139f30:
    // 0x139f30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139f34: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x139f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x139f38: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x139f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x139f3c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x139F3Cu;
    SET_GPR_U32(ctx, 31, 0x139F44u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x139F44u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x139F44u) { return; }
    ctx->pc = 0x139F44u;
label_139f44:
    // 0x139f44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139f48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139f4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139f50: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x139F50u;
    SET_GPR_U32(ctx, 31, 0x139F58u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x139F50u, 0x139F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F58u;
label_139f58:
    // 0x139f58: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x139f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139f5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139f60: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x139f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x139f64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139f68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x139f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x139f6c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x139f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x139f70: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x139f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x139f74: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x139F74u;
    SET_GPR_U32(ctx, 31, 0x139F7Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x139F74u, 0x139F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F7Cu;
label_139f7c:
    // 0x139f7c: 0xc60112a0  lwc1        $f1, 0x12A0($s0)
    ctx->pc = 0x139f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139f80: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x139f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139f84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x139f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x139f88: 0xe60012a0  swc1        $f0, 0x12A0($s0)
    ctx->pc = 0x139f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4768), bits); }
    // 0x139f8c: 0xc60112a8  lwc1        $f1, 0x12A8($s0)
    ctx->pc = 0x139f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139f90: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x139f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139f94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x139f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x139f98: 0xe60012a8  swc1        $f0, 0x12A8($s0)
    ctx->pc = 0x139f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4776), bits); }
    // 0x139f9c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x139f9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139fa0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x139FA0u;
    SET_GPR_U32(ctx, 31, 0x139FA8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x139FA0u, 0x139FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139FA8u;
label_139fa8:
    // 0x139fa8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139fac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x139facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x139fb0: 0x106000c7  beqz        $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x139FB0u;
    {
        const bool branch_taken_0x139fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139fb0) {
            ctx->pc = 0x13A2D0u;
            return;
        }
    }
    ctx->pc = 0x139FB8u;
    // 0x139fb8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139fbc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x139fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x139fc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139fc4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x139fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x139fc8: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x139FC8u;
    {
        const bool branch_taken_0x139fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139fc8) {
            ctx->pc = 0x13A2D0u;
            return;
        }
    }
    ctx->pc = 0x139FD0u;
}
