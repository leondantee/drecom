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

// Function: entry_00284260
// Address: 0x284260 - 0x284280
void entry_00284260_0x284260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284260_0x284260");
#endif

    ctx->pc = 0x284260u;

    // 0x284260: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284264: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x284264u;
    {
        const bool branch_taken_0x284264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x284264) {
            ctx->pc = 0x284280u;
            return;
        }
    }
    ctx->pc = 0x28426Cu;
    // 0x28426c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x28426cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x284270: 0x2463b7e0  addiu       $v1, $v1, -0x4820
    ctx->pc = 0x284270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948832));
    // 0x284274: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x284278: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x284278u;
    {
        const bool branch_taken_0x284278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284278) {
            ctx->pc = 0x28429Cu;
            return;
        }
    }
    ctx->pc = 0x284280u;
}
