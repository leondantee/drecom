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

// Function: entry_0014d974
// Address: 0x14d974 - 0x14d9a0
void entry_0014d974_0x14d974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d974_0x14d974");
#endif

    ctx->pc = 0x14d974u;

    // 0x14d974: 0x860215ec  lh          $v0, 0x15EC($s0)
    ctx->pc = 0x14d974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5612)));
    // 0x14d978: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14D978u;
    {
        const bool branch_taken_0x14d978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d978) {
            ctx->pc = 0x14D9E8u;
            return;
        }
    }
    ctx->pc = 0x14D980u;
    // 0x14d980: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x14d980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14d984: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14d984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14d988: 0x3044f000  andi        $a0, $v0, 0xF000
    ctx->pc = 0x14d988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14d98c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D98Cu;
    {
        const bool branch_taken_0x14d98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d98c) {
            ctx->pc = 0x14D9A0u;
            return;
        }
    }
    ctx->pc = 0x14D994u;
    // 0x14d994: 0x860515ec  lh          $a1, 0x15EC($s0)
    ctx->pc = 0x14d994u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5612)));
    // 0x14d998: 0x24a2fffb  addiu       $v0, $a1, -0x5
    ctx->pc = 0x14d998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x14d99c: 0xa60215ec  sh          $v0, 0x15EC($s0)
    ctx->pc = 0x14d99cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5612), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d9a0u;
}
