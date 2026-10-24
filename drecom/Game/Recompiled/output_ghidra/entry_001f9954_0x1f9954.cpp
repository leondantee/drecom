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

// Function: entry_001f9954
// Address: 0x1f9954 - 0x1f998c
void entry_001f9954_0x1f9954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9954_0x1f9954");
#endif

    ctx->pc = 0x1f9954u;

    // 0x1f9954: 0x8fb00034  lw          $s0, 0x34($sp)
    ctx->pc = 0x1f9954u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f9958: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f9958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f995c: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F995Cu;
    {
        const bool branch_taken_0x1f995c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f995c) {
            ctx->pc = 0x1F998Cu;
            return;
        }
    }
    ctx->pc = 0x1F9964u;
    // 0x1f9964: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f9964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9968: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f9968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f996c: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x1f996cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x1f9970: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f9970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9974: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f9974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f9978: 0xa064007a  sb          $a0, 0x7A($v1)
    ctx->pc = 0x1f9978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 122), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f997c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1f997cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9980: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1f9980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f9984: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f9984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f9988: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x1f9988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    ctx->pc = 0x1f998cu;
}
