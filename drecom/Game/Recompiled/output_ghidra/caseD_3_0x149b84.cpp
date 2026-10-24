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
// Address: 0x149b84 - 0x149c84
void caseD_3_0x149b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x149b84");
#endif

    switch (ctx->pc) {
        case 0x149ba8u: goto label_149ba8;
        case 0x149bc0u: goto label_149bc0;
        case 0x149bf0u: goto label_149bf0;
        case 0x149c04u: goto label_149c04;
        case 0x149c1cu: goto label_149c1c;
        default: break;
    }

    ctx->pc = 0x149b84u;

    // 0x149b84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149b88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149b8c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x149b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x149b90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x149b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x149b94: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x149b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x149b98: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x149b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x149b9c: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x149b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x149ba0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x149BA0u;
    SET_GPR_U32(ctx, 31, 0x149BA8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x149BA0u, 0x149BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BA8u;
label_149ba8:
    // 0x149ba8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149bac: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x149bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x149bb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149bb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149bb8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x149BB8u;
    SET_GPR_U32(ctx, 31, 0x149BC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149BB8u, 0x149BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BC0u;
label_149bc0:
    // 0x149bc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149bc4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x149bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149bc8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x149bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x149bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149bd0: 0x0  nop
    ctx->pc = 0x149bd0u;
    // NOP
    // 0x149bd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x149bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x149bd8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x149bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x149bdc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149be0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149be4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x149be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x149be8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x149BE8u;
    SET_GPR_U32(ctx, 31, 0x149BF0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x149BE8u, 0x149BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BF0u;
label_149bf0:
    // 0x149bf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x149bf4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149bf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149bf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149bfc: 0xc057480  jal         func_15D200
    ctx->pc = 0x149BFCu;
    SET_GPR_U32(ctx, 31, 0x149C04u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x149BFCu, 0x149C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C04u;
label_149c04:
    // 0x149c04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149c08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149c0c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x149c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x149c10: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x149c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x149c14: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x149C14u;
    SET_GPR_U32(ctx, 31, 0x149C1Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x149C14u, 0x149C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C1Cu;
label_149c1c:
    // 0x149c1c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x149c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x149c20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149c24: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x149c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149c28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149c2c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x149c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149c30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149c34: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x149c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x149c38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149c3c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x149c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149c40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149c44: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x149c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149c48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x149c48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x149c4c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x149c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x149c50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149c54: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x149c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149c58: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x149c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149c5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x149c5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149c60: 0x0  nop
    ctx->pc = 0x149c60u;
    // NOP
    // 0x149c64: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x149C64u;
    {
        const bool branch_taken_0x149c64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149c64) {
            ctx->pc = 0x149C84u;
            return;
        }
    }
    ctx->pc = 0x149C6Cu;
    // 0x149c6c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x149c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149c70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149c74: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x149c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x149c78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x149c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x149c7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149c80: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x149c80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x149c84u;
}
