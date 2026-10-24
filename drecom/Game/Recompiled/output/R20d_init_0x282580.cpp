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

// Function: R20d_init
// Address: 0x282580 - 0x28292c
void R20d_init_0x282580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R20d_init_0x282580");
#endif

    switch (ctx->pc) {
        case 0x28259cu: goto label_28259c;
        case 0x2825b0u: goto label_2825b0;
        case 0x2825fcu: goto label_2825fc;
        case 0x282668u: goto label_282668;
        case 0x28268cu: goto label_28268c;
        case 0x282698u: goto label_282698;
        case 0x2826bcu: goto label_2826bc;
        case 0x2826e0u: goto label_2826e0;
        case 0x282704u: goto label_282704;
        case 0x282738u: goto label_282738;
        case 0x282744u: goto label_282744;
        case 0x2827a0u: goto label_2827a0;
        case 0x2827acu: goto label_2827ac;
        case 0x2827c8u: goto label_2827c8;
        case 0x2827ecu: goto label_2827ec;
        case 0x2827f8u: goto label_2827f8;
        case 0x28281cu: goto label_28281c;
        case 0x282840u: goto label_282840;
        case 0x282864u: goto label_282864;
        case 0x282898u: goto label_282898;
        case 0x2828a4u: goto label_2828a4;
        case 0x282900u: goto label_282900;
        case 0x28290cu: goto label_28290c;
        default: break;
    }

    ctx->pc = 0x282580u;

    // 0x282580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282584: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x282584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x282588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28258c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28258cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x282590: 0x24444df0  addiu       $a0, $v0, 0x4DF0
    ctx->pc = 0x282590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19952));
    // 0x282594: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x282594u;
    SET_GPR_U32(ctx, 31, 0x28259Cu);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x282594u, 0x28259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28259Cu;
label_28259c:
    // 0x28259c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28259cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2825a0: 0x8c24fb3c  lw          $a0, -0x4C4($at)
    ctx->pc = 0x2825a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FB3Cu));
    // 0x2825a4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2825a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2825a8: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x2825A8u;
    SET_GPR_U32(ctx, 31, 0x2825B0u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x2825A8u, 0x2825B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2825B0u;
label_2825b0:
    // 0x2825b0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2825b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2825b4: 0x8c23fb3c  lw          $v1, -0x4C4($at)
    ctx->pc = 0x2825b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FB3Cu));
    // 0x2825b8: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x2825b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2825bc: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x2825bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x2825c0: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x2825c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2825c4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2825c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2825c8: 0x8c23fb3c  lw          $v1, -0x4C4($at)
    ctx->pc = 0x2825c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FB3Cu));
    // 0x2825cc: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x2825ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2825d0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2825d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2825d4: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x2825d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2825d8: 0x24037fe0  addiu       $v1, $zero, 0x7FE0
    ctx->pc = 0x2825d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32736));
    // 0x2825dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2825dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2825e0: 0x8c22fb3c  lw          $v0, -0x4C4($at)
    ctx->pc = 0x2825e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FB3Cu));
    // 0x2825e4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2825e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2825e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2825e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2825ec: 0x8c24fb40  lw          $a0, -0x4C0($at)
    ctx->pc = 0x2825ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FB40u));
    // 0x2825f0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2825f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2825f4: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x2825F4u;
    SET_GPR_U32(ctx, 31, 0x2825FCu);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x2825F4u, 0x2825FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2825FCu;
label_2825fc:
    // 0x2825fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2825fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282600: 0x8c24fb40  lw          $a0, -0x4C0($at)
    ctx->pc = 0x282600u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FB40u));
    // 0x282604: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x282604u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x282608: 0x34630021  ori         $v1, $v1, 0x21
    ctx->pc = 0x282608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33);
    // 0x28260c: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x28260cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x282610: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282614: 0x8c24fb40  lw          $a0, -0x4C0($at)
    ctx->pc = 0x282614u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FB40u));
    // 0x282618: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x282618u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28261c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x28261cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x282620: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x282620u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x282624: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282628: 0x8c24fb40  lw          $a0, -0x4C0($at)
    ctx->pc = 0x282628u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FB40u));
    // 0x28262c: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x28262cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x282630: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x282630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x282634: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x282634u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x282638: 0x24047fc0  addiu       $a0, $zero, 0x7FC0
    ctx->pc = 0x282638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32704));
    // 0x28263c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28263cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282640: 0x8c23fb40  lw          $v1, -0x4C0($at)
    ctx->pc = 0x282640u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FB40u));
    // 0x282644: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x282644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x282648: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28264c: 0x8c24fb40  lw          $a0, -0x4C0($at)
    ctx->pc = 0x28264cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FB40u));
    // 0x282650: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x282650u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x282654: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x282654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x282658: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x282658u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x28265c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x28265cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282660: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x282660u;
    {
        const bool branch_taken_0x282660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282660) {
            ctx->pc = 0x2827B0u;
            goto label_2827b0;
        }
    }
    ctx->pc = 0x282668u;
label_282668:
    // 0x282668: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x282668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28266c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28266cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x282670: 0x24424e10  addiu       $v0, $v0, 0x4E10
    ctx->pc = 0x282670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19984));
    // 0x282674: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x282674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282678: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x282678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28267c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28267cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282680: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x282680u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282684: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x282684u;
    SET_GPR_U32(ctx, 31, 0x28268Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x282684u, 0x28268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28268Cu;
label_28268c:
    // 0x28268c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28268cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x282690: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x282690u;
    SET_GPR_U32(ctx, 31, 0x282698u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x282690u, 0x282698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282698u;
label_282698:
    // 0x282698: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x282698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28269c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2826a0: 0x24424e10  addiu       $v0, $v0, 0x4E10
    ctx->pc = 0x2826a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19984));
    // 0x2826a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2826a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2826a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2826a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2826ac: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2826acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2826b0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2826b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2826b4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2826B4u;
    SET_GPR_U32(ctx, 31, 0x2826BCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2826B4u, 0x2826BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826BCu;
label_2826bc:
    // 0x2826bc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2826bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2826c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2826c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2826c4: 0x0  nop
    ctx->pc = 0x2826c4u;
    // NOP
    // 0x2826c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2826c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2826cc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2826ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2826d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2826d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2826d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2826d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2826d8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2826D8u;
    SET_GPR_U32(ctx, 31, 0x2826E0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2826D8u, 0x2826E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826E0u;
label_2826e0:
    // 0x2826e0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2826e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2826e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2826e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2826e8: 0x0  nop
    ctx->pc = 0x2826e8u;
    // NOP
    // 0x2826ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2826ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2826f0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2826f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2826f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2826f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2826f8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2826f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2826fc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2826FCu;
    SET_GPR_U32(ctx, 31, 0x282704u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2826FCu, 0x282704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282704u;
label_282704:
    // 0x282704: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x282704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x282708: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28270c: 0x0  nop
    ctx->pc = 0x28270cu;
    // NOP
    // 0x282710: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282714: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x282714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28271c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x28271cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x282720: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x282720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x282724: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x282724u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282728: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x282728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28272c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28272cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282730: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x282730u;
    SET_GPR_U32(ctx, 31, 0x282738u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x282730u, 0x282738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282738u;
label_282738:
    // 0x282738: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x282738u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28273c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28273Cu;
    SET_GPR_U32(ctx, 31, 0x282744u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28273Cu, 0x282744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282744u;
label_282744:
    // 0x282744: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x282744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x282748: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x282748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28274c: 0x24424e10  addiu       $v0, $v0, 0x4E10
    ctx->pc = 0x28274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19984));
    // 0x282750: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282754: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x282754u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282758: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x282758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28275c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x28275cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x282760: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x282760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282764: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x282764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x282768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28276c: 0x0  nop
    ctx->pc = 0x28276cu;
    // NOP
    // 0x282770: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x282770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x282774: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x282774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x282778: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x282778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28277c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28277cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282780: 0x0  nop
    ctx->pc = 0x282780u;
    // NOP
    // 0x282784: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x282784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x282788: 0x2404171e  addiu       $a0, $zero, 0x171E
    ctx->pc = 0x282788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5918));
    // 0x28278c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28278cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282790: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x282790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x282794: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x282794u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282798: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x282798u;
    SET_GPR_U32(ctx, 31, 0x2827A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x282798u, 0x2827A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827A0u;
label_2827a0:
    // 0x2827a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2827a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2827a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2827A4u;
    SET_GPR_U32(ctx, 31, 0x2827ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2827A4u, 0x2827ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827ACu;
label_2827ac:
    // 0x2827ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2827acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2827b0:
    // 0x2827b0: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x2827b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2827b4: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2827B4u;
    {
        const bool branch_taken_0x2827b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2827b4) {
            ctx->pc = 0x282668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282668;
        }
    }
    ctx->pc = 0x2827BCu;
    // 0x2827bc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2827bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2827c0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2827C0u;
    {
        const bool branch_taken_0x2827c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2827c0) {
            ctx->pc = 0x282910u;
            goto label_282910;
        }
    }
    ctx->pc = 0x2827C8u;
label_2827c8:
    // 0x2827c8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2827c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2827cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2827ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2827d0: 0x24424e00  addiu       $v0, $v0, 0x4E00
    ctx->pc = 0x2827d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
    // 0x2827d4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2827d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2827d8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2827d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2827dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2827dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2827e0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2827e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2827e4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2827E4u;
    SET_GPR_U32(ctx, 31, 0x2827ECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2827E4u, 0x2827ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827ECu;
label_2827ec:
    // 0x2827ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2827ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2827f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2827F0u;
    SET_GPR_U32(ctx, 31, 0x2827F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2827F0u, 0x2827F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827F8u;
label_2827f8:
    // 0x2827f8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2827f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2827fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2827fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x282800: 0x24424e00  addiu       $v0, $v0, 0x4E00
    ctx->pc = 0x282800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
    // 0x282804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282808: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x282808u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28280c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28280cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x282810: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x282810u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x282814: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282814u;
    SET_GPR_U32(ctx, 31, 0x28281Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282814u, 0x28281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28281Cu;
label_28281c:
    // 0x28281c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x28281cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x282820: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282824: 0x0  nop
    ctx->pc = 0x282824u;
    // NOP
    // 0x282828: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28282c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282830: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282834: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x282834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x282838: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282838u;
    SET_GPR_U32(ctx, 31, 0x282840u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282838u, 0x282840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282840u;
label_282840:
    // 0x282840: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x282840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x282844: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282848: 0x0  nop
    ctx->pc = 0x282848u;
    // NOP
    // 0x28284c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28284cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282850: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x282850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282854: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282858: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x282858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28285c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x28285Cu;
    SET_GPR_U32(ctx, 31, 0x282864u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x28285Cu, 0x282864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282864u;
label_282864:
    // 0x282864: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x282864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x282868: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28286c: 0x0  nop
    ctx->pc = 0x28286cu;
    // NOP
    // 0x282870: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282874: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x282874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282878: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28287c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x28287cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x282880: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x282880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x282884: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x282884u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282888: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x282888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28288c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28288cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282890: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x282890u;
    SET_GPR_U32(ctx, 31, 0x282898u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x282890u, 0x282898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282898u;
label_282898:
    // 0x282898: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x282898u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28289c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28289Cu;
    SET_GPR_U32(ctx, 31, 0x2828A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28289Cu, 0x2828A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2828A4u;
label_2828a4:
    // 0x2828a4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2828a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2828a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2828a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2828ac: 0x24424e00  addiu       $v0, $v0, 0x4E00
    ctx->pc = 0x2828acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
    // 0x2828b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2828b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2828b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2828b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2828b8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2828b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2828bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2828bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2828c0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2828c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2828c4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2828c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2828c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2828c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2828cc: 0x0  nop
    ctx->pc = 0x2828ccu;
    // NOP
    // 0x2828d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2828d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2828d4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2828d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2828d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2828d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2828dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2828dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2828e0: 0x0  nop
    ctx->pc = 0x2828e0u;
    // NOP
    // 0x2828e4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2828e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2828e8: 0x2404171d  addiu       $a0, $zero, 0x171D
    ctx->pc = 0x2828e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5917));
    // 0x2828ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2828ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2828f0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2828f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2828f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2828f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2828f8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2828F8u;
    SET_GPR_U32(ctx, 31, 0x282900u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2828F8u, 0x282900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282900u;
label_282900:
    // 0x282900: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x282900u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x282904: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x282904u;
    SET_GPR_U32(ctx, 31, 0x28290Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x282904u, 0x28290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28290Cu;
label_28290c:
    // 0x28290c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28290cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_282910:
    // 0x282910: 0x1200ffad  beqz        $s0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x282910u;
    {
        const bool branch_taken_0x282910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x282910) {
            ctx->pc = 0x2827C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2827c8;
        }
    }
    ctx->pc = 0x282918u;
    // 0x282918: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x282918u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28291c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28291cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282920: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x282920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x282924: 0x3e00008  jr          $ra
    ctx->pc = 0x282924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28292Cu;
}
