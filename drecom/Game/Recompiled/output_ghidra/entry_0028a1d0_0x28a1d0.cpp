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

// Function: entry_0028a1d0
// Address: 0x28a1d0 - 0x28a1f4
void entry_0028a1d0_0x28a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a1d0_0x28a1d0");
#endif

    ctx->pc = 0x28a1d0u;

    // 0x28a1d0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28a1d4: 0x24675fe0  addiu       $a3, $v1, 0x5FE0
    ctx->pc = 0x28a1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24544));
    // 0x28a1d8: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x28a1d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28a1dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28a1e0: 0x246761e0  addiu       $a3, $v1, 0x61E0
    ctx->pc = 0x28a1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 25056));
    // 0x28a1e4: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x28a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
    // 0x28a1e8: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x28a1e8u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28a1ec: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x28A1ECu;
    {
        const bool branch_taken_0x28a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a1ec) {
            ctx->pc = 0x28A688u;
            return;
        }
    }
    ctx->pc = 0x28A1F4u;
}
