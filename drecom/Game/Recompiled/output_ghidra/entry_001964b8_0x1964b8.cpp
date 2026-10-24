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

// Function: entry_001964b8
// Address: 0x1964b8 - 0x196520
void entry_001964b8_0x1964b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001964b8_0x1964b8");
#endif

    ctx->pc = 0x1964b8u;

    // 0x1964b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1964b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1964bc: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x1964bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1964c0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1964c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1964c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1964c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1964c8: 0x94630036  lhu         $v1, 0x36($v1)
    ctx->pc = 0x1964c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x1964cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1964ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1964d0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1964d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1964d4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1964D4u;
    {
        const bool branch_taken_0x1964d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964d4) {
            ctx->pc = 0x196520u;
            return;
        }
    }
    ctx->pc = 0x1964DCu;
    // 0x1964dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1964dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1964e0: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x1964e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1964e4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1964e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1964e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1964e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1964ec: 0x94650034  lhu         $a1, 0x34($v1)
    ctx->pc = 0x1964ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1964f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1964f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1964f4: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x1964f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1964f8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1964f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1964fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1964fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196500: 0xa4650036  sh          $a1, 0x36($v1)
    ctx->pc = 0x196500u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 5));
    // 0x196504: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196508: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x196508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x19650c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x19650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x196510: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x196510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196514: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x196514u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x196518: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x196518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x19651c: 0xa4830036  sh          $v1, 0x36($a0)
    ctx->pc = 0x19651cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x196520u;
}
