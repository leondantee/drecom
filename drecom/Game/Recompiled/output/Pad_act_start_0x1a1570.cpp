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

// Function: Pad_act_start
// Address: 0x1a1570 - 0x1a16fc
void Pad_act_start_0x1a1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pad_act_start_0x1a1570");
#endif

    ctx->pc = 0x1a1570u;

    // 0x1a1570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1574: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1a1574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1a1578: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a157c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a157cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1580: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a1580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a1584: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1a1584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a1588: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1588u;
    {
        const bool branch_taken_0x1a1588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1588) {
            ctx->pc = 0x1A159Cu;
            goto label_1a159c;
        }
    }
    ctx->pc = 0x1A1590u;
    // 0x1a1590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1594: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a1594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a1598: 0xa0232530  sb          $v1, 0x2530($at)
    ctx->pc = 0x1a1598u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D2530u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D2530u, _value); } while (0);
label_1a159c:
    // 0x1a159c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a159cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a15a0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a15a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a15a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a15a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a15a8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1a15a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1a15ac: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A15ACu;
    {
        const bool branch_taken_0x1a15ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a15ac) {
            ctx->pc = 0x1A162Cu;
            goto label_1a162c;
        }
    }
    ctx->pc = 0x1A15B4u;
    // 0x1a15b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a15b8: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x1a15b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a15bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a15c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1a15c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a15c4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a15c8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1a15c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a15cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a15ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a15d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a15d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a15d4: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1a15d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1a15d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a15d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a15dc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1a15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a15e0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1a15e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a15e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a15e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a15e8: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x1a15e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1a15ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a15ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a15f0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1a15f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a15f4: 0x0  nop
    ctx->pc = 0x1a15f4u;
    // NOP
    // 0x1a15f8: 0x0  nop
    ctx->pc = 0x1a15f8u;
    // NOP
    // 0x1a15fc: 0x1812  mflo        $v1
    ctx->pc = 0x1a15fcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a1600: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1a1600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1a1604: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1a1604u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1a1608: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a160c: 0xa464000a  sh          $a0, 0xA($v1)
    ctx->pc = 0x1a160cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a1610: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1614: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x1a1614u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a1618: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a161c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a161cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1620: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1a1620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1a1624: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1628: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a1628u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1a162c:
    // 0x1a162c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a162cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1630: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a1630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1634: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a1634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a1638: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1a1638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a163c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A163Cu;
    {
        const bool branch_taken_0x1a163c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a163c) {
            ctx->pc = 0x1A16C8u;
            goto label_1a16c8;
        }
    }
    ctx->pc = 0x1A1644u;
    // 0x1a1644: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1648: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x1a1648u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a164c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A164Cu;
    {
        const bool branch_taken_0x1a164c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a164c) {
            ctx->pc = 0x1A1694u;
            goto label_1a1694;
        }
    }
    ctx->pc = 0x1A1654u;
    // 0x1a1654: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1658: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1a1658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a165c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a165cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a1660: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1a1660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1a1664: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1a1664u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a1668: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1a1668u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a166c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1670: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x1a1670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a1674: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1a1674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1a1678: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1a1678u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a167c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1a167cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a1680: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1a1680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a1684: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x1a1684u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1a1688: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a1688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a168c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1690: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1a1690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1a1694:
    // 0x1a1694: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1698: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1a1698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a169c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a169cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a16a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a16a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a16a4: 0x90232531  lbu         $v1, 0x2531($at)
    ctx->pc = 0x1a16a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D2531u));
    // 0x1a16a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a16a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a16ac: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1a16acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a16b0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A16B0u;
    {
        const bool branch_taken_0x1a16b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a16b0) {
            ctx->pc = 0x1A16C8u;
            goto label_1a16c8;
        }
    }
    ctx->pc = 0x1A16B8u;
    // 0x1a16b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a16b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a16bc: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1a16bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a16c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a16c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a16c4: 0xa0232531  sb          $v1, 0x2531($at)
    ctx->pc = 0x1a16c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D2531u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D2531u, _value); } while (0);
label_1a16c8:
    // 0x1a16c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a16c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a16cc: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x1a16ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1a16d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A16D0u;
    {
        const bool branch_taken_0x1a16d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a16d0) {
            ctx->pc = 0x1A16F0u;
            goto label_1a16f0;
        }
    }
    ctx->pc = 0x1A16D8u;
    // 0x1a16d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a16d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a16dc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1a16dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a16e0: 0x84a4000c  lh          $a0, 0xC($a1)
    ctx->pc = 0x1a16e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a16e4: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x1a16e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1a16e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a16ec: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x1a16ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
label_1a16f0:
    // 0x1a16f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a16f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a16f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A16F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A16F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A16FCu;
}
