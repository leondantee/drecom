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

// Function: entry_0020caa8
// Address: 0x20caa8 - 0x20cbb0
void entry_0020caa8_0x20caa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020caa8_0x20caa8");
#endif

    switch (ctx->pc) {
        case 0x20cad0u: goto label_20cad0;
        case 0x20cafcu: goto label_20cafc;
        case 0x20cb20u: goto label_20cb20;
        case 0x20cb3cu: goto label_20cb3c;
        case 0x20cb50u: goto label_20cb50;
        case 0x20cb64u: goto label_20cb64;
        case 0x20cb74u: goto label_20cb74;
        case 0x20cb8cu: goto label_20cb8c;
        case 0x20cba8u: goto label_20cba8;
        default: break;
    }

    ctx->pc = 0x20caa8u;

    // 0x20caa8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20caac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20caacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20cab0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cab4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cab8: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20cab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20cabc: 0x260512a0  addiu       $a1, $s0, 0x12A0
    ctx->pc = 0x20cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x20cac0: 0x244612b0  addiu       $a2, $v0, 0x12B0
    ctx->pc = 0x20cac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x20cac4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x20cac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cac8: 0xc05ce04  jal         func_173810
    ctx->pc = 0x20CAC8u;
    SET_GPR_U32(ctx, 31, 0x20CAD0u);
    ctx->pc = 0x173810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173810u, 0x20CAC8u, 0x20CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAD0u;
label_20cad0:
    // 0x20cad0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cad4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x20cad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x20cad8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x20cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x20cadc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20cadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20cae0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20cae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20cae4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cae8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20caec: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x20caecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20caf0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x20caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20caf4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20CAF4u;
    SET_GPR_U32(ctx, 31, 0x20CAFCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20CAF4u, 0x20CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAFCu;
label_20cafc:
    // 0x20cafc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb00: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20cb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x20cb04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb0c: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20cb10: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x20cb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x20cb14: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20cb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cb18: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20CB18u;
    SET_GPR_U32(ctx, 31, 0x20CB20u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20CB18u, 0x20CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB20u;
label_20cb20:
    // 0x20cb20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb28: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x20cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x20cb2c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20cb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20cb30: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20cb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cb34: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20CB34u;
    SET_GPR_U32(ctx, 31, 0x20CB3Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20CB34u, 0x20CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB3Cu;
label_20cb3c:
    // 0x20cb3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb44: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x20cb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20cb48: 0xc05cd58  jal         func_173560
    ctx->pc = 0x20CB48u;
    SET_GPR_U32(ctx, 31, 0x20CB50u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x20CB48u, 0x20CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB50u;
label_20cb50:
    // 0x20cb50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cb58: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20cb5c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20CB5Cu;
    SET_GPR_U32(ctx, 31, 0x20CB64u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20CB64u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20CB64u) { return; }
    ctx->pc = 0x20CB64u;
label_20cb64:
    // 0x20cb64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20cb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20cb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cb6c: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20CB6Cu;
    SET_GPR_U32(ctx, 31, 0x20CB74u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20CB6Cu, 0x20CB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB74u;
label_20cb74:
    // 0x20cb74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20cb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cb7c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20cb80: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20cb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cb84: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x20CB84u;
    SET_GPR_U32(ctx, 31, 0x20CB8Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x20CB84u, 0x20CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB8Cu;
label_20cb8c:
    // 0x20cb8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb94: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20cb98: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x20cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x20cb9c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20cb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cba0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20CBA0u;
    SET_GPR_U32(ctx, 31, 0x20CBA8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20CBA0u, 0x20CBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBA8u;
label_20cba8:
    // 0x20cba8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20CBA8u;
    {
        const bool branch_taken_0x20cba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cba8) {
            ctx->pc = 0x20CBCCu;
            return;
        }
    }
    ctx->pc = 0x20CBB0u;
}
