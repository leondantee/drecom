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

// Function: entry_00133c34
// Address: 0x133c34 - 0x133d0c
void entry_00133c34_0x133c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133c34_0x133c34");
#endif

    switch (ctx->pc) {
        case 0x133c80u: goto label_133c80;
        case 0x133c90u: goto label_133c90;
        case 0x133ca0u: goto label_133ca0;
        case 0x133cb0u: goto label_133cb0;
        case 0x133cc0u: goto label_133cc0;
        case 0x133cd0u: goto label_133cd0;
        case 0x133ce0u: goto label_133ce0;
        case 0x133cf0u: goto label_133cf0;
        default: break;
    }

    ctx->pc = 0x133c34u;

    // 0x133c34: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x133c38: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x133c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133c40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c44: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x133c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x133c48: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x133c4c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x133c50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133c54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c58: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x133c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x133c5c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x133c60: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x133c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133c68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c6c: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x133c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x133c70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c74: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x133c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x133c78: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133C78u;
    SET_GPR_U32(ctx, 31, 0x133C80u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133C78u, 0x133C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C80u;
label_133c80:
    // 0x133c80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c84: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x133c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x133c88: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133C88u;
    SET_GPR_U32(ctx, 31, 0x133C90u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133C88u, 0x133C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C90u;
label_133c90:
    // 0x133c90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c94: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x133c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x133c98: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133C98u;
    SET_GPR_U32(ctx, 31, 0x133CA0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133C98u, 0x133CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CA0u;
label_133ca0:
    // 0x133ca0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ca4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x133ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x133ca8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133CA8u;
    SET_GPR_U32(ctx, 31, 0x133CB0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133CA8u, 0x133CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CB0u;
label_133cb0:
    // 0x133cb0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133cb4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x133cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x133cb8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133CB8u;
    SET_GPR_U32(ctx, 31, 0x133CC0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133CB8u, 0x133CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CC0u;
label_133cc0:
    // 0x133cc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133cc4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x133cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x133cc8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133CC8u;
    SET_GPR_U32(ctx, 31, 0x133CD0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133CC8u, 0x133CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CD0u;
label_133cd0:
    // 0x133cd0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133cd4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x133cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x133cd8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133CD8u;
    SET_GPR_U32(ctx, 31, 0x133CE0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133CD8u, 0x133CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CE0u;
label_133ce0:
    // 0x133ce0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ce4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x133ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x133ce8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133CE8u;
    SET_GPR_U32(ctx, 31, 0x133CF0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133CE8u, 0x133CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CF0u;
label_133cf0:
    // 0x133cf0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x133cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x133cf4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133cf8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x133cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x133cfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d00: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133d04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133d08: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133d08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x133d0cu;
}
