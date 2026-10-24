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

// Function: entry_00373a58
// Address: 0x373a58 - 0x373a74
void entry_00373a58_0x373a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373a58_0x373a58");
#endif

    ctx->pc = 0x373a58u;

    // 0x373a58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x373a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x373a5c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x373a5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x373a60: 0x1640ffae  bnez        $s2, . + 4 + (-0x52 << 2)
    ctx->pc = 0x373A60u;
    {
        const bool branch_taken_0x373a60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x373a60) {
            ctx->pc = 0x37391Cu;
            return;
        }
    }
    ctx->pc = 0x373A68u;
    // 0x373a68: 0x24100019  addiu       $s0, $zero, 0x19
    ctx->pc = 0x373a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x373a6c: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x373a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x373a70: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x373a70u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x373a74u;
}
