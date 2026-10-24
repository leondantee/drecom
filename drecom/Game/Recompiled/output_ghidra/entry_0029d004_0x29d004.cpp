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

// Function: entry_0029d004
// Address: 0x29d004 - 0x29d038
void entry_0029d004_0x29d004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d004_0x29d004");
#endif

    ctx->pc = 0x29d004u;

    // 0x29d004: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29d004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d008: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d00c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d00cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d010: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d014: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x29d014u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d018: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d01c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d01cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d020: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d024: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d028: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d02c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29d030: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x29D030u;
    {
        const bool branch_taken_0x29d030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d030) {
            ctx->pc = 0x29D210u;
            return;
        }
    }
    ctx->pc = 0x29D038u;
}
