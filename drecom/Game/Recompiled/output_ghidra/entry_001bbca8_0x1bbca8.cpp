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

// Function: entry_001bbca8
// Address: 0x1bbca8 - 0x1bbce8
void entry_001bbca8_0x1bbca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbca8_0x1bbca8");
#endif

    ctx->pc = 0x1bbca8u;

    // 0x1bbca8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbcac: 0x904413a6  lbu         $a0, 0x13A6($v0)
    ctx->pc = 0x1bbcacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
    // 0x1bbcb0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1bbcb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1bbcb4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bbcb8: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BBCB8u;
    {
        const bool branch_taken_0x1bbcb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bbcb8) {
            ctx->pc = 0x1BBD1Cu;
            return;
        }
    }
    ctx->pc = 0x1BBCC0u;
    // 0x1bbcc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bbcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbcc4: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BBCC4u;
    {
        const bool branch_taken_0x1bbcc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bbcc4) {
            ctx->pc = 0x1BBD1Cu;
            return;
        }
    }
    ctx->pc = 0x1BBCCCu;
    // 0x1bbccc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bbcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bbcd0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBCD0u;
    {
        const bool branch_taken_0x1bbcd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bbcd0) {
            ctx->pc = 0x1BBCE8u;
            return;
        }
    }
    ctx->pc = 0x1BBCD8u;
    // 0x1bbcd8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBCD8u;
    {
        const bool branch_taken_0x1bbcd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbcd8) {
            ctx->pc = 0x1BBCE8u;
            return;
        }
    }
    ctx->pc = 0x1BBCE0u;
    // 0x1bbce0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1BBCE0u;
    {
        const bool branch_taken_0x1bbce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbce0) {
            ctx->pc = 0x1BBD50u;
            return;
        }
    }
    ctx->pc = 0x1BBCE8u;
}
