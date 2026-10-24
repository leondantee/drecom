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

// Function: entry_0033f6cc
// Address: 0x33f6cc - 0x33f720
void entry_0033f6cc_0x33f6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f6cc_0x33f6cc");
#endif

    ctx->pc = 0x33f6ccu;

    // 0x33f6cc: 0x9203006c  lbu         $v1, 0x6C($s0)
    ctx->pc = 0x33f6ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x33f6d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f6d4: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x33f6d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f6d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f6dc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f6dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f6e0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x33F6E0u;
    {
        const bool branch_taken_0x33f6e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f6e0) {
            ctx->pc = 0x33F738u;
            return;
        }
    }
    ctx->pc = 0x33F6E8u;
    // 0x33f6e8: 0x9203006c  lbu         $v1, 0x6C($s0)
    ctx->pc = 0x33f6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x33f6ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f6ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f6f0: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f6f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f6f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f6f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f6fc: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x33f6fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f700: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f704: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x33f704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33f708: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F708u;
    {
        const bool branch_taken_0x33f708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f708) {
            ctx->pc = 0x33F720u;
            return;
        }
    }
    ctx->pc = 0x33F710u;
    // 0x33f710: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x33f710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f714: 0xa203006c  sb          $v1, 0x6C($s0)
    ctx->pc = 0x33f714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f718: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33F718u;
    {
        const bool branch_taken_0x33f718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f718) {
            ctx->pc = 0x33F780u;
            return;
        }
    }
    ctx->pc = 0x33F720u;
}
