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

// Function: entry_0013ea68
// Address: 0x13ea68 - 0x13ea88
void entry_0013ea68_0x13ea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ea68_0x13ea68");
#endif

    ctx->pc = 0x13ea68u;

    // 0x13ea68: 0x33c4003f  andi        $a0, $fp, 0x3F
    ctx->pc = 0x13ea68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)63);
    // 0x13ea6c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EA6Cu;
    {
        const bool branch_taken_0x13ea6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea6c) {
            ctx->pc = 0x13EA88u;
            return;
        }
    }
    ctx->pc = 0x13EA74u;
    // 0x13ea74: 0x2dd1821  addu        $v1, $s6, $sp
    ctx->pc = 0x13ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13ea78: 0x90620240  lbu         $v0, 0x240($v1)
    ctx->pc = 0x13ea78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 576)));
    // 0x13ea7c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x13ea7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x13ea80: 0xa0620240  sb          $v0, 0x240($v1)
    ctx->pc = 0x13ea80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 576), (uint8_t)GPR_U32(ctx, 2));
    // 0x13ea84: 0x0  nop
    ctx->pc = 0x13ea84u;
    // NOP
    ctx->pc = 0x13ea88u;
}
