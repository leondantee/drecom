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

// Function: entry_002485cc
// Address: 0x2485cc - 0x248788
void entry_002485cc_0x2485cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002485cc_0x2485cc");
#endif

    switch (ctx->pc) {
        case 0x248608u: goto label_248608;
        case 0x248744u: goto label_248744;
        case 0x24874cu: goto label_24874c;
        case 0x248780u: goto label_248780;
        default: break;
    }

    ctx->pc = 0x2485ccu;

    // 0x2485cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2485ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2485d0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2485d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2485d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2485d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2485d8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2485d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2485dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2485dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2485e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2485e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2485e4: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2485e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2485e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2485e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2485ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2485ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2485f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2485f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2485f4: 0x2406040d  addiu       $a2, $zero, 0x40D
    ctx->pc = 0x2485f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    // 0x2485f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2485f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2485fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2485fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x248600: 0xc0965d0  jal         func_259740
    ctx->pc = 0x248600u;
    SET_GPR_U32(ctx, 31, 0x248608u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x248600u, 0x248608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248608u;
label_248608:
    // 0x248608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24860c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x24860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248610: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x248610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x248614: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x248614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x248618: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x248618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x24861c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24861cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248620: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248624: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x248624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x248628: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x248628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x24862c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x24862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x248630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x248630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248634: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248638: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x248638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24863c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x24863cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x248640: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x248640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x248644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x248644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248648: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24864c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x248650: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x248650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x248654: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248658: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x248658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x24865c: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x24865cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x248660: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x248660u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x248664: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x248664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x248668: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x248668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24866c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x24866cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x248670: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248674: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x248674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x248678: 0x245001b0  addiu       $s0, $v0, 0x1B0
    ctx->pc = 0x248678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x24867c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x24867cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x248680: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x248680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x248684: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x248684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x248688: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x248688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x24868c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x24868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248690: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x248690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x248694: 0x245003f0  addiu       $s0, $v0, 0x3F0
    ctx->pc = 0x248694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x248698: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x248698u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x24869c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x24869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2486a0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2486a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2486a4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2486a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x2486a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2486a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2486ac: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2486acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2486b0: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x2486b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x2486b4: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x2486b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2486b8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2486b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2486bc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2486bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2486c0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2486c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x2486c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2486c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2486c8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2486c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2486cc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2486ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2486d0: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x2486d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x2486d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2486d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2486d8: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x2486d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x2486dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2486dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2486e0: 0x8c62121c  lw          $v0, 0x121C($v1)
    ctx->pc = 0x2486e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4636)));
    // 0x2486e4: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x2486e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x2486e8: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x2486e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x2486ec: 0xac62121c  sw          $v0, 0x121C($v1)
    ctx->pc = 0x2486ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 2));
    // 0x2486f0: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2486f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2486f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2486f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2486f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2486f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2486fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2486fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248700: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x248700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x248704: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x248704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x248708: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x248708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x24870c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24870cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x248710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x248710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248714: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248718: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x248718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24871c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x24871cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x248720: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x248720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x248724: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x248724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x248728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x248728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24872c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x24872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248730: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x248730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x248734: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x248734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x248738: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x248738u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24873c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x24873Cu;
    SET_GPR_U32(ctx, 31, 0x248744u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24873Cu, 0x248744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248744u;
label_248744:
    // 0x248744: 0xc067694  jal         func_19DA50
    ctx->pc = 0x248744u;
    SET_GPR_U32(ctx, 31, 0x24874Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x248744u, 0x24874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24874Cu;
label_24874c:
    // 0x24874c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24874cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x248750: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x248750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x248754: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x248754u;
    {
        const bool branch_taken_0x248754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248754) {
            ctx->pc = 0x248788u;
            return;
        }
    }
    ctx->pc = 0x24875Cu;
    // 0x24875c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x24875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248760: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x248760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x248764: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x248764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x248768: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x248768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24876c: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x24876cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x248770: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x248770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x248774: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x248774u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x248778: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x248778u;
    SET_GPR_U32(ctx, 31, 0x248780u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x248778u, 0x248780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248780u;
label_248780:
    // 0x248780: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x248780u;
    {
        const bool branch_taken_0x248780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248780) {
            ctx->pc = 0x2487ACu;
            return;
        }
    }
    ctx->pc = 0x248788u;
}
