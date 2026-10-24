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

// Function: R203_init
// Address: 0x2678d0 - 0x267ba0
void R203_init_0x2678d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R203_init_0x2678d0");
#endif

    switch (ctx->pc) {
        case 0x267944u: goto label_267944;
        case 0x26796cu: goto label_26796c;
        case 0x267990u: goto label_267990;
        case 0x267ab0u: goto label_267ab0;
        case 0x267ac0u: goto label_267ac0;
        case 0x267b6cu: goto label_267b6c;
        case 0x267b78u: goto label_267b78;
        default: break;
    }

    ctx->pc = 0x2678d0u;

    // 0x2678d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2678d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2678d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2678d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2678d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2678d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2678dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2678dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2678e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2678e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2678e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2678e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2678e8: 0xe420fcdc  swc1        $f0, -0x324($at)
    ctx->pc = 0x2678e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61FCDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCDCu, _value); } while (0); }
    // 0x2678ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2678ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2678f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2678f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2678f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2678f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2678f8: 0xe420fcbc  swc1        $f0, -0x344($at)
    ctx->pc = 0x2678f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61FCBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCBCu, _value); } while (0); }
    // 0x2678fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2678fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267900: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267904: 0xe420fcc8  swc1        $f0, -0x338($at)
    ctx->pc = 0x267904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61FCC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCC8u, _value); } while (0); }
    // 0x267908: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26790c: 0xe420fcc4  swc1        $f0, -0x33C($at)
    ctx->pc = 0x26790cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61FCC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCC4u, _value); } while (0); }
    // 0x267910: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267914: 0xe420fcc0  swc1        $f0, -0x340($at)
    ctx->pc = 0x267914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61FCC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCC0u, _value); } while (0); }
    // 0x267918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x267918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26791c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26791cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267920: 0xe420fcd8  swc1        $f0, -0x328($at)
    ctx->pc = 0x267920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61FCD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCD8u, _value); } while (0); }
    // 0x267924: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267928: 0xe420fcd4  swc1        $f0, -0x32C($at)
    ctx->pc = 0x267928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61FCD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCD4u, _value); } while (0); }
    // 0x26792c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26792cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267930: 0xe420fcd0  swc1        $f0, -0x330($at)
    ctx->pc = 0x267930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61FCD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCD0u, _value); } while (0); }
    // 0x267934: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x267934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x267938: 0x2444fcb0  addiu       $a0, $v0, -0x350
    ctx->pc = 0x267938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x26793c: 0xc05da88  jal         func_176A20
    ctx->pc = 0x26793Cu;
    SET_GPR_U32(ctx, 31, 0x267944u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x26793Cu, 0x267944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267944u;
label_267944:
    // 0x267944: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267948: 0xac22fce0  sw          $v0, -0x320($at)
    ctx->pc = 0x267948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCE0u, _value); } while (0);
    // 0x26794c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26794cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267950: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x267950u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x267954: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x267954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x267958: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x267958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26795c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26795cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267960: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x267960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x267964: 0xc06b15c  jal         func_1AC570
    ctx->pc = 0x267964u;
    SET_GPR_U32(ctx, 31, 0x26796Cu);
    ctx->pc = 0x1AC570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC570u, 0x267964u, 0x26796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26796Cu;
label_26796c:
    // 0x26796c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x26796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x267970: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267974: 0xa422fd64  sh          $v0, -0x29C($at)
    ctx->pc = 0x267974u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFD64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CFD64u, _value); } while (0);
    // 0x267978: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x267978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x26797c: 0x2444fd20  addiu       $a0, $v0, -0x2E0
    ctx->pc = 0x26797cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966560));
    // 0x267980: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x267980u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267984: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x267984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x267988: 0xc046314  jal         func_118C50
    ctx->pc = 0x267988u;
    SET_GPR_U32(ctx, 31, 0x267990u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x267990u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x267990u) { return; }
    ctx->pc = 0x267990u;
label_267990:
    // 0x267990: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x267990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x267994: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267998: 0xac22b8f4  sw          $v0, -0x470C($at)
    ctx->pc = 0x267998u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60B8F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B8F4u, _value); } while (0);
    // 0x26799c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x26799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2679a0: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x2679a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x2679a4: 0xac22b8f8  sw          $v0, -0x4708($at)
    ctx->pc = 0x2679a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60B8F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B8F8u, _value); } while (0);
    // 0x2679a8: 0x3c023ae5  lui         $v0, 0x3AE5
    ctx->pc = 0x2679a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15077 << 16));
    // 0x2679ac: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x2679acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24642);
    // 0x2679b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2679b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2679b4: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x2679b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x2679b8: 0xe420b900  swc1        $f0, -0x4700($at)
    ctx->pc = 0x2679b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60B900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B900u, _value); } while (0); }
    // 0x2679bc: 0x3c02bac4  lui         $v0, 0xBAC4
    ctx->pc = 0x2679bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47812 << 16));
    // 0x2679c0: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x2679c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x2679c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2679c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2679c8: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x2679c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x2679cc: 0xe420b8fc  swc1        $f0, -0x4704($at)
    ctx->pc = 0x2679ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60B8FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B8FCu, _value); } while (0); }
    // 0x2679d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2679d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2679d4: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x2679d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x2679d8: 0xa022b92c  sb          $v0, -0x46D4($at)
    ctx->pc = 0x2679d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60B92Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60B92Cu, _value); } while (0);
    // 0x2679dc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2679dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2679e0: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x2679e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x2679e4: 0xac22b904  sw          $v0, -0x46FC($at)
    ctx->pc = 0x2679e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60B904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B904u, _value); } while (0);
    // 0x2679e8: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x2679e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x2679ec: 0xac20b90c  sw          $zero, -0x46F4($at)
    ctx->pc = 0x2679ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x60B90Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B90Cu, _value); } while (0);
    // 0x2679f0: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x2679f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x2679f4: 0xac20b910  sw          $zero, -0x46F0($at)
    ctx->pc = 0x2679f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x60B910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B910u, _value); } while (0);
    // 0x2679f8: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x2679f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x2679fc: 0xa020b92d  sb          $zero, -0x46D3($at)
    ctx->pc = 0x2679fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x60B92Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60B92Du, _value); } while (0);
    // 0x267a00: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a04: 0xac20b914  sw          $zero, -0x46EC($at)
    ctx->pc = 0x267a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x60B914u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B914u, _value); } while (0);
    // 0x267a08: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a0c: 0xac20b918  sw          $zero, -0x46E8($at)
    ctx->pc = 0x267a0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x60B918u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B918u, _value); } while (0);
    // 0x267a10: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a14: 0xa020b92e  sb          $zero, -0x46D2($at)
    ctx->pc = 0x267a14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x60B92Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60B92Eu, _value); } while (0);
    // 0x267a18: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x267a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x267a1c: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a20: 0xac220154  sw          $v0, 0x154($at)
    ctx->pc = 0x267a20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x610154u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x610154u, _value); } while (0);
    // 0x267a24: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x267a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x267a28: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a2c: 0xac220158  sw          $v0, 0x158($at)
    ctx->pc = 0x267a2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x610158u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x610158u, _value); } while (0);
    // 0x267a30: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x267a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x267a34: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x267a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x267a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267a3c: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a40: 0xe4200160  swc1        $f0, 0x160($at)
    ctx->pc = 0x267a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x610160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x610160u, _value); } while (0); }
    // 0x267a44: 0x3c02ba1d  lui         $v0, 0xBA1D
    ctx->pc = 0x267a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47645 << 16));
    // 0x267a48: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x267a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18770);
    // 0x267a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267a50: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a54: 0xe420015c  swc1        $f0, 0x15C($at)
    ctx->pc = 0x267a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61015Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61015Cu, _value); } while (0); }
    // 0x267a58: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x267a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x267a5c: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a60: 0xa022018c  sb          $v0, 0x18C($at)
    ctx->pc = 0x267a60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61018Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61018Cu, _value); } while (0);
    // 0x267a64: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x267a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x267a68: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a6c: 0xac220164  sw          $v0, 0x164($at)
    ctx->pc = 0x267a6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x610164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x610164u, _value); } while (0);
    // 0x267a70: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a74: 0xac20016c  sw          $zero, 0x16C($at)
    ctx->pc = 0x267a74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61016Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61016Cu, _value); } while (0);
    // 0x267a78: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a7c: 0xac200170  sw          $zero, 0x170($at)
    ctx->pc = 0x267a7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x610170u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x610170u, _value); } while (0);
    // 0x267a80: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a84: 0xa020018d  sb          $zero, 0x18D($at)
    ctx->pc = 0x267a84u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61018Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61018Du, _value); } while (0);
    // 0x267a88: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a8c: 0xac200174  sw          $zero, 0x174($at)
    ctx->pc = 0x267a8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x610174u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x610174u, _value); } while (0);
    // 0x267a90: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a94: 0xac200178  sw          $zero, 0x178($at)
    ctx->pc = 0x267a94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x610178u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x610178u, _value); } while (0);
    // 0x267a98: 0x3c010061  lui         $at, 0x61
    ctx->pc = 0x267a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)97 << 16));
    // 0x267a9c: 0xa020018e  sb          $zero, 0x18E($at)
    ctx->pc = 0x267a9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61018Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61018Eu, _value); } while (0);
    // 0x267aa0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x267aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x267aa4: 0x2444bd30  addiu       $a0, $v0, -0x42D0
    ctx->pc = 0x267aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950192));
    // 0x267aa8: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x267AA8u;
    SET_GPR_U32(ctx, 31, 0x267AB0u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x267AA8u, 0x267AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267AB0u;
label_267ab0:
    // 0x267ab0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x267ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x267ab4: 0x2444bc60  addiu       $a0, $v0, -0x43A0
    ctx->pc = 0x267ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949984));
    // 0x267ab8: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x267AB8u;
    SET_GPR_U32(ctx, 31, 0x267AC0u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x267AB8u, 0x267AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267AC0u;
label_267ac0:
    // 0x267ac0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x267ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x267ac4: 0x24639a10  addiu       $v1, $v1, -0x65F0
    ctx->pc = 0x267ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941200));
    // 0x267ac8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267acc: 0xac23d41c  sw          $v1, -0x2BE4($at)
    ctx->pc = 0x267accu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD41Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD41Cu, _value); } while (0);
    // 0x267ad0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x267ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x267ad4: 0x24639ac0  addiu       $v1, $v1, -0x6540
    ctx->pc = 0x267ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941376));
    // 0x267ad8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267adc: 0xac23d4bc  sw          $v1, -0x2B44($at)
    ctx->pc = 0x267adcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD4BCu, _value); } while (0);
    // 0x267ae0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x267ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x267ae4: 0x24639b70  addiu       $v1, $v1, -0x6490
    ctx->pc = 0x267ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x267ae8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267aec: 0xac23d55c  sw          $v1, -0x2AA4($at)
    ctx->pc = 0x267aecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD55Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD55Cu, _value); } while (0);
    // 0x267af0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x267af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x267af4: 0x2463a0c0  addiu       $v1, $v1, -0x5F40
    ctx->pc = 0x267af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942912));
    // 0x267af8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267afc: 0xac23d69c  sw          $v1, -0x2964($at)
    ctx->pc = 0x267afcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD69Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD69Cu, _value); } while (0);
    // 0x267b00: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x267b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x267b04: 0x2463a150  addiu       $v1, $v1, -0x5EB0
    ctx->pc = 0x267b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943056));
    // 0x267b08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267b0c: 0xac23d73c  sw          $v1, -0x28C4($at)
    ctx->pc = 0x267b0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD73Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD73Cu, _value); } while (0);
    // 0x267b10: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x267b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x267b14: 0x2463a0c0  addiu       $v1, $v1, -0x5F40
    ctx->pc = 0x267b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942912));
    // 0x267b18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267b1c: 0xac23d7dc  sw          $v1, -0x2824($at)
    ctx->pc = 0x267b1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD7DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD7DCu, _value); } while (0);
    // 0x267b20: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x267b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x267b24: 0x2463a150  addiu       $v1, $v1, -0x5EB0
    ctx->pc = 0x267b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943056));
    // 0x267b28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267b2c: 0xac23d87c  sw          $v1, -0x2784($at)
    ctx->pc = 0x267b2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD87Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD87Cu, _value); } while (0);
    // 0x267b30: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x267b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x267b34: 0x2463a0c0  addiu       $v1, $v1, -0x5F40
    ctx->pc = 0x267b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942912));
    // 0x267b38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267b3c: 0xac23d91c  sw          $v1, -0x26E4($at)
    ctx->pc = 0x267b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD91Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD91Cu, _value); } while (0);
    // 0x267b40: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x267b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x267b44: 0x2463a150  addiu       $v1, $v1, -0x5EB0
    ctx->pc = 0x267b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943056));
    // 0x267b48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267b4c: 0xac23d9bc  sw          $v1, -0x2644($at)
    ctx->pc = 0x267b4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD9BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD9BCu, _value); } while (0);
    // 0x267b50: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x267b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x267b54: 0x2463a0c0  addiu       $v1, $v1, -0x5F40
    ctx->pc = 0x267b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942912));
    // 0x267b58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267b5c: 0xac23da5c  sw          $v1, -0x25A4($at)
    ctx->pc = 0x267b5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CDA5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDA5Cu, _value); } while (0);
    // 0x267b60: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x267b60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267b64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x267B64u;
    {
        const bool branch_taken_0x267b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b64) {
            ctx->pc = 0x267B80u;
            goto label_267b80;
        }
    }
    ctx->pc = 0x267B6Cu;
label_267b6c:
    // 0x267b6c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267b6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267b70: 0xc09a220  jal         func_268880
    ctx->pc = 0x267B70u;
    SET_GPR_U32(ctx, 31, 0x267B78u);
    ctx->pc = 0x268880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268880u, 0x267B70u, 0x267B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B78u;
label_267b78:
    // 0x267b78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x267b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x267b7c: 0x0  nop
    ctx->pc = 0x267b7cu;
    // NOP
label_267b80:
    // 0x267b80: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x267b80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x267b84: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x267B84u;
    {
        const bool branch_taken_0x267b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x267b84) {
            ctx->pc = 0x267B6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267b6c;
        }
    }
    ctx->pc = 0x267B8Cu;
    // 0x267b8c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x267b8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267b90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267b94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x267b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x267b98: 0x3e00008  jr          $ra
    ctx->pc = 0x267B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267BA0u;
}
