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

// Function: Em0c_R1_mv03
// Address: 0x226830 - 0x226c38
void Em0c_R1_mv03_0x226830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv03_0x226830");
#endif

    switch (ctx->pc) {
        case 0x2268a0u: goto label_2268a0;
        case 0x22692cu: goto label_22692c;
        case 0x226974u: goto label_226974;
        case 0x226990u: goto label_226990;
        case 0x2269a8u: goto label_2269a8;
        case 0x2269b4u: goto label_2269b4;
        case 0x2269e4u: goto label_2269e4;
        case 0x226a24u: goto label_226a24;
        case 0x226a40u: goto label_226a40;
        case 0x226a58u: goto label_226a58;
        case 0x226a64u: goto label_226a64;
        case 0x226bd0u: goto label_226bd0;
        case 0x226bf4u: goto label_226bf4;
        case 0x226c28u: goto label_226c28;
        default: break;
    }

    ctx->pc = 0x226830u;

    // 0x226830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226834: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x226834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x226838: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x226838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x22683c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226840: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x226840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x226844: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x226844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x226848: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x226848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22684c: 0x1083006a  beq         $a0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x22684Cu;
    {
        const bool branch_taken_0x22684c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22684c) {
            ctx->pc = 0x2269F8u;
            goto label_2269f8;
        }
    }
    ctx->pc = 0x226854u;
    // 0x226854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226858: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x226858u;
    {
        const bool branch_taken_0x226858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x226858) {
            ctx->pc = 0x226948u;
            goto label_226948;
        }
    }
    ctx->pc = 0x226860u;
    // 0x226860: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226860u;
    {
        const bool branch_taken_0x226860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x226860) {
            ctx->pc = 0x226870u;
            goto label_226870;
        }
    }
    ctx->pc = 0x226868u;
    // 0x226868: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x226868u;
    {
        const bool branch_taken_0x226868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226868) {
            ctx->pc = 0x226A64u;
            goto label_226a64;
        }
    }
    ctx->pc = 0x226870u;
label_226870:
    // 0x226870: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226874: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x226874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x226878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x226878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22687c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x22687cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x226880: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226884: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226888: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x226888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22688c: 0x3406f002  ori         $a2, $zero, 0xF002
    ctx->pc = 0x22688cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61442);
    // 0x226890: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x226890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226894: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x226894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x226898: 0xc0965d0  jal         func_259740
    ctx->pc = 0x226898u;
    SET_GPR_U32(ctx, 31, 0x2268A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x226898u, 0x2268A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268A0u;
label_2268a0:
    // 0x2268a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2268a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2268a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2268a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2268a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2268a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2268ac: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2268acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2268b0: 0x3c02c1c8  lui         $v0, 0xC1C8
    ctx->pc = 0x2268b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49608 << 16));
    // 0x2268b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2268b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2268b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2268b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2268bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2268bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2268c0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2268c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2268c4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2268c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2268c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2268c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2268cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2268ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2268d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2268d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2268d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2268d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2268d8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2268d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2268dc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2268dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2268e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2268e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2268e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2268e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2268e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2268e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2268ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2268ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2268f0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2268f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2268f4: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2268f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2268f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2268f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2268fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2268fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226900: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226904: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226908: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x226908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x22690c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22690cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x226910: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x226910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x226914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22691c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22691cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226920: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x226920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x226924: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226924u;
    SET_GPR_U32(ctx, 31, 0x22692Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226924u, 0x22692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22692Cu;
label_22692c:
    // 0x22692c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226930: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x226930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x226934: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x226934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x226938: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x226938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22693c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22693cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226940: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226944: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x226944u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_226948:
    // 0x226948: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22694c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x22694cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226950: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226954: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x226954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226958: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x226958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22695c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226960: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x226960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x226964: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x226964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x226968: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x226968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22696c: 0xc05c848  jal         func_172120
    ctx->pc = 0x22696Cu;
    SET_GPR_U32(ctx, 31, 0x226974u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22696Cu, 0x226974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226974u;
label_226974:
    // 0x226974: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x226974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x226978: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22697c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226980: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x226980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226984: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x226984u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226988: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x226988u;
    SET_GPR_U32(ctx, 31, 0x226990u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x226988u, 0x226990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226990u;
label_226990:
    // 0x226990: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226994: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x226994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x226998: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22699c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22699cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2269a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2269A0u;
    SET_GPR_U32(ctx, 31, 0x2269A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2269A0u, 0x2269A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269A8u;
label_2269a8:
    // 0x2269a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2269a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2269ac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2269ACu;
    SET_GPR_U32(ctx, 31, 0x2269B4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2269ACu, 0x2269B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269B4u;
label_2269b4:
    // 0x2269b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2269b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2269b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2269b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2269bc: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2269BCu;
    {
        const bool branch_taken_0x2269bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2269bc) {
            ctx->pc = 0x226A64u;
            goto label_226a64;
        }
    }
    ctx->pc = 0x2269C4u;
    // 0x2269c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2269c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2269c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2269c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2269cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2269ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2269d0: 0x24067802  addiu       $a2, $zero, 0x7802
    ctx->pc = 0x2269d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30722));
    // 0x2269d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2269d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2269d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2269d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2269dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2269DCu;
    SET_GPR_U32(ctx, 31, 0x2269E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2269DCu, 0x2269E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269E4u;
label_2269e4:
    // 0x2269e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2269e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2269e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2269e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2269ec: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2269ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2269f0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2269F0u;
    {
        const bool branch_taken_0x2269f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2269f0) {
            ctx->pc = 0x226A64u;
            goto label_226a64;
        }
    }
    ctx->pc = 0x2269F8u;
label_2269f8:
    // 0x2269f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2269f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2269fc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2269fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a04: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x226a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226a08: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x226a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x226a0c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x226a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226a10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x226a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x226a14: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x226a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x226a18: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x226a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x226a1c: 0xc05c848  jal         func_172120
    ctx->pc = 0x226A1Cu;
    SET_GPR_U32(ctx, 31, 0x226A24u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x226A1Cu, 0x226A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A24u;
label_226a24:
    // 0x226a24: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x226a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x226a28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a2c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x226a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226a30: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x226a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226a34: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x226a34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226a38: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x226A38u;
    SET_GPR_U32(ctx, 31, 0x226A40u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x226A38u, 0x226A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A40u;
label_226a40:
    // 0x226a40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x226a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x226a48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a4c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x226a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x226a50: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x226A50u;
    SET_GPR_U32(ctx, 31, 0x226A58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x226A50u, 0x226A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A58u;
label_226a58:
    // 0x226a58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a5c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x226A5Cu;
    SET_GPR_U32(ctx, 31, 0x226A64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x226A5Cu, 0x226A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A64u;
label_226a64:
    // 0x226a64: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x226a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x226a68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226a68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226a6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226a74: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x226a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x226a78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a7c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x226a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226a80: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x226a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x226a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226a88: 0x0  nop
    ctx->pc = 0x226a88u;
    // NOP
    // 0x226a8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226a8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226a90: 0x0  nop
    ctx->pc = 0x226a90u;
    // NOP
    // 0x226a94: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x226A94u;
    {
        const bool branch_taken_0x226a94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226a94) {
            ctx->pc = 0x226AB0u;
            goto label_226ab0;
        }
    }
    ctx->pc = 0x226A9Cu;
    // 0x226a9c: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x226a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x226aa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226aa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226aa4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226aa8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226aac: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x226aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_226ab0:
    // 0x226ab0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226ab4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226ab8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226abc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226ac0: 0x0  nop
    ctx->pc = 0x226ac0u;
    // NOP
    // 0x226ac4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x226ac4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226ac8: 0x0  nop
    ctx->pc = 0x226ac8u;
    // NOP
    // 0x226acc: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x226ACCu;
    {
        const bool branch_taken_0x226acc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226acc) {
            ctx->pc = 0x226BB0u;
            goto label_226bb0;
        }
    }
    ctx->pc = 0x226AD4u;
    // 0x226ad4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226ad8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226adc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226ae0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226ae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226ae4: 0x0  nop
    ctx->pc = 0x226ae4u;
    // NOP
    // 0x226ae8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226ae8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226aec: 0x0  nop
    ctx->pc = 0x226aecu;
    // NOP
    // 0x226af0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x226AF0u;
    {
        const bool branch_taken_0x226af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226af0) {
            ctx->pc = 0x226B58u;
            goto label_226b58;
        }
    }
    ctx->pc = 0x226AF8u;
    // 0x226af8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226afc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x226afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226b00: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x226b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226b04: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x226b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x226b08: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x226b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x226b0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226b10: 0x0  nop
    ctx->pc = 0x226b10u;
    // NOP
    // 0x226b14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226b14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226b18: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x226b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x226b1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226b20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226b24: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226b28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226b2c: 0x0  nop
    ctx->pc = 0x226b2cu;
    // NOP
    // 0x226b30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x226b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226b34: 0x0  nop
    ctx->pc = 0x226b34u;
    // NOP
    // 0x226b38: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x226B38u;
    {
        const bool branch_taken_0x226b38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x226b38) {
            ctx->pc = 0x226BB0u;
            goto label_226bb0;
        }
    }
    ctx->pc = 0x226B40u;
    // 0x226b40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226b44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226b48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226b4c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x226b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x226b50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x226B50u;
    {
        const bool branch_taken_0x226b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b50) {
            ctx->pc = 0x226BB0u;
            goto label_226bb0;
        }
    }
    ctx->pc = 0x226B58u;
label_226b58:
    // 0x226b58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226b5c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x226b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226b60: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x226b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226b64: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x226b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x226b68: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x226b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x226b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226b70: 0x0  nop
    ctx->pc = 0x226b70u;
    // NOP
    // 0x226b74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x226b74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226b78: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x226b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x226b7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226b80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226b84: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226b88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226b8c: 0x0  nop
    ctx->pc = 0x226b8cu;
    // NOP
    // 0x226b90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226b90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226b94: 0x0  nop
    ctx->pc = 0x226b94u;
    // NOP
    // 0x226b98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x226B98u;
    {
        const bool branch_taken_0x226b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226b98) {
            ctx->pc = 0x226BB0u;
            goto label_226bb0;
        }
    }
    ctx->pc = 0x226BA0u;
    // 0x226ba0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226ba4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226ba8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226bac: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x226bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_226bb0:
    // 0x226bb0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x226bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226bb4: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x226bb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x226bb8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x226bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x226bbc: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x226bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x226bc0: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x226BC0u;
    {
        const bool branch_taken_0x226bc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x226bc0) {
            ctx->pc = 0x226C28u;
            goto label_226c28;
        }
    }
    ctx->pc = 0x226BC8u;
    // 0x226bc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226BC8u;
    SET_GPR_U32(ctx, 31, 0x226BD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226BC8u, 0x226BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BD0u;
label_226bd0:
    // 0x226bd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x226bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226bd4: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x226bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x226bd8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x226bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x226bdc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x226bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x226be0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x226be0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226be4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226be8: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x226be8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x226bec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226BECu;
    SET_GPR_U32(ctx, 31, 0x226BF4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226BECu, 0x226BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BF4u;
label_226bf4:
    // 0x226bf4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x226bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226bf8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x226bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x226bfc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x226BFCu;
    {
        const bool branch_taken_0x226bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226bfc) {
            ctx->pc = 0x226C28u;
            goto label_226c28;
        }
    }
    ctx->pc = 0x226C04u;
    // 0x226c04: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x226c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x226c08: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x226c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x226c0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x226c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x226c10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226c14: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x226c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x226c18: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x226c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x226c1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x226c1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x226c20: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x226C20u;
    SET_GPR_U32(ctx, 31, 0x226C28u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x226C20u, 0x226C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C28u;
label_226c28:
    // 0x226c28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x226c28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226c2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x226c2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x226c30: 0x3e00008  jr          $ra
    ctx->pc = 0x226C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226C38u;
}
