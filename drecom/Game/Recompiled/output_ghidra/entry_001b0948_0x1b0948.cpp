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

// Function: entry_001b0948
// Address: 0x1b0948 - 0x1b097c
void entry_001b0948_0x1b0948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0948_0x1b0948");
#endif

    ctx->pc = 0x1b0948u;

    // 0x1b0948: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b0948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b094c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b094cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b0950: 0x17c30039  bne         $fp, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1B0950u;
    {
        const bool branch_taken_0x1b0950 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0950) {
            ctx->pc = 0x1B0A38u;
            return;
        }
    }
    ctx->pc = 0x1B0958u;
    // 0x1b0958: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x1b0958u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b095c: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x1b095cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b0960: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x1b0960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1b0964: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0968: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0968u;
    {
        const bool branch_taken_0x1b0968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0968) {
            ctx->pc = 0x1B097Cu;
            return;
        }
    }
    ctx->pc = 0x1B0970u;
    // 0x1b0970: 0x8ed30008  lw          $s3, 0x8($s6)
    ctx->pc = 0x1b0970u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1b0974: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0974u;
    {
        const bool branch_taken_0x1b0974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0974) {
            ctx->pc = 0x1B0998u;
            return;
        }
    }
    ctx->pc = 0x1B097Cu;
}
