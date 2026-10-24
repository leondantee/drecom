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

// Function: Om_bom_ctrl
// Address: 0x361550 - 0x361708
void Om_bom_ctrl_0x361550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_bom_ctrl_0x361550");
#endif

    switch (ctx->pc) {
        case 0x361584u: goto label_361584;
        case 0x3615dcu: goto label_3615dc;
        case 0x3615f4u: goto label_3615f4;
        case 0x361604u: goto label_361604;
        case 0x361688u: goto label_361688;
        case 0x3616d0u: goto label_3616d0;
        case 0x3616f0u: goto label_3616f0;
        default: break;
    }

    ctx->pc = 0x361550u;

    // 0x361550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x361550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x361554: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x361554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x361558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x361558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36155c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x361560: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x361560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x361564: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x361564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361568: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x361568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x36156c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36156cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361570: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x361570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x361574: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x361574u;
    {
        const bool branch_taken_0x361574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x361574) {
            ctx->pc = 0x361604u;
            goto label_361604;
        }
    }
    ctx->pc = 0x36157Cu;
    // 0x36157c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x36157Cu;
    SET_GPR_U32(ctx, 31, 0x361584u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x36157Cu, 0x361584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361584u;
label_361584:
    // 0x361584: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x361584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361588: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x361588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36158c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x36158cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x361590: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x361590u;
    {
        const bool branch_taken_0x361590 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x361590) {
            ctx->pc = 0x3615A4u;
            goto label_3615a4;
        }
    }
    ctx->pc = 0x361598u;
    // 0x361598: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x361598u;
    {
        const bool branch_taken_0x361598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361598) {
            ctx->pc = 0x3615A4u;
            goto label_3615a4;
        }
    }
    ctx->pc = 0x3615A0u;
    // 0x3615a0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3615a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_3615a4:
    // 0x3615a4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3615A4u;
    {
        const bool branch_taken_0x3615a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3615a4) {
            ctx->pc = 0x361604u;
            goto label_361604;
        }
    }
    ctx->pc = 0x3615ACu;
    // 0x3615ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3615acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3615b0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x3615b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3615b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3615b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3615b8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3615b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3615bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3615bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3615c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3615c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3615c4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3615c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3615c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3615C8u;
    {
        const bool branch_taken_0x3615c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3615c8) {
            ctx->pc = 0x3615F4u;
            goto label_3615f4;
        }
    }
    ctx->pc = 0x3615D0u;
    // 0x3615d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3615d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3615d4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3615D4u;
    SET_GPR_U32(ctx, 31, 0x3615DCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3615D4u, 0x3615DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3615DCu;
label_3615dc:
    // 0x3615dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3615dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3615e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3615e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3615e4: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x3615e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3615e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3615e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3615ec: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3615ECu;
    SET_GPR_U32(ctx, 31, 0x3615F4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3615F4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3615F4u) { return; }
    ctx->pc = 0x3615F4u;
label_3615f4:
    // 0x3615f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3615f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3615f8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3615f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3615fc: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x3615FCu;
    SET_GPR_U32(ctx, 31, 0x361604u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x3615FCu, 0x361604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361604u;
label_361604:
    // 0x361604: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x361604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361608: 0x906211ec  lbu         $v0, 0x11EC($v1)
    ctx->pc = 0x361608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x36160c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x36160cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x361610: 0xa06211ec  sb          $v0, 0x11EC($v1)
    ctx->pc = 0x361610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 2));
    // 0x361614: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x361614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361618: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x361618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x36161c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36161cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361620: 0x1c400024  bgtz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x361620u;
    {
        const bool branch_taken_0x361620 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x361620) {
            ctx->pc = 0x3616B4u;
            goto label_3616b4;
        }
    }
    ctx->pc = 0x361628u;
    // 0x361628: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x361628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36162c: 0x8c62133c  lw          $v0, 0x133C($v1)
    ctx->pc = 0x36162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4924)));
    // 0x361630: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x361630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x361634: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x361634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x361638: 0xac62133c  sw          $v0, 0x133C($v1)
    ctx->pc = 0x361638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4924), GPR_U32(ctx, 2));
    // 0x36163c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36163cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361640: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x361640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x361644: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x361644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x361648: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x361648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36164c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36164cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x361650: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x361650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361654: 0xa04011ec  sb          $zero, 0x11EC($v0)
    ctx->pc = 0x361654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4588), (uint8_t)GPR_U32(ctx, 0));
    // 0x361658: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x361658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36165c: 0x8c4312a8  lw          $v1, 0x12A8($v0)
    ctx->pc = 0x36165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x361660: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361664: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x361664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x361668: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x361668u;
    {
        const bool branch_taken_0x361668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361668) {
            ctx->pc = 0x3616B4u;
            goto label_3616b4;
        }
    }
    ctx->pc = 0x361670u;
    // 0x361670: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x361670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361674: 0x8c4212a8  lw          $v0, 0x12A8($v0)
    ctx->pc = 0x361674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x361678: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x361678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x36167c: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x36167cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x361680: 0xc05dabc  jal         func_176AF0
    ctx->pc = 0x361680u;
    SET_GPR_U32(ctx, 31, 0x361688u);
    ctx->pc = 0x176AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176AF0u, 0x361680u, 0x361688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361688u;
label_361688:
    // 0x361688: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x361688u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36168c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x36168cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x361690: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x361690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x361694: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x361694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x361698: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x361698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36169c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36169cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x3616a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3616a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3616a4: 0x24500060  addiu       $s0, $v0, 0x60
    ctx->pc = 0x3616a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x3616a8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3616a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3616ac: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x3616acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x3616b0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3616b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_3616b4:
    // 0x3616b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3616b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3616b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3616b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3616bc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x3616bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x3616c0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3616c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3616c4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3616c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3616c8: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x3616C8u;
    SET_GPR_U32(ctx, 31, 0x3616D0u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x3616C8u, 0x3616D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3616D0u;
label_3616d0:
    // 0x3616d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3616d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3616d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3616d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3616d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3616d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3616dc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x3616dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x3616e0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3616e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3616e4: 0x906511ec  lbu         $a1, 0x11EC($v1)
    ctx->pc = 0x3616e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x3616e8: 0xc096234  jal         func_2588D0
    ctx->pc = 0x3616E8u;
    SET_GPR_U32(ctx, 31, 0x3616F0u);
    ctx->pc = 0x2588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588D0u, 0x3616E8u, 0x3616F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3616F0u;
label_3616f0:
    // 0x3616f0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3616f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3616f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3616f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3616f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3616f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3616fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3616fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x361700: 0x3e00008  jr          $ra
    ctx->pc = 0x361700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361708u;
}
