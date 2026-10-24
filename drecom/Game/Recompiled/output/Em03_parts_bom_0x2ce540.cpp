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

// Function: Em03_parts_bom
// Address: 0x2ce540 - 0x2ce860
void Em03_parts_bom_0x2ce540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_parts_bom_0x2ce540");
#endif

    switch (ctx->pc) {
        case 0x2ce55cu: goto label_2ce55c;
        case 0x2ce680u: goto label_2ce680;
        case 0x2ce6c8u: goto label_2ce6c8;
        case 0x2ce6d4u: goto label_2ce6d4;
        case 0x2ce6f8u: goto label_2ce6f8;
        case 0x2ce724u: goto label_2ce724;
        case 0x2ce744u: goto label_2ce744;
        case 0x2ce75cu: goto label_2ce75c;
        case 0x2ce7e4u: goto label_2ce7e4;
        default: break;
    }

    ctx->pc = 0x2ce540u;

    // 0x2ce540: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ce540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ce544: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2ce544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2ce548: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ce548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ce54c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce550: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce554: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x2ce554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x2ce558: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x2ce558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ce55c:
    // 0x2ce55c: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x2ce55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2ce560: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce564: 0x24638200  addiu       $v1, $v1, -0x7E00
    ctx->pc = 0x2ce564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935040));
    // 0x2ce568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce56c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2ce56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce570: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ce570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ce574: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ce574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ce578: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ce578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce57c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ce57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ce580: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ce580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ce584: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2ce584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ce588: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2ce588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ce58c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2ce58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2ce590: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2ce590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce594: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x2ce594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2ce598: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce59c: 0x24638200  addiu       $v1, $v1, -0x7E00
    ctx->pc = 0x2ce59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935040));
    // 0x2ce5a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce5a4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2ce5a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce5a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ce5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ce5ac: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2ce5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2ce5b0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2ce5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ce5b4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2ce5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2ce5b8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x2ce5b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce5bc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce5c0: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2ce5c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2ce5c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ce5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ce5c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ce5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ce5cc: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x2CE5CCu;
    {
        const bool branch_taken_0x2ce5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce5cc) {
            ctx->pc = 0x2CE838u;
            goto label_2ce838;
        }
    }
    ctx->pc = 0x2CE5D4u;
    // 0x2ce5d4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce5d8: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2ce5d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2ce5dc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ce5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ce5e0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2ce5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2ce5e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE5E4u;
    {
        const bool branch_taken_0x2ce5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce5e4) {
            ctx->pc = 0x2CE608u;
            goto label_2ce608;
        }
    }
    ctx->pc = 0x2CE5ECu;
    // 0x2ce5ec: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2ce5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce5f0: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x2ce5f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2ce5f4: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2ce5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2ce5f8: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2ce5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ce5fc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce600: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2ce600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce604: 0x0  nop
    ctx->pc = 0x2ce604u;
    // NOP
label_2ce608:
    // 0x2ce608: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce60c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2ce60cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce610: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ce610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ce614: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ce614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce618: 0x10830087  beq         $a0, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x2CE618u;
    {
        const bool branch_taken_0x2ce618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ce618) {
            ctx->pc = 0x2CE838u;
            goto label_2ce838;
        }
    }
    ctx->pc = 0x2CE620u;
    // 0x2ce620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce624: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CE624u;
    {
        const bool branch_taken_0x2ce624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ce624) {
            ctx->pc = 0x2CE6C8u;
            goto label_2ce6c8;
        }
    }
    ctx->pc = 0x2CE62Cu;
    // 0x2ce62c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE62Cu;
    {
        const bool branch_taken_0x2ce62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce62c) {
            ctx->pc = 0x2CE63Cu;
            goto label_2ce63c;
        }
    }
    ctx->pc = 0x2CE634u;
    // 0x2ce634: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2CE634u;
    {
        const bool branch_taken_0x2ce634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce634) {
            ctx->pc = 0x2CE838u;
            goto label_2ce838;
        }
    }
    ctx->pc = 0x2CE63Cu;
label_2ce63c:
    // 0x2ce63c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce640: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x2ce640u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ce644: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce648: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x2ce648u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ce64c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce650: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x2ce650u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ce654: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2ce654u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ce658: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2ce658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2ce65c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2ce65cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce660: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2ce660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ce664: 0x344200a4  ori         $v0, $v0, 0xA4
    ctx->pc = 0x2ce664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x2ce668: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2ce668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce66c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2ce66cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2ce670: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x2ce670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x2ce674: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x2ce674u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2ce678: 0xc040c00  jal         func_103000
    ctx->pc = 0x2CE678u;
    SET_GPR_U32(ctx, 31, 0x2CE680u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2CE680u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CE680u) { return; }
    ctx->pc = 0x2CE680u;
label_2ce680:
    // 0x2ce680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce684: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce688: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ce688u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ce68c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2ce68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ce690: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ce690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ce694: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ce694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ce698: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ce698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ce69c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ce69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ce6a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ce6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ce6a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ce6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ce6a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ce6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ce6ac: 0x34440208  ori         $a0, $v0, 0x208
    ctx->pc = 0x2ce6acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)520);
    // 0x2ce6b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ce6b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ce6b4: 0x26060104  addiu       $a2, $s0, 0x104
    ctx->pc = 0x2ce6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x2ce6b8: 0x72403e28  paddub      $a3, $s2, $zero
    ctx->pc = 0x2ce6b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2ce6bc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2ce6bcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ce6c0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2CE6C0u;
    SET_GPR_U32(ctx, 31, 0x2CE6C8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2CE6C0u, 0x2CE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6C8u;
label_2ce6c8:
    // 0x2ce6c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ce6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce6cc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2CE6CCu;
    SET_GPR_U32(ctx, 31, 0x2CE6D4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2CE6D4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CE6D4u) { return; }
    ctx->pc = 0x2CE6D4u;
label_2ce6d4:
    // 0x2ce6d4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce6d8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2ce6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce6dc: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2ce6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2ce6e0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2ce6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2ce6e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ce6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce6e8: 0x0  nop
    ctx->pc = 0x2ce6e8u;
    // NOP
    // 0x2ce6ec: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2ce6ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ce6f0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CE6F0u;
    SET_GPR_U32(ctx, 31, 0x2CE6F8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CE6F0u, 0x2CE6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6F8u;
label_2ce6f8:
    // 0x2ce6f8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce6fc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2ce6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2ce700: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce704: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2ce704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce708: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2ce708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2ce70c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2ce70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2ce710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ce710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce714: 0x0  nop
    ctx->pc = 0x2ce714u;
    // NOP
    // 0x2ce718: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2ce718u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ce71c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CE71Cu;
    SET_GPR_U32(ctx, 31, 0x2CE724u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CE71Cu, 0x2CE724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE724u;
label_2ce724:
    // 0x2ce724: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce728: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2ce728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2ce72c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce730: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ce730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce734: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ce734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce738: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x2ce738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce73c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x2CE73Cu;
    SET_GPR_U32(ctx, 31, 0x2CE744u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2CE744u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CE744u) { return; }
    ctx->pc = 0x2CE744u;
label_2ce744:
    // 0x2ce744: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce748: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ce748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce74c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ce74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce750: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x2ce750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce754: 0xc040ce4  jal         func_103390
    ctx->pc = 0x2CE754u;
    SET_GPR_U32(ctx, 31, 0x2CE75Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x2CE75Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CE75Cu) { return; }
    ctx->pc = 0x2CE75Cu;
label_2ce75c:
    // 0x2ce75c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce760: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2ce760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce764: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2ce764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce768: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ce768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ce76c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ce76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ce770: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce774: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2ce774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce778: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2ce778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce77c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ce77cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ce780: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2ce780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2ce784: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce788: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2ce788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce78c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2ce78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce790: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ce790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ce794: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ce794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2ce798: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce79c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ce79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ce7a0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ce7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ce7a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ce7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce7a8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2ce7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce7ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ce7acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ce7b0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2ce7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2ce7b4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce7b8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ce7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ce7bc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ce7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ce7c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ce7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce7c4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2ce7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce7c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ce7c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ce7cc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2ce7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2ce7d0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x2ce7d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2ce7d4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2ce7d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2ce7d8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2ce7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce7dc: 0xc040c00  jal         func_103000
    ctx->pc = 0x2CE7DCu;
    SET_GPR_U32(ctx, 31, 0x2CE7E4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2CE7E4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CE7E4u) { return; }
    ctx->pc = 0x2CE7E4u;
label_2ce7e4:
    // 0x2ce7e4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2ce7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce7e8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2ce7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce7ec: 0x3c034039  lui         $v1, 0x4039
    ctx->pc = 0x2ce7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16441 << 16));
    // 0x2ce7f0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2ce7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2ce7f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ce7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce7f8: 0x0  nop
    ctx->pc = 0x2ce7f8u;
    // NOP
    // 0x2ce7fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ce7fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ce800: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2ce800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2ce804: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2ce804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce808: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x2ce808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x2ce80c: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x2ce80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x2ce810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ce810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce814: 0x0  nop
    ctx->pc = 0x2ce814u;
    // NOP
    // 0x2ce818: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ce818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce81c: 0x0  nop
    ctx->pc = 0x2ce81cu;
    // NOP
    // 0x2ce820: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE820u;
    {
        const bool branch_taken_0x2ce820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce820) {
            ctx->pc = 0x2CE838u;
            goto label_2ce838;
        }
    }
    ctx->pc = 0x2CE828u;
    // 0x2ce828: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ce828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce82c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce830: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2ce830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ce834: 0x0  nop
    ctx->pc = 0x2ce834u;
    // NOP
label_2ce838:
    // 0x2ce838: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2ce838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2ce83c: 0x1620ff47  bnez        $s1, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x2CE83Cu;
    {
        const bool branch_taken_0x2ce83c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce83c) {
            ctx->pc = 0x2CE55Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce55c;
        }
    }
    ctx->pc = 0x2CE844u;
    // 0x2ce844: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2ce844u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ce848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce84c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce84cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce854: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2ce854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ce858: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE860u;
}
