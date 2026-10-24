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

// Function: Game_scene_init
// Address: 0x1404e0 - 0x140804
void Game_scene_init_0x1404e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Game_scene_init_0x1404e0");
#endif

    switch (ctx->pc) {
        case 0x140538u: goto label_140538;
        case 0x140540u: goto label_140540;
        case 0x140548u: goto label_140548;
        case 0x140550u: goto label_140550;
        case 0x14055cu: goto label_14055c;
        case 0x140564u: goto label_140564;
        case 0x14056cu: goto label_14056c;
        case 0x140574u: goto label_140574;
        case 0x14057cu: goto label_14057c;
        case 0x140584u: goto label_140584;
        case 0x14059cu: goto label_14059c;
        case 0x1405a4u: goto label_1405a4;
        case 0x1405b0u: goto label_1405b0;
        case 0x1405d0u: goto label_1405d0;
        case 0x1405dcu: goto label_1405dc;
        case 0x1405e4u: goto label_1405e4;
        case 0x1405ecu: goto label_1405ec;
        case 0x140694u: goto label_140694;
        case 0x14069cu: goto label_14069c;
        case 0x1406ccu: goto label_1406cc;
        case 0x1406d4u: goto label_1406d4;
        case 0x1406dcu: goto label_1406dc;
        case 0x1406e4u: goto label_1406e4;
        case 0x1406fcu: goto label_1406fc;
        case 0x140708u: goto label_140708;
        case 0x140710u: goto label_140710;
        case 0x140718u: goto label_140718;
        case 0x140720u: goto label_140720;
        case 0x140728u: goto label_140728;
        case 0x140730u: goto label_140730;
        case 0x140738u: goto label_140738;
        case 0x140740u: goto label_140740;
        case 0x14078cu: goto label_14078c;
        case 0x140794u: goto label_140794;
        case 0x1407a0u: goto label_1407a0;
        case 0x1407c4u: goto label_1407c4;
        case 0x1407d4u: goto label_1407d4;
        case 0x1407e4u: goto label_1407e4;
        default: break;
    }

    ctx->pc = 0x1404e0u;

    // 0x1404e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1404e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1404e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1404e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1404e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1404e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1404ec: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1404ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1404f0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1404f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1404f4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1404f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1404f8: 0x8e020a64  lw          $v0, 0xA64($s0)
    ctx->pc = 0x1404f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE4u));
    // 0x1404fc: 0xae020a68  sw          $v0, 0xA68($s0)
    ctx->pc = 0x1404fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x140500: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x140500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x140504: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140508: 0xac220aec  sw          $v0, 0xAEC($at)
    ctx->pc = 0x140508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AECu, _value); } while (0);
    // 0x14050c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14050cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140510: 0xac20547c  sw          $zero, 0x547C($at)
    ctx->pc = 0x140510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F547Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F547Cu, _value); } while (0);
    // 0x140514: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140518: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140518u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x14051c: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x14051cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x140520: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x140520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x140524: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140528: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14052c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x14052cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x140530: 0xc0765b8  jal         func_1D96E0
    ctx->pc = 0x140530u;
    SET_GPR_U32(ctx, 31, 0x140538u);
    ctx->pc = 0x1D96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96E0u, 0x140530u, 0x140538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140538u;
label_140538:
    // 0x140538: 0xc0c79b4  jal         func_31E6D0
    ctx->pc = 0x140538u;
    SET_GPR_U32(ctx, 31, 0x140540u);
    ctx->pc = 0x31E6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E6D0u, 0x140538u, 0x140540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140540u;
label_140540:
    // 0x140540: 0xc099060  jal         func_264180
    ctx->pc = 0x140540u;
    SET_GPR_U32(ctx, 31, 0x140548u);
    ctx->pc = 0x264180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264180u, 0x140540u, 0x140548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140548u;
label_140548:
    // 0x140548: 0xc0990d0  jal         func_264340
    ctx->pc = 0x140548u;
    SET_GPR_U32(ctx, 31, 0x140550u);
    ctx->pc = 0x264340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264340u, 0x140548u, 0x140550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140550u;
label_140550:
    // 0x140550: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x140550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140554: 0xc062820  jal         func_18A080
    ctx->pc = 0x140554u;
    SET_GPR_U32(ctx, 31, 0x14055Cu);
    ctx->pc = 0x18A080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A080u, 0x140554u, 0x14055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14055Cu;
label_14055c:
    // 0x14055c: 0xc062a64  jal         func_18A990
    ctx->pc = 0x14055Cu;
    SET_GPR_U32(ctx, 31, 0x140564u);
    ctx->pc = 0x18A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A990u, 0x14055Cu, 0x140564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140564u;
label_140564:
    // 0x140564: 0xc0761d8  jal         func_1D8760
    ctx->pc = 0x140564u;
    SET_GPR_U32(ctx, 31, 0x14056Cu);
    ctx->pc = 0x1D8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8760u, 0x140564u, 0x14056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14056Cu;
label_14056c:
    // 0x14056c: 0xc0a721c  jal         func_29C870
    ctx->pc = 0x14056Cu;
    SET_GPR_U32(ctx, 31, 0x140574u);
    ctx->pc = 0x29C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C870u, 0x14056Cu, 0x140574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140574u;
label_140574:
    // 0x140574: 0xc062464  jal         func_189190
    ctx->pc = 0x140574u;
    SET_GPR_U32(ctx, 31, 0x14057Cu);
    ctx->pc = 0x189190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189190u, 0x140574u, 0x14057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14057Cu;
label_14057c:
    // 0x14057c: 0xc04ed3c  jal         func_13B4F0
    ctx->pc = 0x14057Cu;
    SET_GPR_U32(ctx, 31, 0x140584u);
    ctx->pc = 0x13B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B4F0u, 0x14057Cu, 0x140584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140584u;
label_140584:
    // 0x140584: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140588: 0x8c240de0  lw          $a0, 0xDE0($at)
    ctx->pc = 0x140588u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x14058c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14058cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140590: 0x94250b62  lhu         $a1, 0xB62($at)
    ctx->pc = 0x140590u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D0B62u));
    // 0x140594: 0xc05d8c4  jal         func_176310
    ctx->pc = 0x140594u;
    SET_GPR_U32(ctx, 31, 0x14059Cu);
    ctx->pc = 0x176310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176310u, 0x140594u, 0x14059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14059Cu;
label_14059c:
    // 0x14059c: 0xc080530  jal         func_2014C0
    ctx->pc = 0x14059Cu;
    SET_GPR_U32(ctx, 31, 0x1405A4u);
    ctx->pc = 0x2014C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2014C0u, 0x14059Cu, 0x1405A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1405A4u;
label_1405a4:
    // 0x1405a4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1405a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1405a8: 0xc05ba44  jal         func_16E910
    ctx->pc = 0x1405A8u;
    SET_GPR_U32(ctx, 31, 0x1405B0u);
    ctx->pc = 0x16E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E910u, 0x1405A8u, 0x1405B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1405B0u;
label_1405b0:
    // 0x1405b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1405b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1405b4: 0xac20bb40  sw          $zero, -0x44C0($at)
    ctx->pc = 0x1405b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BB40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB40u, _value); } while (0);
    // 0x1405b8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1405b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1405bc: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x1405bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1405c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1405c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1405c4: 0xac22bb44  sw          $v0, -0x44BC($at)
    ctx->pc = 0x1405c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BB44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB44u, _value); } while (0);
    // 0x1405c8: 0xc067fb0  jal         func_19FEC0
    ctx->pc = 0x1405C8u;
    SET_GPR_U32(ctx, 31, 0x1405D0u);
    ctx->pc = 0x19FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FEC0u, 0x1405C8u, 0x1405D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1405D0u;
label_1405d0:
    // 0x1405d0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1405d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1405d4: 0xc067cb4  jal         func_19F2D0
    ctx->pc = 0x1405D4u;
    SET_GPR_U32(ctx, 31, 0x1405DCu);
    ctx->pc = 0x19F2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F2D0u, 0x1405D4u, 0x1405DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1405DCu;
label_1405dc:
    // 0x1405dc: 0xc05fc44  jal         func_17F110
    ctx->pc = 0x1405DCu;
    SET_GPR_U32(ctx, 31, 0x1405E4u);
    ctx->pc = 0x17F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F110u, 0x1405DCu, 0x1405E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1405E4u;
label_1405e4:
    // 0x1405e4: 0xc067124  jal         func_19C490
    ctx->pc = 0x1405E4u;
    SET_GPR_U32(ctx, 31, 0x1405ECu);
    ctx->pc = 0x19C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C490u, 0x1405E4u, 0x1405ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1405ECu;
label_1405ec:
    // 0x1405ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1405ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1405f0: 0xa020dbc0  sb          $zero, -0x2440($at)
    ctx->pc = 0x1405f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC0u, _value); } while (0);
    // 0x1405f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1405f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1405f8: 0xa020dbc1  sb          $zero, -0x243F($at)
    ctx->pc = 0x1405f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC1u, _value); } while (0);
    // 0x1405fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1405fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140600: 0xa020dbc2  sb          $zero, -0x243E($at)
    ctx->pc = 0x140600u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC2u, _value); } while (0);
    // 0x140604: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140608: 0xa020dbc3  sb          $zero, -0x243D($at)
    ctx->pc = 0x140608u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC3u, _value); } while (0);
    // 0x14060c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14060cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140610: 0xac20dbc4  sw          $zero, -0x243C($at)
    ctx->pc = 0x140610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC4u, _value); } while (0);
    // 0x140614: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x140614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x140618: 0xc42095c0  lwc1        $f0, -0x6A40($at)
    ctx->pc = 0x140618u;
    { uint32_t bits = FAST_READ32(0x6195C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14061c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14061cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140620: 0xe420dce0  swc1        $f0, -0x2320($at)
    ctx->pc = 0x140620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE0u, _value); } while (0); }
    // 0x140624: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140628: 0xe420eed4  swc1        $f0, -0x112C($at)
    ctx->pc = 0x140628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EEED4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEED4u, _value); } while (0); }
    // 0x14062c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x14062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x140630: 0xc42095c8  lwc1        $f0, -0x6A38($at)
    ctx->pc = 0x140630u;
    { uint32_t bits = FAST_READ32(0x6195C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140634: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140638: 0xe420dce8  swc1        $f0, -0x2318($at)
    ctx->pc = 0x140638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE8u, _value); } while (0); }
    // 0x14063c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14063cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140640: 0xe420eed8  swc1        $f0, -0x1128($at)
    ctx->pc = 0x140640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EEED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEED8u, _value); } while (0); }
    // 0x140644: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x140644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x140648: 0xc42095c4  lwc1        $f0, -0x6A3C($at)
    ctx->pc = 0x140648u;
    { uint32_t bits = FAST_READ32(0x6195C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14064c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14064cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140650: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x140650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x140654: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140658: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14065c: 0xe420dc90  swc1        $f0, -0x2370($at)
    ctx->pc = 0x14065cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC90u, _value); } while (0); }
    // 0x140660: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x140660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x140664: 0xc42095cc  lwc1        $f0, -0x6A34($at)
    ctx->pc = 0x140664u;
    { uint32_t bits = FAST_READ32(0x6195CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140668: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14066c: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x14066cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC94u, _value); } while (0); }
    // 0x140670: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140674: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140678: 0xe420dc98  swc1        $f0, -0x2368($at)
    ctx->pc = 0x140678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC98u, _value); } while (0); }
    // 0x14067c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14067cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x140680: 0x2444dd30  addiu       $a0, $v0, -0x22D0
    ctx->pc = 0x140680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958384));
    // 0x140684: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x140684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x140688: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x140688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x14068c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x14068Cu;
    SET_GPR_U32(ctx, 31, 0x140694u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x140694u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x140694u) { return; }
    ctx->pc = 0x140694u;
label_140694:
    // 0x140694: 0xc0513bc  jal         func_144EF0
    ctx->pc = 0x140694u;
    SET_GPR_U32(ctx, 31, 0x14069Cu);
    ctx->pc = 0x144EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144EF0u, 0x140694u, 0x14069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14069Cu;
label_14069c:
    // 0x14069c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14069cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1406a0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1406a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1406a4: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x1406a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x1406a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1406a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1406ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1406acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1406b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1406b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1406b4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1406b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1406b8: 0xae001a18  sw          $zero, 0x1A18($s0)
    ctx->pc = 0x1406b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6680), GPR_U32(ctx, 0));
    // 0x1406bc: 0xae001a1c  sw          $zero, 0x1A1C($s0)
    ctx->pc = 0x1406bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6684), GPR_U32(ctx, 0));
    // 0x1406c0: 0xae001a20  sw          $zero, 0x1A20($s0)
    ctx->pc = 0x1406c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6688), GPR_U32(ctx, 0));
    // 0x1406c4: 0xc0cecc8  jal         func_33B320
    ctx->pc = 0x1406C4u;
    SET_GPR_U32(ctx, 31, 0x1406CCu);
    ctx->pc = 0x33B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B320u, 0x1406C4u, 0x1406CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406CCu;
label_1406cc:
    // 0x1406cc: 0xc0846e4  jal         func_211B90
    ctx->pc = 0x1406CCu;
    SET_GPR_U32(ctx, 31, 0x1406D4u);
    ctx->pc = 0x211B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211B90u, 0x1406CCu, 0x1406D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406D4u;
label_1406d4:
    // 0x1406d4: 0xc0c79c0  jal         func_31E700
    ctx->pc = 0x1406D4u;
    SET_GPR_U32(ctx, 31, 0x1406DCu);
    ctx->pc = 0x31E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E700u, 0x1406D4u, 0x1406DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406DCu;
label_1406dc:
    // 0x1406dc: 0xc0cecdc  jal         func_33B370
    ctx->pc = 0x1406DCu;
    SET_GPR_U32(ctx, 31, 0x1406E4u);
    ctx->pc = 0x33B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B370u, 0x1406DCu, 0x1406E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406E4u;
label_1406e4:
    // 0x1406e4: 0xae0019d0  sw          $zero, 0x19D0($s0)
    ctx->pc = 0x1406e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6608), GPR_U32(ctx, 0));
    // 0x1406e8: 0xae0019d4  sw          $zero, 0x19D4($s0)
    ctx->pc = 0x1406e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6612), GPR_U32(ctx, 0));
    // 0x1406ec: 0xae0019d8  sw          $zero, 0x19D8($s0)
    ctx->pc = 0x1406ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6616), GPR_U32(ctx, 0));
    // 0x1406f0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1406f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1406f4: 0xc061014  jal         func_184050
    ctx->pc = 0x1406F4u;
    SET_GPR_U32(ctx, 31, 0x1406FCu);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x1406F4u, 0x1406FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406FCu;
label_1406fc:
    // 0x1406fc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1406fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x140700: 0xc061c5c  jal         func_187170
    ctx->pc = 0x140700u;
    SET_GPR_U32(ctx, 31, 0x140708u);
    ctx->pc = 0x187170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187170u, 0x140700u, 0x140708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140708u;
label_140708:
    // 0x140708: 0xc05f838  jal         func_17E0E0
    ctx->pc = 0x140708u;
    SET_GPR_U32(ctx, 31, 0x140710u);
    ctx->pc = 0x17E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E0E0u, 0x140708u, 0x140710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140710u;
label_140710:
    // 0x140710: 0xc06ad78  jal         func_1AB5E0
    ctx->pc = 0x140710u;
    SET_GPR_U32(ctx, 31, 0x140718u);
    ctx->pc = 0x1AB5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB5E0u, 0x140710u, 0x140718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140718u;
label_140718:
    // 0x140718: 0xc079200  jal         func_1E4800
    ctx->pc = 0x140718u;
    SET_GPR_U32(ctx, 31, 0x140720u);
    ctx->pc = 0x1E4800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4800u, 0x140718u, 0x140720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140720u;
label_140720:
    // 0x140720: 0xc0506cc  jal         func_141B30
    ctx->pc = 0x140720u;
    SET_GPR_U32(ctx, 31, 0x140728u);
    ctx->pc = 0x141B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141B30u, 0x140720u, 0x140728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140728u;
label_140728:
    // 0x140728: 0xc055740  jal         func_155D00
    ctx->pc = 0x140728u;
    SET_GPR_U32(ctx, 31, 0x140730u);
    ctx->pc = 0x155D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155D00u, 0x140728u, 0x140730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140730u;
label_140730:
    // 0x140730: 0xc0561b8  jal         func_1586E0
    ctx->pc = 0x140730u;
    SET_GPR_U32(ctx, 31, 0x140738u);
    ctx->pc = 0x1586E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1586E0u, 0x140730u, 0x140738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140738u;
label_140738:
    // 0x140738: 0xc0cc908  jal         func_332420
    ctx->pc = 0x140738u;
    SET_GPR_U32(ctx, 31, 0x140740u);
    ctx->pc = 0x332420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332420u, 0x140738u, 0x140740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140740u;
label_140740:
    // 0x140740: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140744: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x140744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x140748: 0xa0430006  sb          $v1, 0x6($v0)
    ctx->pc = 0x140748u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x14074c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14074cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140750: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x140750u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x140754: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x140754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x140758: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14075c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14075Cu;
    {
        const bool branch_taken_0x14075c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14075c) {
            ctx->pc = 0x1407A0u;
            goto label_1407a0;
        }
    }
    ctx->pc = 0x140764u;
    // 0x140764: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140768: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x140768u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x14076c: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x14076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x140770: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x140770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x140774: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140778: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14077c: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x14077cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x140780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x140780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140784: 0xc06750c  jal         func_19D430
    ctx->pc = 0x140784u;
    SET_GPR_U32(ctx, 31, 0x14078Cu);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x140784u, 0x14078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14078Cu;
label_14078c:
    // 0x14078c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14078Cu;
    {
        const bool branch_taken_0x14078c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14078c) {
            ctx->pc = 0x1407B8u;
            goto label_1407b8;
        }
    }
    ctx->pc = 0x140794u;
label_140794:
    // 0x140794: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x140794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140798: 0xc06750c  jal         func_19D430
    ctx->pc = 0x140798u;
    SET_GPR_U32(ctx, 31, 0x1407A0u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x140798u, 0x1407A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407A0u;
label_1407a0:
    // 0x1407a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1407a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1407a4: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x1407a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1407a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1407a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1407ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1407acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1407b0: 0x1062fff8  beq         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1407B0u;
    {
        const bool branch_taken_0x1407b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1407b0) {
            ctx->pc = 0x140794u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140794;
        }
    }
    ctx->pc = 0x1407B8u;
label_1407b8:
    // 0x1407b8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1407b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1407bc: 0xc0592dc  jal         func_164B70
    ctx->pc = 0x1407BCu;
    SET_GPR_U32(ctx, 31, 0x1407C4u);
    ctx->pc = 0x164B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B70u, 0x1407BCu, 0x1407C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407C4u;
label_1407c4:
    // 0x1407c4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1407c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1407c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1407c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1407cc: 0xc0683a0  jal         func_1A0E80
    ctx->pc = 0x1407CCu;
    SET_GPR_U32(ctx, 31, 0x1407D4u);
    ctx->pc = 0x1A0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E80u, 0x1407CCu, 0x1407D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407D4u;
label_1407d4:
    // 0x1407d4: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x1407d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x1407d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1407d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1407dc: 0xc0683a0  jal         func_1A0E80
    ctx->pc = 0x1407DCu;
    SET_GPR_U32(ctx, 31, 0x1407E4u);
    ctx->pc = 0x1A0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E80u, 0x1407DCu, 0x1407E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407E4u;
label_1407e4:
    // 0x1407e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1407e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1407e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1407e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1407ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1407ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1407f0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1407f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1407f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1407f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1407f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1407f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1407fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1407FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1407FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140804u;
}
