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

// Function: entry_00350340
// Address: 0x350340 - 0x350360
void entry_00350340_0x350340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00350340_0x350340");
#endif

    ctx->pc = 0x350340u;

    // 0x350340: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350344: 0x247210b0  addiu       $s2, $v1, 0x10B0
    ctx->pc = 0x350344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x350348: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x350348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x35034c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x35034cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x350350: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x350350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x350354: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x350354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x350358: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x350358u;
    {
        const bool branch_taken_0x350358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350358) {
            ctx->pc = 0x350920u;
            return;
        }
    }
    ctx->pc = 0x350360u;
}
