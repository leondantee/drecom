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

// Function: entry_00101140
// Address: 0x101140 - 0x101158
void entry_00101140_0x101140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101140_0x101140");
#endif

    ctx->pc = 0x101140u;

    // 0x101140: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x101140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x101144: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101148: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x101148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10114c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x10114cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x101150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101154: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x101154u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4));
    ctx->pc = 0x101158u;
}
