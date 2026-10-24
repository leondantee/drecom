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

// Function: Em0c_R1_mv08
// Address: 0x227100 - 0x227a90
void Em0c_R1_mv08_0x227100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv08_0x227100");
#endif

    switch (ctx->pc) {
        case 0x227178u: goto label_227178;
        case 0x2271e0u: goto label_2271e0;
        case 0x227218u: goto label_227218;
        case 0x227248u: goto label_227248;
        case 0x2272d4u: goto label_2272d4;
        case 0x2272f0u: goto label_2272f0;
        case 0x227308u: goto label_227308;
        case 0x227318u: goto label_227318;
        case 0x227360u: goto label_227360;
        case 0x2273b4u: goto label_2273b4;
        case 0x2273ecu: goto label_2273ec;
        case 0x2273fcu: goto label_2273fc;
        case 0x227420u: goto label_227420;
        case 0x227518u: goto label_227518;
        case 0x2275e8u: goto label_2275e8;
        case 0x22766cu: goto label_22766c;
        case 0x227674u: goto label_227674;
        case 0x2276fcu: goto label_2276fc;
        case 0x22770cu: goto label_22770c;
        case 0x22771cu: goto label_22771c;
        case 0x227740u: goto label_227740;
        case 0x227788u: goto label_227788;
        case 0x2277c4u: goto label_2277c4;
        case 0x2277ccu: goto label_2277cc;
        default: break;
    }

    ctx->pc = 0x227100u;

    // 0x227100: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x227100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x227104: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x227104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x227108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22710c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x227110: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x227110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x227114: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227118: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x227118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22711c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22711cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x227120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227124: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x227124u;
    {
        const bool branch_taken_0x227124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x227124) {
            ctx->pc = 0x2272A8u;
            goto label_2272a8;
        }
    }
    ctx->pc = 0x22712Cu;
    // 0x22712c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22712Cu;
    {
        const bool branch_taken_0x22712c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22712c) {
            ctx->pc = 0x22713Cu;
            goto label_22713c;
        }
    }
    ctx->pc = 0x227134u;
    // 0x227134: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x227134u;
    {
        const bool branch_taken_0x227134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227134) {
            ctx->pc = 0x227840u;
            goto label_227840;
        }
    }
    ctx->pc = 0x22713Cu;
label_22713c:
    // 0x22713c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x22713cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227140: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x227140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x227144: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x227144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x227148: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x227148u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22714c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22714cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227150: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227154: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x227154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x227158: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22715c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x22715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227160: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x227160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x227164: 0x2406781a  addiu       $a2, $zero, 0x781A
    ctx->pc = 0x227164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30746));
    // 0x227168: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x227168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22716c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22716cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x227170: 0xc0965d0  jal         func_259740
    ctx->pc = 0x227170u;
    SET_GPR_U32(ctx, 31, 0x227178u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x227170u, 0x227178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227178u;
label_227178:
    // 0x227178: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227178u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22717c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22717cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227180: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227184: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227188: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x227188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x22718c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22718cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227190: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x227190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227194: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x227194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x227198: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x227198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x22719c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x22719cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2271a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2271a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2271a4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2271a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2271a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2271a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2271ac: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2271acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2271b0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2271b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2271b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2271b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2271b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2271b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2271bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2271bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2271c0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2271c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2271c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2271c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2271c8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2271c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2271cc: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x2271ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2271d0: 0x34830018  ori         $v1, $a0, 0x18
    ctx->pc = 0x2271d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
    // 0x2271d4: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x2271d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x2271d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2271D8u;
    SET_GPR_U32(ctx, 31, 0x2271E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2271D8u, 0x2271E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271E0u;
label_2271e0:
    // 0x2271e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2271e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2271e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2271e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2271e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2271e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2271ec: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2271ECu;
    {
        const bool branch_taken_0x2271ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2271ec) {
            ctx->pc = 0x227224u;
            goto label_227224;
        }
    }
    ctx->pc = 0x2271F4u;
    // 0x2271f4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2271f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2271f8: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x2271f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x2271fc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2271fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x227200: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x227200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227204: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x227204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x227208: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x227208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x22720c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22720cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227210: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x227210u;
    SET_GPR_U32(ctx, 31, 0x227218u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x227210u, 0x227218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227218u;
label_227218:
    // 0x227218: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227218u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22721c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22721Cu;
    {
        const bool branch_taken_0x22721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22721c) {
            ctx->pc = 0x22724Cu;
            goto label_22724c;
        }
    }
    ctx->pc = 0x227224u;
label_227224:
    // 0x227224: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x227224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227228: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x227228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22722c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x22722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x227230: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x227230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227234: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x227234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x227238: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x227238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x22723c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22723cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227240: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x227240u;
    SET_GPR_U32(ctx, 31, 0x227248u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x227240u, 0x227248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227248u;
label_227248:
    // 0x227248: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227248u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22724c:
    // 0x22724c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x22724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227250: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x227250u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x227254: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x227254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x227258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22725c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x22725cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227260: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227264: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x227264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x227268: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22726c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22726cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227270: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227274: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227278: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x227278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x22727c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22727cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x227280: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x227280u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x227284: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x227284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x227288: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22728c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22728cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x227290: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227294: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x227294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227298: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x227298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22729c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x22729cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2272a0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2272a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2272a4: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x2272a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_2272a8:
    // 0x2272a8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2272a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2272ac: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2272acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2272b0: 0x3c033dc9  lui         $v1, 0x3DC9
    ctx->pc = 0x2272b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15817 << 16));
    // 0x2272b4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2272b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2272b8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2272b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2272bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2272bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2272c0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2272c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2272c4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2272c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2272c8: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2272c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2272cc: 0xc05c848  jal         func_172120
    ctx->pc = 0x2272CCu;
    SET_GPR_U32(ctx, 31, 0x2272D4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2272CCu, 0x2272D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272D4u;
label_2272d4:
    // 0x2272d4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2272d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2272d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2272d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2272dc: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2272dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2272e0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2272e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2272e4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2272e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2272e8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2272E8u;
    SET_GPR_U32(ctx, 31, 0x2272F0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2272E8u, 0x2272F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272F0u;
label_2272f0:
    // 0x2272f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2272f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2272f4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2272f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2272f8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2272f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2272fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2272fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x227300: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x227300u;
    SET_GPR_U32(ctx, 31, 0x227308u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x227300u, 0x227308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227308u;
label_227308:
    // 0x227308: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227308u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22730c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x22730cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227310: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x227310u;
    SET_GPR_U32(ctx, 31, 0x227318u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x227310u, 0x227318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227318u;
label_227318:
    // 0x227318: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227318u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22731c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x22731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227320: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x227320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x227324: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x227324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x227328: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x227328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x22732c: 0x10600104  beqz        $v1, . + 4 + (0x104 << 2)
    ctx->pc = 0x22732Cu;
    {
        const bool branch_taken_0x22732c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22732c) {
            ctx->pc = 0x227740u;
            goto label_227740;
        }
    }
    ctx->pc = 0x227334u;
    // 0x227334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227338: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22733c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x22733cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x227340: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227344: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x227344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x227348: 0x84420094  lh          $v0, 0x94($v0)
    ctx->pc = 0x227348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x22734c: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x22734Cu;
    {
        const bool branch_taken_0x22734c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22734c) {
            ctx->pc = 0x227558u;
            goto label_227558;
        }
    }
    ctx->pc = 0x227354u;
    // 0x227354: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x227354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227358: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x227358u;
    SET_GPR_U32(ctx, 31, 0x227360u);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x227358u, 0x227360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227360u;
label_227360:
    // 0x227360: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x227360u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x227364: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x227364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x227368: 0x146000f5  bnez        $v1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x227368u;
    {
        const bool branch_taken_0x227368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x227368) {
            ctx->pc = 0x227740u;
            goto label_227740;
        }
    }
    ctx->pc = 0x227370u;
    // 0x227370: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x227370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x227374: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x227374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x227378: 0x146000f1  bnez        $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x227378u;
    {
        const bool branch_taken_0x227378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x227378) {
            ctx->pc = 0x227740u;
            goto label_227740;
        }
    }
    ctx->pc = 0x227380u;
    // 0x227380: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x227380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x227384: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x227384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x227388: 0x146000ed  bnez        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x227388u;
    {
        const bool branch_taken_0x227388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x227388) {
            ctx->pc = 0x227740u;
            goto label_227740;
        }
    }
    ctx->pc = 0x227390u;
    // 0x227390: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x227390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x227394: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x227394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227398: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22739c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2273a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2273a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2273a4: 0x8c24dcf0  lw          $a0, -0x2310($at)
    ctx->pc = 0x2273a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2273a8: 0x24450880  addiu       $a1, $v0, 0x880
    ctx->pc = 0x2273a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x2273ac: 0xc05cad8  jal         func_172B60
    ctx->pc = 0x2273ACu;
    SET_GPR_U32(ctx, 31, 0x2273B4u);
    ctx->pc = 0x172B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172B60u, 0x2273ACu, 0x2273B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273B4u;
label_2273b4:
    // 0x2273b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2273b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2273b8: 0x0  nop
    ctx->pc = 0x2273b8u;
    // NOP
    // 0x2273bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2273bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2273c0: 0x0  nop
    ctx->pc = 0x2273c0u;
    // NOP
    // 0x2273c4: 0x450000de  bc1f        . + 4 + (0xDE << 2)
    ctx->pc = 0x2273C4u;
    {
        const bool branch_taken_0x2273c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2273c4) {
            ctx->pc = 0x227740u;
            goto label_227740;
        }
    }
    ctx->pc = 0x2273CCu;
    // 0x2273cc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2273ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2273d0: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x2273d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x2273d4: 0x146000da  bnez        $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x2273D4u;
    {
        const bool branch_taken_0x2273d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2273d4) {
            ctx->pc = 0x227740u;
            goto label_227740;
        }
    }
    ctx->pc = 0x2273DCu;
    // 0x2273dc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2273dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2273e0: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2273e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2273e4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2273E4u;
    SET_GPR_U32(ctx, 31, 0x2273ECu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2273E4u, 0x2273ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273ECu;
label_2273ec:
    // 0x2273ec: 0x3c040280  lui         $a0, 0x280
    ctx->pc = 0x2273ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)640 << 16));
    // 0x2273f0: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x2273f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x2273f4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2273F4u;
    SET_GPR_U32(ctx, 31, 0x2273FCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2273F4u, 0x2273FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273FCu;
label_2273fc:
    // 0x2273fc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2273fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x227400: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x227400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x227404: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x227404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227408: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22740c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22740cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x227410: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x227410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x227414: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x227414u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227418: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x227418u;
    SET_GPR_U32(ctx, 31, 0x227420u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x227418u, 0x227420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227420u;
label_227420:
    // 0x227420: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227424: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x227424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x227428: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x227428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22742c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x22742cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227430: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x227430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x227434: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x227434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x227438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22743c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x22743cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227440: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x227440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x227444: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227448: 0xa022edae  sb          $v0, -0x1252($at)
    ctx->pc = 0x227448u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAEu, _value); } while (0);
    // 0x22744c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227450: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227454: 0xa022edaf  sb          $v0, -0x1251($at)
    ctx->pc = 0x227454u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAFu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAFu, _value); } while (0);
    // 0x227458: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22745c: 0xa420edb4  sh          $zero, -0x124C($at)
    ctx->pc = 0x22745cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB4u, _value); } while (0);
    // 0x227460: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227464: 0xa420edb2  sh          $zero, -0x124E($at)
    ctx->pc = 0x227464u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB2u, _value); } while (0);
    // 0x227468: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x227468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22746c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22746cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227470: 0xa422edb6  sh          $v0, -0x124A($at)
    ctx->pc = 0x227470u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB6u, _value); } while (0);
    // 0x227474: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227478: 0xa020edb0  sb          $zero, -0x1250($at)
    ctx->pc = 0x227478u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDB0u, _value); } while (0);
    // 0x22747c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x22747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227480: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227484: 0xac22edd0  sw          $v0, -0x1230($at)
    ctx->pc = 0x227484u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEDD0u, _value); } while (0);
    // 0x227488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22748c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x22748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227490: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x227490u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x227494: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x227494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x227498: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22749c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22749cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2274a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2274a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2274a4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2274a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2274a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2274a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2274ac: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2274acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2274b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2274b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2274b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2274b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2274b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2274b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2274bc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2274bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2274c0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2274c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2274c4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2274c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2274c8: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x2274c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x2274cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2274ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2274d0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2274d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2274d4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2274d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2274d8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2274d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2274dc: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x2274dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x2274e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2274e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2274e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2274e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2274e8: 0xa022ec68  sb          $v0, -0x1398($at)
    ctx->pc = 0x2274e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEC68u, _value); } while (0);
    // 0x2274ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2274ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2274f0: 0x8c221a50  lw          $v0, 0x1A50($at)
    ctx->pc = 0x2274f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x2274f4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2274f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2274f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2274f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2274fc: 0xac221a50  sw          $v0, 0x1A50($at)
    ctx->pc = 0x2274fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    // 0x227500: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x227500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x227504: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x227504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x227508: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x227508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22750c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x22750cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x227510: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x227510u;
    SET_GPR_U32(ctx, 31, 0x227518u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x227510u, 0x227518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227518u;
label_227518:
    // 0x227518: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22751c: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x22751cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x227520: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x227520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x227524: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x227524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x227528: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x227528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22752c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22752cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x227530: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x227530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x227534: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227538: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x227538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22753c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22753cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x227540: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x227540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x227544: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x227544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x227548: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x227548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22754c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22754cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x227550: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x227550u;
    {
        const bool branch_taken_0x227550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227550) {
            ctx->pc = 0x227740u;
            goto label_227740;
        }
    }
    ctx->pc = 0x227558u;
label_227558:
    // 0x227558: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22755c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x227560: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x227560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x227564: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x227564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x227568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22756c: 0x0  nop
    ctx->pc = 0x22756cu;
    // NOP
    // 0x227570: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x227570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x227574: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227578: 0x0  nop
    ctx->pc = 0x227578u;
    // NOP
    // 0x22757c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x22757cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x227580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227584: 0x0  nop
    ctx->pc = 0x227584u;
    // NOP
    // 0x227588: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x227588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22758c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22758cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x227590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227594: 0x0  nop
    ctx->pc = 0x227594u;
    // NOP
    // 0x227598: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x227598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x22759c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x22759cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2275a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2275a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2275a4: 0x0  nop
    ctx->pc = 0x2275a4u;
    // NOP
    // 0x2275a8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2275a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2275ac: 0xa7a00054  sh          $zero, 0x54($sp)
    ctx->pc = 0x2275acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x2275b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2275b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2275b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2275b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2275b8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2275b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2275bc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2275bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2275c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2275C0u;
    {
        const bool branch_taken_0x2275c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2275c0) {
            ctx->pc = 0x2275D0u;
            goto label_2275d0;
        }
    }
    ctx->pc = 0x2275C8u;
    // 0x2275c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2275c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2275cc: 0xa7a20054  sh          $v0, 0x54($sp)
    ctx->pc = 0x2275ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 2));
label_2275d0:
    // 0x2275d0: 0xa3a00056  sb          $zero, 0x56($sp)
    ctx->pc = 0x2275d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2275d4: 0xa3a00057  sb          $zero, 0x57($sp)
    ctx->pc = 0x2275d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x2275d8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2275d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2275dc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2275dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2275e0: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x2275E0u;
    SET_GPR_U32(ctx, 31, 0x2275E8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x2275E0u, 0x2275E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275E8u;
label_2275e8:
    // 0x2275e8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2275E8u;
    {
        const bool branch_taken_0x2275e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2275e8) {
            ctx->pc = 0x227740u;
            goto label_227740;
        }
    }
    ctx->pc = 0x2275F0u;
    // 0x2275f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2275f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2275f4: 0x0  nop
    ctx->pc = 0x2275f4u;
    // NOP
    // 0x2275f8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2275f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2275fc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2275fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x227600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227604: 0x0  nop
    ctx->pc = 0x227604u;
    // NOP
    // 0x227608: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x227608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x22760c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22760cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227610: 0x0  nop
    ctx->pc = 0x227610u;
    // NOP
    // 0x227614: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x227614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x227618: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x227618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22761c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22761cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227620: 0x0  nop
    ctx->pc = 0x227620u;
    // NOP
    // 0x227624: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x227624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x227628: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22762c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x22762cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x227630: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x227630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x227634: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x227634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x227638: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x227638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22763c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22763cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x227640: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x227640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x227644: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x227644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x227648: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x227648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22764c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x22764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227650: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x227650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x227654: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x227654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x227658: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x227658u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22765c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22765cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x227660: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x227660u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227664: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x227664u;
    SET_GPR_U32(ctx, 31, 0x22766Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x227664u, 0x22766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22766Cu;
label_22766c:
    // 0x22766c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22766Cu;
    SET_GPR_U32(ctx, 31, 0x227674u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22766Cu, 0x227674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227674u;
label_227674:
    // 0x227674: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227674u;
    {
        const bool branch_taken_0x227674 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x227674) {
            ctx->pc = 0x227690u;
            goto label_227690;
        }
    }
    ctx->pc = 0x22767Cu;
    // 0x22767c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22767cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227680: 0x0  nop
    ctx->pc = 0x227680u;
    // NOP
    // 0x227684: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x227684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x227688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x227688u;
    {
        const bool branch_taken_0x227688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227688) {
            ctx->pc = 0x2276ACu;
            goto label_2276ac;
        }
    }
    ctx->pc = 0x227690u;
label_227690:
    // 0x227690: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x227690u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x227694: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x227694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x227698: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x227698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22769c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22769cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2276a0: 0x0  nop
    ctx->pc = 0x2276a0u;
    // NOP
    // 0x2276a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2276a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2276a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2276a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2276ac:
    // 0x2276ac: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2276acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2276b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2276b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2276b4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2276b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2276b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2276b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2276bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2276bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2276c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2276c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2276c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2276c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2276c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2276c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2276cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2276ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2276d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2276d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2276d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2276d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2276d8: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x2276d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2276dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2276dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2276e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2276e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2276e4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2276e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2276e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2276e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2276ec: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x2276ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x2276f0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2276f0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2276f4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2276F4u;
    SET_GPR_U32(ctx, 31, 0x2276FCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2276F4u, 0x2276FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2276FCu;
label_2276fc:
    // 0x2276fc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2276fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x227700: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x227700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x227704: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x227704u;
    SET_GPR_U32(ctx, 31, 0x22770Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x227704u, 0x22770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22770Cu;
label_22770c:
    // 0x22770c: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22770cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x227710: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x227710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x227714: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x227714u;
    SET_GPR_U32(ctx, 31, 0x22771Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x227714u, 0x22771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22771Cu;
label_22771c:
    // 0x22771c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x22771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227720: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x227720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x227724: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x227724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x227728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x227728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22772c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22772cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x227730: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x227730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x227734: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x227734u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227738: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x227738u;
    SET_GPR_U32(ctx, 31, 0x227740u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x227738u, 0x227740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227740u;
label_227740:
    // 0x227740: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227744: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x227744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x227748: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x227748u;
    {
        const bool branch_taken_0x227748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x227748) {
            ctx->pc = 0x227840u;
            goto label_227840;
        }
    }
    ctx->pc = 0x227750u;
    // 0x227750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227754: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227758: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x227758u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22775c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22775cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x227760: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227764: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x227764u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x227768: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22776c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22776cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x227770: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227774: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x227774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x227778: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22777c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22777cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x227780: 0xc067694  jal         func_19DA50
    ctx->pc = 0x227780u;
    SET_GPR_U32(ctx, 31, 0x227788u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x227780u, 0x227788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227788u;
label_227788:
    // 0x227788: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x227788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22778c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x227790: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x227790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x227794: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x227794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x227798: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x227798u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22779c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x22779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2277a0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2277a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2277a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2277a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2277a8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2277a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2277ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2277acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2277b0: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x2277b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x2277b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2277b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2277b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2277b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2277bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2277BCu;
    SET_GPR_U32(ctx, 31, 0x2277C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2277BCu, 0x2277C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277C4u;
label_2277c4:
    // 0x2277c4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2277C4u;
    SET_GPR_U32(ctx, 31, 0x2277CCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2277C4u, 0x2277CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277CCu;
label_2277cc:
    // 0x2277cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2277ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2277d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2277d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2277d4: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x2277d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2277d8: 0x2483000a  addiu       $v1, $a0, 0xA
    ctx->pc = 0x2277d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x2277dc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2277dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2277e0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2277e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2277e4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2277e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2277e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2277e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2277ec: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x2277ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x2277f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2277f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2277f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2277f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2277f8: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2277f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2277fc: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x2277fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x227800: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x227800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x227804: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x227804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    // 0x227808: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22780c: 0x8c271a58  lw          $a3, 0x1A58($at)
    ctx->pc = 0x22780cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x227810: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x227810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x227814: 0x34687fff  ori         $t0, $v1, 0x7FFF
    ctx->pc = 0x227814u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x227818: 0xe81824  and         $v1, $a3, $t0
    ctx->pc = 0x227818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x22781c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22781cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x227820: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x227820u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x227824: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227828: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x227828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22782c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22782cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x227830: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x227830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x227834: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x227834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x227838: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x227838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22783c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22783cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_227840:
    // 0x227840: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227844: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227848: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x227848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22784c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22784cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227850: 0x0  nop
    ctx->pc = 0x227850u;
    // NOP
    // 0x227854: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x227854u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227858: 0x0  nop
    ctx->pc = 0x227858u;
    // NOP
    // 0x22785c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x22785Cu;
    {
        const bool branch_taken_0x22785c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22785c) {
            ctx->pc = 0x227940u;
            goto label_227940;
        }
    }
    ctx->pc = 0x227864u;
    // 0x227864: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227868: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22786c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227870: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227874: 0x0  nop
    ctx->pc = 0x227874u;
    // NOP
    // 0x227878: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x227878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22787c: 0x0  nop
    ctx->pc = 0x22787cu;
    // NOP
    // 0x227880: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x227880u;
    {
        const bool branch_taken_0x227880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227880) {
            ctx->pc = 0x2278E8u;
            goto label_2278e8;
        }
    }
    ctx->pc = 0x227888u;
    // 0x227888: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x227888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22788c: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x22788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x227890: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x227890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227894: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x227894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x227898: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x227898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22789c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22789cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2278a0: 0x0  nop
    ctx->pc = 0x2278a0u;
    // NOP
    // 0x2278a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2278a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2278a8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2278a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2278ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2278acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2278b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2278b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2278b4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2278b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2278b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2278b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2278bc: 0x0  nop
    ctx->pc = 0x2278bcu;
    // NOP
    // 0x2278c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2278c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2278c4: 0x0  nop
    ctx->pc = 0x2278c4u;
    // NOP
    // 0x2278c8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2278C8u;
    {
        const bool branch_taken_0x2278c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2278c8) {
            ctx->pc = 0x227940u;
            goto label_227940;
        }
    }
    ctx->pc = 0x2278D0u;
    // 0x2278d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2278d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2278d4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2278d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2278d8: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x2278d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2278dc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2278dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2278e0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2278E0u;
    {
        const bool branch_taken_0x2278e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2278e0) {
            ctx->pc = 0x227940u;
            goto label_227940;
        }
    }
    ctx->pc = 0x2278E8u;
label_2278e8:
    // 0x2278e8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2278e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2278ec: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2278ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2278f0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2278f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2278f4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x2278f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x2278f8: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x2278f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2278fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2278fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227900: 0x0  nop
    ctx->pc = 0x227900u;
    // NOP
    // 0x227904: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x227904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x227908: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x227908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22790c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x22790cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227910: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x227910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x227914: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x227914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22791c: 0x0  nop
    ctx->pc = 0x22791cu;
    // NOP
    // 0x227920: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x227920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227924: 0x0  nop
    ctx->pc = 0x227924u;
    // NOP
    // 0x227928: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x227928u;
    {
        const bool branch_taken_0x227928 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227928) {
            ctx->pc = 0x227940u;
            goto label_227940;
        }
    }
    ctx->pc = 0x227930u;
    // 0x227930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227934: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227938: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x227938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22793c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22793cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_227940:
    // 0x227940: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x227940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227944: 0x84a3127e  lh          $v1, 0x127E($a1)
    ctx->pc = 0x227944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x227948: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x227948u;
    {
        const bool branch_taken_0x227948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x227948) {
            ctx->pc = 0x2279E0u;
            goto label_2279e0;
        }
    }
    ctx->pc = 0x227950u;
    // 0x227950: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227954: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227958: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x227958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22795c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x22795cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x227960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227964: 0x0  nop
    ctx->pc = 0x227964u;
    // NOP
    // 0x227968: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x227968u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22796c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x22796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227970: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x227970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227974: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x227974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227978: 0x0  nop
    ctx->pc = 0x227978u;
    // NOP
    // 0x22797c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22797Cu;
    {
        const bool branch_taken_0x22797c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22797c) {
            ctx->pc = 0x2279A0u;
            goto label_2279a0;
        }
    }
    ctx->pc = 0x227984u;
    // 0x227984: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227988: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22798c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227990: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227994: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x227994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227998: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x227998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22799c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22799cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_2279a0:
    // 0x2279a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2279a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2279a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2279a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2279a8: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x2279a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2279ac: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2279acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2279b0: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x2279b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2279b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2279b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2279b8: 0x0  nop
    ctx->pc = 0x2279b8u;
    // NOP
    // 0x2279bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2279BCu;
    {
        const bool branch_taken_0x2279bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2279bc) {
            ctx->pc = 0x2279E0u;
            goto label_2279e0;
        }
    }
    ctx->pc = 0x2279C4u;
    // 0x2279c4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2279c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2279c8: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2279c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2279cc: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x2279ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2279d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2279d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2279d4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2279d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2279d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2279d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2279dc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2279dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_2279e0:
    // 0x2279e0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2279e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2279e4: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x2279e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2279e8: 0xc4a10098  lwc1        $f1, 0x98($a1)
    ctx->pc = 0x2279e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2279ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2279ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2279f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2279f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2279f4: 0x0  nop
    ctx->pc = 0x2279f4u;
    // NOP
    // 0x2279f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2279f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2279fc: 0xe4a00098  swc1        $f0, 0x98($a1)
    ctx->pc = 0x2279fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 152), bits); }
    // 0x227a00: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227a04: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x227a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227a08: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x227a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227a0c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x227a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x227a10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227a14: 0x0  nop
    ctx->pc = 0x227a14u;
    // NOP
    // 0x227a18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x227a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227a1c: 0x0  nop
    ctx->pc = 0x227a1cu;
    // NOP
    // 0x227a20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x227A20u;
    {
        const bool branch_taken_0x227a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x227a20) {
            ctx->pc = 0x227A3Cu;
            goto label_227a3c;
        }
    }
    ctx->pc = 0x227A28u;
    // 0x227a28: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227a2c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x227a2cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227a30: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x227a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227a34: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x227a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x227a38: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x227a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
label_227a3c:
    // 0x227a3c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227a40: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x227a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227a44: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x227a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227a48: 0x3c0541a0  lui         $a1, 0x41A0
    ctx->pc = 0x227a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16800 << 16));
    // 0x227a4c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x227a4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227a50: 0x0  nop
    ctx->pc = 0x227a50u;
    // NOP
    // 0x227a54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x227a54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227a58: 0x0  nop
    ctx->pc = 0x227a58u;
    // NOP
    // 0x227a5c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x227A5Cu;
    {
        const bool branch_taken_0x227a5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227a5c) {
            ctx->pc = 0x227A78u;
            goto label_227a78;
        }
    }
    ctx->pc = 0x227A64u;
    // 0x227a64: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x227a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x227a68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227a68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227a6c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x227a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227a70: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x227a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x227a74: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x227a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_227a78:
    // 0x227a78: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x227a78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227a7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x227a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227a84: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x227a84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x227a88: 0x3e00008  jr          $ra
    ctx->pc = 0x227A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227A90u;
}
