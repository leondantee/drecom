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

// Function: entry_0037758c
// Address: 0x37758c - 0x377640
void entry_0037758c_0x37758c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037758c_0x37758c");
#endif

    ctx->pc = 0x37758cu;

    // 0x37758c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x37758cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377590: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x377594: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x377594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37759c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3775a0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3775A0u;
    {
        const bool branch_taken_0x3775a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3775a0) {
            ctx->pc = 0x377658u;
            return;
        }
    }
    ctx->pc = 0x3775A8u;
    // 0x3775a8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3775a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3775ac: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x3775acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x3775b0: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x3775b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x3775b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3775b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3775b8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3775b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3775bc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x3775bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3775c0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3775c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3775c4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3775c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3775c8: 0x94230394  lhu         $v1, 0x394($at)
    ctx->pc = 0x3775c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x9A0394u));
    // 0x3775cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3775ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3775d0: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3775D0u;
    {
        const bool branch_taken_0x3775d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3775d0) {
            ctx->pc = 0x377658u;
            return;
        }
    }
    ctx->pc = 0x3775D8u;
    // 0x3775d8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3775d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3775dc: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x3775dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x3775e0: 0x24630350  addiu       $v1, $v1, 0x350
    ctx->pc = 0x3775e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
    // 0x3775e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3775e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3775e8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x3775e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3775ec: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x3775ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3775f0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3775f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3775f4: 0x26430120  addiu       $v1, $s2, 0x120
    ctx->pc = 0x3775f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x3775f8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3775f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3775fc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x3775fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x377600: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x377600u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377604: 0x264300d0  addiu       $v1, $s2, 0xD0
    ctx->pc = 0x377604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x377608: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x377608u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x37760c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x37760cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x377610: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x377610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x377614: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x377614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377618: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x377618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x37761c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37761Cu;
    {
        const bool branch_taken_0x37761c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x37761c) {
            ctx->pc = 0x377640u;
            return;
        }
    }
    ctx->pc = 0x377624u;
    // 0x377624: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x377624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377628: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x37762c: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x37762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377630: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377634: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x377634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x377638: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x377638u;
    {
        const bool branch_taken_0x377638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377638) {
            ctx->pc = 0x377658u;
            return;
        }
    }
    ctx->pc = 0x377640u;
}
