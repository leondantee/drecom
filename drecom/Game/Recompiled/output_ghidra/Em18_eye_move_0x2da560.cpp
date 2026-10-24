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

// Function: Em18_eye_move
// Address: 0x2da560 - 0x2da6fc
void Em18_eye_move_0x2da560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_eye_move_0x2da560");
#endif

    switch (ctx->pc) {
        case 0x2da560u: goto label_2da560;
        case 0x2da564u: goto label_2da564;
        case 0x2da568u: goto label_2da568;
        case 0x2da56cu: goto label_2da56c;
        case 0x2da570u: goto label_2da570;
        case 0x2da574u: goto label_2da574;
        case 0x2da578u: goto label_2da578;
        case 0x2da57cu: goto label_2da57c;
        case 0x2da580u: goto label_2da580;
        case 0x2da584u: goto label_2da584;
        case 0x2da588u: goto label_2da588;
        case 0x2da58cu: goto label_2da58c;
        case 0x2da590u: goto label_2da590;
        case 0x2da594u: goto label_2da594;
        case 0x2da598u: goto label_2da598;
        case 0x2da59cu: goto label_2da59c;
        case 0x2da5a0u: goto label_2da5a0;
        case 0x2da5a4u: goto label_2da5a4;
        case 0x2da5a8u: goto label_2da5a8;
        case 0x2da5acu: goto label_2da5ac;
        case 0x2da5b0u: goto label_2da5b0;
        case 0x2da5b4u: goto label_2da5b4;
        case 0x2da5b8u: goto label_2da5b8;
        case 0x2da5bcu: goto label_2da5bc;
        case 0x2da5c0u: goto label_2da5c0;
        case 0x2da5c4u: goto label_2da5c4;
        case 0x2da5c8u: goto label_2da5c8;
        case 0x2da5ccu: goto label_2da5cc;
        case 0x2da5d0u: goto label_2da5d0;
        case 0x2da5d4u: goto label_2da5d4;
        case 0x2da5d8u: goto label_2da5d8;
        case 0x2da5dcu: goto label_2da5dc;
        case 0x2da5e0u: goto label_2da5e0;
        case 0x2da5e4u: goto label_2da5e4;
        case 0x2da5e8u: goto label_2da5e8;
        case 0x2da5ecu: goto label_2da5ec;
        case 0x2da5f0u: goto label_2da5f0;
        case 0x2da5f4u: goto label_2da5f4;
        case 0x2da5f8u: goto label_2da5f8;
        case 0x2da5fcu: goto label_2da5fc;
        case 0x2da600u: goto label_2da600;
        case 0x2da604u: goto label_2da604;
        case 0x2da608u: goto label_2da608;
        case 0x2da60cu: goto label_2da60c;
        case 0x2da610u: goto label_2da610;
        case 0x2da614u: goto label_2da614;
        case 0x2da618u: goto label_2da618;
        case 0x2da61cu: goto label_2da61c;
        case 0x2da620u: goto label_2da620;
        case 0x2da624u: goto label_2da624;
        case 0x2da628u: goto label_2da628;
        case 0x2da62cu: goto label_2da62c;
        case 0x2da630u: goto label_2da630;
        case 0x2da634u: goto label_2da634;
        case 0x2da638u: goto label_2da638;
        case 0x2da63cu: goto label_2da63c;
        case 0x2da640u: goto label_2da640;
        case 0x2da644u: goto label_2da644;
        case 0x2da648u: goto label_2da648;
        case 0x2da64cu: goto label_2da64c;
        case 0x2da650u: goto label_2da650;
        case 0x2da654u: goto label_2da654;
        case 0x2da658u: goto label_2da658;
        case 0x2da65cu: goto label_2da65c;
        case 0x2da660u: goto label_2da660;
        case 0x2da664u: goto label_2da664;
        case 0x2da668u: goto label_2da668;
        case 0x2da66cu: goto label_2da66c;
        case 0x2da670u: goto label_2da670;
        case 0x2da674u: goto label_2da674;
        case 0x2da678u: goto label_2da678;
        case 0x2da67cu: goto label_2da67c;
        case 0x2da680u: goto label_2da680;
        case 0x2da684u: goto label_2da684;
        case 0x2da688u: goto label_2da688;
        case 0x2da68cu: goto label_2da68c;
        case 0x2da690u: goto label_2da690;
        case 0x2da694u: goto label_2da694;
        case 0x2da698u: goto label_2da698;
        case 0x2da69cu: goto label_2da69c;
        case 0x2da6a0u: goto label_2da6a0;
        case 0x2da6a4u: goto label_2da6a4;
        case 0x2da6a8u: goto label_2da6a8;
        case 0x2da6acu: goto label_2da6ac;
        case 0x2da6b0u: goto label_2da6b0;
        case 0x2da6b4u: goto label_2da6b4;
        case 0x2da6b8u: goto label_2da6b8;
        case 0x2da6bcu: goto label_2da6bc;
        case 0x2da6c0u: goto label_2da6c0;
        case 0x2da6c4u: goto label_2da6c4;
        case 0x2da6c8u: goto label_2da6c8;
        case 0x2da6ccu: goto label_2da6cc;
        case 0x2da6d0u: goto label_2da6d0;
        case 0x2da6d4u: goto label_2da6d4;
        case 0x2da6d8u: goto label_2da6d8;
        case 0x2da6dcu: goto label_2da6dc;
        case 0x2da6e0u: goto label_2da6e0;
        case 0x2da6e4u: goto label_2da6e4;
        case 0x2da6e8u: goto label_2da6e8;
        case 0x2da6ecu: goto label_2da6ec;
        case 0x2da6f0u: goto label_2da6f0;
        case 0x2da6f4u: goto label_2da6f4;
        case 0x2da6f8u: goto label_2da6f8;
        default: break;
    }

    ctx->pc = 0x2da560u;

label_2da560:
    // 0x2da560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2da560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2da564:
    // 0x2da564: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2da568:
    // 0x2da568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2da568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2da56c:
    // 0x2da56c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2da56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_2da570:
    // 0x2da570: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2da570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2da574:
    // 0x2da574: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2da574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2da578:
    // 0x2da578: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2da578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2da57c:
    // 0x2da57c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2da57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_2da580:
    // 0x2da580: 0x24712ee0  addiu       $s1, $v1, 0x2EE0
    ctx->pc = 0x2da580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 12000));
label_2da584:
    // 0x2da584: 0x920300d9  lbu         $v1, 0xD9($s0)
    ctx->pc = 0x2da584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 217)));
label_2da588:
    // 0x2da588: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2da588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2da58c:
    // 0x2da58c: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x2da58cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2da590:
    // 0x2da590: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
label_2da594:
    if (ctx->pc == 0x2DA594u) {
        ctx->pc = 0x2DA598u;
        goto label_2da598;
    }
    ctx->pc = 0x2DA590u;
    {
        const bool branch_taken_0x2da590 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da590) {
            ctx->pc = 0x2DA6E8u;
            goto label_2da6e8;
        }
    }
    ctx->pc = 0x2DA598u;
label_2da598:
    // 0x2da598: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2da598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2da59c:
    // 0x2da59c: 0x24641960  addiu       $a0, $v1, 0x1960
    ctx->pc = 0x2da59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6496));
label_2da5a0:
    // 0x2da5a0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2da5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2da5a4:
    // 0x2da5a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2da5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2da5a8:
    // 0x2da5a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2da5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2da5ac:
    // 0x2da5ac: 0x600008  jr          $v1
label_2da5b0:
    if (ctx->pc == 0x2DA5B0u) {
        ctx->pc = 0x2DA5B4u;
        goto label_2da5b4;
    }
    ctx->pc = 0x2DA5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA5ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DA5B4u;
label_2da5b4:
    // 0x2da5b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da5b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da5b8:
    // 0x2da5b8: 0x0  nop
    ctx->pc = 0x2da5b8u;
    // NOP
label_2da5bc:
    // 0x2da5bc: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2da5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_2da5c0:
    // 0x2da5c0: 0x10000049  b           . + 4 + (0x49 << 2)
label_2da5c4:
    if (ctx->pc == 0x2DA5C4u) {
        ctx->pc = 0x2DA5C8u;
        goto label_2da5c8;
    }
    ctx->pc = 0x2DA5C0u;
    {
        const bool branch_taken_0x2da5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da5c0) {
            ctx->pc = 0x2DA6E8u;
            goto label_2da6e8;
        }
    }
    ctx->pc = 0x2DA5C8u;
label_2da5c8:
    // 0x2da5c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da5c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da5cc:
    // 0x2da5cc: 0x0  nop
    ctx->pc = 0x2da5ccu;
    // NOP
label_2da5d0:
    // 0x2da5d0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2da5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_2da5d4:
    // 0x2da5d4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2da5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2da5d8:
    // 0x2da5d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da5d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da5dc:
    // 0x2da5dc: 0x0  nop
    ctx->pc = 0x2da5dcu;
    // NOP
label_2da5e0:
    // 0x2da5e0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2da5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_2da5e4:
    // 0x2da5e4: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x2da5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2da5e8:
    // 0x2da5e8: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2da5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_2da5ec:
    // 0x2da5ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2da5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2da5f0:
    // 0x2da5f0: 0xa20300d8  sb          $v1, 0xD8($s0)
    ctx->pc = 0x2da5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 3));
label_2da5f4:
    // 0x2da5f4: 0x920300d9  lbu         $v1, 0xD9($s0)
    ctx->pc = 0x2da5f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 217)));
label_2da5f8:
    // 0x2da5f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2da5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2da5fc:
    // 0x2da5fc: 0xa20300d9  sb          $v1, 0xD9($s0)
    ctx->pc = 0x2da5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 3));
label_2da600:
    // 0x2da600: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x2da600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2da604:
    // 0x2da604: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2da604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2da608:
    // 0x2da608: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2da608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2da60c:
    // 0x2da60c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2da60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_2da610:
    // 0x2da610: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x2da610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2da614:
    // 0x2da614: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2da614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2da618:
    // 0x2da618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da61c:
    // 0x2da61c: 0x0  nop
    ctx->pc = 0x2da61cu;
    // NOP
label_2da620:
    // 0x2da620: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2da620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2da624:
    // 0x2da624: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2da624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_2da628:
    // 0x2da628: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x2da628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2da62c:
    // 0x2da62c: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x2da62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2da630:
    // 0x2da630: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2da630u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2da634:
    // 0x2da634: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2da638:
    // 0x2da638: 0x0  nop
    ctx->pc = 0x2da638u;
    // NOP
label_2da63c:
    // 0x2da63c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_2da640:
    if (ctx->pc == 0x2DA640u) {
        ctx->pc = 0x2DA644u;
        goto label_2da644;
    }
    ctx->pc = 0x2DA63Cu;
    {
        const bool branch_taken_0x2da63c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da63c) {
            ctx->pc = 0x2DA6E8u;
            goto label_2da6e8;
        }
    }
    ctx->pc = 0x2DA644u;
label_2da644:
    // 0x2da644: 0xa20000d9  sb          $zero, 0xD9($s0)
    ctx->pc = 0x2da644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 0));
label_2da648:
    // 0x2da648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2da648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2da64c:
    // 0x2da64c: 0xa20300d8  sb          $v1, 0xD8($s0)
    ctx->pc = 0x2da64cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 3));
label_2da650:
    // 0x2da650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da654:
    // 0x2da654: 0x0  nop
    ctx->pc = 0x2da654u;
    // NOP
label_2da658:
    // 0x2da658: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2da658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_2da65c:
    // 0x2da65c: 0x10000022  b           . + 4 + (0x22 << 2)
label_2da660:
    if (ctx->pc == 0x2DA660u) {
        ctx->pc = 0x2DA664u;
        goto label_2da664;
    }
    ctx->pc = 0x2DA65Cu;
    {
        const bool branch_taken_0x2da65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da65c) {
            ctx->pc = 0x2DA6E8u;
            goto label_2da6e8;
        }
    }
    ctx->pc = 0x2DA664u;
label_2da664:
    // 0x2da664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da668:
    // 0x2da668: 0x0  nop
    ctx->pc = 0x2da668u;
    // NOP
label_2da66c:
    // 0x2da66c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2da66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_2da670:
    // 0x2da670: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2da670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2da674:
    // 0x2da674: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da678:
    // 0x2da678: 0x0  nop
    ctx->pc = 0x2da678u;
    // NOP
label_2da67c:
    // 0x2da67c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2da67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_2da680:
    // 0x2da680: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x2da680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2da684:
    // 0x2da684: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2da684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_2da688:
    // 0x2da688: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2da688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2da68c:
    // 0x2da68c: 0xa20300d8  sb          $v1, 0xD8($s0)
    ctx->pc = 0x2da68cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 3));
label_2da690:
    // 0x2da690: 0x920300d9  lbu         $v1, 0xD9($s0)
    ctx->pc = 0x2da690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 217)));
label_2da694:
    // 0x2da694: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2da694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2da698:
    // 0x2da698: 0xa20300d9  sb          $v1, 0xD9($s0)
    ctx->pc = 0x2da698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 3));
label_2da69c:
    // 0x2da69c: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x2da69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2da6a0:
    // 0x2da6a0: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2da6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2da6a4:
    // 0x2da6a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2da6a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2da6a8:
    // 0x2da6a8: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2da6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_2da6ac:
    // 0x2da6ac: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x2da6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2da6b0:
    // 0x2da6b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2da6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2da6b4:
    // 0x2da6b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da6b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da6b8:
    // 0x2da6b8: 0x0  nop
    ctx->pc = 0x2da6b8u;
    // NOP
label_2da6bc:
    // 0x2da6bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2da6bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2da6c0:
    // 0x2da6c0: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2da6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_2da6c4:
    // 0x2da6c4: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x2da6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2da6c8:
    // 0x2da6c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da6c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da6cc:
    // 0x2da6cc: 0x0  nop
    ctx->pc = 0x2da6ccu;
    // NOP
label_2da6d0:
    // 0x2da6d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da6d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2da6d4:
    // 0x2da6d4: 0x0  nop
    ctx->pc = 0x2da6d4u;
    // NOP
label_2da6d8:
    // 0x2da6d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2da6dc:
    if (ctx->pc == 0x2DA6DCu) {
        ctx->pc = 0x2DA6E0u;
        goto label_2da6e0;
    }
    ctx->pc = 0x2DA6D8u;
    {
        const bool branch_taken_0x2da6d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da6d8) {
            ctx->pc = 0x2DA6E8u;
            goto label_2da6e8;
        }
    }
    ctx->pc = 0x2DA6E0u;
label_2da6e0:
    // 0x2da6e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2da6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2da6e4:
    // 0x2da6e4: 0xa20300d9  sb          $v1, 0xD9($s0)
    ctx->pc = 0x2da6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 3));
label_2da6e8:
    // 0x2da6e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da6e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2da6ec:
    // 0x2da6ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da6ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2da6f0:
    // 0x2da6f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2da6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2da6f4:
    // 0x2da6f4: 0x3e00008  jr          $ra
label_2da6f8:
    if (ctx->pc == 0x2DA6F8u) {
        ctx->pc = 0x2DA6FCu;
        goto label_fallthrough_0x2da6f4;
    }
    ctx->pc = 0x2DA6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2da6f4:
    ctx->pc = 0x2DA6FCu;
}
