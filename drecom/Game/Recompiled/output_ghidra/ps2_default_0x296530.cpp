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

// Function: default
// Address: 0x296530 - 0x296570
void ps2_default_0x296530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x296530");
#endif

    ctx->pc = 0x296530u;

    // 0x296530: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x296530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296534: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296538: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x296538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x29653c: 0x1083ffb2  beq         $a0, $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x29653Cu;
    {
        const bool branch_taken_0x29653c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29653c) {
            ctx->pc = 0x296408u;
            return;
        }
    }
    ctx->pc = 0x296544u;
    // 0x296544: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x296544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296548: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x296548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29654c: 0x2863005e  slti        $v1, $v1, 0x5E
    ctx->pc = 0x29654cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)94) ? 1 : 0);
    // 0x296550: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x296550u;
    {
        const bool branch_taken_0x296550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296550) {
            ctx->pc = 0x296570u;
            return;
        }
    }
    ctx->pc = 0x296558u;
    // 0x296558: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x296558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29655c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29655cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296560: 0x28610062  slti        $at, $v1, 0x62
    ctx->pc = 0x296560u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)98) ? 1 : 0);
    // 0x296564: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x296564u;
    {
        const bool branch_taken_0x296564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x296564) {
            ctx->pc = 0x296570u;
            return;
        }
    }
    ctx->pc = 0x29656Cu;
    // 0x29656c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29656cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x296570u;
}
