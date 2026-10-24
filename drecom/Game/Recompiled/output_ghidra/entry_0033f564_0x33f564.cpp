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

// Function: entry_0033f564
// Address: 0x33f564 - 0x33f5b8
void entry_0033f564_0x33f564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f564_0x33f564");
#endif

    ctx->pc = 0x33f564u;

    // 0x33f564: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x33f564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x33f568: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f56c: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x33f56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f570: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f574: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33f574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f578: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x33F578u;
    {
        const bool branch_taken_0x33f578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f578) {
            ctx->pc = 0x33F5D0u;
            return;
        }
    }
    ctx->pc = 0x33F580u;
    // 0x33f580: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x33f580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x33f584: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33f584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f588: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f58c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f590: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33f590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f594: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x33f594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f598: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33f598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33f59c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x33f59cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33f5a0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F5A0u;
    {
        const bool branch_taken_0x33f5a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5a0) {
            ctx->pc = 0x33F5B8u;
            return;
        }
    }
    ctx->pc = 0x33F5A8u;
    // 0x33f5a8: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x33f5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f5ac: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x33f5acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f5b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33F5B0u;
    {
        const bool branch_taken_0x33f5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5b0) {
            ctx->pc = 0x33F618u;
            return;
        }
    }
    ctx->pc = 0x33F5B8u;
}
