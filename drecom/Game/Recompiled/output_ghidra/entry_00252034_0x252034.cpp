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

// Function: entry_00252034
// Address: 0x252034 - 0x252074
void entry_00252034_0x252034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252034_0x252034");
#endif

    switch (ctx->pc) {
        case 0x252050u: goto label_252050;
        default: break;
    }

    ctx->pc = 0x252034u;

    // 0x252034: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x252034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x252038: 0x2444dc90  addiu       $a0, $v0, -0x2370
    ctx->pc = 0x252038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958224));
    // 0x25203c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x252040: 0x2445b520  addiu       $a1, $v0, -0x4AE0
    ctx->pc = 0x252040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948128));
    // 0x252044: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x252044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x252048: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x252048u;
    SET_GPR_U32(ctx, 31, 0x252050u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x252050u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x252050u) { return; }
    ctx->pc = 0x252050u;
label_252050:
    // 0x252050: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x252050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x252054: 0x2464dc90  addiu       $a0, $v1, -0x2370
    ctx->pc = 0x252054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958224));
    // 0x252058: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x252058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25205c: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x25205cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x252060: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x252060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252064: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x252064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x252068: 0xa0640108  sb          $a0, 0x108($v1)
    ctx->pc = 0x252068u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 264), (uint8_t)GPR_U32(ctx, 4));
    // 0x25206c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x25206Cu;
    {
        const bool branch_taken_0x25206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25206c) {
            ctx->pc = 0x2520C8u;
            return;
        }
    }
    ctx->pc = 0x252074u;
}
