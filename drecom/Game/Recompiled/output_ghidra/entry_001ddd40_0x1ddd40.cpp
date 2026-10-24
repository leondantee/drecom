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

// Function: entry_001ddd40
// Address: 0x1ddd40 - 0x1ddd78
void entry_001ddd40_0x1ddd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddd40_0x1ddd40");
#endif

    ctx->pc = 0x1ddd40u;

    // 0x1ddd40: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x1ddd40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddd44: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ddd44u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ddd48: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1ddd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ddd4c: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x1ddd4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ddd50: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1ddd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ddd54: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ddd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1ddd58: 0x2452bd00  addiu       $s2, $v0, -0x4300
    ctx->pc = 0x1ddd58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1ddd5c: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1ddd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1ddd60: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1ddd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1ddd64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ddd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ddd68: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1ddd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1ddd6c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x1ddd6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ddd70: 0x14800051  bnez        $a0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1DDD70u;
    {
        const bool branch_taken_0x1ddd70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd70) {
            ctx->pc = 0x1DDEB8u;
            return;
        }
    }
    ctx->pc = 0x1DDD78u;
}
