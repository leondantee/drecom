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

// Function: entry_002842b0
// Address: 0x2842b0 - 0x2842d0
void entry_002842b0_0x2842b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002842b0_0x2842b0");
#endif

    ctx->pc = 0x2842b0u;

    // 0x2842b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2842b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2842b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2842B4u;
    {
        const bool branch_taken_0x2842b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2842b4) {
            ctx->pc = 0x2842D0u;
            return;
        }
    }
    ctx->pc = 0x2842BCu;
    // 0x2842bc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2842bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2842c0: 0x2463a580  addiu       $v1, $v1, -0x5A80
    ctx->pc = 0x2842c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944128));
    // 0x2842c4: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x2842c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x2842c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2842C8u;
    {
        const bool branch_taken_0x2842c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2842c8) {
            ctx->pc = 0x2842ECu;
            return;
        }
    }
    ctx->pc = 0x2842D0u;
}
