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

// Function: entry_0013ea88
// Address: 0x13ea88 - 0x13eaa8
void entry_0013ea88_0x13ea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ea88_0x13ea88");
#endif

    ctx->pc = 0x13ea88u;

    // 0x13ea88: 0x33c40fc0  andi        $a0, $fp, 0xFC0
    ctx->pc = 0x13ea88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4032);
    // 0x13ea8c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EA8Cu;
    {
        const bool branch_taken_0x13ea8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea8c) {
            ctx->pc = 0x13EAA8u;
            return;
        }
    }
    ctx->pc = 0x13EA94u;
    // 0x13ea94: 0x2dd2821  addu        $a1, $s6, $sp
    ctx->pc = 0x13ea94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13ea98: 0x90a20240  lbu         $v0, 0x240($a1)
    ctx->pc = 0x13ea98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x13ea9c: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x13ea9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13eaa0: 0xa0a30240  sb          $v1, 0x240($a1)
    ctx->pc = 0x13eaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 576), (uint8_t)GPR_U32(ctx, 3));
    // 0x13eaa4: 0x0  nop
    ctx->pc = 0x13eaa4u;
    // NOP
    ctx->pc = 0x13eaa8u;
}
