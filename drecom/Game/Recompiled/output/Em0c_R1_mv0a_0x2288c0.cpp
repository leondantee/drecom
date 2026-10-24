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

// Function: Em0c_R1_mv0a
// Address: 0x2288c0 - 0x229b88
void Em0c_R1_mv0a_0x2288c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv0a_0x2288c0");
#endif

    switch (ctx->pc) {
        case 0x228a18u: goto label_228a18;
        case 0x228a20u: goto label_228a20;
        case 0x228a44u: goto label_228a44;
        case 0x228a78u: goto label_228a78;
        case 0x228aa8u: goto label_228aa8;
        case 0x228ab0u: goto label_228ab0;
        case 0x228dbcu: goto label_228dbc;
        case 0x228dd8u: goto label_228dd8;
        case 0x228df4u: goto label_228df4;
        case 0x228e04u: goto label_228e04;
        case 0x228f18u: goto label_228f18;
        case 0x228f30u: goto label_228f30;
        case 0x228f64u: goto label_228f64;
        case 0x228f90u: goto label_228f90;
        case 0x228fa8u: goto label_228fa8;
        case 0x228fc8u: goto label_228fc8;
        case 0x228fe0u: goto label_228fe0;
        case 0x229010u: goto label_229010;
        case 0x229224u: goto label_229224;
        case 0x229248u: goto label_229248;
        case 0x22927cu: goto label_22927c;
        case 0x2292acu: goto label_2292ac;
        case 0x229400u: goto label_229400;
        case 0x229424u: goto label_229424;
        case 0x229450u: goto label_229450;
        case 0x22946cu: goto label_22946c;
        case 0x229484u: goto label_229484;
        case 0x229490u: goto label_229490;
        case 0x229528u: goto label_229528;
        case 0x229530u: goto label_229530;
        case 0x2297e0u: goto label_2297e0;
        case 0x229800u: goto label_229800;
        case 0x229818u: goto label_229818;
        case 0x22985cu: goto label_22985c;
        case 0x229a58u: goto label_229a58;
        default: break;
    }

    ctx->pc = 0x2288c0u;

    // 0x2288c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2288c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2288c4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2288c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2288c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2288c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2288cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2288ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2288d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2288d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2288d4: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2288d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x2288d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2288d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2288dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2288dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2288e0: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x2288e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2288e4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2288e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2288e8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2288e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2288ec: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2288ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2288f0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2288f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2288f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2288f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2288f8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x2288f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2288fc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2288fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x228900: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x228900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x228904: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x228904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x228908: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x228908u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x22890c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228910: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x228910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x228914: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x228914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x228918: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x228918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22891c: 0x106202c1  beq         $v1, $v0, . + 4 + (0x2C1 << 2)
    ctx->pc = 0x22891Cu;
    {
        const bool branch_taken_0x22891c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22891c) {
            ctx->pc = 0x229424u;
            goto label_229424;
        }
    }
    ctx->pc = 0x228924u;
    // 0x228924: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x228924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228928: 0x106202aa  beq         $v1, $v0, . + 4 + (0x2AA << 2)
    ctx->pc = 0x228928u;
    {
        const bool branch_taken_0x228928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x228928) {
            ctx->pc = 0x2293D4u;
            goto label_2293d4;
        }
    }
    ctx->pc = 0x228930u;
    // 0x228930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228934: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x228934u;
    {
        const bool branch_taken_0x228934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x228934) {
            ctx->pc = 0x228ACCu;
            goto label_228acc;
        }
    }
    ctx->pc = 0x22893Cu;
    // 0x22893c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22893Cu;
    {
        const bool branch_taken_0x22893c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22893c) {
            ctx->pc = 0x22894Cu;
            goto label_22894c;
        }
    }
    ctx->pc = 0x228944u;
    // 0x228944: 0x10000442  b           . + 4 + (0x442 << 2)
    ctx->pc = 0x228944u;
    {
        const bool branch_taken_0x228944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228944) {
            ctx->pc = 0x229A50u;
            goto label_229a50;
        }
    }
    ctx->pc = 0x22894Cu;
label_22894c:
    // 0x22894c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228950: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228954: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x228954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x228958: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22895c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x22895cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x228960: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x228960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x228964: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228968: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x228968u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x22896c: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x22896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x228970: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228974: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x228974u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x228978: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x228978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x22897c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22897cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228980: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228984: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x228984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x228988: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x228988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x22898c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x22898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x228990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228994: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228998: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22899c: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x22899cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x2289a0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2289a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2289a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2289a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2289a8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2289a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2289ac: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x2289acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2289b0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2289b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2289b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2289b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2289b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2289b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2289bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2289bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2289c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2289c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2289c4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2289c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2289c8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2289c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2289cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2289ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2289d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2289d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2289d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2289d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2289d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2289d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2289dc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2289dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2289e0: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x2289e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x2289e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2289e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2289e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2289e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2289ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2289ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2289f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2289f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2289f4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2289f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2289f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2289f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2289fc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2289fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228a00: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x228a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x228a04: 0x24067802  addiu       $a2, $zero, 0x7802
    ctx->pc = 0x228a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30722));
    // 0x228a08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228a0c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x228a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x228a10: 0xc0965d0  jal         func_259740
    ctx->pc = 0x228A10u;
    SET_GPR_U32(ctx, 31, 0x228A18u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x228A10u, 0x228A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A18u;
label_228a18:
    // 0x228a18: 0xc067694  jal         func_19DA50
    ctx->pc = 0x228A18u;
    SET_GPR_U32(ctx, 31, 0x228A20u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x228A18u, 0x228A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A20u;
label_228a20:
    // 0x228a20: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x228a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x228a24: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x228a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x228a28: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x228a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x228a2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228a30: 0x94430a00  lhu         $v1, 0xA00($v0)
    ctx->pc = 0x228a30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x228a34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x228a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x228a38: 0xa4430a00  sh          $v1, 0xA00($v0)
    ctx->pc = 0x228a38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2560), (uint16_t)GPR_U32(ctx, 3));
    // 0x228a3c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x228A3Cu;
    SET_GPR_U32(ctx, 31, 0x228A44u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x228A3Cu, 0x228A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A44u;
label_228a44:
    // 0x228a44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x228a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x228a48: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x228a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x228a4c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x228A4Cu;
    {
        const bool branch_taken_0x228a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228a4c) {
            ctx->pc = 0x228A80u;
            goto label_228a80;
        }
    }
    ctx->pc = 0x228A54u;
    // 0x228a54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228a58: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x228a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x228a5c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x228a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x228a60: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x228a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228a64: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x228a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x228a68: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x228a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x228a6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x228a6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x228a70: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x228A70u;
    SET_GPR_U32(ctx, 31, 0x228A78u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x228A70u, 0x228A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A78u;
label_228a78:
    // 0x228a78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x228A78u;
    {
        const bool branch_taken_0x228a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228a78) {
            ctx->pc = 0x228AA8u;
            goto label_228aa8;
        }
    }
    ctx->pc = 0x228A80u;
label_228a80:
    // 0x228a80: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x228a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
    // 0x228a84: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x228a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x228a88: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x228a88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228a8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228a90: 0x24030522  addiu       $v1, $zero, 0x522
    ctx->pc = 0x228a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x228a94: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x228a94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x228a98: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x228a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x228a9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x228a9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x228aa0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x228AA0u;
    SET_GPR_U32(ctx, 31, 0x228AA8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x228AA0u, 0x228AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228AA8u;
label_228aa8:
    // 0x228aa8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x228AA8u;
    SET_GPR_U32(ctx, 31, 0x228AB0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x228AA8u, 0x228AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228AB0u;
label_228ab0:
    // 0x228ab0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x228ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x228ab4: 0x30a2003f  andi        $v0, $a1, 0x3F
    ctx->pc = 0x228ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x228ab8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x228ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x228abc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x228abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x228ac0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x228ac0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x228ac4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ac8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x228ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_228acc:
    // 0x228acc: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x228accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x228ad0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x228ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x228ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228ad8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228adc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228ae0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x228ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x228ae4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ae8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x228ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228aec: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x228aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
    // 0x228af0: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x228af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x228af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228af8: 0x0  nop
    ctx->pc = 0x228af8u;
    // NOP
    // 0x228afc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x228afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228b00: 0x0  nop
    ctx->pc = 0x228b00u;
    // NOP
    // 0x228b04: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x228B04u;
    {
        const bool branch_taken_0x228b04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228b04) {
            ctx->pc = 0x228B24u;
            goto label_228b24;
        }
    }
    ctx->pc = 0x228B0Cu;
    // 0x228b0c: 0x3c053cc9  lui         $a1, 0x3CC9
    ctx->pc = 0x228b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15561 << 16));
    // 0x228b10: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x228b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x228b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x228b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228b18: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228b1c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x228b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x228b20: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x228b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_228b24:
    // 0x228b24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228b28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228b2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228b30: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x228b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x228b34: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228b38: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x228b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228b3c: 0xc4a1006c  lwc1        $f1, 0x6C($a1)
    ctx->pc = 0x228b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228b40: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x228b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x228b44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228b44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228b48: 0x0  nop
    ctx->pc = 0x228b48u;
    // NOP
    // 0x228b4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x228b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228b50: 0x0  nop
    ctx->pc = 0x228b50u;
    // NOP
    // 0x228b54: 0x45010057  bc1t        . + 4 + (0x57 << 2)
    ctx->pc = 0x228B54u;
    {
        const bool branch_taken_0x228b54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228b54) {
            ctx->pc = 0x228CB4u;
            goto label_228cb4;
        }
    }
    ctx->pc = 0x228B5Cu;
    // 0x228b5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228b60: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x228b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228b64: 0x3c0444fa  lui         $a0, 0x44FA
    ctx->pc = 0x228b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17658 << 16));
    // 0x228b68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228b68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228b6c: 0x0  nop
    ctx->pc = 0x228b6cu;
    // NOP
    // 0x228b70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x228b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228b74: 0x0  nop
    ctx->pc = 0x228b74u;
    // NOP
    // 0x228b78: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x228B78u;
    {
        const bool branch_taken_0x228b78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228b78) {
            ctx->pc = 0x228BCCu;
            goto label_228bcc;
        }
    }
    ctx->pc = 0x228B80u;
    // 0x228b80: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x228b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x228b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x228b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228b88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228b8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228b90: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x228b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x228b94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228b98: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x228b98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x228b9c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x228b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x228ba0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x228ba0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x228ba4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x228ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x228ba8: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x228BA8u;
    {
        const bool branch_taken_0x228ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228ba8) {
            ctx->pc = 0x228D90u;
            goto label_228d90;
        }
    }
    ctx->pc = 0x228BB0u;
    // 0x228bb0: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x228bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x228bb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228bb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228bb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228bbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228bc0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x228bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x228bc4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x228BC4u;
    {
        const bool branch_taken_0x228bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228bc4) {
            ctx->pc = 0x228D90u;
            goto label_228d90;
        }
    }
    ctx->pc = 0x228BCCu;
label_228bcc:
    // 0x228bcc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228bd0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x228bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228bd4: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x228bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x228bd8: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x228bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x228bdc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x228bdcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228be0: 0x0  nop
    ctx->pc = 0x228be0u;
    // NOP
    // 0x228be4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228be4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228be8: 0x0  nop
    ctx->pc = 0x228be8u;
    // NOP
    // 0x228bec: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x228BECu;
    {
        const bool branch_taken_0x228bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228bec) {
            ctx->pc = 0x228C40u;
            goto label_228c40;
        }
    }
    ctx->pc = 0x228BF4u;
    // 0x228bf4: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x228bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x228bf8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228bf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228bfc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228c00: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228c04: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x228c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x228c08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228c0c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x228c0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x228c10: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x228c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x228c14: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x228c14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x228c18: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x228c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x228c1c: 0x1080005c  beqz        $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x228C1Cu;
    {
        const bool branch_taken_0x228c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x228c1c) {
            ctx->pc = 0x228D90u;
            goto label_228d90;
        }
    }
    ctx->pc = 0x228C24u;
    // 0x228c24: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x228c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
    // 0x228c28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x228c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228c2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228c30: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x228c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228c34: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x228c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x228c38: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x228C38u;
    {
        const bool branch_taken_0x228c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228c38) {
            ctx->pc = 0x228D90u;
            goto label_228d90;
        }
    }
    ctx->pc = 0x228C40u;
label_228c40:
    // 0x228c40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228c44: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x228c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228c48: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x228c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x228c4c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x228c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x228c50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228c54: 0x0  nop
    ctx->pc = 0x228c54u;
    // NOP
    // 0x228c58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228c58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228c5c: 0x0  nop
    ctx->pc = 0x228c5cu;
    // NOP
    // 0x228c60: 0x4501004b  bc1t        . + 4 + (0x4B << 2)
    ctx->pc = 0x228C60u;
    {
        const bool branch_taken_0x228c60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228c60) {
            ctx->pc = 0x228D90u;
            goto label_228d90;
        }
    }
    ctx->pc = 0x228C68u;
    // 0x228c68: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x228c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x228c6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228c6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228c70: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x228c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228c74: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x228c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x228c78: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x228c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x228c7c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x228c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228c80: 0x84e8127a  lh          $t0, 0x127A($a3)
    ctx->pc = 0x228c80u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4730)));
    // 0x228c84: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x228c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
    // 0x228c88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x228c88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x228c8c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x228c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x228c90: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x228C90u;
    {
        const bool branch_taken_0x228c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228c90) {
            ctx->pc = 0x228D90u;
            goto label_228d90;
        }
    }
    ctx->pc = 0x228C98u;
    // 0x228c98: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x228c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x228c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228ca0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ca4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x228ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228ca8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x228ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x228cac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x228CACu;
    {
        const bool branch_taken_0x228cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228cac) {
            ctx->pc = 0x228D90u;
            goto label_228d90;
        }
    }
    ctx->pc = 0x228CB4u;
label_228cb4:
    // 0x228cb4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x228cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228cb8: 0xc4a11288  lwc1        $f1, 0x1288($a1)
    ctx->pc = 0x228cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228cbc: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x228cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
    // 0x228cc0: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x228cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x228cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228cc8: 0x0  nop
    ctx->pc = 0x228cc8u;
    // NOP
    // 0x228ccc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x228cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228cd0: 0x0  nop
    ctx->pc = 0x228cd0u;
    // NOP
    // 0x228cd4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x228CD4u;
    {
        const bool branch_taken_0x228cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228cd4) {
            ctx->pc = 0x228D28u;
            goto label_228d28;
        }
    }
    ctx->pc = 0x228CDCu;
    // 0x228cdc: 0x3c05c120  lui         $a1, 0xC120
    ctx->pc = 0x228cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49440 << 16));
    // 0x228ce0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x228ce0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228ce4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ce8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x228ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228cec: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x228cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x228cf0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228cf4: 0x8482127a  lh          $v0, 0x127A($a0)
    ctx->pc = 0x228cf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x228cf8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x228cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x228cfc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x228cfcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x228d00: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x228d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x228d04: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x228D04u;
    {
        const bool branch_taken_0x228d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228d04) {
            ctx->pc = 0x228D90u;
            goto label_228d90;
        }
    }
    ctx->pc = 0x228D0Cu;
    // 0x228d0c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x228d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x228d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228d14: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d18: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x228d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x228d1c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x228d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x228d20: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x228D20u;
    {
        const bool branch_taken_0x228d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228d20) {
            ctx->pc = 0x228D90u;
            goto label_228d90;
        }
    }
    ctx->pc = 0x228D28u;
label_228d28:
    // 0x228d28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d2c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x228d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228d30: 0x3c0444fa  lui         $a0, 0x44FA
    ctx->pc = 0x228d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17658 << 16));
    // 0x228d34: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228d34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228d38: 0x0  nop
    ctx->pc = 0x228d38u;
    // NOP
    // 0x228d3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228d3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228d40: 0x0  nop
    ctx->pc = 0x228d40u;
    // NOP
    // 0x228d44: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x228D44u;
    {
        const bool branch_taken_0x228d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228d44) {
            ctx->pc = 0x228D90u;
            goto label_228d90;
        }
    }
    ctx->pc = 0x228D4Cu;
    // 0x228d4c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x228d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x228d50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228d54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228d5c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x228d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x228d60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d64: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x228d64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x228d68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x228d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x228d6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x228d6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x228d70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x228d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x228d74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x228D74u;
    {
        const bool branch_taken_0x228d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228d74) {
            ctx->pc = 0x228D90u;
            goto label_228d90;
        }
    }
    ctx->pc = 0x228D7Cu;
    // 0x228d7c: 0x3c12c248  lui         $s2, 0xC248
    ctx->pc = 0x228d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49736 << 16));
    // 0x228d80: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x228d80u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228d84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d88: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x228d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228d8c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x228d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_228d90:
    // 0x228d90: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d94: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x228d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d9c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x228d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228da0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x228da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x228da4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x228da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x228da8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x228da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x228dac: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x228dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x228db0: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x228db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x228db4: 0xc05c848  jal         func_172120
    ctx->pc = 0x228DB4u;
    SET_GPR_U32(ctx, 31, 0x228DBCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x228DB4u, 0x228DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228DBCu;
label_228dbc:
    // 0x228dbc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x228dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x228dc0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228dc4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x228dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228dc8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x228dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228dcc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x228dccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x228dd0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x228DD0u;
    SET_GPR_U32(ctx, 31, 0x228DD8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x228DD0u, 0x228DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228DD8u;
label_228dd8:
    // 0x228dd8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ddc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x228ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x228de0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228de4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x228de4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x228de8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x228de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x228dec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x228DECu;
    SET_GPR_U32(ctx, 31, 0x228DF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x228DECu, 0x228DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228DF4u;
label_228df4:
    // 0x228df4: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x228df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228df8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x228df8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x228dfc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x228DFCu;
    SET_GPR_U32(ctx, 31, 0x228E04u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x228DFCu, 0x228E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228E04u;
label_228e04:
    // 0x228e04: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x228e04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228e08: 0x8502127c  lh          $v0, 0x127C($t0)
    ctx->pc = 0x228e08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4732)));
    // 0x228e0c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x228e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x228e10: 0xa503127c  sh          $v1, 0x127C($t0)
    ctx->pc = 0x228e10u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x228e14: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x228E14u;
    {
        const bool branch_taken_0x228e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228e14) {
            ctx->pc = 0x228F90u;
            goto label_228f90;
        }
    }
    ctx->pc = 0x228E1Cu;
    // 0x228e1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228e20: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x228e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228e24: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x228e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228e28: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x228e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x228e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228e30: 0x0  nop
    ctx->pc = 0x228e30u;
    // NOP
    // 0x228e34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x228e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x228e38: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x228e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x228e3c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228e40: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x228e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x228e44: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x228e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228e48: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x228e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x228e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228e50: 0x0  nop
    ctx->pc = 0x228e50u;
    // NOP
    // 0x228e54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x228e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x228e58: 0xe460006c  swc1        $f0, 0x6C($v1)
    ctx->pc = 0x228e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
    // 0x228e5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228e60: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x228e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228e64: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x228e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228e68: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x228e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x228e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228e70: 0x0  nop
    ctx->pc = 0x228e70u;
    // NOP
    // 0x228e74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228e74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228e78: 0x0  nop
    ctx->pc = 0x228e78u;
    // NOP
    // 0x228e7c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x228E7Cu;
    {
        const bool branch_taken_0x228e7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228e7c) {
            ctx->pc = 0x228EACu;
            goto label_228eac;
        }
    }
    ctx->pc = 0x228E84u;
    // 0x228e84: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x228e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x228e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228e8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228e90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228e94: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x228e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x228e98: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x228e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x228e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228ea0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ea4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228ea8: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x228ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
label_228eac:
    // 0x228eac: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x228eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x228eb0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228eb4: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x228eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x228eb8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ebc: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x228ebcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x228ec0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x228ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x228ec4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x228ec4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x228ec8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x228ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x228ecc: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x228ECCu;
    {
        const bool branch_taken_0x228ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228ecc) {
            ctx->pc = 0x228F90u;
            goto label_228f90;
        }
    }
    ctx->pc = 0x228ED4u;
    // 0x228ed4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ed8: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x228ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228edc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x228edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x228ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228ee4: 0x0  nop
    ctx->pc = 0x228ee4u;
    // NOP
    // 0x228ee8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228eec: 0x0  nop
    ctx->pc = 0x228eecu;
    // NOP
    // 0x228ef0: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x228EF0u;
    {
        const bool branch_taken_0x228ef0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228ef0) {
            ctx->pc = 0x228F90u;
            goto label_228f90;
        }
    }
    ctx->pc = 0x228EF8u;
    // 0x228ef8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228efc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228f00: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x228f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x228f04: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x228f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x228f08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228f0c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x228f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x228f10: 0xc0965d0  jal         func_259740
    ctx->pc = 0x228F10u;
    SET_GPR_U32(ctx, 31, 0x228F18u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x228F10u, 0x228F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F18u;
label_228f18:
    // 0x228f18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228f1c: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x228f1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x228f20: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x228f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x228f24: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x228f24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x228f28: 0xc067694  jal         func_19DA50
    ctx->pc = 0x228F28u;
    SET_GPR_U32(ctx, 31, 0x228F30u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x228F28u, 0x228F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F30u;
label_228f30:
    // 0x228f30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x228f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x228f34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x228f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x228f38: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x228F38u;
    {
        const bool branch_taken_0x228f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228f38) {
            ctx->pc = 0x228F6Cu;
            goto label_228f6c;
        }
    }
    ctx->pc = 0x228F40u;
    // 0x228f40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228f44: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x228f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x228f48: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x228f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x228f4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x228f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228f50: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x228f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x228f54: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x228f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x228f58: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x228f58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x228f5c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x228F5Cu;
    SET_GPR_U32(ctx, 31, 0x228F64u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x228F5Cu, 0x228F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F64u;
label_228f64:
    // 0x228f64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x228F64u;
    {
        const bool branch_taken_0x228f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228f64) {
            ctx->pc = 0x228F90u;
            goto label_228f90;
        }
    }
    ctx->pc = 0x228F6Cu;
label_228f6c:
    // 0x228f6c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x228f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x228f70: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x228f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x228f74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x228f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228f78: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228f7c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x228f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x228f80: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x228f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x228f84: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x228f84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x228f88: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x228F88u;
    SET_GPR_U32(ctx, 31, 0x228F90u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x228F88u, 0x228F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F90u;
label_228f90:
    // 0x228f90: 0x1200009c  beqz        $s0, . + 4 + (0x9C << 2)
    ctx->pc = 0x228F90u;
    {
        const bool branch_taken_0x228f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x228f90) {
            ctx->pc = 0x229204u;
            goto label_229204;
        }
    }
    ctx->pc = 0x228F98u;
    // 0x228f98: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x228f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x228f9c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x228f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x228fa0: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x228FA0u;
    SET_GPR_U32(ctx, 31, 0x228FA8u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x228FA0u, 0x228FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FA8u;
label_228fa8:
    // 0x228fa8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x228fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x228fac: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x228facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x228fb0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x228fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x228fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228fb8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x228fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228fbc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x228fbcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x228fc0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x228FC0u;
    SET_GPR_U32(ctx, 31, 0x228FC8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x228FC0u, 0x228FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FC8u;
label_228fc8:
    // 0x228fc8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x228fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x228fcc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228fd0: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x228fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x228fd4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x228fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x228fd8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x228FD8u;
    SET_GPR_U32(ctx, 31, 0x228FE0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x228FD8u, 0x228FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FE0u;
label_228fe0:
    // 0x228fe0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x228fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x228fe4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228fe8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228fec: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x228fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228ff0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ff4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228ff8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x228ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x228ffc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x228ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229000: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x229000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229004: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x229004u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229008: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x229008u;
    SET_GPR_U32(ctx, 31, 0x229010u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x229008u, 0x229010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229010u;
label_229010:
    // 0x229010: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x229010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x229014: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x229014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229018: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x229018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
    // 0x22901c: 0x3462b8c2  ori         $v0, $v1, 0xB8C2
    ctx->pc = 0x22901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x229020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229024: 0x0  nop
    ctx->pc = 0x229024u;
    // NOP
    // 0x229028: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22902c: 0x0  nop
    ctx->pc = 0x22902cu;
    // NOP
    // 0x229030: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x229030u;
    {
        const bool branch_taken_0x229030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229030) {
            ctx->pc = 0x229060u;
            goto label_229060;
        }
    }
    ctx->pc = 0x229038u;
    // 0x229038: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22903c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22903cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229040: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x229040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229044: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x229044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x229048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22904c: 0x0  nop
    ctx->pc = 0x22904cu;
    // NOP
    // 0x229050: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229054: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229058: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22905c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x22905cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_229060:
    // 0x229060: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x229060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229064: 0x3c02be32  lui         $v0, 0xBE32
    ctx->pc = 0x229064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48690 << 16));
    // 0x229068: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x229068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x22906c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22906cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229070: 0x0  nop
    ctx->pc = 0x229070u;
    // NOP
    // 0x229074: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229078: 0x0  nop
    ctx->pc = 0x229078u;
    // NOP
    // 0x22907c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x22907Cu;
    {
        const bool branch_taken_0x22907c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22907c) {
            ctx->pc = 0x2290ACu;
            goto label_2290ac;
        }
    }
    ctx->pc = 0x229084u;
    // 0x229084: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229088: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22908c: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x22908cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229090: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x229090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x229094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229098: 0x0  nop
    ctx->pc = 0x229098u;
    // NOP
    // 0x22909c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22909cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2290a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2290a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2290a4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2290a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2290a8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2290a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_2290ac:
    // 0x2290ac: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2290acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2290b0: 0x3c033eb2  lui         $v1, 0x3EB2
    ctx->pc = 0x2290b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16050 << 16));
    // 0x2290b4: 0x3462b8c2  ori         $v0, $v1, 0xB8C2
    ctx->pc = 0x2290b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x2290b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2290b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2290bc: 0x0  nop
    ctx->pc = 0x2290bcu;
    // NOP
    // 0x2290c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2290c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2290c4: 0x0  nop
    ctx->pc = 0x2290c4u;
    // NOP
    // 0x2290c8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2290C8u;
    {
        const bool branch_taken_0x2290c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2290c8) {
            ctx->pc = 0x2290F8u;
            goto label_2290f8;
        }
    }
    ctx->pc = 0x2290D0u;
    // 0x2290d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2290d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2290d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2290d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2290d8: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x2290d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2290dc: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x2290dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x2290e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2290e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2290e4: 0x0  nop
    ctx->pc = 0x2290e4u;
    // NOP
    // 0x2290e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2290e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2290ec: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2290ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2290f0: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x2290f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2290f4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2290f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2290f8:
    // 0x2290f8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2290f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2290fc: 0x3c02beb2  lui         $v0, 0xBEB2
    ctx->pc = 0x2290fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48818 << 16));
    // 0x229100: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x229100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x229104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229108: 0x0  nop
    ctx->pc = 0x229108u;
    // NOP
    // 0x22910c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22910cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229110: 0x0  nop
    ctx->pc = 0x229110u;
    // NOP
    // 0x229114: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x229114u;
    {
        const bool branch_taken_0x229114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229114) {
            ctx->pc = 0x229144u;
            goto label_229144;
        }
    }
    ctx->pc = 0x22911Cu;
    // 0x22911c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22911cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229120: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x229120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x229124: 0xc4a1006c  lwc1        $f1, 0x6C($a1)
    ctx->pc = 0x229124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229128: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x229128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x22912c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22912cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229130: 0x0  nop
    ctx->pc = 0x229130u;
    // NOP
    // 0x229134: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x229134u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229138: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22913c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229140: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x229140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_229144:
    // 0x229144: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229148: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22914c: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x22914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229150: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x229150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x229154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229158: 0x0  nop
    ctx->pc = 0x229158u;
    // NOP
    // 0x22915c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22915cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229160: 0x0  nop
    ctx->pc = 0x229160u;
    // NOP
    // 0x229164: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x229164u;
    {
        const bool branch_taken_0x229164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229164) {
            ctx->pc = 0x229204u;
            goto label_229204;
        }
    }
    ctx->pc = 0x22916Cu;
    // 0x22916c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x22916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229170: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x229170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x229174: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x229174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x229178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22917c: 0x0  nop
    ctx->pc = 0x22917cu;
    // NOP
    // 0x229180: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229184: 0x0  nop
    ctx->pc = 0x229184u;
    // NOP
    // 0x229188: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x229188u;
    {
        const bool branch_taken_0x229188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229188) {
            ctx->pc = 0x2291B8u;
            goto label_2291b8;
        }
    }
    ctx->pc = 0x229190u;
    // 0x229190: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229194: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229198: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x229198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22919c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x22919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2291a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2291a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2291a4: 0x0  nop
    ctx->pc = 0x2291a4u;
    // NOP
    // 0x2291a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2291a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2291ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2291acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2291b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2291b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2291b4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2291b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2291b8:
    // 0x2291b8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2291b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2291bc: 0x3c05bf86  lui         $a1, 0xBF86
    ctx->pc = 0x2291bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49030 << 16));
    // 0x2291c0: 0x34a40a92  ori         $a0, $a1, 0xA92
    ctx->pc = 0x2291c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2706);
    // 0x2291c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2291c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2291c8: 0x0  nop
    ctx->pc = 0x2291c8u;
    // NOP
    // 0x2291cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2291ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2291d0: 0x0  nop
    ctx->pc = 0x2291d0u;
    // NOP
    // 0x2291d4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2291D4u;
    {
        const bool branch_taken_0x2291d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2291d4) {
            ctx->pc = 0x229204u;
            goto label_229204;
        }
    }
    ctx->pc = 0x2291DCu;
    // 0x2291dc: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x2291dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2291e0: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2291e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2291e4: 0xc4e1006c  lwc1        $f1, 0x6C($a3)
    ctx->pc = 0x2291e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2291e8: 0x3c0841f0  lui         $t0, 0x41F0
    ctx->pc = 0x2291e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16880 << 16));
    // 0x2291ec: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2291ecu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2291f0: 0x0  nop
    ctx->pc = 0x2291f0u;
    // NOP
    // 0x2291f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2291f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2291f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2291f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2291fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2291fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229200: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x229200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_229204:
    // 0x229204: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229208: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x229208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x22920c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x22920cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229210: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x229210u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x229214: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x229214u;
    {
        const bool branch_taken_0x229214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229214) {
            ctx->pc = 0x2292ACu;
            goto label_2292ac;
        }
    }
    ctx->pc = 0x22921Cu;
    // 0x22921c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22921Cu;
    SET_GPR_U32(ctx, 31, 0x229224u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22921Cu, 0x229224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229224u;
label_229224:
    // 0x229224: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x229224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x229228: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x229228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x22922c: 0x2462003c  addiu       $v0, $v1, 0x3C
    ctx->pc = 0x22922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x229230: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x229230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x229234: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x229234u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x229238: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22923c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22923cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x229240: 0xc067694  jal         func_19DA50
    ctx->pc = 0x229240u;
    SET_GPR_U32(ctx, 31, 0x229248u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x229240u, 0x229248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229248u;
label_229248:
    // 0x229248: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x229248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22924c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22924cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x229250: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x229250u;
    {
        const bool branch_taken_0x229250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x229250) {
            ctx->pc = 0x229284u;
            goto label_229284;
        }
    }
    ctx->pc = 0x229258u;
    // 0x229258: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x229258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
    // 0x22925c: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x22925cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x229260: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x229260u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229264: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229268: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x229268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x22926c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22926cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x229270: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x229270u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x229274: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x229274u;
    SET_GPR_U32(ctx, 31, 0x22927Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x229274u, 0x22927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22927Cu;
label_22927c:
    // 0x22927c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22927Cu;
    {
        const bool branch_taken_0x22927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22927c) {
            ctx->pc = 0x2292ACu;
            goto label_2292ac;
        }
    }
    ctx->pc = 0x229284u;
label_229284:
    // 0x229284: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229288: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x229288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22928c: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x22928cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x229290: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x229290u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229294: 0x24020522  addiu       $v0, $zero, 0x522
    ctx->pc = 0x229294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x229298: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x229298u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22929c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22929cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2292a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2292a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2292a4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2292A4u;
    SET_GPR_U32(ctx, 31, 0x2292ACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2292A4u, 0x2292ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2292ACu;
label_2292ac:
    // 0x2292ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2292acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2292b0: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x2292b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x2292b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2292B4u;
    {
        const bool branch_taken_0x2292b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2292b4) {
            ctx->pc = 0x2292CCu;
            goto label_2292cc;
        }
    }
    ctx->pc = 0x2292BCu;
    // 0x2292bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2292bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2292c0: 0x8462127e  lh          $v0, 0x127E($v1)
    ctx->pc = 0x2292c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2292c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2292c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2292c8: 0xa462127e  sh          $v0, 0x127E($v1)
    ctx->pc = 0x2292c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 2));
label_2292cc:
    // 0x2292cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2292ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2292d0: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x2292d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x2292d4: 0x144001de  bnez        $v0, . + 4 + (0x1DE << 2)
    ctx->pc = 0x2292D4u;
    {
        const bool branch_taken_0x2292d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2292d4) {
            ctx->pc = 0x229A50u;
            goto label_229a50;
        }
    }
    ctx->pc = 0x2292DCu;
    // 0x2292dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2292dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2292e0: 0x8c221a58  lw          $v0, 0x1A58($at)
    ctx->pc = 0x2292e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2292e4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2292e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2292e8: 0x144001d9  bnez        $v0, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x2292E8u;
    {
        const bool branch_taken_0x2292e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2292e8) {
            ctx->pc = 0x229A50u;
            goto label_229a50;
        }
    }
    ctx->pc = 0x2292F0u;
    // 0x2292f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2292f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2292f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2292f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2292f8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2292f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2292fc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2292fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229300: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x229300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x229304: 0x24830100  addiu       $v1, $a0, 0x100
    ctx->pc = 0x229304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x229308: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x229308u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x22930c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22930cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229310: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x229310u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x229314: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x229314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x229318: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22931c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22931cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x229320: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229324: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x229324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229328: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x229328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22932c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x22932cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x229330: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x229330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x229334: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x229334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x229338: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22933c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x22933cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x229340: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x229340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x229344: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x229344u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x229348: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x229348u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x22934c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x22934cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x229350: 0x146001bf  bnez        $v1, . + 4 + (0x1BF << 2)
    ctx->pc = 0x229350u;
    {
        const bool branch_taken_0x229350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x229350) {
            ctx->pc = 0x229A50u;
            goto label_229a50;
        }
    }
    ctx->pc = 0x229358u;
    // 0x229358: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22935c: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x22935cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x229360: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x229360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x229364: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229368: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x229368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    // 0x22936c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22936cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229370: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x229370u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x229374: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x229374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x229378: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x229378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x22937c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x229380: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229384: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x229384u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    // 0x229388: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x229388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22938c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229390: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x229390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x229394: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229398: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x229398u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22939c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22939cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2293a0: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x2293a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x2293a4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2293a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2293a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2293a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2293ac: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x2293acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x2293b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2293b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2293b4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2293b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2293b8: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x2293b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2293bc: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x2293bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x2293c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2293c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2293c4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2293c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2293c8: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x2293c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x2293cc: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x2293CCu;
    {
        const bool branch_taken_0x2293cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2293cc) {
            ctx->pc = 0x229A50u;
            goto label_229a50;
        }
    }
    ctx->pc = 0x2293D4u;
label_2293d4:
    // 0x2293d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2293d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2293d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2293d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2293dc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2293dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2293e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2293e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2293e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2293e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2293e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2293e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2293ec: 0x2406781e  addiu       $a2, $zero, 0x781E
    ctx->pc = 0x2293ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30750));
    // 0x2293f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2293f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2293f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2293f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2293f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2293F8u;
    SET_GPR_U32(ctx, 31, 0x229400u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2293F8u, 0x229400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229400u;
label_229400:
    // 0x229400: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229404: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x229404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x229408: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x229408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22940c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22940cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229410: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x229410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x229414: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x229414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x229418: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x229418u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22941c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22941Cu;
    SET_GPR_U32(ctx, 31, 0x229424u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22941Cu, 0x229424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229424u;
label_229424:
    // 0x229424: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x229424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229428: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x229428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22942c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229430: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229434: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x229434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x229438: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x229438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22943c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22943cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x229440: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x229440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x229444: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x229444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x229448: 0xc05c848  jal         func_172120
    ctx->pc = 0x229448u;
    SET_GPR_U32(ctx, 31, 0x229450u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x229448u, 0x229450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229450u;
label_229450:
    // 0x229450: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x229450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x229454: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229458: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x229458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22945c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x22945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229460: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x229460u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229464: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x229464u;
    SET_GPR_U32(ctx, 31, 0x22946Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x229464u, 0x22946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22946Cu;
label_22946c:
    // 0x22946c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229470: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x229470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x229474: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x229474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229478: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x229478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22947c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22947Cu;
    SET_GPR_U32(ctx, 31, 0x229484u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22947Cu, 0x229484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229484u;
label_229484:
    // 0x229484: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x229484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229488: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x229488u;
    SET_GPR_U32(ctx, 31, 0x229490u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x229488u, 0x229490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229490u;
label_229490:
    // 0x229490: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229494: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x229494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x229498: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x229498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22949c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22949cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2294a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2294A0u;
    {
        const bool branch_taken_0x2294a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2294a0) {
            ctx->pc = 0x2294E0u;
            goto label_2294e0;
        }
    }
    ctx->pc = 0x2294A8u;
    // 0x2294a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2294a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2294ac: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2294acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2294b0: 0x24523520  addiu       $s2, $v0, 0x3520
    ctx->pc = 0x2294b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
    // 0x2294b4: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x2294b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x2294b8: 0x9462002e  lhu         $v0, 0x2E($v1)
    ctx->pc = 0x2294b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2294bc: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x2294bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2294c0: 0xa464002e  sh          $a0, 0x2E($v1)
    ctx->pc = 0x2294c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 4));
    // 0x2294c4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2294c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2294c8: 0x26420150  addiu       $v0, $s2, 0x150
    ctx->pc = 0x2294c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x2294cc: 0xa445002a  sh          $a1, 0x2A($v0)
    ctx->pc = 0x2294ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 5));
    // 0x2294d0: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2294d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2294d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2294d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2294d8: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x2294d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x2294dc: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2294dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_2294e0:
    // 0x2294e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2294e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2294e4: 0x904509e7  lbu         $a1, 0x9E7($v0)
    ctx->pc = 0x2294e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x2294e8: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2294E8u;
    {
        const bool branch_taken_0x2294e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2294e8) {
            ctx->pc = 0x22955Cu;
            goto label_22955c;
        }
    }
    ctx->pc = 0x2294F0u;
    // 0x2294f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2294f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2294f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2294f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2294f8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2294f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2294fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2294fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229500: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x229500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229504: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x229504u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x229508: 0x8c420368  lw          $v0, 0x368($v0)
    ctx->pc = 0x229508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22950c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x22950cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x229510: 0x24067802  addiu       $a2, $zero, 0x7802
    ctx->pc = 0x229510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30722));
    // 0x229514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229518: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x229518u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22951c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22951cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x229520: 0xc0965d0  jal         func_259740
    ctx->pc = 0x229520u;
    SET_GPR_U32(ctx, 31, 0x229528u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x229520u, 0x229528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229528u;
label_229528:
    // 0x229528: 0xc067694  jal         func_19DA50
    ctx->pc = 0x229528u;
    SET_GPR_U32(ctx, 31, 0x229530u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x229528u, 0x229530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229530u;
label_229530:
    // 0x229530: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x229530u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x229534: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x229534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x229538: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x229538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x22953c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x22953cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x229540: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x229540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229544: 0x94830a00  lhu         $v1, 0xA00($a0)
    ctx->pc = 0x229544u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2560)));
    // 0x229548: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x229548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22954c: 0xa4820a00  sh          $v0, 0xA00($a0)
    ctx->pc = 0x22954cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2560), (uint16_t)GPR_U32(ctx, 2));
    // 0x229550: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x229550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x229554: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229558: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x229558u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_22955c:
    // 0x22955c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22955cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229560: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229564: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229568: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x229568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22956c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229570: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229574: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x229574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229578: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x229578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22957c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22957cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229580: 0x0  nop
    ctx->pc = 0x229580u;
    // NOP
    // 0x229584: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229588: 0x0  nop
    ctx->pc = 0x229588u;
    // NOP
    // 0x22958c: 0x45010057  bc1t        . + 4 + (0x57 << 2)
    ctx->pc = 0x22958Cu;
    {
        const bool branch_taken_0x22958c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22958c) {
            ctx->pc = 0x2296ECu;
            goto label_2296ec;
        }
    }
    ctx->pc = 0x229594u;
    // 0x229594: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229598: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x229598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22959c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x22959cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2295a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2295a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2295a4: 0x0  nop
    ctx->pc = 0x2295a4u;
    // NOP
    // 0x2295a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2295a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2295ac: 0x0  nop
    ctx->pc = 0x2295acu;
    // NOP
    // 0x2295b0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2295B0u;
    {
        const bool branch_taken_0x2295b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2295b0) {
            ctx->pc = 0x229604u;
            goto label_229604;
        }
    }
    ctx->pc = 0x2295B8u;
    // 0x2295b8: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x2295b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x2295bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2295bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2295c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2295c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2295c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2295c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2295c8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2295c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2295cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2295ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2295d0: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2295d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2295d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2295d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2295d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2295d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2295dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2295dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2295e0: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x2295E0u;
    {
        const bool branch_taken_0x2295e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2295e0) {
            ctx->pc = 0x2297C8u;
            goto label_2297c8;
        }
    }
    ctx->pc = 0x2295E8u;
    // 0x2295e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2295e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2295ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2295ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2295f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2295f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2295f4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2295f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2295f8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2295f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2295fc: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2295FCu;
    {
        const bool branch_taken_0x2295fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2295fc) {
            ctx->pc = 0x2297C8u;
            goto label_2297c8;
        }
    }
    ctx->pc = 0x229604u;
label_229604:
    // 0x229604: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x229604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229608: 0xc4a11288  lwc1        $f1, 0x1288($a1)
    ctx->pc = 0x229608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22960c: 0x3c07451c  lui         $a3, 0x451C
    ctx->pc = 0x22960cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17692 << 16));
    // 0x229610: 0x34e64000  ori         $a2, $a3, 0x4000
    ctx->pc = 0x229610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x229614: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x229614u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229618: 0x0  nop
    ctx->pc = 0x229618u;
    // NOP
    // 0x22961c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22961cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229620: 0x0  nop
    ctx->pc = 0x229620u;
    // NOP
    // 0x229624: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x229624u;
    {
        const bool branch_taken_0x229624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229624) {
            ctx->pc = 0x229678u;
            goto label_229678;
        }
    }
    ctx->pc = 0x22962Cu;
    // 0x22962c: 0x3c084248  lui         $t0, 0x4248
    ctx->pc = 0x22962cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16968 << 16));
    // 0x229630: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x229630u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229634: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229638: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22963c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x22963cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x229640: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229644: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x229644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x229648: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x229648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22964c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22964cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x229650: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x229650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x229654: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x229654u;
    {
        const bool branch_taken_0x229654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229654) {
            ctx->pc = 0x2297C8u;
            goto label_2297c8;
        }
    }
    ctx->pc = 0x22965Cu;
    // 0x22965c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x22965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x229660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229664: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229668: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x229668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22966c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22966cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x229670: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x229670u;
    {
        const bool branch_taken_0x229670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229670) {
            ctx->pc = 0x2297C8u;
            goto label_2297c8;
        }
    }
    ctx->pc = 0x229678u;
label_229678:
    // 0x229678: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22967c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229680: 0x3c05453b  lui         $a1, 0x453B
    ctx->pc = 0x229680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17723 << 16));
    // 0x229684: 0x34a48000  ori         $a0, $a1, 0x8000
    ctx->pc = 0x229684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x229688: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x229688u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22968c: 0x0  nop
    ctx->pc = 0x22968cu;
    // NOP
    // 0x229690: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229694: 0x0  nop
    ctx->pc = 0x229694u;
    // NOP
    // 0x229698: 0x4501004b  bc1t        . + 4 + (0x4B << 2)
    ctx->pc = 0x229698u;
    {
        const bool branch_taken_0x229698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229698) {
            ctx->pc = 0x2297C8u;
            goto label_2297c8;
        }
    }
    ctx->pc = 0x2296A0u;
    // 0x2296a0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2296a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2296a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2296a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2296a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2296a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2296ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2296acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2296b0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2296b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2296b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2296b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2296b8: 0x8444127a  lh          $a0, 0x127A($v0)
    ctx->pc = 0x2296b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2296bc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2296bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2296c0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2296c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2296c4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2296c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2296c8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2296C8u;
    {
        const bool branch_taken_0x2296c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2296c8) {
            ctx->pc = 0x2297C8u;
            goto label_2297c8;
        }
    }
    ctx->pc = 0x2296D0u;
    // 0x2296d0: 0x3c04c2c8  lui         $a0, 0xC2C8
    ctx->pc = 0x2296d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49864 << 16));
    // 0x2296d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2296d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2296d8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2296d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2296dc: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x2296dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2296e0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2296e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2296e4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2296E4u;
    {
        const bool branch_taken_0x2296e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2296e4) {
            ctx->pc = 0x2297C8u;
            goto label_2297c8;
        }
    }
    ctx->pc = 0x2296ECu;
label_2296ec:
    // 0x2296ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2296ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2296f0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2296f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2296f4: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x2296f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
    // 0x2296f8: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x2296f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2296fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2296fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229700: 0x0  nop
    ctx->pc = 0x229700u;
    // NOP
    // 0x229704: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229708: 0x0  nop
    ctx->pc = 0x229708u;
    // NOP
    // 0x22970c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x22970Cu;
    {
        const bool branch_taken_0x22970c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22970c) {
            ctx->pc = 0x229760u;
            goto label_229760;
        }
    }
    ctx->pc = 0x229714u;
    // 0x229714: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x229714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x229718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22971c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229720: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229724: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x229724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x229728: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22972c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x22972cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x229730: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x229730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x229734: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x229734u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x229738: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x229738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22973c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x22973Cu;
    {
        const bool branch_taken_0x22973c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22973c) {
            ctx->pc = 0x2297C8u;
            goto label_2297c8;
        }
    }
    ctx->pc = 0x229744u;
    // 0x229744: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x229744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x229748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22974c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229754: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x229754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x229758: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x229758u;
    {
        const bool branch_taken_0x229758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229758) {
            ctx->pc = 0x2297C8u;
            goto label_2297c8;
        }
    }
    ctx->pc = 0x229760u;
label_229760:
    // 0x229760: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229764: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x229764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229768: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x229768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x22976c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22976cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229770: 0x0  nop
    ctx->pc = 0x229770u;
    // NOP
    // 0x229774: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229778: 0x0  nop
    ctx->pc = 0x229778u;
    // NOP
    // 0x22977c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x22977Cu;
    {
        const bool branch_taken_0x22977c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22977c) {
            ctx->pc = 0x2297C8u;
            goto label_2297c8;
        }
    }
    ctx->pc = 0x229784u;
    // 0x229784: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x229784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x229788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22978c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229790: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229794: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x229794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x229798: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22979c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x22979cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2297a0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2297a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2297a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2297a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2297a8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2297a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2297ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2297ACu;
    {
        const bool branch_taken_0x2297ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2297ac) {
            ctx->pc = 0x2297C8u;
            goto label_2297c8;
        }
    }
    ctx->pc = 0x2297B4u;
    // 0x2297b4: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x2297b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
    // 0x2297b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2297b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2297bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2297bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2297c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2297c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2297c4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2297c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2297c8:
    // 0x2297c8: 0x120000a1  beqz        $s0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2297C8u;
    {
        const bool branch_taken_0x2297c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2297c8) {
            ctx->pc = 0x229A50u;
            goto label_229a50;
        }
    }
    ctx->pc = 0x2297D0u;
    // 0x2297d0: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x2297d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x2297d4: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2297d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2297d8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2297D8u;
    SET_GPR_U32(ctx, 31, 0x2297E0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2297D8u, 0x2297E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297E0u;
label_2297e0:
    // 0x2297e0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2297e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2297e4: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x2297e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x2297e8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2297e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2297ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2297ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2297f0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2297f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2297f4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2297f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2297f8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2297F8u;
    SET_GPR_U32(ctx, 31, 0x229800u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2297F8u, 0x229800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229800u;
label_229800:
    // 0x229800: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x229800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x229804: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229808: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x229808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x22980c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22980cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x229810: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x229810u;
    SET_GPR_U32(ctx, 31, 0x229818u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x229810u, 0x229818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229818u;
label_229818:
    // 0x229818: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x229818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x22981c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229820: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229824: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x229824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229828: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22982c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229830: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x229830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x229834: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x229834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x229838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22983c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229840: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229844: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x229844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x229848: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x229848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22984c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x22984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229850: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x229850u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229854: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x229854u;
    SET_GPR_U32(ctx, 31, 0x22985Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x229854u, 0x22985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22985Cu;
label_22985c:
    // 0x22985c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x22985cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x229860: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x229860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229864: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x229864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x229868: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x229868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x22986c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22986cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229870: 0x0  nop
    ctx->pc = 0x229870u;
    // NOP
    // 0x229874: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229878: 0x0  nop
    ctx->pc = 0x229878u;
    // NOP
    // 0x22987c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x22987Cu;
    {
        const bool branch_taken_0x22987c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22987c) {
            ctx->pc = 0x2298ACu;
            goto label_2298ac;
        }
    }
    ctx->pc = 0x229884u;
    // 0x229884: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229888: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22988c: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x22988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229890: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x229890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x229894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229898: 0x0  nop
    ctx->pc = 0x229898u;
    // NOP
    // 0x22989c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22989cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2298a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2298a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2298a4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2298a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2298a8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2298a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2298ac:
    // 0x2298ac: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2298acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2298b0: 0x3c06be32  lui         $a2, 0xBE32
    ctx->pc = 0x2298b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48690 << 16));
    // 0x2298b4: 0x34c5b8c2  ori         $a1, $a2, 0xB8C2
    ctx->pc = 0x2298b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)47298);
    // 0x2298b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2298b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2298bc: 0x0  nop
    ctx->pc = 0x2298bcu;
    // NOP
    // 0x2298c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2298c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2298c4: 0x0  nop
    ctx->pc = 0x2298c4u;
    // NOP
    // 0x2298c8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2298C8u;
    {
        const bool branch_taken_0x2298c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2298c8) {
            ctx->pc = 0x2298F8u;
            goto label_2298f8;
        }
    }
    ctx->pc = 0x2298D0u;
    // 0x2298d0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x2298d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2298d4: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2298d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2298d8: 0xc501006c  lwc1        $f1, 0x6C($t0)
    ctx->pc = 0x2298d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2298dc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2298dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2298e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2298e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2298e4: 0x0  nop
    ctx->pc = 0x2298e4u;
    // NOP
    // 0x2298e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2298e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2298ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2298ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2298f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2298f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2298f4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2298f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_2298f8:
    // 0x2298f8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2298f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2298fc: 0x3c043eb2  lui         $a0, 0x3EB2
    ctx->pc = 0x2298fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16050 << 16));
    // 0x229900: 0x3482b8c2  ori         $v0, $a0, 0xB8C2
    ctx->pc = 0x229900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)47298);
    // 0x229904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229908: 0x0  nop
    ctx->pc = 0x229908u;
    // NOP
    // 0x22990c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22990cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229910: 0x0  nop
    ctx->pc = 0x229910u;
    // NOP
    // 0x229914: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x229914u;
    {
        const bool branch_taken_0x229914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229914) {
            ctx->pc = 0x229944u;
            goto label_229944;
        }
    }
    ctx->pc = 0x22991Cu;
    // 0x22991c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229920: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229924: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x229924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229928: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x229928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x22992c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22992cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229930: 0x0  nop
    ctx->pc = 0x229930u;
    // NOP
    // 0x229934: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229938: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22993c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229940: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x229940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_229944:
    // 0x229944: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x229944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229948: 0x3c02beb2  lui         $v0, 0xBEB2
    ctx->pc = 0x229948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48818 << 16));
    // 0x22994c: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x22994cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x229950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229954: 0x0  nop
    ctx->pc = 0x229954u;
    // NOP
    // 0x229958: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22995c: 0x0  nop
    ctx->pc = 0x22995cu;
    // NOP
    // 0x229960: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x229960u;
    {
        const bool branch_taken_0x229960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229960) {
            ctx->pc = 0x229990u;
            goto label_229990;
        }
    }
    ctx->pc = 0x229968u;
    // 0x229968: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22996c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22996cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229970: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x229970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229974: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x229974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x229978: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x229978u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22997c: 0x0  nop
    ctx->pc = 0x22997cu;
    // NOP
    // 0x229980: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x229980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229984: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x229984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229988: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x229988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22998c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22998cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_229990:
    // 0x229990: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x229990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229994: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x229994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x229998: 0xc4a1006c  lwc1        $f1, 0x6C($a1)
    ctx->pc = 0x229998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22999c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x22999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2299a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2299a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2299a4: 0x0  nop
    ctx->pc = 0x2299a4u;
    // NOP
    // 0x2299a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2299a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2299ac: 0x0  nop
    ctx->pc = 0x2299acu;
    // NOP
    // 0x2299b0: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x2299B0u;
    {
        const bool branch_taken_0x2299b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2299b0) {
            ctx->pc = 0x229A50u;
            goto label_229a50;
        }
    }
    ctx->pc = 0x2299B8u;
    // 0x2299b8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2299b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2299bc: 0x3c053f86  lui         $a1, 0x3F86
    ctx->pc = 0x2299bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16262 << 16));
    // 0x2299c0: 0x34a30a92  ori         $v1, $a1, 0xA92
    ctx->pc = 0x2299c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2706);
    // 0x2299c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2299c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2299c8: 0x0  nop
    ctx->pc = 0x2299c8u;
    // NOP
    // 0x2299cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2299ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2299d0: 0x0  nop
    ctx->pc = 0x2299d0u;
    // NOP
    // 0x2299d4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2299D4u;
    {
        const bool branch_taken_0x2299d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2299d4) {
            ctx->pc = 0x229A04u;
            goto label_229a04;
        }
    }
    ctx->pc = 0x2299DCu;
    // 0x2299dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2299dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2299e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2299e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2299e4: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x2299e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2299e8: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x2299e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x2299ec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2299ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2299f0: 0x0  nop
    ctx->pc = 0x2299f0u;
    // NOP
    // 0x2299f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2299f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2299f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2299f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2299fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2299fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229a00: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x229a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_229a04:
    // 0x229a04: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x229a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229a08: 0x3c03bf86  lui         $v1, 0xBF86
    ctx->pc = 0x229a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49030 << 16));
    // 0x229a0c: 0x34620a92  ori         $v0, $v1, 0xA92
    ctx->pc = 0x229a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x229a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229a14: 0x0  nop
    ctx->pc = 0x229a14u;
    // NOP
    // 0x229a18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229a1c: 0x0  nop
    ctx->pc = 0x229a1cu;
    // NOP
    // 0x229a20: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x229A20u;
    {
        const bool branch_taken_0x229a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229a20) {
            ctx->pc = 0x229A50u;
            goto label_229a50;
        }
    }
    ctx->pc = 0x229A28u;
    // 0x229a28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229a2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229a30: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x229a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229a34: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x229a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x229a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229a3c: 0x0  nop
    ctx->pc = 0x229a3cu;
    // NOP
    // 0x229a40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x229a40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229a44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229a48: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229a4c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x229a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_229a50:
    // 0x229a50: 0xc067694  jal         func_19DA50
    ctx->pc = 0x229A50u;
    SET_GPR_U32(ctx, 31, 0x229A58u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x229A50u, 0x229A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A58u;
label_229a58:
    // 0x229a58: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x229a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x229a5c: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x229a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x229a60: 0x24650003  addiu       $a1, $v1, 0x3
    ctx->pc = 0x229a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x229a64: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x229a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x229a68: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x229a68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x229a6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229a70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229a74: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x229a74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
    // 0x229a78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229a7c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x229a7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x229a80: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x229a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x229a84: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x229a84u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x229a88: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x229a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x229a8c: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x229A8Cu;
    {
        const bool branch_taken_0x229a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a8c) {
            ctx->pc = 0x229B04u;
            goto label_229b04;
        }
    }
    ctx->pc = 0x229A94u;
    // 0x229a94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229a98: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x229a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229a9c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x229a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229aa0: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x229aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x229aa4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x229aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x229aa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229aac: 0x0  nop
    ctx->pc = 0x229aacu;
    // NOP
    // 0x229ab0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x229ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229ab4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x229ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x229ab8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229abc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229ac0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x229ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229ac4: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x229ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x229ac8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x229ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x229acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229ad0: 0x0  nop
    ctx->pc = 0x229ad0u;
    // NOP
    // 0x229ad4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x229ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229ad8: 0x0  nop
    ctx->pc = 0x229ad8u;
    // NOP
    // 0x229adc: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x229ADCu;
    {
        const bool branch_taken_0x229adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229adc) {
            ctx->pc = 0x229B6Cu;
            goto label_229b6c;
        }
    }
    ctx->pc = 0x229AE4u;
    // 0x229ae4: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x229ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x229ae8: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x229ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x229aec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229af0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229af4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229af8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x229af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x229afc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x229AFCu;
    {
        const bool branch_taken_0x229afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229afc) {
            ctx->pc = 0x229B6Cu;
            goto label_229b6c;
        }
    }
    ctx->pc = 0x229B04u;
label_229b04:
    // 0x229b04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229b08: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x229b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229b0c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x229b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229b10: 0x3c043d49  lui         $a0, 0x3D49
    ctx->pc = 0x229b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15689 << 16));
    // 0x229b14: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x229b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x229b18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229b1c: 0x0  nop
    ctx->pc = 0x229b1cu;
    // NOP
    // 0x229b20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x229b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229b24: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x229b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x229b28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229b2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229b30: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x229b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229b34: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x229b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x229b38: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x229b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x229b3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229b3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229b40: 0x0  nop
    ctx->pc = 0x229b40u;
    // NOP
    // 0x229b44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x229b44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229b48: 0x0  nop
    ctx->pc = 0x229b48u;
    // NOP
    // 0x229b4c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x229B4Cu;
    {
        const bool branch_taken_0x229b4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229b4c) {
            ctx->pc = 0x229B6Cu;
            goto label_229b6c;
        }
    }
    ctx->pc = 0x229B54u;
    // 0x229b54: 0x3c04bfc9  lui         $a0, 0xBFC9
    ctx->pc = 0x229b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49097 << 16));
    // 0x229b58: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x229b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x229b5c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x229b5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229b60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229b64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229b68: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x229b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_229b6c:
    // 0x229b6c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x229b6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229b70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x229b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x229b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x229b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229b7c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x229b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x229b80: 0x3e00008  jr          $ra
    ctx->pc = 0x229B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229B88u;
}
