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

// Function: Em05_R1_walk
// Address: 0x206120 - 0x2063f0
void Em05_R1_walk_0x206120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_walk_0x206120");
#endif

    switch (ctx->pc) {
        case 0x20617cu: goto label_20617c;
        case 0x2061e8u: goto label_2061e8;
        case 0x2061fcu: goto label_2061fc;
        case 0x20625cu: goto label_20625c;
        case 0x20626cu: goto label_20626c;
        case 0x20629cu: goto label_20629c;
        case 0x2062acu: goto label_2062ac;
        case 0x2063a0u: goto label_2063a0;
        case 0x2063b0u: goto label_2063b0;
        case 0x2063bcu: goto label_2063bc;
        case 0x2063ccu: goto label_2063cc;
        case 0x2063d8u: goto label_2063d8;
        default: break;
    }

    ctx->pc = 0x206120u;

    // 0x206120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x206120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x206124: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x206124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x206128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20612c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20612cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x206130: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x206130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x206134: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x206134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206138: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x206138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20613c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20613cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x206140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206144: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x206144u;
    {
        const bool branch_taken_0x206144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x206144) {
            ctx->pc = 0x206194u;
            goto label_206194;
        }
    }
    ctx->pc = 0x20614Cu;
    // 0x20614c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20614Cu;
    {
        const bool branch_taken_0x20614c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20614c) {
            ctx->pc = 0x20615Cu;
            goto label_20615c;
        }
    }
    ctx->pc = 0x206154u;
    // 0x206154: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x206154u;
    {
        const bool branch_taken_0x206154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206154) {
            ctx->pc = 0x2063D8u;
            goto label_2063d8;
        }
    }
    ctx->pc = 0x20615Cu;
label_20615c:
    // 0x20615c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206160: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206164: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x206164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x206168: 0x24065a0c  addiu       $a2, $zero, 0x5A0C
    ctx->pc = 0x206168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23052));
    // 0x20616c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20616cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206170: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x206170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x206174: 0xc0965d0  jal         func_259740
    ctx->pc = 0x206174u;
    SET_GPR_U32(ctx, 31, 0x20617Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x206174u, 0x20617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20617Cu;
label_20617c:
    // 0x20617c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206180: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x206180u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x206184: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x206184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206188: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x206188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20618c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x206190: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x206190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_206194:
    // 0x206194: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x206194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206198: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x206198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20619c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20619cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2061a0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2061a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2061a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2061a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2061a8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2061a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2061ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2061acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2061b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2061b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2061b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2061B4u;
    {
        const bool branch_taken_0x2061b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2061b4) {
            ctx->pc = 0x206204u;
            goto label_206204;
        }
    }
    ctx->pc = 0x2061BCu;
    // 0x2061bc: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x2061bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x2061c0: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x2061c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x2061c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2061c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2061c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2061c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2061cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2061ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2061d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2061d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2061d4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2061d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2061d8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2061d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2061dc: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2061dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2061e0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2061E0u;
    SET_GPR_U32(ctx, 31, 0x2061E8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2061E0u, 0x2061E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061E8u;
label_2061e8:
    // 0x2061e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2061e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2061ec: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2061ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2061f0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2061f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2061f4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2061F4u;
    SET_GPR_U32(ctx, 31, 0x2061FCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2061F4u, 0x2061FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061FCu;
label_2061fc:
    // 0x2061fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2061fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206200: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x206200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_206204:
    // 0x206204: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x206204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206208: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x206208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20620c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20620cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206210: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x206210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x206214: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x206214u;
    {
        const bool branch_taken_0x206214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206214) {
            ctx->pc = 0x2062ACu;
            goto label_2062ac;
        }
    }
    ctx->pc = 0x20621Cu;
    // 0x20621c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206220: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x206220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x206224: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x206224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206228: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x206228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x20622c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20622Cu;
    {
        const bool branch_taken_0x20622c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20622c) {
            ctx->pc = 0x206274u;
            goto label_206274;
        }
    }
    ctx->pc = 0x206234u;
    // 0x206234: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x206234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x206238: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x206238u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20623c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x206240: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x206240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x206244: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206244u;
    {
        const bool branch_taken_0x206244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206244) {
            ctx->pc = 0x20625Cu;
            goto label_20625c;
        }
    }
    ctx->pc = 0x20624Cu;
    // 0x20624c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206250: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x206250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x206254: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x206254u;
    SET_GPR_U32(ctx, 31, 0x20625Cu);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x206254u, 0x20625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20625Cu;
label_20625c:
    // 0x20625c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20625cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206260: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x206260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x206264: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x206264u;
    SET_GPR_U32(ctx, 31, 0x20626Cu);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x206264u, 0x20626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20626Cu;
label_20626c:
    // 0x20626c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20626Cu;
    {
        const bool branch_taken_0x20626c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20626c) {
            ctx->pc = 0x2062ACu;
            goto label_2062ac;
        }
    }
    ctx->pc = 0x206274u;
label_206274:
    // 0x206274: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x206274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x206278: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x206278u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20627c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20627cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x206280: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x206280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x206284: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206284u;
    {
        const bool branch_taken_0x206284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206284) {
            ctx->pc = 0x20629Cu;
            goto label_20629c;
        }
    }
    ctx->pc = 0x20628Cu;
    // 0x20628c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20628cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206290: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x206290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x206294: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x206294u;
    SET_GPR_U32(ctx, 31, 0x20629Cu);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x206294u, 0x20629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20629Cu;
label_20629c:
    // 0x20629c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20629cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2062a0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2062a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2062a4: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x2062A4u;
    SET_GPR_U32(ctx, 31, 0x2062ACu);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x2062A4u, 0x2062ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062ACu;
label_2062ac:
    // 0x2062ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2062acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2062b0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2062b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2062b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2062b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2062b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2062b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2062bc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2062BCu;
    {
        const bool branch_taken_0x2062bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062bc) {
            ctx->pc = 0x2063A0u;
            goto label_2063a0;
        }
    }
    ctx->pc = 0x2062C4u;
    // 0x2062c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2062c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2062c8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2062c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2062cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2062ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2062d0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2062d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2062d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2062D4u;
    {
        const bool branch_taken_0x2062d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062d4) {
            ctx->pc = 0x2062E8u;
            goto label_2062e8;
        }
    }
    ctx->pc = 0x2062DCu;
    // 0x2062dc: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x2062dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2062e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2062E0u;
    {
        const bool branch_taken_0x2062e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062e0) {
            ctx->pc = 0x2062ECu;
            goto label_2062ec;
        }
    }
    ctx->pc = 0x2062E8u;
label_2062e8:
    // 0x2062e8: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x2062e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2062ec:
    // 0x2062ec: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x2062ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2062f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2062f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2062f4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x2062f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2062f8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2062f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2062fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2062fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206300: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206304: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x206304u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x206308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20630c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20630cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206310: 0xe42092f0  swc1        $f0, -0x6D10($at)
    ctx->pc = 0x206310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F0u, _value); } while (0); }
    // 0x206314: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x206314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206318: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x206318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x20631c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20631cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x206320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206324: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x206324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206328: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x206328u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x20632c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x206330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206334: 0x0  nop
    ctx->pc = 0x206334u;
    // NOP
    // 0x206338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20633c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20633cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206340: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x206340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x206344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206348: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20634c: 0xe42092f8  swc1        $f0, -0x6D08($at)
    ctx->pc = 0x20634cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F8u, _value); } while (0); }
    // 0x206350: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x206350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x206354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206358: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20635c: 0xe42092fc  swc1        $f0, -0x6D04($at)
    ctx->pc = 0x20635cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192FCu, _value); } while (0); }
    // 0x206360: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x206360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x206364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206368: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20636c: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x20636cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x206370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206374: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206378: 0xa4229304  sh          $v0, -0x6CFC($at)
    ctx->pc = 0x206378u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x20637c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20637cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206380: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x206380u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x206384: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206388: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x206388u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x20638c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20638cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206390: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x206394: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x206394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x206398: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x206398u;
    SET_GPR_U32(ctx, 31, 0x2063A0u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x206398u, 0x2063A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063A0u;
label_2063a0:
    // 0x2063a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2063a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2063a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2063a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2063a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2063A8u;
    SET_GPR_U32(ctx, 31, 0x2063B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2063A8u, 0x2063B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063B0u;
label_2063b0:
    // 0x2063b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2063b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2063b4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2063B4u;
    SET_GPR_U32(ctx, 31, 0x2063BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2063B4u, 0x2063BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063BCu;
label_2063bc:
    // 0x2063bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2063bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2063c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2063c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2063c4: 0xc080f60  jal         func_203D80
    ctx->pc = 0x2063C4u;
    SET_GPR_U32(ctx, 31, 0x2063CCu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x2063C4u, 0x2063CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063CCu;
label_2063cc:
    // 0x2063cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2063ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2063d0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2063D0u;
    SET_GPR_U32(ctx, 31, 0x2063D8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2063D0u, 0x2063D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063D8u;
label_2063d8:
    // 0x2063d8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2063d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2063dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2063dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2063e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2063e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2063e4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2063e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2063e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2063E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2063E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2063F0u;
}
