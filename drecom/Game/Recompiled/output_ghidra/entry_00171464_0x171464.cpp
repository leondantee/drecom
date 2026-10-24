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

// Function: entry_00171464
// Address: 0x171464 - 0x171484
void entry_00171464_0x171464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171464_0x171464");
#endif

    ctx->pc = 0x171464u;

    // 0x171464: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x171464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x171468: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x171468u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17146c: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17146Cu;
    {
        const bool branch_taken_0x17146c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x17146c) {
            ctx->pc = 0x171484u;
            return;
        }
    }
    ctx->pc = 0x171474u;
    // 0x171474: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x171474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x171478: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x171478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x17147c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17147Cu;
    {
        const bool branch_taken_0x17147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17147c) {
            ctx->pc = 0x171488u;
            return;
        }
    }
    ctx->pc = 0x171484u;
}
