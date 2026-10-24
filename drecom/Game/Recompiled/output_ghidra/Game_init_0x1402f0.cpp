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

// Function: Game_init
// Address: 0x1402f0 - 0x1404d4
void Game_init_0x1402f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Game_init_0x1402f0");
#endif

    switch (ctx->pc) {
        case 0x14034cu: goto label_14034c;
        case 0x140390u: goto label_140390;
        case 0x14039cu: goto label_14039c;
        case 0x1403a4u: goto label_1403a4;
        case 0x1403acu: goto label_1403ac;
        case 0x1403b4u: goto label_1403b4;
        case 0x1403bcu: goto label_1403bc;
        case 0x1403d0u: goto label_1403d0;
        case 0x140444u: goto label_140444;
        case 0x140468u: goto label_140468;
        case 0x140470u: goto label_140470;
        case 0x14048cu: goto label_14048c;
        case 0x140494u: goto label_140494;
        case 0x14049cu: goto label_14049c;
        case 0x1404a4u: goto label_1404a4;
        case 0x1404b8u: goto label_1404b8;
        default: break;
    }

    ctx->pc = 0x1402f0u;

    // 0x1402f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1402f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1402f4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1402f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1402f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1402f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1402fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1402fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140304: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x140304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x140308: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x140308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14030c: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x14030cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x140310: 0x2403008b  addiu       $v1, $zero, 0x8B
    ctx->pc = 0x140310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x140314: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x140314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x140318: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x140318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x14031c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14031cu;
    runtime->Store32(rdram, ctx, 0x10000010u, GPR_U32(ctx, 3));
    // 0x140320: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x140320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x140324: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x140324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x140328: 0xae020a70  sw          $v0, 0xA70($s0)
    ctx->pc = 0x140328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AF0u, _value); } while (0);
    // 0x14032c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14032cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140330: 0x8c321a98  lw          $s2, 0x1A98($at)
    ctx->pc = 0x140330u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x140334: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x140334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x140338: 0x24441a98  addiu       $a0, $v0, 0x1A98
    ctx->pc = 0x140338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6808));
    // 0x14033c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14033cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x140340: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x140340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x140344: 0xc046314  jal         func_118C50
    ctx->pc = 0x140344u;
    SET_GPR_U32(ctx, 31, 0x14034Cu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x14034Cu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14034Cu) { return; }
    ctx->pc = 0x14034Cu;
label_14034c:
    // 0x14034c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14034cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140350: 0xac321a98  sw          $s2, 0x1A98($at)
    ctx->pc = 0x140350u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x140354: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140358: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x140358u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x14035c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x14035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x140360: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x140360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x140364: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140368: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14036c: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x14036cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x140370: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140374: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x140374u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x140378: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x140378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x14037c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14037cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140380: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140384: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x140384u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x140388: 0xc0952cc  jal         func_254B30
    ctx->pc = 0x140388u;
    SET_GPR_U32(ctx, 31, 0x140390u);
    ctx->pc = 0x254B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254B30u, 0x140388u, 0x140390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140390u;
label_140390:
    // 0x140390: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x140390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x140394: 0xc062820  jal         func_18A080
    ctx->pc = 0x140394u;
    SET_GPR_U32(ctx, 31, 0x14039Cu);
    ctx->pc = 0x18A080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A080u, 0x140394u, 0x14039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14039Cu;
label_14039c:
    // 0x14039c: 0xc0629e0  jal         func_18A780
    ctx->pc = 0x14039Cu;
    SET_GPR_U32(ctx, 31, 0x1403A4u);
    ctx->pc = 0x18A780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A780u, 0x14039Cu, 0x1403A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1403A4u;
label_1403a4:
    // 0x1403a4: 0xc050d00  jal         func_143400
    ctx->pc = 0x1403A4u;
    SET_GPR_U32(ctx, 31, 0x1403ACu);
    ctx->pc = 0x143400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143400u, 0x1403A4u, 0x1403ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1403ACu;
label_1403ac:
    // 0x1403ac: 0xc099614  jal         func_265850
    ctx->pc = 0x1403ACu;
    SET_GPR_U32(ctx, 31, 0x1403B4u);
    ctx->pc = 0x265850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265850u, 0x1403ACu, 0x1403B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1403B4u;
label_1403b4:
    // 0x1403b4: 0xc05f7e4  jal         func_17DF90
    ctx->pc = 0x1403B4u;
    SET_GPR_U32(ctx, 31, 0x1403BCu);
    ctx->pc = 0x17DF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DF90u, 0x1403B4u, 0x1403BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1403BCu;
label_1403bc:
    // 0x1403bc: 0x3c023e98  lui         $v0, 0x3E98
    ctx->pc = 0x1403bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16024 << 16));
    // 0x1403c0: 0x34429375  ori         $v0, $v0, 0x9375
    ctx->pc = 0x1403c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37749);
    // 0x1403c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1403c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1403c8: 0xc067640  jal         func_19D900
    ctx->pc = 0x1403C8u;
    SET_GPR_U32(ctx, 31, 0x1403D0u);
    ctx->pc = 0x19D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D900u, 0x1403C8u, 0x1403D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1403D0u;
label_1403d0:
    // 0x1403d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1403d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1403d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1403d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1403d8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1403d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1403dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1403dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1403e0: 0x8c235a0c  lw          $v1, 0x5A0C($at)
    ctx->pc = 0x1403e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F5A0Cu));
    // 0x1403e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1403e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1403e8: 0xac430258  sw          $v1, 0x258($v0)
    ctx->pc = 0x1403e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 600), GPR_U32(ctx, 3));
    // 0x1403ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1403ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1403f0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1403f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1403f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1403f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1403f8: 0x8c235a10  lw          $v1, 0x5A10($at)
    ctx->pc = 0x1403f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F5A10u));
    // 0x1403fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1403fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x140400: 0xac43025c  sw          $v1, 0x25C($v0)
    ctx->pc = 0x140400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 604), GPR_U32(ctx, 3));
    // 0x140404: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x140404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x140408: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x140408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x14040c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14040cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140410: 0xc4205a14  lwc1        $f0, 0x5A14($at)
    ctx->pc = 0x140410u;
    { uint32_t bits = FAST_READ32(0x3F5A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140414: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x140414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x140418: 0xe42095c0  swc1        $f0, -0x6A40($at)
    ctx->pc = 0x140418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6195C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195C0u, _value); } while (0); }
    // 0x14041c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14041cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140420: 0xc4205a18  lwc1        $f0, 0x5A18($at)
    ctx->pc = 0x140420u;
    { uint32_t bits = FAST_READ32(0x3F5A18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140424: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x140424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x140428: 0xe42095c4  swc1        $f0, -0x6A3C($at)
    ctx->pc = 0x140428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6195C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195C4u, _value); } while (0); }
    // 0x14042c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14042cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140430: 0xc4205a1c  lwc1        $f0, 0x5A1C($at)
    ctx->pc = 0x140430u;
    { uint32_t bits = FAST_READ32(0x3F5A1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140434: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x140434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x140438: 0xe42095c8  swc1        $f0, -0x6A38($at)
    ctx->pc = 0x140438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6195C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195C8u, _value); } while (0); }
    // 0x14043c: 0xc06aeac  jal         func_1ABAB0
    ctx->pc = 0x14043Cu;
    SET_GPR_U32(ctx, 31, 0x140444u);
    ctx->pc = 0x1ABAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABAB0u, 0x14043Cu, 0x140444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140444u;
label_140444:
    // 0x140444: 0xa2000d86  sb          $zero, 0xD86($s0)
    ctx->pc = 0x140444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3462), (uint8_t)GPR_U32(ctx, 0));
    // 0x140448: 0xa2000d87  sb          $zero, 0xD87($s0)
    ctx->pc = 0x140448u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3463), (uint8_t)GPR_U32(ctx, 0));
    // 0x14044c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x140450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140454: 0x0  nop
    ctx->pc = 0x140454u;
    // NOP
    // 0x140458: 0xe6001588  swc1        $f0, 0x1588($s0)
    ctx->pc = 0x140458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5512), bits); }
    // 0x14045c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x14045cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x140460: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x140460u;
    {
        const bool branch_taken_0x140460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140460) {
            ctx->pc = 0x140478u;
            goto label_140478;
        }
    }
    ctx->pc = 0x140468u;
label_140468:
    // 0x140468: 0xc06b8cc  jal         func_1AE330
    ctx->pc = 0x140468u;
    SET_GPR_U32(ctx, 31, 0x140470u);
    ctx->pc = 0x1AE330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE330u, 0x140468u, 0x140470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140470u;
label_140470:
    // 0x140470: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x140470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x140474: 0x0  nop
    ctx->pc = 0x140474u;
    // NOP
label_140478:
    // 0x140478: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x140478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x14047c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14047Cu;
    {
        const bool branch_taken_0x14047c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14047c) {
            ctx->pc = 0x140468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140468;
        }
    }
    ctx->pc = 0x140484u;
    // 0x140484: 0xc0c799c  jal         func_31E670
    ctx->pc = 0x140484u;
    SET_GPR_U32(ctx, 31, 0x14048Cu);
    ctx->pc = 0x31E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E670u, 0x140484u, 0x14048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14048Cu;
label_14048c:
    // 0x14048c: 0xc0ca324  jal         func_328C90
    ctx->pc = 0x14048Cu;
    SET_GPR_U32(ctx, 31, 0x140494u);
    ctx->pc = 0x328C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C90u, 0x14048Cu, 0x140494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140494u;
label_140494:
    // 0x140494: 0xc0a481c  jal         func_292070
    ctx->pc = 0x140494u;
    SET_GPR_U32(ctx, 31, 0x14049Cu);
    ctx->pc = 0x292070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292070u, 0x140494u, 0x14049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14049Cu;
label_14049c:
    // 0x14049c: 0xc0cec34  jal         func_33B0D0
    ctx->pc = 0x14049Cu;
    SET_GPR_U32(ctx, 31, 0x1404A4u);
    ctx->pc = 0x33B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B0D0u, 0x14049Cu, 0x1404A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404A4u;
label_1404a4:
    // 0x1404a4: 0xae0019c8  sw          $zero, 0x19C8($s0)
    ctx->pc = 0x1404a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6600), GPR_U32(ctx, 0));
    // 0x1404a8: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x1404a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1404ac: 0xae020a64  sw          $v0, 0xA64($s0)
    ctx->pc = 0x1404acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2660), GPR_U32(ctx, 2));
    // 0x1404b0: 0xc067934  jal         func_19E4D0
    ctx->pc = 0x1404B0u;
    SET_GPR_U32(ctx, 31, 0x1404B8u);
    ctx->pc = 0x19E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E4D0u, 0x1404B0u, 0x1404B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404B8u;
label_1404b8:
    // 0x1404b8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1404b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1404bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1404bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1404c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1404c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1404c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1404c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1404c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1404c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1404cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1404CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1404CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1404D4u;
}
