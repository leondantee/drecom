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

// Function: entry_00133368
// Address: 0x133368 - 0x133440
void entry_00133368_0x133368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133368_0x133368");
#endif

    switch (ctx->pc) {
        case 0x1333b4u: goto label_1333b4;
        case 0x1333c4u: goto label_1333c4;
        case 0x1333d4u: goto label_1333d4;
        case 0x1333e4u: goto label_1333e4;
        case 0x1333f4u: goto label_1333f4;
        case 0x133404u: goto label_133404;
        case 0x133414u: goto label_133414;
        case 0x133424u: goto label_133424;
        default: break;
    }

    ctx->pc = 0x133368u;

    // 0x133368: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x13336c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x13336cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x133370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133374: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133378: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x133378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x13337c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x13337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x133380: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x133384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133388: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13338c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13338cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x133390: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x133394: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x133398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13339c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1333a0: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1333a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1333a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1333a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1333a8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1333a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1333ac: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1333ACu;
    SET_GPR_U32(ctx, 31, 0x1333B4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1333ACu, 0x1333B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333B4u;
label_1333b4:
    // 0x1333b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1333b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1333b8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1333b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1333bc: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1333BCu;
    SET_GPR_U32(ctx, 31, 0x1333C4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1333BCu, 0x1333C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333C4u;
label_1333c4:
    // 0x1333c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1333c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1333c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1333c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1333cc: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1333CCu;
    SET_GPR_U32(ctx, 31, 0x1333D4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1333CCu, 0x1333D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333D4u;
label_1333d4:
    // 0x1333d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1333d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1333d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1333d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1333dc: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1333DCu;
    SET_GPR_U32(ctx, 31, 0x1333E4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1333DCu, 0x1333E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333E4u;
label_1333e4:
    // 0x1333e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1333e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1333e8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1333e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1333ec: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1333ECu;
    SET_GPR_U32(ctx, 31, 0x1333F4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1333ECu, 0x1333F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333F4u;
label_1333f4:
    // 0x1333f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1333f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1333f8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1333f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1333fc: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1333FCu;
    SET_GPR_U32(ctx, 31, 0x133404u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1333FCu, 0x133404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133404u;
label_133404:
    // 0x133404: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133408: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x133408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13340c: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x13340Cu;
    SET_GPR_U32(ctx, 31, 0x133414u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x13340Cu, 0x133414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133414u;
label_133414:
    // 0x133414: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133418: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x133418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13341c: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x13341Cu;
    SET_GPR_U32(ctx, 31, 0x133424u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x13341Cu, 0x133424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133424u;
label_133424:
    // 0x133424: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x133424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x133428: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13342c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x13342cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x133430: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133434: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13343c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13343cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x133440u;
}
