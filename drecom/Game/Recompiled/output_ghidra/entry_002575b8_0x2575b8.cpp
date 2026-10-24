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

// Function: entry_002575b8
// Address: 0x2575b8 - 0x257620
void entry_002575b8_0x2575b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002575b8_0x2575b8");
#endif

    ctx->pc = 0x2575b8u;

    // 0x2575b8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2575b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2575bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2575bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2575c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2575c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2575c4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2575C4u;
    {
        const bool branch_taken_0x2575c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2575c4) {
            ctx->pc = 0x257620u;
            return;
        }
    }
    ctx->pc = 0x2575CCu;
    // 0x2575cc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2575ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2575d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2575d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2575d4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2575d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2575d8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2575D8u;
    {
        const bool branch_taken_0x2575d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2575d8) {
            ctx->pc = 0x257620u;
            return;
        }
    }
    ctx->pc = 0x2575E0u;
    // 0x2575e0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2575e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2575e4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2575e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2575e8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2575E8u;
    {
        const bool branch_taken_0x2575e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2575e8) {
            ctx->pc = 0x257620u;
            return;
        }
    }
    ctx->pc = 0x2575F0u;
    // 0x2575f0: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x2575f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2575f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2575f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2575f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2575f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2575fc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2575fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x257600: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x257600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x257604: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x257604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x257608: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x257608u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x25760c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25760cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257614: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x257618: 0x8c720048  lw          $s2, 0x48($v1)
    ctx->pc = 0x257618u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x25761c: 0x0  nop
    ctx->pc = 0x25761cu;
    // NOP
    ctx->pc = 0x257620u;
}
