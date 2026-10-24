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

// Function: entry_0019c870
// Address: 0x19c870 - 0x19c8a8
void entry_0019c870_0x19c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c870_0x19c870");
#endif

    ctx->pc = 0x19c870u;

    // 0x19c870: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x19c874: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19c878: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x19c878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x19c87c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19C87Cu;
    {
        const bool branch_taken_0x19c87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c87c) {
            ctx->pc = 0x19C8D0u;
            return;
        }
    }
    ctx->pc = 0x19C884u;
    // 0x19c884: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x19c884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19c888: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x19c888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x19c88c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x19c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x19c890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c894: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x19c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x19c898: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19c898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c89c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19c89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19c8a0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19C8A0u;
    {
        const bool branch_taken_0x19c8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8a0) {
            ctx->pc = 0x19C8D0u;
            return;
        }
    }
    ctx->pc = 0x19C8A8u;
}
