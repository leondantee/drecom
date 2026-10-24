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

// Function: entry_00132f08
// Address: 0x132f08 - 0x132fe0
void entry_00132f08_0x132f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132f08_0x132f08");
#endif

    switch (ctx->pc) {
        case 0x132f54u: goto label_132f54;
        case 0x132f64u: goto label_132f64;
        case 0x132f74u: goto label_132f74;
        case 0x132f84u: goto label_132f84;
        case 0x132f94u: goto label_132f94;
        case 0x132fa4u: goto label_132fa4;
        case 0x132fb4u: goto label_132fb4;
        case 0x132fc4u: goto label_132fc4;
        default: break;
    }

    ctx->pc = 0x132f08u;

    // 0x132f08: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x132f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x132f0c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x132f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x132f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132f14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132f18: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x132f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x132f1c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x132f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x132f20: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x132f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x132f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132f28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132f2c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x132f30: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x132f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x132f34: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x132f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x132f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132f3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132f40: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x132f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x132f44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132f48: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x132f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x132f4c: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x132F4Cu;
    SET_GPR_U32(ctx, 31, 0x132F54u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132F4Cu, 0x132F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F54u;
label_132f54:
    // 0x132f54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132f58: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x132f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x132f5c: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x132F5Cu;
    SET_GPR_U32(ctx, 31, 0x132F64u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132F5Cu, 0x132F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F64u;
label_132f64:
    // 0x132f64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132f68: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x132f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x132f6c: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x132F6Cu;
    SET_GPR_U32(ctx, 31, 0x132F74u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132F6Cu, 0x132F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F74u;
label_132f74:
    // 0x132f74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132f78: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x132f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x132f7c: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x132F7Cu;
    SET_GPR_U32(ctx, 31, 0x132F84u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132F7Cu, 0x132F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F84u;
label_132f84:
    // 0x132f84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132f88: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x132f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x132f8c: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x132F8Cu;
    SET_GPR_U32(ctx, 31, 0x132F94u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132F8Cu, 0x132F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F94u;
label_132f94:
    // 0x132f94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132f98: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x132f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x132f9c: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x132F9Cu;
    SET_GPR_U32(ctx, 31, 0x132FA4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132F9Cu, 0x132FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FA4u;
label_132fa4:
    // 0x132fa4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132fa8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x132fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x132fac: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x132FACu;
    SET_GPR_U32(ctx, 31, 0x132FB4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132FACu, 0x132FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FB4u;
label_132fb4:
    // 0x132fb4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132fb8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x132fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x132fbc: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x132FBCu;
    SET_GPR_U32(ctx, 31, 0x132FC4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132FBCu, 0x132FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FC4u;
label_132fc4:
    // 0x132fc4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x132fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x132fc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132fcc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x132fccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x132fd0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132fd4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x132fd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x132fdc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x132fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x132fe0u;
}
