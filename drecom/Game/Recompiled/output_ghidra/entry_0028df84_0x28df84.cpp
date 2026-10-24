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

// Function: entry_0028df84
// Address: 0x28df84 - 0x28dfa0
void entry_0028df84_0x28df84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028df84_0x28df84");
#endif

    ctx->pc = 0x28df84u;

    // 0x28df84: 0x8e025dd0  lw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28df88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28df88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28df8c: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28df8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x28df90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df94: 0xac2027c0  sw          $zero, 0x27C0($at)
    ctx->pc = 0x28df94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6227C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227C0u, _value); } while (0);
    // 0x28df98: 0x100002e1  b           . + 4 + (0x2E1 << 2)
    ctx->pc = 0x28DF98u;
    {
        const bool branch_taken_0x28df98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28df98) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28DFA0u;
}
