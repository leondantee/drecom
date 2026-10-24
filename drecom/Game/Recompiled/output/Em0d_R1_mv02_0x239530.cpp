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

// Function: Em0d_R1_mv02
// Address: 0x239530 - 0x239c48
void Em0d_R1_mv02_0x239530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv02_0x239530");
#endif

    switch (ctx->pc) {
        case 0x239644u: goto label_239644;
        case 0x239694u: goto label_239694;
        case 0x239714u: goto label_239714;
        case 0x239730u: goto label_239730;
        case 0x239748u: goto label_239748;
        case 0x239754u: goto label_239754;
        case 0x2397acu: goto label_2397ac;
        case 0x2397d4u: goto label_2397d4;
        case 0x2397e8u: goto label_2397e8;
        case 0x2398d8u: goto label_2398d8;
        case 0x2398f4u: goto label_2398f4;
        case 0x23990cu: goto label_23990c;
        case 0x239918u: goto label_239918;
        case 0x239970u: goto label_239970;
        case 0x2399a0u: goto label_2399a0;
        case 0x239a4cu: goto label_239a4c;
        case 0x239a60u: goto label_239a60;
        case 0x239b10u: goto label_239b10;
        case 0x239b2cu: goto label_239b2c;
        case 0x239b44u: goto label_239b44;
        case 0x239b50u: goto label_239b50;
        default: break;
    }

    ctx->pc = 0x239530u;

    // 0x239530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239534: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x239534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x239538: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x239538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x23953c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23953cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239540: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x239540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x239544: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x239544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x239548: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x239548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23954c: 0x10830150  beq         $a0, $v1, . + 4 + (0x150 << 2)
    ctx->pc = 0x23954Cu;
    {
        const bool branch_taken_0x23954c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23954c) {
            ctx->pc = 0x239A90u;
            goto label_239a90;
        }
    }
    ctx->pc = 0x239554u;
    // 0x239554: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x239554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x239558: 0x1083010a  beq         $a0, $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x239558u;
    {
        const bool branch_taken_0x239558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x239558) {
            ctx->pc = 0x239984u;
            goto label_239984;
        }
    }
    ctx->pc = 0x239560u;
    // 0x239560: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x239560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239564: 0x108500bc  beq         $a0, $a1, . + 4 + (0xBC << 2)
    ctx->pc = 0x239564u;
    {
        const bool branch_taken_0x239564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x239564) {
            ctx->pc = 0x239858u;
            goto label_239858;
        }
    }
    ctx->pc = 0x23956Cu;
    // 0x23956c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23956cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239570: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x239570u;
    {
        const bool branch_taken_0x239570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x239570) {
            ctx->pc = 0x239694u;
            goto label_239694;
        }
    }
    ctx->pc = 0x239578u;
    // 0x239578: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239578u;
    {
        const bool branch_taken_0x239578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239578) {
            ctx->pc = 0x239588u;
            goto label_239588;
        }
    }
    ctx->pc = 0x239580u;
    // 0x239580: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x239580u;
    {
        const bool branch_taken_0x239580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239580) {
            ctx->pc = 0x239B50u;
            goto label_239b50;
        }
    }
    ctx->pc = 0x239588u;
label_239588:
    // 0x239588: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x239588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23958c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239590: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x239590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x239594: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239598: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x239598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x23959c: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x23959cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x2395a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2395a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2395a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2395a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2395a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2395a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2395ac: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2395acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2395b0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2395b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2395b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2395b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2395b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2395b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2395bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2395bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2395c0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2395c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2395c4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2395c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2395c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2395c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2395cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2395ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2395d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2395d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2395d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2395d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2395d8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2395d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2395dc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2395dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2395e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2395e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2395e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2395e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2395e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2395e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2395ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2395ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2395f0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2395f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2395f4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2395f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2395f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2395f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2395fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2395fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239600: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239604: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239608: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x239608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23960c: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x23960cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x239610: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239618: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23961c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239620: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x239620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x239624: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239628: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23962c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23962cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239630: 0x3406f008  ori         $a2, $zero, 0xF008
    ctx->pc = 0x239630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61448);
    // 0x239634: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239638: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23963c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23963Cu;
    SET_GPR_U32(ctx, 31, 0x239644u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23963Cu, 0x239644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239644u;
label_239644:
    // 0x239644: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239648: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x239648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x23964c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23964Cu;
    {
        const bool branch_taken_0x23964c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23964c) {
            ctx->pc = 0x239694u;
            goto label_239694;
        }
    }
    ctx->pc = 0x239654u;
    // 0x239654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239658: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23965c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x23965cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x239660: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x239660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x239664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239668: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23966c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239670: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x239670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x239674: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239678: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23967c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23967cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239680: 0x3406f00a  ori         $a2, $zero, 0xF00A
    ctx->pc = 0x239680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61450);
    // 0x239684: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239688: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23968c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23968Cu;
    SET_GPR_U32(ctx, 31, 0x239694u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23968Cu, 0x239694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239694u;
label_239694:
    // 0x239694: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x239694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x239698: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23969c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23969cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2396a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2396a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2396a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2396a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2396a8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2396a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2396ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2396acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2396b0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2396b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2396b4: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2396b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2396b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2396b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2396bc: 0x0  nop
    ctx->pc = 0x2396bcu;
    // NOP
    // 0x2396c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2396c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2396c4: 0x0  nop
    ctx->pc = 0x2396c4u;
    // NOP
    // 0x2396c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2396C8u;
    {
        const bool branch_taken_0x2396c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2396c8) {
            ctx->pc = 0x2396E8u;
            goto label_2396e8;
        }
    }
    ctx->pc = 0x2396D0u;
    // 0x2396d0: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2396d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2396d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2396d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2396d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2396d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2396dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2396dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2396e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2396e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2396e4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2396e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_2396e8:
    // 0x2396e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2396e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2396ec: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2396ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2396f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2396f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2396f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2396f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2396f8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2396f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2396fc: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2396fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239700: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x239700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x239704: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x239704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x239708: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x239708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23970c: 0xc05c848  jal         func_172120
    ctx->pc = 0x23970Cu;
    SET_GPR_U32(ctx, 31, 0x239714u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23970Cu, 0x239714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239714u;
label_239714:
    // 0x239714: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x239714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x239718: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23971c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23971cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239720: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x239720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239724: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x239724u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x239728: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x239728u;
    SET_GPR_U32(ctx, 31, 0x239730u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x239728u, 0x239730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239730u;
label_239730:
    // 0x239730: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239734: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x239734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x239738: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23973c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23973cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x239740: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x239740u;
    SET_GPR_U32(ctx, 31, 0x239748u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x239740u, 0x239748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239748u;
label_239748:
    // 0x239748: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23974c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23974Cu;
    SET_GPR_U32(ctx, 31, 0x239754u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23974Cu, 0x239754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239754u;
label_239754:
    // 0x239754: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239758: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x239758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23975c: 0x106000fc  beqz        $v1, . + 4 + (0xFC << 2)
    ctx->pc = 0x23975Cu;
    {
        const bool branch_taken_0x23975c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23975c) {
            ctx->pc = 0x239B50u;
            goto label_239b50;
        }
    }
    ctx->pc = 0x239764u;
    // 0x239764: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239768: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x239768u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x23976c: 0x146000f8  bnez        $v1, . + 4 + (0xF8 << 2)
    ctx->pc = 0x23976Cu;
    {
        const bool branch_taken_0x23976c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23976c) {
            ctx->pc = 0x239B50u;
            goto label_239b50;
        }
    }
    ctx->pc = 0x239774u;
    // 0x239774: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239778: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x239778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x23977c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x239780: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x239780u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x239784: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x239784u;
    {
        const bool branch_taken_0x239784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239784) {
            ctx->pc = 0x2397B4u;
            goto label_2397b4;
        }
    }
    ctx->pc = 0x23978Cu;
    // 0x23978c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239790: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239794: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239798: 0x3406f009  ori         $a2, $zero, 0xF009
    ctx->pc = 0x239798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61449);
    // 0x23979c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23979cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2397a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2397a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2397a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2397A4u;
    SET_GPR_U32(ctx, 31, 0x2397ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2397A4u, 0x2397ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397ACu;
label_2397ac:
    // 0x2397ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2397ACu;
    {
        const bool branch_taken_0x2397ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2397ac) {
            ctx->pc = 0x2397D4u;
            goto label_2397d4;
        }
    }
    ctx->pc = 0x2397B4u;
label_2397b4:
    // 0x2397b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2397b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2397b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2397b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2397bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2397bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2397c0: 0x3406f00b  ori         $a2, $zero, 0xF00B
    ctx->pc = 0x2397c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61451);
    // 0x2397c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2397c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2397c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2397c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2397cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2397CCu;
    SET_GPR_U32(ctx, 31, 0x2397D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2397CCu, 0x2397D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397D4u;
label_2397d4:
    // 0x2397d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2397d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2397d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2397d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2397dc: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x2397dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x2397e0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2397E0u;
    SET_GPR_U32(ctx, 31, 0x2397E8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2397E0u, 0x2397E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397E8u;
label_2397e8:
    // 0x2397e8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2397e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2397ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2397ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2397f0: 0x0  nop
    ctx->pc = 0x2397f0u;
    // NOP
    // 0x2397f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2397f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2397f8: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2397f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2397fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2397fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239800: 0x0  nop
    ctx->pc = 0x239800u;
    // NOP
    // 0x239804: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x239804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x239808: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23980c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23980cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239810: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x239810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x239814: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x239814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x239818: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x239818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x23981c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23981cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239820: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239824: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239828: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x239828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x23982c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x23982cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x239830: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x239830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x239834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239838: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23983c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239840: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x239840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x239844: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x239844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239848: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23984c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x23984cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x239850: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x239850u;
    {
        const bool branch_taken_0x239850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239850) {
            ctx->pc = 0x239B50u;
            goto label_239b50;
        }
    }
    ctx->pc = 0x239858u;
label_239858:
    // 0x239858: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x239858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x23985c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239864: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239868: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23986c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23986cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x239870: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239874: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x239874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239878: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x239878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x23987c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23987cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239880: 0x0  nop
    ctx->pc = 0x239880u;
    // NOP
    // 0x239884: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x239884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239888: 0x0  nop
    ctx->pc = 0x239888u;
    // NOP
    // 0x23988c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23988Cu;
    {
        const bool branch_taken_0x23988c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23988c) {
            ctx->pc = 0x2398ACu;
            goto label_2398ac;
        }
    }
    ctx->pc = 0x239894u;
    // 0x239894: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x239894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x239898: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23989c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23989cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2398a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2398a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2398a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2398a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2398a8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2398a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_2398ac:
    // 0x2398ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2398acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2398b0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2398b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2398b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2398b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2398b8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2398b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2398bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2398bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2398c0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2398c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2398c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2398c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2398c8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2398c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2398cc: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x2398ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2398d0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2398D0u;
    SET_GPR_U32(ctx, 31, 0x2398D8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2398D0u, 0x2398D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398D8u;
label_2398d8:
    // 0x2398d8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2398d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2398dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2398dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2398e0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2398e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2398e4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2398e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2398e8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2398e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2398ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2398ECu;
    SET_GPR_U32(ctx, 31, 0x2398F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2398ECu, 0x2398F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398F4u;
label_2398f4:
    // 0x2398f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2398f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2398f8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2398f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2398fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2398fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239900: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x239900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x239904: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x239904u;
    SET_GPR_U32(ctx, 31, 0x23990Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x239904u, 0x23990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23990Cu;
label_23990c:
    // 0x23990c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23990cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239910: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x239910u;
    SET_GPR_U32(ctx, 31, 0x239918u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x239910u, 0x239918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239918u;
label_239918:
    // 0x239918: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23991c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23991cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x239920: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x239920u;
    {
        const bool branch_taken_0x239920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x239920) {
            ctx->pc = 0x239B50u;
            goto label_239b50;
        }
    }
    ctx->pc = 0x239928u;
    // 0x239928: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23992c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x23992cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x239930: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x239930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x239934: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x239934u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x239938: 0x14600085  bnez        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x239938u;
    {
        const bool branch_taken_0x239938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239938) {
            ctx->pc = 0x239B50u;
            goto label_239b50;
        }
    }
    ctx->pc = 0x239940u;
    // 0x239940: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239944: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x239944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x239948: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x239948u;
    {
        const bool branch_taken_0x239948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239948) {
            ctx->pc = 0x239B50u;
            goto label_239b50;
        }
    }
    ctx->pc = 0x239950u;
    // 0x239950: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239954: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239958: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23995c: 0x3406f009  ori         $a2, $zero, 0xF009
    ctx->pc = 0x23995cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61449);
    // 0x239960: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239964: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239968: 0xc0965d0  jal         func_259740
    ctx->pc = 0x239968u;
    SET_GPR_U32(ctx, 31, 0x239970u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x239968u, 0x239970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239970u;
label_239970:
    // 0x239970: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x239970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239974: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239978: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x239978u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x23997c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x23997Cu;
    {
        const bool branch_taken_0x23997c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23997c) {
            ctx->pc = 0x239B50u;
            goto label_239b50;
        }
    }
    ctx->pc = 0x239984u;
label_239984:
    // 0x239984: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x239984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x239988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23998c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239990: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239994: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x239994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x239998: 0xc067654  jal         func_19D950
    ctx->pc = 0x239998u;
    SET_GPR_U32(ctx, 31, 0x2399A0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x239998u, 0x2399A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399A0u;
label_2399a0:
    // 0x2399a0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2399a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2399a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2399a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2399a8: 0x0  nop
    ctx->pc = 0x2399a8u;
    // NOP
    // 0x2399ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2399acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2399b0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2399b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2399b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2399b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2399b8: 0x0  nop
    ctx->pc = 0x2399b8u;
    // NOP
    // 0x2399bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2399bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2399c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2399c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2399c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2399c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2399c8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2399c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2399cc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2399ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2399d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2399d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2399d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2399d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2399d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2399d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2399dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2399dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2399e0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2399e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2399e4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2399e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2399e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2399e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2399ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2399ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2399f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2399f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2399f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2399f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2399f8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2399f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2399fc: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x2399fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x239a00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239a08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239a10: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x239a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x239a14: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x239a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x239a18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239a20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a24: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239a28: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x239a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x239a2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a34: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239a38: 0x3406be00  ori         $a2, $zero, 0xBE00
    ctx->pc = 0x239a38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x239a3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239a40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239a44: 0xc0965d0  jal         func_259740
    ctx->pc = 0x239A44u;
    SET_GPR_U32(ctx, 31, 0x239A4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x239A44u, 0x239A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A4Cu;
label_239a4c:
    // 0x239a4c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x239a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x239a50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a54: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x239a54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x239a58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x239A58u;
    SET_GPR_U32(ctx, 31, 0x239A60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x239A58u, 0x239A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A60u;
label_239a60:
    // 0x239a60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x239a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x239a64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x239a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x239a68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x239A68u;
    {
        const bool branch_taken_0x239a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239a68) {
            ctx->pc = 0x239A90u;
            goto label_239a90;
        }
    }
    ctx->pc = 0x239A70u;
    // 0x239a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239a74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a78: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x239a78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x239a7c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x239a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x239a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239a84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239a8c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x239a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_239a90:
    // 0x239a90: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x239a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x239a94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239a9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239aa0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239aa4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x239aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x239aa8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239aac: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x239aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239ab0: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x239ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x239ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239ab8: 0x0  nop
    ctx->pc = 0x239ab8u;
    // NOP
    // 0x239abc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x239abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239ac0: 0x0  nop
    ctx->pc = 0x239ac0u;
    // NOP
    // 0x239ac4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x239AC4u;
    {
        const bool branch_taken_0x239ac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x239ac4) {
            ctx->pc = 0x239AE4u;
            goto label_239ae4;
        }
    }
    ctx->pc = 0x239ACCu;
    // 0x239acc: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x239accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x239ad0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239ad8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239adc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239ae0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x239ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_239ae4:
    // 0x239ae4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ae8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x239ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239aec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239af0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x239af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239af4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x239af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x239af8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x239af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239afc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x239afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x239b00: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x239b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x239b04: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x239b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x239b08: 0xc05c848  jal         func_172120
    ctx->pc = 0x239B08u;
    SET_GPR_U32(ctx, 31, 0x239B10u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x239B08u, 0x239B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B10u;
label_239b10:
    // 0x239b10: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x239b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x239b14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b18: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x239b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239b1c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x239b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239b20: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x239b20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x239b24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x239B24u;
    SET_GPR_U32(ctx, 31, 0x239B2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x239B24u, 0x239B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B2Cu;
label_239b2c:
    // 0x239b2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b30: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x239b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x239b34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b38: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x239b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x239b3c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x239B3Cu;
    SET_GPR_U32(ctx, 31, 0x239B44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x239B3Cu, 0x239B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B44u;
label_239b44:
    // 0x239b44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b48: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x239B48u;
    SET_GPR_U32(ctx, 31, 0x239B50u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x239B48u, 0x239B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B50u;
label_239b50:
    // 0x239b50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b54: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x239b54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x239b58: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x239B58u;
    {
        const bool branch_taken_0x239b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x239b58) {
            ctx->pc = 0x239BD0u;
            goto label_239bd0;
        }
    }
    ctx->pc = 0x239B60u;
    // 0x239b60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b64: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x239b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239b68: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x239b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239b6c: 0x3c033c49  lui         $v1, 0x3C49
    ctx->pc = 0x239b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15433 << 16));
    // 0x239b70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x239b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x239b74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239b74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239b78: 0x0  nop
    ctx->pc = 0x239b78u;
    // NOP
    // 0x239b7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x239b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x239b80: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x239b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x239b84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239b8c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x239b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239b90: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x239b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x239b94: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x239b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x239b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239b9c: 0x0  nop
    ctx->pc = 0x239b9cu;
    // NOP
    // 0x239ba0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x239ba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239ba4: 0x0  nop
    ctx->pc = 0x239ba4u;
    // NOP
    // 0x239ba8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x239BA8u;
    {
        const bool branch_taken_0x239ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x239ba8) {
            ctx->pc = 0x239C38u;
            goto label_239c38;
        }
    }
    ctx->pc = 0x239BB0u;
    // 0x239bb0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x239bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x239bb4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x239bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x239bb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239bbc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239bc0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x239bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x239bc4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x239bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x239bc8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x239BC8u;
    {
        const bool branch_taken_0x239bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239bc8) {
            ctx->pc = 0x239C38u;
            goto label_239c38;
        }
    }
    ctx->pc = 0x239BD0u;
label_239bd0:
    // 0x239bd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239bd4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x239bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239bd8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x239bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239bdc: 0x3c043c49  lui         $a0, 0x3C49
    ctx->pc = 0x239bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15433 << 16));
    // 0x239be0: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x239be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x239be4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239be8: 0x0  nop
    ctx->pc = 0x239be8u;
    // NOP
    // 0x239bec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x239becu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x239bf0: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x239bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x239bf4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239bf8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239bfc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x239bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239c00: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x239c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x239c04: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x239c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x239c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239c0c: 0x0  nop
    ctx->pc = 0x239c0cu;
    // NOP
    // 0x239c10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x239c10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239c14: 0x0  nop
    ctx->pc = 0x239c14u;
    // NOP
    // 0x239c18: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x239C18u;
    {
        const bool branch_taken_0x239c18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x239c18) {
            ctx->pc = 0x239C38u;
            goto label_239c38;
        }
    }
    ctx->pc = 0x239C20u;
    // 0x239c20: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x239c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x239c24: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x239c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x239c28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239c2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239c30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239c34: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x239c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_239c38:
    // 0x239c38: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x239c38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239c3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x239c3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x239c40: 0x3e00008  jr          $ra
    ctx->pc = 0x239C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239C48u;
}
