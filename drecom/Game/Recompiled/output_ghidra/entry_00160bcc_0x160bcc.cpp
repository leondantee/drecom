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

// Function: entry_00160bcc
// Address: 0x160bcc - 0x160bf4
void entry_00160bcc_0x160bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160bcc_0x160bcc");
#endif

    ctx->pc = 0x160bccu;

    // 0x160bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160bd0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160bd4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x160bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x160bd8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160bdc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160be0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160be4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160bec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x160BECu;
    {
        const bool branch_taken_0x160bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160bec) {
            ctx->pc = 0x160D08u;
            return;
        }
    }
    ctx->pc = 0x160BF4u;
}
