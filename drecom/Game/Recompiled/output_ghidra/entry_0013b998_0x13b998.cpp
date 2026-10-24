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

// Function: entry_0013b998
// Address: 0x13b998 - 0x13b9b4
void entry_0013b998_0x13b998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b998_0x13b998");
#endif

    ctx->pc = 0x13b998u;

    // 0x13b998: 0x92030101  lbu         $v1, 0x101($s0)
    ctx->pc = 0x13b998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 257)));
    // 0x13b99c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13b99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13b9a0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B9A0u;
    {
        const bool branch_taken_0x13b9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b9a0) {
            ctx->pc = 0x13B9B4u;
            return;
        }
    }
    ctx->pc = 0x13B9A8u;
    // 0x13b9a8: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13b9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13b9ac: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x13B9ACu;
    {
        const bool branch_taken_0x13b9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b9ac) {
            ctx->pc = 0x13BD18u;
            return;
        }
    }
    ctx->pc = 0x13B9B4u;
}
