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

// Function: entry_001b3410
// Address: 0x1b3410 - 0x1b3450
void entry_001b3410_0x1b3410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3410_0x1b3410");
#endif

    ctx->pc = 0x1b3410u;

    // 0x1b3410: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b3410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b3414: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3418: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1b3418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b341c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B341Cu;
    {
        const bool branch_taken_0x1b341c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b341c) {
            ctx->pc = 0x1B3450u;
            return;
        }
    }
    ctx->pc = 0x1B3424u;
    // 0x1b3424: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b3424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b3428: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b342c: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x1b342cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1b3430: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3430u;
    {
        const bool branch_taken_0x1b3430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3430) {
            ctx->pc = 0x1B3450u;
            return;
        }
    }
    ctx->pc = 0x1B3438u;
    // 0x1b3438: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b3438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b343c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1b343cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1b3440: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b3440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b3444: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3444u;
    {
        const bool branch_taken_0x1b3444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3444) {
            ctx->pc = 0x1B3450u;
            return;
        }
    }
    ctx->pc = 0x1B344Cu;
    // 0x1b344c: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x1b344cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
    ctx->pc = 0x1b3450u;
}
