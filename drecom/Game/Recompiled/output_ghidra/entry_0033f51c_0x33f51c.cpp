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

// Function: entry_0033f51c
// Address: 0x33f51c - 0x33f554
void entry_0033f51c_0x33f51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f51c_0x33f51c");
#endif

    ctx->pc = 0x33f51cu;

    // 0x33f51c: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x33f51cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x33f520: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f524: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f528: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f52c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x33f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f530: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x33f530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f534: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f538: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f538u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f53c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F53Cu;
    {
        const bool branch_taken_0x33f53c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f53c) {
            ctx->pc = 0x33F554u;
            return;
        }
    }
    ctx->pc = 0x33F544u;
    // 0x33f544: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x33f544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f548: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x33f548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f54c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33F54Cu;
    {
        const bool branch_taken_0x33f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f54c) {
            ctx->pc = 0x33F564u;
            return;
        }
    }
    ctx->pc = 0x33F554u;
}
