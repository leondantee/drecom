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

// Function: entry_003505ac
// Address: 0x3505ac - 0x3506b8
void entry_003505ac_0x3505ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003505ac_0x3505ac");
#endif

    switch (ctx->pc) {
        case 0x3505e4u: goto label_3505e4;
        case 0x350670u: goto label_350670;
        case 0x35068cu: goto label_35068c;
        default: break;
    }

    ctx->pc = 0x3505acu;

    // 0x3505ac: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x3505acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3505b0: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x3505b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x3505b4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3505b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3505b8: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x3505b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3505bc: 0x148000d8  bnez        $a0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x3505BCu;
    {
        const bool branch_taken_0x3505bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3505bc) {
            ctx->pc = 0x350920u;
            return;
        }
    }
    ctx->pc = 0x3505C4u;
    // 0x3505c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3505c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3505c8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3505c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3505cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3505ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3505d0: 0x24063c1e  addiu       $a2, $zero, 0x3C1E
    ctx->pc = 0x3505d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15390));
    // 0x3505d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3505d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3505d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3505d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3505dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3505DCu;
    SET_GPR_U32(ctx, 31, 0x3505E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3505DCu, 0x3505E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3505E4u;
label_3505e4:
    // 0x3505e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3505e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3505e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3505e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3505ec: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3505ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3505f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3505f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3505f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3505f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3505f8: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x3505f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x3505fc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3505fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350600: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350604: 0xa0400029  sb          $zero, 0x29($v0)
    ctx->pc = 0x350604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x350608: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x350608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x35060c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x35060cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x350610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350614: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350618: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35061c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x35061cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x350620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x350620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350624: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350628: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x350628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x35062c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35062cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350630: 0x8fb00088  lw          $s0, 0x88($sp)
    ctx->pc = 0x350630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350634: 0xe6000184  swc1        $f0, 0x184($s0)
    ctx->pc = 0x350634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 388), bits); }
    // 0x350638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x350638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35063c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350640: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x350640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x350644: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x350644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x350648: 0x34710fdb  ori         $s1, $v1, 0xFDB
    ctx->pc = 0x350648u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x35064c: 0x44916800  mtc1        $s1, $f13
    ctx->pc = 0x35064cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x350650: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x350650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350654: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350658: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x350658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x35065c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x35065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x350660: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x350660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x350664: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x350664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x350668: 0xc05c848  jal         func_172120
    ctx->pc = 0x350668u;
    SET_GPR_U32(ctx, 31, 0x350670u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x350668u, 0x350670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350670u;
label_350670:
    // 0x350670: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x350670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x350674: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350678: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x350678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35067c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x35067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350680: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x350680u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x350684: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x350684u;
    SET_GPR_U32(ctx, 31, 0x35068Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x350684u, 0x35068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35068Cu;
label_35068c:
    // 0x35068c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350690: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x350690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x350694: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350698: 0x247310b0  addiu       $s3, $v1, 0x10B0
    ctx->pc = 0x350698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x35069c: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x35069cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x3506a0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x3506a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x3506a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3506a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3506a8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3506a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3506ac: 0xae6400f0  sw          $a0, 0xF0($s3)
    ctx->pc = 0x3506acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 4));
    // 0x3506b0: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3506B0u;
    {
        const bool branch_taken_0x3506b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3506b0) {
            ctx->pc = 0x350920u;
            return;
        }
    }
    ctx->pc = 0x3506B8u;
}
