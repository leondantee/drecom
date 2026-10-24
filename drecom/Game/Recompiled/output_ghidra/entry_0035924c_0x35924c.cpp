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

// Function: entry_0035924c
// Address: 0x35924c - 0x359270
void entry_0035924c_0x35924c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035924c_0x35924c");
#endif

    ctx->pc = 0x35924cu;

    // 0x35924c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359250: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x359250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x359254: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x359254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x359258: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x359258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x35925c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35925Cu;
    {
        const bool branch_taken_0x35925c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x35925c) {
            ctx->pc = 0x359270u;
            return;
        }
    }
    ctx->pc = 0x359264u;
    // 0x359264: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x359264u;
    {
        const bool branch_taken_0x359264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x359264) {
            ctx->pc = 0x359270u;
            return;
        }
    }
    ctx->pc = 0x35926Cu;
    // 0x35926c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x35926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    ctx->pc = 0x359270u;
}
