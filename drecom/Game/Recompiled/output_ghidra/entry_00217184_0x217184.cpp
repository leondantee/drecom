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

// Function: entry_00217184
// Address: 0x217184 - 0x21719c
void entry_00217184_0x217184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217184_0x217184");
#endif

    ctx->pc = 0x217184u;

    // 0x217184: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x217184u;
    {
        const bool branch_taken_0x217184 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x217184) {
            ctx->pc = 0x217188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217184u;
            // 0x217188: 0xace5cbc0  sw          $a1, -0x3440($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 4294953920), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21719Cu;
            return;
        }
    }
    ctx->pc = 0x21718Cu;
    // 0x21718c: 0x24e2cbc0  addiu       $v0, $a3, -0x3440
    ctx->pc = 0x21718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953920));
    // 0x217190: 0x240800fb  addiu       $t0, $zero, 0xFB
    ctx->pc = 0x217190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x217194: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x217194u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x217198: 0xace5cbc0  sw          $a1, -0x3440($a3)
    ctx->pc = 0x217198u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294953920), GPR_U32(ctx, 5));
    ctx->pc = 0x21719cu;
}
