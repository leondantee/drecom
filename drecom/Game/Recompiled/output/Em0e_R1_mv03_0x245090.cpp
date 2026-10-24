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

// Function: Em0e_R1_mv03
// Address: 0x245090 - 0x2453e0
void Em0e_R1_mv03_0x245090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_mv03_0x245090");
#endif

    switch (ctx->pc) {
        case 0x245100u: goto label_245100;
        case 0x2451b0u: goto label_2451b0;
        case 0x2451ccu: goto label_2451cc;
        case 0x2451e4u: goto label_2451e4;
        case 0x2451f0u: goto label_2451f0;
        case 0x245220u: goto label_245220;
        case 0x245260u: goto label_245260;
        case 0x24527cu: goto label_24527c;
        default: break;
    }

    ctx->pc = 0x245090u;

    // 0x245090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x245094: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x245094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x245098: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x245098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x24509c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24509cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2450a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2450a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2450a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2450a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2450a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2450a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2450ac: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x2450ACu;
    {
        const bool branch_taken_0x2450ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2450ac) {
            ctx->pc = 0x245234u;
            goto label_245234;
        }
    }
    ctx->pc = 0x2450B4u;
    // 0x2450b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2450b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2450b8: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2450B8u;
    {
        const bool branch_taken_0x2450b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2450b8) {
            ctx->pc = 0x245184u;
            goto label_245184;
        }
    }
    ctx->pc = 0x2450C0u;
    // 0x2450c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2450C0u;
    {
        const bool branch_taken_0x2450c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2450c0) {
            ctx->pc = 0x2450D0u;
            goto label_2450d0;
        }
    }
    ctx->pc = 0x2450C8u;
    // 0x2450c8: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2450C8u;
    {
        const bool branch_taken_0x2450c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2450c8) {
            ctx->pc = 0x245284u;
            goto label_245284;
        }
    }
    ctx->pc = 0x2450D0u;
label_2450d0:
    // 0x2450d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2450d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2450d4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2450d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2450d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2450d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2450dc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2450dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2450e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2450e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2450e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2450e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2450e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2450e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2450ec: 0x3406f002  ori         $a2, $zero, 0xF002
    ctx->pc = 0x2450ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61442);
    // 0x2450f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2450f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2450f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2450f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2450f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2450F8u;
    SET_GPR_U32(ctx, 31, 0x245100u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2450F8u, 0x245100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245100u;
label_245100:
    // 0x245100: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245104: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245108: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24510c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x24510cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x245110: 0x3c02c1c8  lui         $v0, 0xC1C8
    ctx->pc = 0x245110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49608 << 16));
    // 0x245114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x245114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245118: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24511c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245120: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x245120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x245124: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x245124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x245128: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x245128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24512c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24512cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245130: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245134: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245138: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x245138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x24513c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x24513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x245140: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x245140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x245144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x245144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245148: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24514c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245150: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x245150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x245154: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x245154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x245158: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x245158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24515c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24515cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245160: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245164: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245168: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x245168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x24516c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x24516cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x245170: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x245170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x245174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x245174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245178: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24517c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245180: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x245180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
label_245184:
    // 0x245184: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x245184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245188: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x245188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24518c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245190: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x245190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245194: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x245194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x245198: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x245198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24519c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24519cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2451a0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2451a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2451a4: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x2451a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2451a8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2451A8u;
    SET_GPR_U32(ctx, 31, 0x2451B0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2451A8u, 0x2451B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451B0u;
label_2451b0:
    // 0x2451b0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2451b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2451b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2451b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2451b8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2451b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2451bc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2451bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2451c0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2451c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2451c4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2451C4u;
    SET_GPR_U32(ctx, 31, 0x2451CCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2451C4u, 0x2451CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451CCu;
label_2451cc:
    // 0x2451cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2451ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2451d0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2451d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2451d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2451d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2451d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2451d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2451dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2451DCu;
    SET_GPR_U32(ctx, 31, 0x2451E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2451DCu, 0x2451E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451E4u;
label_2451e4:
    // 0x2451e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2451e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2451e8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2451E8u;
    SET_GPR_U32(ctx, 31, 0x2451F0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2451E8u, 0x2451F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451F0u;
label_2451f0:
    // 0x2451f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2451f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2451f4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2451f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2451f8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2451F8u;
    {
        const bool branch_taken_0x2451f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2451f8) {
            ctx->pc = 0x245284u;
            goto label_245284;
        }
    }
    ctx->pc = 0x245200u;
    // 0x245200: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245204: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x245204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245208: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x245208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x24520c: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x24520cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x245210: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245214: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x245218: 0xc0965d0  jal         func_259740
    ctx->pc = 0x245218u;
    SET_GPR_U32(ctx, 31, 0x245220u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x245218u, 0x245220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245220u;
label_245220:
    // 0x245220: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x245220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245224: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245228: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x245228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x24522c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x24522Cu;
    {
        const bool branch_taken_0x24522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24522c) {
            ctx->pc = 0x245284u;
            goto label_245284;
        }
    }
    ctx->pc = 0x245234u;
label_245234:
    // 0x245234: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x245234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245238: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x245238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24523c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245240: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x245240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245244: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x245244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x245248: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x245248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24524c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x245250: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x245250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x245254: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x245254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x245258: 0xc05c848  jal         func_172120
    ctx->pc = 0x245258u;
    SET_GPR_U32(ctx, 31, 0x245260u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x245258u, 0x245260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245260u;
label_245260:
    // 0x245260: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x245260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x245264: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245268: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x245268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24526c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x24526cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245270: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x245270u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x245274: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x245274u;
    SET_GPR_U32(ctx, 31, 0x24527Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x245274u, 0x24527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24527Cu;
label_24527c:
    // 0x24527c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24527cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245280: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x245280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_245284:
    // 0x245284: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x245284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x245288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24528c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245290: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245294: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x245294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x245298: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24529c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x24529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2452a0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2452a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2452a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2452a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2452a8: 0x0  nop
    ctx->pc = 0x2452a8u;
    // NOP
    // 0x2452ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2452acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2452b0: 0x0  nop
    ctx->pc = 0x2452b0u;
    // NOP
    // 0x2452b4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2452B4u;
    {
        const bool branch_taken_0x2452b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2452b4) {
            ctx->pc = 0x2452D0u;
            goto label_2452d0;
        }
    }
    ctx->pc = 0x2452BCu;
    // 0x2452bc: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x2452bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x2452c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2452c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2452c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2452c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2452c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2452c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2452cc: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2452ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_2452d0:
    // 0x2452d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2452d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2452d4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2452d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2452d8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2452d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2452dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2452dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2452e0: 0x0  nop
    ctx->pc = 0x2452e0u;
    // NOP
    // 0x2452e4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2452e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2452e8: 0x0  nop
    ctx->pc = 0x2452e8u;
    // NOP
    // 0x2452ec: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x2452ECu;
    {
        const bool branch_taken_0x2452ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2452ec) {
            ctx->pc = 0x2453D0u;
            goto label_2453d0;
        }
    }
    ctx->pc = 0x2452F4u;
    // 0x2452f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2452f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2452f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2452f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2452fc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2452fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245304: 0x0  nop
    ctx->pc = 0x245304u;
    // NOP
    // 0x245308: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x245308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24530c: 0x0  nop
    ctx->pc = 0x24530cu;
    // NOP
    // 0x245310: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x245310u;
    {
        const bool branch_taken_0x245310 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245310) {
            ctx->pc = 0x245378u;
            goto label_245378;
        }
    }
    ctx->pc = 0x245318u;
    // 0x245318: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24531c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x24531cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245320: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x245320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245324: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x245324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x245328: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x245328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x24532c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24532cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245330: 0x0  nop
    ctx->pc = 0x245330u;
    // NOP
    // 0x245334: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x245334u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x245338: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x245338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x24533c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245340: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245344: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24534c: 0x0  nop
    ctx->pc = 0x24534cu;
    // NOP
    // 0x245350: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x245350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245354: 0x0  nop
    ctx->pc = 0x245354u;
    // NOP
    // 0x245358: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x245358u;
    {
        const bool branch_taken_0x245358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245358) {
            ctx->pc = 0x2453D0u;
            goto label_2453d0;
        }
    }
    ctx->pc = 0x245360u;
    // 0x245360: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245364: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245368: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24536c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x24536cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x245370: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x245370u;
    {
        const bool branch_taken_0x245370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245370) {
            ctx->pc = 0x2453D0u;
            goto label_2453d0;
        }
    }
    ctx->pc = 0x245378u;
label_245378:
    // 0x245378: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24537c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x24537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245380: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x245380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245384: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x245384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x245388: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x245388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x24538c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24538cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245390: 0x0  nop
    ctx->pc = 0x245390u;
    // NOP
    // 0x245394: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x245394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x245398: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x245398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x24539c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24539cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2453a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2453a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2453a4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2453a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2453a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2453a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2453ac: 0x0  nop
    ctx->pc = 0x2453acu;
    // NOP
    // 0x2453b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2453b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2453b4: 0x0  nop
    ctx->pc = 0x2453b4u;
    // NOP
    // 0x2453b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2453B8u;
    {
        const bool branch_taken_0x2453b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2453b8) {
            ctx->pc = 0x2453D0u;
            goto label_2453d0;
        }
    }
    ctx->pc = 0x2453C0u;
    // 0x2453c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2453c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2453c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2453c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2453c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2453c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2453cc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2453ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2453d0:
    // 0x2453d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2453d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2453d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2453d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2453d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2453D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2453D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2453E0u;
}
