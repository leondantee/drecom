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

// Function: entry_001af254
// Address: 0x1af254 - 0x1af26c
void entry_001af254_0x1af254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af254_0x1af254");
#endif

    ctx->pc = 0x1af254u;

    // 0x1af254: 0x2ea103e8  sltiu       $at, $s5, 0x3E8
    ctx->pc = 0x1af254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1af258: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF258u;
    {
        const bool branch_taken_0x1af258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af258) {
            ctx->pc = 0x1AF26Cu;
            return;
        }
    }
    ctx->pc = 0x1AF260u;
    // 0x1af260: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1af260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af264: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AF264u;
    {
        const bool branch_taken_0x1af264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af264) {
            ctx->pc = 0x1AF288u;
            return;
        }
    }
    ctx->pc = 0x1AF26Cu;
}
