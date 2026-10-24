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

// Function: entry_002707fc
// Address: 0x2707fc - 0x2709ec
void entry_002707fc_0x2707fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002707fc_0x2707fc");
#endif

    switch (ctx->pc) {
        case 0x270838u: goto label_270838;
        case 0x270854u: goto label_270854;
        case 0x270884u: goto label_270884;
        case 0x2708b4u: goto label_2708b4;
        case 0x2708e4u: goto label_2708e4;
        case 0x270914u: goto label_270914;
        case 0x27092cu: goto label_27092c;
        case 0x270978u: goto label_270978;
        default: break;
    }

    ctx->pc = 0x2707fcu;

    // 0x2707fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2707fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270800: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x270800u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x270804: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x270804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x270808: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x270808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x27080c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x270810: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270814: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x270814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x270818: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27081c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x27081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270820: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270824: 0x8c841340  lw          $a0, 0x1340($a0)
    ctx->pc = 0x270824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x270828: 0x8c651330  lw          $a1, 0x1330($v1)
    ctx->pc = 0x270828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x27082c: 0x8c461338  lw          $a2, 0x1338($v0)
    ctx->pc = 0x27082cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x270830: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x270830u;
    SET_GPR_U32(ctx, 31, 0x270838u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x270830u, 0x270838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270838u;
label_270838:
    // 0x270838: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27083c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x27083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x270840: 0xa0400090  sb          $zero, 0x90($v0)
    ctx->pc = 0x270840u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x270844: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270848: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x270848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x27084c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x27084Cu;
    SET_GPR_U32(ctx, 31, 0x270854u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x27084Cu, 0x270854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270854u;
label_270854:
    // 0x270854: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x270854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x270858: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x270858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27085c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x27085cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270860: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270864: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x270864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x270868: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x270868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27086c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x27086cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x270870: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x270870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x270874: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x270874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x270878: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x270878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27087c: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x27087Cu;
    SET_GPR_U32(ctx, 31, 0x270884u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x27087Cu, 0x270884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270884u;
label_270884:
    // 0x270884: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x270884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x270888: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x270888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27088c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27088cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x270890: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x270890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x270894: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270898: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27089c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x27089cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2708a0: 0x24461b40  addiu       $a2, $v0, 0x1B40
    ctx->pc = 0x2708a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x2708a4: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2708a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2708a8: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x2708a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2708ac: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x2708ACu;
    SET_GPR_U32(ctx, 31, 0x2708B4u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x2708ACu, 0x2708B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708B4u;
label_2708b4:
    // 0x2708b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2708b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2708b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2708b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2708bc: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2708bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2708c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2708c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2708c4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2708c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2708c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2708c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2708cc: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2708ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2708d0: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x2708d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x2708d4: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2708d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2708d8: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x2708d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2708dc: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x2708DCu;
    SET_GPR_U32(ctx, 31, 0x2708E4u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x2708DCu, 0x2708E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708E4u;
label_2708e4:
    // 0x2708e4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2708e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2708e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2708e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2708ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2708ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2708f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2708f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2708f4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2708f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2708f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2708f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2708fc: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2708fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x270900: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x270900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x270904: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x270904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x270908: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x270908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27090c: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x27090Cu;
    SET_GPR_U32(ctx, 31, 0x270914u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x27090Cu, 0x270914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270914u;
label_270914:
    // 0x270914: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270918: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x270918u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x27091c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x27091cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x270920: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x270920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270924: 0xc045630  jal         func_1158C0
    ctx->pc = 0x270924u;
    SET_GPR_U32(ctx, 31, 0x27092Cu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x270924u, 0x27092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27092Cu;
label_27092c:
    // 0x27092c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x27092cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x270930: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x270930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x270934: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x270934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270938: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x270938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27093c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27093cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x270940: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270944: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x270944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x270948: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x270948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27094c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27094cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270950: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270954: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x270954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x270958: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27095c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270960: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x270960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x270964: 0x2406006d  addiu       $a2, $zero, 0x6D
    ctx->pc = 0x270964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x270968: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27096c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x27096cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x270970: 0xc0965d0  jal         func_259740
    ctx->pc = 0x270970u;
    SET_GPR_U32(ctx, 31, 0x270978u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x270970u, 0x270978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270978u;
label_270978:
    // 0x270978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27097c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270980: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x270980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x270984: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270988: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27098c: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x27098cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x270990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270994: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270998: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x270998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x27099c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709a0: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x2709a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
    // 0x2709a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2709a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709a8: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x2709a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
    // 0x2709ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2709acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709b0: 0xac401b6c  sw          $zero, 0x1B6C($v0)
    ctx->pc = 0x2709b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 0));
    // 0x2709b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2709b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2709b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2709bc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2709bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2709c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2709c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2709c4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2709c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2709c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2709c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709cc: 0xa44013c0  sh          $zero, 0x13C0($v0)
    ctx->pc = 0x2709ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5056), (uint16_t)GPR_U32(ctx, 0));
    // 0x2709d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2709d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2709d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2709d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709d8: 0xa44313c2  sh          $v1, 0x13C2($v0)
    ctx->pc = 0x2709d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5058), (uint16_t)GPR_U32(ctx, 3));
    // 0x2709dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2709dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2709e0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2709e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2709e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2709e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2709e8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2709e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2709ecu;
}
