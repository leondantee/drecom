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

// Function: entry_00251ff4
// Address: 0x251ff4 - 0x252034
void entry_00251ff4_0x251ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251ff4_0x251ff4");
#endif

    switch (ctx->pc) {
        case 0x252010u: goto label_252010;
        default: break;
    }

    ctx->pc = 0x251ff4u;

    // 0x251ff4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x251ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x251ff8: 0x2444dc40  addiu       $a0, $v0, -0x23C0
    ctx->pc = 0x251ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
    // 0x251ffc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x252000: 0x2445b4d0  addiu       $a1, $v0, -0x4B30
    ctx->pc = 0x252000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948048));
    // 0x252004: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x252004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x252008: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x252008u;
    SET_GPR_U32(ctx, 31, 0x252010u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x252010u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x252010u) { return; }
    ctx->pc = 0x252010u;
label_252010:
    // 0x252010: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x252010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x252014: 0x2464dc40  addiu       $a0, $v1, -0x23C0
    ctx->pc = 0x252014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958144));
    // 0x252018: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x252018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25201c: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x25201cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x252020: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x252020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252024: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x252024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x252028: 0xa0640108  sb          $a0, 0x108($v1)
    ctx->pc = 0x252028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 264), (uint8_t)GPR_U32(ctx, 4));
    // 0x25202c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x25202Cu;
    {
        const bool branch_taken_0x25202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25202c) {
            ctx->pc = 0x2520C8u;
            return;
        }
    }
    ctx->pc = 0x252034u;
}
