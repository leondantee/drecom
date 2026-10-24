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

// Function: entry_0023ee10
// Address: 0x23ee10 - 0x23ef38
void entry_0023ee10_0x23ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ee10_0x23ee10");
#endif

    switch (ctx->pc) {
        case 0x23ee3cu: goto label_23ee3c;
        case 0x23ee58u: goto label_23ee58;
        case 0x23ee8cu: goto label_23ee8c;
        case 0x23ee98u: goto label_23ee98;
        case 0x23ef30u: goto label_23ef30;
        default: break;
    }

    ctx->pc = 0x23ee10u;

    // 0x23ee10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee18: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x23ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x23ee1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23ee1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23ee20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23ee20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23ee24: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23ee28: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23ee2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23ee30: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23ee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23ee34: 0xc05c848  jal         func_172120
    ctx->pc = 0x23EE34u;
    SET_GPR_U32(ctx, 31, 0x23EE3Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23EE34u, 0x23EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE3Cu;
label_23ee3c:
    // 0x23ee3c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x23ee3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x23ee40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee44: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23ee44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ee48: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x23ee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ee4c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23ee4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23ee50: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23EE50u;
    SET_GPR_U32(ctx, 31, 0x23EE58u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23EE50u, 0x23EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE58u;
label_23ee58:
    // 0x23ee58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee5c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23ee5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23ee60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee64: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x23ee64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ee68: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x23ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x23ee6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ee6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ee70: 0x0  nop
    ctx->pc = 0x23ee70u;
    // NOP
    // 0x23ee74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23ee74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23ee78: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x23ee78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x23ee7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23ee80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23ee84: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23EE84u;
    SET_GPR_U32(ctx, 31, 0x23EE8Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23EE84u, 0x23EE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE8Cu;
label_23ee8c:
    // 0x23ee8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee90: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23EE90u;
    SET_GPR_U32(ctx, 31, 0x23EE98u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23EE90u, 0x23EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE98u;
label_23ee98:
    // 0x23ee98: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23ee98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee9c: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x23ee9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x23eea0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x23eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23eea4: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x23eea4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23eea8: 0x1480010b  bnez        $a0, . + 4 + (0x10B << 2)
    ctx->pc = 0x23EEA8u;
    {
        const bool branch_taken_0x23eea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eea8) {
            ctx->pc = 0x23F2D8u;
            return;
        }
    }
    ctx->pc = 0x23EEB0u;
    // 0x23eeb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23eeb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eeb8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23eeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23eebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23eebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eec0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eec4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23eec8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23eec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23eecc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x23eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x23eed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23eed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eed4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eed8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23eedc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23eedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23eee0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x23eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x23eee4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23eee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23eee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23eee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eeec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eef0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23eef4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23eef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23eef8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23eefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23eefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ef00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef04: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ef08: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23ef08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23ef0c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23ef10: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23ef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23ef14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23ef14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ef18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ef1c: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x23ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x23ef20: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23ef20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23ef24: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23ef24u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23ef28: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23EF28u;
    SET_GPR_U32(ctx, 31, 0x23EF30u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23EF28u, 0x23EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF30u;
label_23ef30:
    // 0x23ef30: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x23EF30u;
    {
        const bool branch_taken_0x23ef30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ef30) {
            ctx->pc = 0x23F2D8u;
            return;
        }
    }
    ctx->pc = 0x23EF38u;
}
