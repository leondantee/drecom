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

// Function: entry_0010bbd0
// Address: 0x10bbd0 - 0x10bc08
void entry_0010bbd0_0x10bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bbd0_0x10bbd0");
#endif

    ctx->pc = 0x10bbd0u;

label_10bbd0:
    // 0x10bbd0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x10bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10bbd4: 0x0  nop
    ctx->pc = 0x10bbd4u;
    // NOP
    // 0x10bbd8: 0x0  nop
    ctx->pc = 0x10bbd8u;
    // NOP
    // 0x10bbdc: 0x0  nop
    ctx->pc = 0x10bbdcu;
    // NOP
    // 0x10bbe0: 0x0  nop
    ctx->pc = 0x10bbe0u;
    // NOP
    // 0x10bbe4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BBE4u;
    {
        const bool branch_taken_0x10bbe4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10bbe4) {
            ctx->pc = 0x10BBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bbd0;
        }
    }
    ctx->pc = 0x10BBECu;
    // 0x10bbec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10bbf0: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x10bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x10bbf4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10bbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10bbf8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10bbfc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10bbfcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x10bc00: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x10bc00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x10bc04: 0x0  nop
    ctx->pc = 0x10bc04u;
    // NOP
    ctx->pc = 0x10bc08u;
}
