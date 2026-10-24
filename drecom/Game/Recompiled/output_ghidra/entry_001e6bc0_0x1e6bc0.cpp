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

// Function: entry_001e6bc0
// Address: 0x1e6bc0 - 0x1e6bf0
void entry_001e6bc0_0x1e6bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6bc0_0x1e6bc0");
#endif

    ctx->pc = 0x1e6bc0u;

    // 0x1e6bc0: 0x8fa40a24  lw          $a0, 0xA24($sp)
    ctx->pc = 0x1e6bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2596)));
    // 0x1e6bc4: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1e6bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e6bc8: 0xafa50a24  sw          $a1, 0xA24($sp)
    ctx->pc = 0x1e6bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2596), GPR_U32(ctx, 5));
    // 0x1e6bcc: 0x8fa60a24  lw          $a2, 0xA24($sp)
    ctx->pc = 0x1e6bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2596)));
    // 0x1e6bd0: 0xdda021  addu        $s4, $a2, $sp
    ctx->pc = 0x1e6bd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1e6bd4: 0x92840220  lbu         $a0, 0x220($s4)
    ctx->pc = 0x1e6bd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 544)));
    // 0x1e6bd8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6BD8u;
    {
        const bool branch_taken_0x1e6bd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6bd8) {
            ctx->pc = 0x1E6BF0u;
            return;
        }
    }
    ctx->pc = 0x1E6BE0u;
    // 0x1e6be0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1e6be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e6be4: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1e6be4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6be8: 0x10000225  b           . + 4 + (0x225 << 2)
    ctx->pc = 0x1E6BE8u;
    {
        const bool branch_taken_0x1e6be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6be8) {
            ctx->pc = 0x1E7480u;
            return;
        }
    }
    ctx->pc = 0x1E6BF0u;
}
