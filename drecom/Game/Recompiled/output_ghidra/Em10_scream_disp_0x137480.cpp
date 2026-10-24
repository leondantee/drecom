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

// Function: Em10_scream_disp
// Address: 0x137480 - 0x137818
void Em10_scream_disp_0x137480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_scream_disp_0x137480");
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
        case 0x137660u: goto label_137660;
        default: break;
    }

    ctx->pc = 0x137480u;

    // 0x137480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137484: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x137484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x137488: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x137488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x13748c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x13748cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137490: 0x8c246838  lw          $a0, 0x6838($at)
    ctx->pc = 0x137490u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B6838u));
    // 0x137494: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x137494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137498: 0x148300db  bne         $a0, $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x137498u;
    {
        const bool branch_taken_0x137498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x137498) {
            ctx->pc = 0x137808u;
            goto label_137808;
        }
    }
    ctx->pc = 0x1374A0u;
    // 0x1374a0: 0x93838090  lbu         $v1, -0x7F70($gp)
    ctx->pc = 0x1374a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x1374a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1374a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1374a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1374a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1374ac: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1374ACu;
    {
        const bool branch_taken_0x1374ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1374ac) {
            ctx->pc = 0x137524u;
            goto label_137524;
        }
    }
    ctx->pc = 0x1374B4u;
    // 0x1374b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1374B4u;
    {
        const bool branch_taken_0x1374b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1374b4) {
            ctx->pc = 0x1374C4u;
            goto label_1374c4;
        }
    }
    ctx->pc = 0x1374BCu;
    // 0x1374bc: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x1374BCu;
    {
        const bool branch_taken_0x1374bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1374bc) {
            ctx->pc = 0x137804u;
            goto label_137804;
        }
    }
    ctx->pc = 0x1374C4u;
label_1374c4:
    // 0x1374c4: 0x93838094  lbu         $v1, -0x7F6C($gp)
    ctx->pc = 0x1374c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934676)));
    // 0x1374c8: 0x106000ce  beqz        $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x1374C8u;
    {
        const bool branch_taken_0x1374c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1374c8) {
            ctx->pc = 0x137804u;
            goto label_137804;
        }
    }
    ctx->pc = 0x1374D0u;
    // 0x1374d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1374d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1374d4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1374d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1374d8: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1374d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1374dc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1374dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1374e0: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x1374e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1374e4: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1374e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1374e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1374e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1374ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1374ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1374f0: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1374f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1374f4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1374f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1374f8: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x1374f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1374fc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1374fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x137500: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x137500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137504: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x137504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x137508: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x137508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13750c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x13750cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137510: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x137510u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137514: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x137514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x137518: 0x93828090  lbu         $v0, -0x7F70($gp)
    ctx->pc = 0x137518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x13751c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137520: 0xa3828090  sb          $v0, -0x7F70($gp)
    ctx->pc = 0x137520u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934672), (uint8_t)GPR_U32(ctx, 2));
label_137524:
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
            goto label_137658;
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
            goto label_137808;
        }
    }
    ctx->pc = 0x137658u;
label_137658:
    // 0x137658: 0xc067694  jal         func_19DA50
    ctx->pc = 0x137658u;
    SET_GPR_U32(ctx, 31, 0x137660u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x137658u, 0x137660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137660u;
label_137660:
    // 0x137660: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x137660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137664: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x137664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x137668: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x137668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13766c: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x13766Cu;
    {
        const bool branch_taken_0x13766c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13766c) {
            ctx->pc = 0x1377ACu;
            goto label_1377ac;
        }
    }
    ctx->pc = 0x137674u;
    // 0x137674: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x137674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x137678: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x137678u;
    {
        const bool branch_taken_0x137678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137678) {
            ctx->pc = 0x13774Cu;
            goto label_13774c;
        }
    }
    ctx->pc = 0x137680u;
    // 0x137680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137684: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x137684u;
    {
        const bool branch_taken_0x137684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137684) {
            ctx->pc = 0x1376ECu;
            goto label_1376ec;
        }
    }
    ctx->pc = 0x13768Cu;
    // 0x13768c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13768Cu;
    {
        const bool branch_taken_0x13768c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13768c) {
            ctx->pc = 0x13769Cu;
            goto label_13769c;
        }
    }
    ctx->pc = 0x137694u;
    // 0x137694: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x137694u;
    {
        const bool branch_taken_0x137694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137694) {
            ctx->pc = 0x137804u;
            goto label_137804;
        }
    }
    ctx->pc = 0x13769Cu;
label_13769c:
    // 0x13769c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1376a0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1376a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1376a4: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x1376a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1376a8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1376a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1376ac: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x1376acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1376b0: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1376b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1376b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1376b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1376b8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1376b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1376bc: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x1376bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1376c0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1376c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1376c4: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x1376c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1376c8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1376c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1376cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1376ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1376d0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1376d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1376d4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x1376d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1376d8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1376d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1376dc: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x1376dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1376e0: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x1376e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x1376e4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1376E4u;
    {
        const bool branch_taken_0x1376e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1376e4) {
            ctx->pc = 0x137804u;
            goto label_137804;
        }
    }
    ctx->pc = 0x1376ECu;
label_1376ec:
    // 0x1376ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1376ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1376f0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1376f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1376f4: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x1376f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1376f8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1376f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1376fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1376fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137700: 0x0  nop
    ctx->pc = 0x137700u;
    // NOP
    // 0x137704: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x137704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x137708: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x13770c: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x13770cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137710: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x137710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x137714: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x137714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137718: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x137718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x13771c: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x13771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137720: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137724: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x137724u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137728: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x137728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x13772c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137730: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x137730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x137734: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x137734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137738: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x13773c: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x13773cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137740: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x137740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x137744: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x137744u;
    {
        const bool branch_taken_0x137744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137744) {
            ctx->pc = 0x137804u;
            goto label_137804;
        }
    }
    ctx->pc = 0x13774Cu;
label_13774c:
    // 0x13774c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137750: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x137750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x137754: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x137754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137758: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x13775c: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x13775cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137760: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x137760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x137764: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x137764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137768: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x137768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x13776c: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x13776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137770: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137774: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x137774u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137778: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x137778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x13777c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137780: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x137780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x137784: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x137784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137788: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x137788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x13778c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13778cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137790: 0x0  nop
    ctx->pc = 0x137790u;
    // NOP
    // 0x137794: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x137794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x137798: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x13779c: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x13779cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1377a0: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x1377a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x1377a4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1377A4u;
    {
        const bool branch_taken_0x1377a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1377a4) {
            ctx->pc = 0x137804u;
            goto label_137804;
        }
    }
    ctx->pc = 0x1377ACu;
label_1377ac:
    // 0x1377ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1377acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1377b0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1377b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1377b4: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x1377b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1377b8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1377b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1377bc: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x1377bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1377c0: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1377c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1377c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1377c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1377c8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1377c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1377cc: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1377ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1377d0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1377d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1377d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1377d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1377d8: 0x0  nop
    ctx->pc = 0x1377d8u;
    // NOP
    // 0x1377dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1377dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1377e0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1377e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1377e4: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x1377e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1377e8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1377e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1377ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1377ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1377f0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1377f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1377f4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x1377f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1377f8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1377f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1377fc: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x1377fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137800: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x137800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
label_137804:
    // 0x137804: 0xa3808094  sb          $zero, -0x7F6C($gp)
    ctx->pc = 0x137804u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934676), (uint8_t)GPR_U32(ctx, 0));
label_137808:
    // 0x137808: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x137808u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13780c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13780cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x137810: 0x3e00008  jr          $ra
    ctx->pc = 0x137810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137818u;
}
