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

// Function: entry_0019c818
// Address: 0x19c818 - 0x19c870
void entry_0019c818_0x19c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c818_0x19c818");
#endif

    ctx->pc = 0x19c818u;

    // 0x19c818: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x19c818u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c81c: 0x16c00025  bnez        $s6, . + 4 + (0x25 << 2)
    ctx->pc = 0x19C81Cu;
    {
        const bool branch_taken_0x19c81c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c81c) {
            ctx->pc = 0x19C8B4u;
            return;
        }
    }
    ctx->pc = 0x19C824u;
    // 0x19c824: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x19c828: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19c82c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x19c82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x19c830: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x19C830u;
    {
        const bool branch_taken_0x19c830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c830) {
            ctx->pc = 0x19C8A8u;
            return;
        }
    }
    ctx->pc = 0x19C838u;
    // 0x19c838: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x19c83c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19c840: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x19c840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x19c844: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19C844u;
    {
        const bool branch_taken_0x19c844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c844) {
            ctx->pc = 0x19C870u;
            return;
        }
    }
    ctx->pc = 0x19C84Cu;
    // 0x19c84c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x19c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19c850: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x19c850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x19c854: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x19c854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x19c858: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c85c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c860: 0x3c31824  and         $v1, $fp, $v1
    ctx->pc = 0x19c860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & GPR_U64(ctx, 3));
    // 0x19c864: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19C864u;
    {
        const bool branch_taken_0x19c864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c864) {
            ctx->pc = 0x19C8A8u;
            return;
        }
    }
    ctx->pc = 0x19C86Cu;
    // 0x19c86c: 0x0  nop
    ctx->pc = 0x19c86cu;
    // NOP
    ctx->pc = 0x19c870u;
}
