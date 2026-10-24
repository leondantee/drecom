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

// Function: entry_0018d628
// Address: 0x18d628 - 0x18d650
void entry_0018d628_0x18d628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d628_0x18d628");
#endif

    ctx->pc = 0x18d628u;

    // 0x18d628: 0x8e441214  lw          $a0, 0x1214($s2)
    ctx->pc = 0x18d628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4628)));
    // 0x18d62c: 0x92421218  lbu         $v0, 0x1218($s2)
    ctx->pc = 0x18d62cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4632)));
    // 0x18d630: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18d630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d634: 0x24020b30  addiu       $v0, $zero, 0xB30
    ctx->pc = 0x18d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2864));
    // 0x18d638: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x18d638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18d63c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18d640: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x18d640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18d644: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18D644u;
    {
        const bool branch_taken_0x18d644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d644) {
            ctx->pc = 0x18D608u;
            return;
        }
    }
    ctx->pc = 0x18D64Cu;
    // 0x18d64c: 0x0  nop
    ctx->pc = 0x18d64cu;
    // NOP
    ctx->pc = 0x18d650u;
}
