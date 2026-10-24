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

// Function: entry_002f2afc
// Address: 0x2f2afc - 0x2f2b18
void entry_002f2afc_0x2f2afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f2afc_0x2f2afc");
#endif

    ctx->pc = 0x2f2afcu;

    // 0x2f2afc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f2afcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2b00: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2b04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2B04u;
    {
        const bool branch_taken_0x2f2b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b04) {
            ctx->pc = 0x2F2B18u;
            return;
        }
    }
    ctx->pc = 0x2F2B0Cu;
    // 0x2f2b0c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2f2b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f2b10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2B10u;
    {
        const bool branch_taken_0x2f2b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b10) {
            ctx->pc = 0x2F2B20u;
            return;
        }
    }
    ctx->pc = 0x2F2B18u;
}
