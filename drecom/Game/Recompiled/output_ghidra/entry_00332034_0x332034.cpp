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

// Function: entry_00332034
// Address: 0x332034 - 0x332048
void entry_00332034_0x332034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332034_0x332034");
#endif

    ctx->pc = 0x332034u;

    // 0x332034: 0x3c038060  lui         $v1, 0x8060
    ctx->pc = 0x332034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32864 << 16));
    // 0x332038: 0x34626060  ori         $v0, $v1, 0x6060
    ctx->pc = 0x332038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24672);
    // 0x33203c: 0x260a0010  addiu       $t2, $s0, 0x10
    ctx->pc = 0x33203cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x332040: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x332040u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x332044: 0x0  nop
    ctx->pc = 0x332044u;
    // NOP
    ctx->pc = 0x332048u;
}
