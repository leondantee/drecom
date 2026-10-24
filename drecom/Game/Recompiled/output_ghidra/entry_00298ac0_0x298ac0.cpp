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

// Function: entry_00298ac0
// Address: 0x298ac0 - 0x298acc
void entry_00298ac0_0x298ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298ac0_0x298ac0");
#endif

    ctx->pc = 0x298ac0u;

    // 0x298ac0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x298ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x298ac4: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x298AC4u;
    {
        const bool branch_taken_0x298ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298ac4) {
            ctx->pc = 0x298A74u;
            return;
        }
    }
    ctx->pc = 0x298ACCu;
}
