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

// Function: entry_001958b8
// Address: 0x1958b8 - 0x1958d4
void entry_001958b8_0x1958b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001958b8_0x1958b8");
#endif

    ctx->pc = 0x1958b8u;

    // 0x1958b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1958bc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1958bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1958c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1958C0u;
    {
        const bool branch_taken_0x1958c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1958c0) {
            ctx->pc = 0x1958D4u;
            return;
        }
    }
    ctx->pc = 0x1958C8u;
    // 0x1958c8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1958c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1958cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1958CCu;
    {
        const bool branch_taken_0x1958cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1958cc) {
            ctx->pc = 0x1958F0u;
            return;
        }
    }
    ctx->pc = 0x1958D4u;
}
