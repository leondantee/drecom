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

// Function: entry_0013eaa8
// Address: 0x13eaa8 - 0x13ead0
void entry_0013eaa8_0x13eaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eaa8_0x13eaa8");
#endif

    ctx->pc = 0x13eaa8u;

    // 0x13eaa8: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x13eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x13eaac: 0x3482f000  ori         $v0, $a0, 0xF000
    ctx->pc = 0x13eaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
    // 0x13eab0: 0x3c22824  and         $a1, $fp, $v0
    ctx->pc = 0x13eab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
    // 0x13eab4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EAB4u;
    {
        const bool branch_taken_0x13eab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eab4) {
            ctx->pc = 0x13EAD0u;
            return;
        }
    }
    ctx->pc = 0x13EABCu;
    // 0x13eabc: 0x2dd3021  addu        $a2, $s6, $sp
    ctx->pc = 0x13eabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13eac0: 0x90c70240  lbu         $a3, 0x240($a2)
    ctx->pc = 0x13eac0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 576)));
    // 0x13eac4: 0x34e20004  ori         $v0, $a3, 0x4
    ctx->pc = 0x13eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
    // 0x13eac8: 0xa0c20240  sb          $v0, 0x240($a2)
    ctx->pc = 0x13eac8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 576), (uint8_t)GPR_U32(ctx, 2));
    // 0x13eacc: 0x0  nop
    ctx->pc = 0x13eaccu;
    // NOP
    ctx->pc = 0x13ead0u;
}
