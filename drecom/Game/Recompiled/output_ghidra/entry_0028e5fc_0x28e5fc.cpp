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

// Function: entry_0028e5fc
// Address: 0x28e5fc - 0x28e7c0
void entry_0028e5fc_0x28e5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e5fc_0x28e5fc");
#endif

    ctx->pc = 0x28e5fcu;

    // 0x28e5fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28e600: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x28e600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x28e604: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x28e604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x28e608: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x28e608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28e60c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28e610: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28e610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e614: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x28e614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x28e618: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28e61c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e620: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e624: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x28e624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x28e628: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e62c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x28e62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28e630: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x28e630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28e634: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e638: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x28e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28e63c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e640: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28e644: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28e644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e648: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x28e648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x28e64c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28e650: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28e650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e654: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e658: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x28e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x28e65c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e65cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e660: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x28e660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28e664: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x28e664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x28e668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e66c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x28e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28e670: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28e670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28e674: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28e674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e678: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x28e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28e67c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28e680: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28e684: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x28e684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e688: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x28e688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28e68c: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x28e68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x28e690: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x28e690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x28e694: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x28e694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28e698: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x28e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x28e69c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x28e69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x28e6a0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x28e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28e6a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e6a8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28e6ac: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x28e6acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e6b0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x28e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28e6b4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x28e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28e6b8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28e6bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e6c0: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x28e6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x28e6c4: 0x2642003c  addiu       $v0, $s2, 0x3C
    ctx->pc = 0x28e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x28e6c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e6cc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x28e6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28e6d0: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x28e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x28e6d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e6d8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x28e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x28e6dc: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x28e6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x28e6e0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x28e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x28e6e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28e6e8: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e6ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28e6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e6f0: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x28E6F0u;
    {
        const bool branch_taken_0x28e6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e6f0) {
            ctx->pc = 0x28E7C0u;
            return;
        }
    }
    ctx->pc = 0x28E6F8u;
    // 0x28e6f8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e6fc: 0x94222830  lhu         $v0, 0x2830($at)
    ctx->pc = 0x28e6fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622830u));
    // 0x28e700: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e704: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28e704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e708: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e70c: 0x94222832  lhu         $v0, 0x2832($at)
    ctx->pc = 0x28e70cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622832u));
    // 0x28e710: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e714: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28e714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e718: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x28e718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e71c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x28e71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28e720: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x28e720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x28e724: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x28e724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x28e728: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e72c: 0x94262834  lhu         $a2, 0x2834($at)
    ctx->pc = 0x28e72cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x622834u));
    // 0x28e730: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x28e730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28e734: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28e734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e738: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e73c: 0x94222832  lhu         $v0, 0x2832($at)
    ctx->pc = 0x28e73cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622832u));
    // 0x28e740: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e744: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28e744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e748: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28e748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e74c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x28e74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e750: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x28e750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x28e754: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28e754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28e758: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e75c: 0x94222830  lhu         $v0, 0x2830($at)
    ctx->pc = 0x28e75cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622830u));
    // 0x28e760: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e764: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x28e764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e768: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e76c: 0x94222836  lhu         $v0, 0x2836($at)
    ctx->pc = 0x28e76cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622836u));
    // 0x28e770: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28e770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e774: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x28e774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28e778: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28e778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e77c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x28e77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x28e780: 0x2644002c  addiu       $a0, $s2, 0x2C
    ctx->pc = 0x28e780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x28e784: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28e784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x28e788: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e78c: 0x94222834  lhu         $v0, 0x2834($at)
    ctx->pc = 0x28e78cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622834u));
    // 0x28e790: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e794: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28e794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e798: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e79c: 0x94222836  lhu         $v0, 0x2836($at)
    ctx->pc = 0x28e79cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622836u));
    // 0x28e7a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e7a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28e7a8: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x28e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28e7ac: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x28e7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28e7b0: 0x26430038  addiu       $v1, $s2, 0x38
    ctx->pc = 0x28e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x28e7b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28e7b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28E7B8u;
    {
        const bool branch_taken_0x28e7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e7b8) {
            ctx->pc = 0x28E804u;
            return;
        }
    }
    ctx->pc = 0x28E7C0u;
}
