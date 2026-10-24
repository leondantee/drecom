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

// Function: Em0e_R1_dm00
// Address: 0x248590 - 0x248928
void Em0e_R1_dm00_0x248590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_dm00_0x248590");
#endif

    switch (ctx->pc) {
        case 0x248608u: goto label_248608;
        case 0x248744u: goto label_248744;
        case 0x24874cu: goto label_24874c;
        case 0x248780u: goto label_248780;
        case 0x2487acu: goto label_2487ac;
        case 0x2487d8u: goto label_2487d8;
        case 0x2487f4u: goto label_2487f4;
        case 0x24880cu: goto label_24880c;
        case 0x248818u: goto label_248818;
        case 0x248860u: goto label_248860;
        case 0x248884u: goto label_248884;
        case 0x2488acu: goto label_2488ac;
        case 0x2488f4u: goto label_2488f4;
        default: break;
    }

    ctx->pc = 0x248590u;

    // 0x248590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x248590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x248594: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x248594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x248598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x248598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24859c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24859cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2485a0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2485a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2485a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2485a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2485a8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2485a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2485ac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2485acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2485b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2485b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2485b4: 0x1083007d  beq         $a0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x2485B4u;
    {
        const bool branch_taken_0x2485b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2485b4) {
            ctx->pc = 0x2487ACu;
            goto label_2487ac;
        }
    }
    ctx->pc = 0x2485BCu;
    // 0x2485bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2485BCu;
    {
        const bool branch_taken_0x2485bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2485bc) {
            ctx->pc = 0x2485CCu;
            goto label_2485cc;
        }
    }
    ctx->pc = 0x2485C4u;
    // 0x2485c4: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x2485C4u;
    {
        const bool branch_taken_0x2485c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2485c4) {
            ctx->pc = 0x248910u;
            goto label_248910;
        }
    }
    ctx->pc = 0x2485CCu;
label_2485cc:
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
            goto label_248788;
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
            goto label_2487ac;
        }
    }
    ctx->pc = 0x248788u;
label_248788:
    // 0x248788: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x248788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x24878c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x24878cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x248790: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x248790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x248794: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248798: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x248798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x24879c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x24879cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2487a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2487a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2487a4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2487A4u;
    SET_GPR_U32(ctx, 31, 0x2487ACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2487A4u, 0x2487ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487ACu;
label_2487ac:
    // 0x2487ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2487acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2487b0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2487b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2487b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2487b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2487b8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2487b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2487bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2487bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2487c0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2487c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2487c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2487c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2487c8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2487c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2487cc: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x2487ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2487d0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2487D0u;
    SET_GPR_U32(ctx, 31, 0x2487D8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2487D0u, 0x2487D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487D8u;
label_2487d8:
    // 0x2487d8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2487d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2487dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2487dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2487e0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2487e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2487e4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2487e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2487e8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2487e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2487ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2487ECu;
    SET_GPR_U32(ctx, 31, 0x2487F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2487ECu, 0x2487F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487F4u;
label_2487f4:
    // 0x2487f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2487f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2487f8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2487f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2487fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2487fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248800: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x248800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x248804: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x248804u;
    SET_GPR_U32(ctx, 31, 0x24880Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x248804u, 0x24880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24880Cu;
label_24880c:
    // 0x24880c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x24880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248810: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x248810u;
    SET_GPR_U32(ctx, 31, 0x248818u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x248810u, 0x248818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248818u;
label_248818:
    // 0x248818: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x248818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24881c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x24881cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x248820: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x248820u;
    {
        const bool branch_taken_0x248820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248820) {
            ctx->pc = 0x248910u;
            goto label_248910;
        }
    }
    ctx->pc = 0x248828u;
    // 0x248828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24882c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x24882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248830: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x248830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x248834: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x248834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248838: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24883c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x24883cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x248840: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248844: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x248844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x248848: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24884c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x24884cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x248850: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248854: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x248854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x248858: 0xc067694  jal         func_19DA50
    ctx->pc = 0x248858u;
    SET_GPR_U32(ctx, 31, 0x248860u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x248858u, 0x248860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248860u;
label_248860:
    // 0x248860: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x248860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x248864: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x248864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x248868: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x248868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x24886c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x24886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x248870: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x248870u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x248874: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248878: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x248878u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x24887c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24887Cu;
    SET_GPR_U32(ctx, 31, 0x248884u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24887Cu, 0x248884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248884u;
label_248884:
    // 0x248884: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x248884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x248888: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x248888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x24888c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x24888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x248890: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x248890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x248894: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x248894u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x248898: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24889c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2488a0: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x2488a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x2488a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2488A4u;
    SET_GPR_U32(ctx, 31, 0x2488ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2488A4u, 0x2488ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488ACu;
label_2488ac:
    // 0x2488ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2488acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2488b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2488b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2488b4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2488B4u;
    {
        const bool branch_taken_0x2488b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2488b4) {
            ctx->pc = 0x248910u;
            goto label_248910;
        }
    }
    ctx->pc = 0x2488BCu;
    // 0x2488bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2488bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2488c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2488c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2488c4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2488c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2488c8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2488c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2488cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2488ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2488d0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2488d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2488d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2488d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2488d8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2488d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2488dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2488dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2488e0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2488e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2488e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2488e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2488e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2488e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2488ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2488ECu;
    SET_GPR_U32(ctx, 31, 0x2488F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2488ECu, 0x2488F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488F4u;
label_2488f4:
    // 0x2488f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2488f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2488f8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x2488f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x2488fc: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x2488fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x248900: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x248900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x248904: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x248904u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x248908: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x248908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24890c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x24890cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_248910:
    // 0x248910: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x248910u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x248914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x248918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24891c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x24891cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x248920: 0x3e00008  jr          $ra
    ctx->pc = 0x248920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248928u;
}
