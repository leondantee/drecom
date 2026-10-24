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

// Function: entry_0033f5d0
// Address: 0x33f5d0 - 0x33f608
void entry_0033f5d0_0x33f5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f5d0_0x33f5d0");
#endif

    ctx->pc = 0x33f5d0u;

    // 0x33f5d0: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x33f5d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x33f5d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f5d8: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f5dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f5e0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x33f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f5e4: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x33f5e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f5e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f5ec: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f5ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f5f0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F5F0u;
    {
        const bool branch_taken_0x33f5f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5f0) {
            ctx->pc = 0x33F608u;
            return;
        }
    }
    ctx->pc = 0x33F5F8u;
    // 0x33f5f8: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x33f5f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f5fc: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x33f5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f600: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33F600u;
    {
        const bool branch_taken_0x33f600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f600) {
            ctx->pc = 0x33F618u;
            return;
        }
    }
    ctx->pc = 0x33F608u;
}
