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

// Function: entry_0013bcc0
// Address: 0x13bcc0 - 0x13bce8
void entry_0013bcc0_0x13bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bcc0_0x13bcc0");
#endif

    ctx->pc = 0x13bcc0u;

    // 0x13bcc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13bcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bcc4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x13bcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x13bcc8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x13bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x13bccc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13bcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13bcd0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BCD0u;
    {
        const bool branch_taken_0x13bcd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bcd0) {
            ctx->pc = 0x13BCE8u;
            return;
        }
    }
    ctx->pc = 0x13BCD8u;
    // 0x13bcd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bcdc: 0xa2030102  sb          $v1, 0x102($s0)
    ctx->pc = 0x13bcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 3));
    // 0x13bce0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13bce4: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    ctx->pc = 0x13bce8u;
}
