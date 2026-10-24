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

// Function: entry_00252074
// Address: 0x252074 - 0x2520b4
void entry_00252074_0x252074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252074_0x252074");
#endif

    switch (ctx->pc) {
        case 0x252090u: goto label_252090;
        default: break;
    }

    ctx->pc = 0x252074u;

    // 0x252074: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x252074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x252078: 0x2444dc40  addiu       $a0, $v0, -0x23C0
    ctx->pc = 0x252078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
    // 0x25207c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25207cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x252080: 0x2445b570  addiu       $a1, $v0, -0x4A90
    ctx->pc = 0x252080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948208));
    // 0x252084: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x252084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x252088: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x252088u;
    SET_GPR_U32(ctx, 31, 0x252090u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x252090u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x252090u) { return; }
    ctx->pc = 0x252090u;
label_252090:
    // 0x252090: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x252090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x252094: 0x2464dc40  addiu       $a0, $v1, -0x23C0
    ctx->pc = 0x252094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958144));
    // 0x252098: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x252098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25209c: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x25209cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x2520a0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2520a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2520a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2520a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2520a8: 0xa0640108  sb          $a0, 0x108($v1)
    ctx->pc = 0x2520a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2520ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2520ACu;
    {
        const bool branch_taken_0x2520ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2520ac) {
            ctx->pc = 0x2520C8u;
            return;
        }
    }
    ctx->pc = 0x2520B4u;
}
