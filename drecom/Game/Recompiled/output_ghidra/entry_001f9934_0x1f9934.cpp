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

// Function: entry_001f9934
// Address: 0x1f9934 - 0x1f9954
void entry_001f9934_0x1f9934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9934_0x1f9934");
#endif

    ctx->pc = 0x1f9934u;

    // 0x1f9934: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1f9934u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9938: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f9938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f993c: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F993Cu;
    {
        const bool branch_taken_0x1f993c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f993c) {
            ctx->pc = 0x1F9954u;
            return;
        }
    }
    ctx->pc = 0x1F9944u;
    // 0x1f9944: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f9944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f9948: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1f9948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1f994c: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f9950: 0xa060007a  sb          $zero, 0x7A($v1)
    ctx->pc = 0x1f9950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 122), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1f9954u;
}
