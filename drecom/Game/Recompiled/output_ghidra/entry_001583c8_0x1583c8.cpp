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

// Function: entry_001583c8
// Address: 0x1583c8 - 0x1583e0
void entry_001583c8_0x1583c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001583c8_0x1583c8");
#endif

    ctx->pc = 0x1583c8u;

    // 0x1583c8: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x1583c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1583cc: 0x1460ff4f  bnez        $v1, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x1583CCu;
    {
        const bool branch_taken_0x1583cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1583cc) {
            ctx->pc = 0x15810Cu;
            return;
        }
    }
    ctx->pc = 0x1583D4u;
    // 0x1583d4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1583d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1583d8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1583d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1583dc: 0x0  nop
    ctx->pc = 0x1583dcu;
    // NOP
    ctx->pc = 0x1583e0u;
}
