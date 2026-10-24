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

// Function: Em0e_R1_mv05
// Address: 0x2457d0 - 0x245bb4
void Em0e_R1_mv05_0x2457d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_mv05_0x2457d0");
#endif

    switch (ctx->pc) {
        case 0x245844u: goto label_245844;
        case 0x2458bcu: goto label_2458bc;
        case 0x2458d8u: goto label_2458d8;
        case 0x2458f0u: goto label_2458f0;
        case 0x2458fcu: goto label_2458fc;
        case 0x245a3cu: goto label_245a3c;
        case 0x245a78u: goto label_245a78;
        case 0x245a80u: goto label_245a80;
        default: break;
    }

    ctx->pc = 0x2457d0u;

    // 0x2457d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2457d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2457d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2457d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2457d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2457d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2457dc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2457dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2457e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2457e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2457e4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2457e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2457e8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2457e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2457ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2457ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2457f0: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2457F0u;
    {
        const bool branch_taken_0x2457f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2457f0) {
            ctx->pc = 0x245890u;
            goto label_245890;
        }
    }
    ctx->pc = 0x2457F8u;
    // 0x2457f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2457F8u;
    {
        const bool branch_taken_0x2457f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2457f8) {
            ctx->pc = 0x245808u;
            goto label_245808;
        }
    }
    ctx->pc = 0x245800u;
    // 0x245800: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x245800u;
    {
        const bool branch_taken_0x245800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245800) {
            ctx->pc = 0x245AA0u;
            goto label_245aa0;
        }
    }
    ctx->pc = 0x245808u;
label_245808:
    // 0x245808: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24580c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x24580cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x245810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245814: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x245814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x245818: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24581c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x24581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245820: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x245820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x245824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245828: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x245828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24582c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x24582cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x245830: 0x2406781e  addiu       $a2, $zero, 0x781E
    ctx->pc = 0x245830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30750));
    // 0x245834: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245838: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24583c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x24583Cu;
    SET_GPR_U32(ctx, 31, 0x245844u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x24583Cu, 0x245844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245844u;
label_245844:
    // 0x245844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245848: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24584c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245850: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x245850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x245854: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x245854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x245858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x245858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24585c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x24585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245860: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245864: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x245864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x245868: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x245868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x24586c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24586cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245870: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245874: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245878: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x245878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x24587c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x24587cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x245880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x245880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245884: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245888: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24588c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x24588cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_245890:
    // 0x245890: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x245890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245894: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245898: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x245898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x24589c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24589cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2458a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2458a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2458a4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2458a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2458a8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2458a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2458ac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2458acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2458b0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2458b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2458b4: 0xc05c848  jal         func_172120
    ctx->pc = 0x2458B4u;
    SET_GPR_U32(ctx, 31, 0x2458BCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2458B4u, 0x2458BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458BCu;
label_2458bc:
    // 0x2458bc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2458bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2458c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2458c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2458c4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2458c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2458c8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2458c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2458cc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2458ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2458d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2458D0u;
    SET_GPR_U32(ctx, 31, 0x2458D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2458D0u, 0x2458D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458D8u;
label_2458d8:
    // 0x2458d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2458d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2458dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2458dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2458e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2458e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2458e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2458e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2458e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2458E8u;
    SET_GPR_U32(ctx, 31, 0x2458F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2458E8u, 0x2458F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458F0u;
label_2458f0:
    // 0x2458f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2458f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2458f4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2458F4u;
    SET_GPR_U32(ctx, 31, 0x2458FCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2458F4u, 0x2458FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458FCu;
label_2458fc:
    // 0x2458fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2458fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245900: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x245900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x245904: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x245904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x245908: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x245908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x24590c: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x24590Cu;
    {
        const bool branch_taken_0x24590c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24590c) {
            ctx->pc = 0x2459F4u;
            goto label_2459f4;
        }
    }
    ctx->pc = 0x245914u;
    // 0x245914: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245918: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x245918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x24591c: 0x24703520  addiu       $s0, $v1, 0x3520
    ctx->pc = 0x24591cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
    // 0x245920: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x245920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x245924: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x245924u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x245928: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x245928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x24592c: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x24592cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x245930: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x245930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x245934: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x245934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x245938: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x245938u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x24593c: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x24593cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x245940: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245944: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x245944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x245948: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x245948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x24594c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x24594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245950: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x245950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x245954: 0x24703b60  addiu       $s0, $v1, 0x3B60
    ctx->pc = 0x245954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x245958: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x245958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24595c: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x24595cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x245960: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x245960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x245964: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x245964u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x245968: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x245968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x24596c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x245970: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x245970u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x245974: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x245974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x245978: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24597c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x245980: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x245980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x245984: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245988: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x245988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x24598c: 0x24703e80  addiu       $s0, $v1, 0x3E80
    ctx->pc = 0x24598cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16000));
    // 0x245990: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x245990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x245994: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x245994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x245998: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x245998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x24599c: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x24599cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x2459a0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2459a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2459a4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2459a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2459a8: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x2459a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x2459ac: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2459acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2459b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2459b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2459b4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2459b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2459b8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2459b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2459bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2459bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2459c0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2459c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2459c4: 0x24704010  addiu       $s0, $v1, 0x4010
    ctx->pc = 0x2459c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16400));
    // 0x2459c8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2459c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2459cc: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x2459ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2459d0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2459d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2459d4: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x2459d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x2459d8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2459d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2459dc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2459dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2459e0: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x2459e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x2459e4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2459e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2459e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2459e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2459ec: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2459ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2459f0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2459f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_2459f4:
    // 0x2459f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2459f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2459f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2459f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2459fc: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2459FCu;
    {
        const bool branch_taken_0x2459fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2459fc) {
            ctx->pc = 0x245AA0u;
            goto label_245aa0;
        }
    }
    ctx->pc = 0x245A04u;
    // 0x245a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245a08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a0c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x245a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x245a10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x245a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245a14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a18: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x245a18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x245a1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a20: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x245a20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x245a24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a28: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x245a28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x245a2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x245a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x245a34: 0xc067694  jal         func_19DA50
    ctx->pc = 0x245A34u;
    SET_GPR_U32(ctx, 31, 0x245A3Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245A34u, 0x245A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A3Cu;
label_245a3c:
    // 0x245a3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x245a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245a40: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x245a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x245a44: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x245a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x245a48: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x245a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x245a4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x245a4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x245a50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a54: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x245a54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x245a58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x245a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a60: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x245a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x245a64: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x245a64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x245a68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245a6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x245a70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x245A70u;
    SET_GPR_U32(ctx, 31, 0x245A78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x245A70u, 0x245A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A78u;
label_245a78:
    // 0x245a78: 0xc067694  jal         func_19DA50
    ctx->pc = 0x245A78u;
    SET_GPR_U32(ctx, 31, 0x245A80u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245A78u, 0x245A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A80u;
label_245a80:
    // 0x245a80: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x245a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245a84: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x245a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x245a88: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x245a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x245a8c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x245a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x245a90: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245a90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x245a94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245a9c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x245a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_245aa0:
    // 0x245aa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245aa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245aa8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245aac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245ab0: 0x0  nop
    ctx->pc = 0x245ab0u;
    // NOP
    // 0x245ab4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x245ab4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245ab8: 0x0  nop
    ctx->pc = 0x245ab8u;
    // NOP
    // 0x245abc: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x245ABCu;
    {
        const bool branch_taken_0x245abc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245abc) {
            ctx->pc = 0x245BA0u;
            goto label_245ba0;
        }
    }
    ctx->pc = 0x245AC4u;
    // 0x245ac4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245ac8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245acc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245ad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245ad4: 0x0  nop
    ctx->pc = 0x245ad4u;
    // NOP
    // 0x245ad8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x245ad8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245adc: 0x0  nop
    ctx->pc = 0x245adcu;
    // NOP
    // 0x245ae0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x245AE0u;
    {
        const bool branch_taken_0x245ae0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245ae0) {
            ctx->pc = 0x245B48u;
            goto label_245b48;
        }
    }
    ctx->pc = 0x245AE8u;
    // 0x245ae8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245aec: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x245aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245af0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x245af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245af4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x245af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x245af8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x245af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x245afc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b00: 0x0  nop
    ctx->pc = 0x245b00u;
    // NOP
    // 0x245b04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x245b04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x245b08: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x245b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x245b0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245b10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245b14: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245b18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245b18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b1c: 0x0  nop
    ctx->pc = 0x245b1cu;
    // NOP
    // 0x245b20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x245b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245b24: 0x0  nop
    ctx->pc = 0x245b24u;
    // NOP
    // 0x245b28: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x245B28u;
    {
        const bool branch_taken_0x245b28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245b28) {
            ctx->pc = 0x245BA0u;
            goto label_245ba0;
        }
    }
    ctx->pc = 0x245B30u;
    // 0x245b30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245b38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245b3c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x245b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x245b40: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x245B40u;
    {
        const bool branch_taken_0x245b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245b40) {
            ctx->pc = 0x245BA0u;
            goto label_245ba0;
        }
    }
    ctx->pc = 0x245B48u;
label_245b48:
    // 0x245b48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245b4c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x245b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245b50: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x245b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245b54: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x245b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x245b58: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x245b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x245b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b60: 0x0  nop
    ctx->pc = 0x245b60u;
    // NOP
    // 0x245b64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x245b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x245b68: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x245b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x245b6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245b70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245b74: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245b78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b7c: 0x0  nop
    ctx->pc = 0x245b7cu;
    // NOP
    // 0x245b80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x245b80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245b84: 0x0  nop
    ctx->pc = 0x245b84u;
    // NOP
    // 0x245b88: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x245B88u;
    {
        const bool branch_taken_0x245b88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245b88) {
            ctx->pc = 0x245BA0u;
            goto label_245ba0;
        }
    }
    ctx->pc = 0x245B90u;
    // 0x245b90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245b98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245b9c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x245b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_245ba0:
    // 0x245ba0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x245ba0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245ba8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x245ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x245bac: 0x3e00008  jr          $ra
    ctx->pc = 0x245BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245BB4u;
}
