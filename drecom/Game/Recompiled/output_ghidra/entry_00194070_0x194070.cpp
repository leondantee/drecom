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

// Function: entry_00194070
// Address: 0x194070 - 0x1940b0
void entry_00194070_0x194070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194070_0x194070");
#endif

    ctx->pc = 0x194070u;

    // 0x194070: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x194070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x194074: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194078: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x194078u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x19407c: 0x1020ff46  beqz        $at, . + 4 + (-0xBA << 2)
    ctx->pc = 0x19407Cu;
    {
        const bool branch_taken_0x19407c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19407c) {
            ctx->pc = 0x193D98u;
            return;
        }
    }
    ctx->pc = 0x194084u;
    // 0x194084: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x194084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x194088: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x194088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19408c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x19408cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x194090: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x194090u;
    {
        const bool branch_taken_0x194090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194090) {
            ctx->pc = 0x1940B0u;
            return;
        }
    }
    ctx->pc = 0x194098u;
    // 0x194098: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x194098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19409c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19409Cu;
    {
        const bool branch_taken_0x19409c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19409c) {
            ctx->pc = 0x1940B0u;
            return;
        }
    }
    ctx->pc = 0x1940A4u;
    // 0x1940a4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1940a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1940a8: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x1940A8u;
    {
        const bool branch_taken_0x1940a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940a8) {
            ctx->pc = 0x194510u;
            return;
        }
    }
    ctx->pc = 0x1940B0u;
}
