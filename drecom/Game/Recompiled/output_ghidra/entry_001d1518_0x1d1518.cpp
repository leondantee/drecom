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

// Function: entry_001d1518
// Address: 0x1d1518 - 0x1d153c
void entry_001d1518_0x1d1518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1518_0x1d1518");
#endif

    ctx->pc = 0x1d1518u;

    // 0x1d1518: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1518u;
    {
        const bool branch_taken_0x1d1518 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1518) {
            ctx->pc = 0x1D153Cu;
            return;
        }
    }
    ctx->pc = 0x1D1520u;
    // 0x1d1520: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d1520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1524: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1d1524u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x1d1528: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1d1528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x1d152c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1d152cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1d1530: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x1d1530u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x1d1534: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1538: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x1d1538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    ctx->pc = 0x1d153cu;
}
