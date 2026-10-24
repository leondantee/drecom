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

// Function: entry_00265b48
// Address: 0x265b48 - 0x265b60
void entry_00265b48_0x265b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265b48_0x265b48");
#endif

    ctx->pc = 0x265b48u;

    // 0x265b48: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x265b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x265b4c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x265b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x265b50: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x265b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x265b54: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x265b54u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x265b58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x265B58u;
    {
        const bool branch_taken_0x265b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265b58) {
            ctx->pc = 0x265B90u;
            return;
        }
    }
    ctx->pc = 0x265B60u;
}
