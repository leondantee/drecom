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

// Function: caseD_7
// Address: 0x2def08 - 0x2defbc
void caseD_7_0x2def08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x2def08");
#endif

    switch (ctx->pc) {
        case 0x2def18u: goto label_2def18;
        case 0x2def24u: goto label_2def24;
        case 0x2def34u: goto label_2def34;
        case 0x2def4cu: goto label_2def4c;
        default: break;
    }

    ctx->pc = 0x2def08u;

    // 0x2def08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2def08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2def0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2def0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2def10: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DEF10u;
    SET_GPR_U32(ctx, 31, 0x2DEF18u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DEF10u, 0x2DEF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF18u;
label_2def18:
    // 0x2def18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2def18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2def1c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DEF1Cu;
    SET_GPR_U32(ctx, 31, 0x2DEF24u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DEF1Cu, 0x2DEF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF24u;
label_2def24:
    // 0x2def24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2def24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2def28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2def28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2def2c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DEF2Cu;
    SET_GPR_U32(ctx, 31, 0x2DEF34u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DEF2Cu, 0x2DEF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF34u;
label_2def34:
    // 0x2def34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2def34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2def38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2def38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2def3c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2def3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2def40: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2def40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2def44: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2DEF44u;
    SET_GPR_U32(ctx, 31, 0x2DEF4Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2DEF44u, 0x2DEF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF4Cu;
label_2def4c:
    // 0x2def4c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2def4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2def50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2def50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2def54: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2def54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2def58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2def58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2def5c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2def5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2def60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2def60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2def64: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2def64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2def68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2def68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2def6c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2def6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2def70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2def70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2def74: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2def74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2def78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2def78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2def7c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2def7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x2def80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2def80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2def84: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2def84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2def88: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2def88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2def8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2def8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2def90: 0x0  nop
    ctx->pc = 0x2def90u;
    // NOP
    // 0x2def94: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2DEF94u;
    {
        const bool branch_taken_0x2def94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2def94) {
            ctx->pc = 0x2DEFBCu;
            return;
        }
    }
    ctx->pc = 0x2DEF9Cu;
    // 0x2def9c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2def9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2defa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2defa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2defa4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2defa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2defa8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2defa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2defac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2defacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2defb0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2defb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2defb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2defb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2defb8: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2defb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2defbcu;
}
