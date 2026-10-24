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

// Function: entry_00297534
// Address: 0x297534 - 0x29754c
void entry_00297534_0x297534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297534_0x297534");
#endif

    ctx->pc = 0x297534u;

    // 0x297534: 0x3c028070  lui         $v0, 0x8070
    ctx->pc = 0x297534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32880 << 16));
    // 0x297538: 0x34437070  ori         $v1, $v0, 0x7070
    ctx->pc = 0x297538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28784);
    // 0x29753c: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x29753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x297540: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x297544: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x297544u;
    {
        const bool branch_taken_0x297544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297544) {
            ctx->pc = 0x2975A8u;
            return;
        }
    }
    ctx->pc = 0x29754Cu;
}
