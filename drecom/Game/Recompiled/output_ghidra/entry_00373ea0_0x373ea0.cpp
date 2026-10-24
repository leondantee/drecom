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

// Function: entry_00373ea0
// Address: 0x373ea0 - 0x373ec0
void entry_00373ea0_0x373ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373ea0_0x373ea0");
#endif

    ctx->pc = 0x373ea0u;

    // 0x373ea0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x373ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x373ea4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x373ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x373ea8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x373ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x373eac: 0x1640ff3a  bnez        $s2, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x373EACu;
    {
        const bool branch_taken_0x373eac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x373eac) {
            ctx->pc = 0x373B98u;
            return;
        }
    }
    ctx->pc = 0x373EB4u;
    // 0x373eb4: 0x24100021  addiu       $s0, $zero, 0x21
    ctx->pc = 0x373eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x373eb8: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x373eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x373ebc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x373ebcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x373ec0u;
}
