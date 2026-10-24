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

// Function: entry_00257654
// Address: 0x257654 - 0x2576c0
void entry_00257654_0x257654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257654_0x257654");
#endif

    ctx->pc = 0x257654u;

    // 0x257654: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x257658: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x257658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25765c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25765cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x257660: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x257660u;
    {
        const bool branch_taken_0x257660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257660) {
            ctx->pc = 0x2576C0u;
            return;
        }
    }
    ctx->pc = 0x257668u;
    // 0x257668: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25766c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25766cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257670: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x257670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x257674: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x257674u;
    {
        const bool branch_taken_0x257674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257674) {
            ctx->pc = 0x2576C0u;
            return;
        }
    }
    ctx->pc = 0x25767Cu;
    // 0x25767c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x25767cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x257680: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x257680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x257684: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x257684u;
    {
        const bool branch_taken_0x257684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257684) {
            ctx->pc = 0x2576C0u;
            return;
        }
    }
    ctx->pc = 0x25768Cu;
    // 0x25768c: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x25768cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x257690: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257694: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257698: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25769c: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x25769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2576a0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2576a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x2576a4: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x2576a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2576a8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2576a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2576ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2576acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2576b0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2576b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2576b4: 0x8c720048  lw          $s2, 0x48($v1)
    ctx->pc = 0x2576b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2576b8: 0x0  nop
    ctx->pc = 0x2576b8u;
    // NOP
    // 0x2576bc: 0x0  nop
    ctx->pc = 0x2576bcu;
    // NOP
    ctx->pc = 0x2576c0u;
}
