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

// Function: entry_00251fb4
// Address: 0x251fb4 - 0x251ff4
void entry_00251fb4_0x251fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251fb4_0x251fb4");
#endif

    switch (ctx->pc) {
        case 0x251fd0u: goto label_251fd0;
        default: break;
    }

    ctx->pc = 0x251fb4u;

    // 0x251fb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x251fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x251fb8: 0x2444dc40  addiu       $a0, $v0, -0x23C0
    ctx->pc = 0x251fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
    // 0x251fbc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x251fc0: 0x2445b480  addiu       $a1, $v0, -0x4B80
    ctx->pc = 0x251fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947968));
    // 0x251fc4: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x251fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x251fc8: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x251FC8u;
    SET_GPR_U32(ctx, 31, 0x251FD0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x251FD0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x251FD0u) { return; }
    ctx->pc = 0x251FD0u;
label_251fd0:
    // 0x251fd0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x251fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x251fd4: 0x2464dc40  addiu       $a0, $v1, -0x23C0
    ctx->pc = 0x251fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958144));
    // 0x251fd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x251fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251fdc: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x251fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x251fe0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x251fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x251fe4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x251fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251fe8: 0xa0640108  sb          $a0, 0x108($v1)
    ctx->pc = 0x251fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 264), (uint8_t)GPR_U32(ctx, 4));
    // 0x251fec: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x251FECu;
    {
        const bool branch_taken_0x251fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251fec) {
            ctx->pc = 0x2520C8u;
            return;
        }
    }
    ctx->pc = 0x251FF4u;
}
