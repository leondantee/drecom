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

// Function: entry_00340d00
// Address: 0x340d00 - 0x340d2c
void entry_00340d00_0x340d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340d00_0x340d00");
#endif

    ctx->pc = 0x340d00u;

    // 0x340d00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x340d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x340d04: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x340d04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x340d08: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x340d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x340d0c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x340D0Cu;
    {
        const bool branch_taken_0x340d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340d0c) {
            ctx->pc = 0x340D44u;
            return;
        }
    }
    ctx->pc = 0x340D14u;
    // 0x340d14: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x340d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x340d18: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340D18u;
    {
        const bool branch_taken_0x340d18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x340d18) {
            ctx->pc = 0x340D2Cu;
            return;
        }
    }
    ctx->pc = 0x340D20u;
    // 0x340d20: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x340d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340d24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x340D24u;
    {
        const bool branch_taken_0x340d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340d24) {
            ctx->pc = 0x340D44u;
            return;
        }
    }
    ctx->pc = 0x340D2Cu;
}
