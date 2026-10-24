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

// Function: entry_00133640
// Address: 0x133640 - 0x133718
void entry_00133640_0x133640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133640_0x133640");
#endif

    switch (ctx->pc) {
        case 0x13368cu: goto label_13368c;
        case 0x13369cu: goto label_13369c;
        case 0x1336acu: goto label_1336ac;
        case 0x1336bcu: goto label_1336bc;
        case 0x1336ccu: goto label_1336cc;
        case 0x1336dcu: goto label_1336dc;
        case 0x1336ecu: goto label_1336ec;
        case 0x1336fcu: goto label_1336fc;
        default: break;
    }

    ctx->pc = 0x133640u;

    // 0x133640: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x133644: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x133648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13364c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133650: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x133650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x133654: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x133658: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x13365c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13365cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133660: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133664: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x133664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x133668: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x13366c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x13366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x133670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133674: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133678: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x133678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x13367c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133680: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x133680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x133684: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133684u;
    SET_GPR_U32(ctx, 31, 0x13368Cu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133684u, 0x13368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13368Cu;
label_13368c:
    // 0x13368c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13368cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133690: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x133690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x133694: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133694u;
    SET_GPR_U32(ctx, 31, 0x13369Cu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133694u, 0x13369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13369Cu;
label_13369c:
    // 0x13369c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13369cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1336a0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1336a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1336a4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1336A4u;
    SET_GPR_U32(ctx, 31, 0x1336ACu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1336A4u, 0x1336ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336ACu;
label_1336ac:
    // 0x1336ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1336acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1336b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1336b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1336b4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1336B4u;
    SET_GPR_U32(ctx, 31, 0x1336BCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1336B4u, 0x1336BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336BCu;
label_1336bc:
    // 0x1336bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1336bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1336c0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1336c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1336c4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1336C4u;
    SET_GPR_U32(ctx, 31, 0x1336CCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1336C4u, 0x1336CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336CCu;
label_1336cc:
    // 0x1336cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1336ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1336d0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1336d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1336d4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1336D4u;
    SET_GPR_U32(ctx, 31, 0x1336DCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1336D4u, 0x1336DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336DCu;
label_1336dc:
    // 0x1336dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1336dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1336e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1336e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1336e4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1336E4u;
    SET_GPR_U32(ctx, 31, 0x1336ECu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1336E4u, 0x1336ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336ECu;
label_1336ec:
    // 0x1336ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1336ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1336f0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1336f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1336f4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1336F4u;
    SET_GPR_U32(ctx, 31, 0x1336FCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1336F4u, 0x1336FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336FCu;
label_1336fc:
    // 0x1336fc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1336fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x133700: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133704: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x133704u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x133708: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13370c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x13370cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133710: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133714: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x133714u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x133718u;
}
