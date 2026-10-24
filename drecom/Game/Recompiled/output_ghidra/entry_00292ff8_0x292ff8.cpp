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

// Function: entry_00292ff8
// Address: 0x292ff8 - 0x293034
void entry_00292ff8_0x292ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292ff8_0x292ff8");
#endif

    ctx->pc = 0x292ff8u;

    // 0x292ff8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x292ffc: 0x94230084  lhu         $v1, 0x84($at)
    ctx->pc = 0x292ffcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x293000: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x293000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x293004: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x293004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x293008: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x293008u;
    {
        const bool branch_taken_0x293008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x293008) {
            ctx->pc = 0x2930ACu;
            return;
        }
    }
    ctx->pc = 0x293010u;
    // 0x293010: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x293010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x293014: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x293014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x293018: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x293018u;
    {
        const bool branch_taken_0x293018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x293018) {
            ctx->pc = 0x293034u;
            return;
        }
    }
    ctx->pc = 0x293020u;
    // 0x293020: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x293020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x293024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x293024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x293028: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x293028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
    // 0x29302c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29302Cu;
    {
        const bool branch_taken_0x29302c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29302c) {
            ctx->pc = 0x293038u;
            return;
        }
    }
    ctx->pc = 0x293034u;
}
