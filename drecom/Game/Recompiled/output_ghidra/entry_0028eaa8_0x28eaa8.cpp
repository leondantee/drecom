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

// Function: entry_0028eaa8
// Address: 0x28eaa8 - 0x28eae0
void entry_0028eaa8_0x28eaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028eaa8_0x28eaa8");
#endif

    ctx->pc = 0x28eaa8u;

    // 0x28eaa8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28eaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28eaac: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x28eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x28eab0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x28eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x28eab4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28eab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28eab8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28EAB8u;
    {
        const bool branch_taken_0x28eab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eab8) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28EAC0u;
    // 0x28eac0: 0xa2006854  sb          $zero, 0x6854($s0)
    ctx->pc = 0x28eac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26708), (uint8_t)GPR_U32(ctx, 0));
    // 0x28eac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eac8: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x28eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x28eacc: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x28eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x28ead0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ead0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ead4: 0xac202250  sw          $zero, 0x2250($at)
    ctx->pc = 0x28ead4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622250u, _value); } while (0);
    // 0x28ead8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28EAD8u;
    {
        const bool branch_taken_0x28ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ead8) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28EAE0u;
}
