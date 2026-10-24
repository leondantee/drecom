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

// Function: entry_00137524
// Address: 0x137524 - 0x137658
void entry_00137524_0x137524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137524_0x137524");
#endif

    switch (ctx->pc) {
        case 0x137540u: goto label_137540;
        case 0x1375d8u: goto label_1375d8;
        case 0x1375e8u: goto label_1375e8;
        case 0x1375f8u: goto label_1375f8;
        case 0x137608u: goto label_137608;
        case 0x137618u: goto label_137618;
        case 0x137628u: goto label_137628;
        case 0x137638u: goto label_137638;
        case 0x137648u: goto label_137648;
        default: break;
    }

    ctx->pc = 0x137524u;

    // 0x137524: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x137524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x137528: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x137528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13752c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13752cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x137530: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x137530u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x137534: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x137534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137538: 0xc0561d4  jal         func_158750
    ctx->pc = 0x137538u;
    SET_GPR_U32(ctx, 31, 0x137540u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x137538u, 0x137540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137540u;
label_137540:
    // 0x137540: 0x93828094  lbu         $v0, -0x7F6C($gp)
    ctx->pc = 0x137540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934676)));
    // 0x137544: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x137544u;
    {
        const bool branch_taken_0x137544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137544) {
            ctx->pc = 0x137658u;
            return;
        }
    }
    ctx->pc = 0x13754Cu;
    // 0x13754c: 0xa3808090  sb          $zero, -0x7F70($gp)
    ctx->pc = 0x13754cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934672), (uint8_t)GPR_U32(ctx, 0));
    // 0x137550: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137554: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137558: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x137558u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x13755c: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x13755cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x137560: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137564: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137568: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x137568u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x13756c: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x13756cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x137570: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137574: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137578: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x137578u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x13757c: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x13757cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x137580: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x137580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x137584: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x137584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x137588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x137588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13758c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x13758cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137590: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x137590u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137594: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x137594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x137598: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x137598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x13759c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x13759cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1375a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1375a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1375a4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1375a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1375a8: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x1375a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1375ac: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1375acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1375b0: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1375b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x1375b4: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1375b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1375b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1375b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1375bc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1375bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1375c0: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x1375c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1375c4: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1375c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1375c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1375c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1375cc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1375ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1375d0: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1375D0u;
    SET_GPR_U32(ctx, 31, 0x1375D8u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1375D0u, 0x1375D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375D8u;
label_1375d8:
    // 0x1375d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1375d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1375dc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1375dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1375e0: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1375E0u;
    SET_GPR_U32(ctx, 31, 0x1375E8u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1375E0u, 0x1375E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375E8u;
label_1375e8:
    // 0x1375e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1375e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1375ec: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1375ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1375f0: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1375F0u;
    SET_GPR_U32(ctx, 31, 0x1375F8u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1375F0u, 0x1375F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375F8u;
label_1375f8:
    // 0x1375f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1375f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1375fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1375fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x137600: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x137600u;
    SET_GPR_U32(ctx, 31, 0x137608u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x137600u, 0x137608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137608u;
label_137608:
    // 0x137608: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x137608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13760c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x13760cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x137610: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x137610u;
    SET_GPR_U32(ctx, 31, 0x137618u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x137610u, 0x137618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137618u;
label_137618:
    // 0x137618: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x137618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13761c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13761cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x137620: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x137620u;
    SET_GPR_U32(ctx, 31, 0x137628u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x137620u, 0x137628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137628u;
label_137628:
    // 0x137628: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x137628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13762c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x13762cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x137630: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x137630u;
    SET_GPR_U32(ctx, 31, 0x137638u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x137630u, 0x137638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137638u;
label_137638:
    // 0x137638: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x137638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13763c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x13763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x137640: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x137640u;
    SET_GPR_U32(ctx, 31, 0x137648u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x137640u, 0x137648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137648u;
label_137648:
    // 0x137648: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x13764c: 0xac206838  sw          $zero, 0x6838($at)
    ctx->pc = 0x13764cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3B6838u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B6838u, _value); } while (0);
    // 0x137650: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x137650u;
    {
        const bool branch_taken_0x137650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137650) {
            ctx->pc = 0x137808u;
            return;
        }
    }
    ctx->pc = 0x137658u;
}
