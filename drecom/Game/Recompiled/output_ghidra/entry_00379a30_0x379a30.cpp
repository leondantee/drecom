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

// Function: entry_00379a30
// Address: 0x379a30 - 0x379a4c
void entry_00379a30_0x379a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379a30_0x379a30");
#endif

    ctx->pc = 0x379a30u;

    // 0x379a30: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x379a30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379a34: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x379a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x379a38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x379A38u;
    {
        const bool branch_taken_0x379a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x379a38) {
            ctx->pc = 0x379A4Cu;
            return;
        }
    }
    ctx->pc = 0x379A40u;
    // 0x379a40: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x379a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379a44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x379A44u;
    {
        const bool branch_taken_0x379a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379a44) {
            ctx->pc = 0x379A54u;
            return;
        }
    }
    ctx->pc = 0x379A4Cu;
}
