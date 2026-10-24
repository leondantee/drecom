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

// Function: entry_00257384
// Address: 0x257384 - 0x257400
void entry_00257384_0x257384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257384_0x257384");
#endif

    ctx->pc = 0x257384u;

    // 0x257384: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x257388: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x257388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25738c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25738cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x257390: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x257390u;
    {
        const bool branch_taken_0x257390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257390) {
            ctx->pc = 0x257400u;
            return;
        }
    }
    ctx->pc = 0x257398u;
    // 0x257398: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25739c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25739cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2573a0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2573a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2573a4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2573A4u;
    {
        const bool branch_taken_0x2573a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2573a4) {
            ctx->pc = 0x257400u;
            return;
        }
    }
    ctx->pc = 0x2573ACu;
    // 0x2573ac: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2573acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2573b0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2573b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2573b4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2573B4u;
    {
        const bool branch_taken_0x2573b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2573b4) {
            ctx->pc = 0x257400u;
            return;
        }
    }
    ctx->pc = 0x2573BCu;
    // 0x2573bc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2573bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2573c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2573c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2573c4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2573c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2573c8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2573C8u;
    {
        const bool branch_taken_0x2573c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2573c8) {
            ctx->pc = 0x257400u;
            return;
        }
    }
    ctx->pc = 0x2573D0u;
    // 0x2573d0: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x2573d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2573d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2573d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2573d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2573d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2573dc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2573dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2573e0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2573e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2573e4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2573e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x2573e8: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x2573e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2573ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2573ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2573f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2573f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2573f4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2573f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2573f8: 0x8c720018  lw          $s2, 0x18($v1)
    ctx->pc = 0x2573f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2573fc: 0x0  nop
    ctx->pc = 0x2573fcu;
    // NOP
    ctx->pc = 0x257400u;
}
