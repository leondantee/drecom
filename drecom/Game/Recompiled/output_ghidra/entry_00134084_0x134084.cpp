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

// Function: entry_00134084
// Address: 0x134084 - 0x13415c
void entry_00134084_0x134084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134084_0x134084");
#endif

    switch (ctx->pc) {
        case 0x1340d0u: goto label_1340d0;
        case 0x1340e0u: goto label_1340e0;
        case 0x1340f0u: goto label_1340f0;
        case 0x134100u: goto label_134100;
        case 0x134110u: goto label_134110;
        case 0x134120u: goto label_134120;
        case 0x134130u: goto label_134130;
        case 0x134140u: goto label_134140;
        default: break;
    }

    ctx->pc = 0x134084u;

    // 0x134084: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x134084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x134088: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x134088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x13408c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13408cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134090: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x134090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134094: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x134094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x134098: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x134098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x13409c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x13409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1340a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1340a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1340a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1340a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1340a8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1340a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1340ac: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1340acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x1340b0: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1340b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1340b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1340b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1340b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1340b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1340bc: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1340bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1340c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1340c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1340c4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1340c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1340c8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1340C8u;
    SET_GPR_U32(ctx, 31, 0x1340D0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1340C8u, 0x1340D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1340D0u;
label_1340d0:
    // 0x1340d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1340d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1340d4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1340d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1340d8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1340D8u;
    SET_GPR_U32(ctx, 31, 0x1340E0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1340D8u, 0x1340E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1340E0u;
label_1340e0:
    // 0x1340e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1340e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1340e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1340e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1340e8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1340E8u;
    SET_GPR_U32(ctx, 31, 0x1340F0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1340E8u, 0x1340F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1340F0u;
label_1340f0:
    // 0x1340f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1340f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1340f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1340f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1340f8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1340F8u;
    SET_GPR_U32(ctx, 31, 0x134100u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1340F8u, 0x134100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134100u;
label_134100:
    // 0x134100: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134104: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x134104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x134108: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x134108u;
    SET_GPR_U32(ctx, 31, 0x134110u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x134108u, 0x134110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134110u;
label_134110:
    // 0x134110: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134114: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x134114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x134118: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x134118u;
    SET_GPR_U32(ctx, 31, 0x134120u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x134118u, 0x134120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134120u;
label_134120:
    // 0x134120: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134124: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x134124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x134128: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x134128u;
    SET_GPR_U32(ctx, 31, 0x134130u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x134128u, 0x134130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134130u;
label_134130:
    // 0x134130: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134134: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x134134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x134138: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x134138u;
    SET_GPR_U32(ctx, 31, 0x134140u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x134138u, 0x134140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134140u;
label_134140:
    // 0x134140: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x134140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x134144: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x134144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134148: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x134148u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x13414c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134150: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x134150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x134154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x134154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x134158: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x134158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13415cu;
}
