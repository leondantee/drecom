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

// Function: entry_00301984
// Address: 0x301984 - 0x3019a4
void entry_00301984_0x301984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301984_0x301984");
#endif

    ctx->pc = 0x301984u;

    // 0x301984: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301988: 0x8c63136c  lw          $v1, 0x136C($v1)
    ctx->pc = 0x301988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4972)));
    // 0x30198c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30198Cu;
    {
        const bool branch_taken_0x30198c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30198c) {
            ctx->pc = 0x3019A4u;
            return;
        }
    }
    ctx->pc = 0x301994u;
    // 0x301994: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x301994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301998: 0x8c83136c  lw          $v1, 0x136C($a0)
    ctx->pc = 0x301998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4972)));
    // 0x30199c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30199cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3019a0: 0xac83136c  sw          $v1, 0x136C($a0)
    ctx->pc = 0x3019a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4972), GPR_U32(ctx, 3));
    ctx->pc = 0x3019a4u;
}
