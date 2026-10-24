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

// Function: entry_001f998c
// Address: 0x1f998c - 0x1f99cc
void entry_001f998c_0x1f998c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f998c_0x1f998c");
#endif

    ctx->pc = 0x1f998cu;

    // 0x1f998c: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x1f998cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f9990: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f9990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9994: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F9994u;
    {
        const bool branch_taken_0x1f9994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9994) {
            ctx->pc = 0x1F99CCu;
            return;
        }
    }
    ctx->pc = 0x1F999Cu;
    // 0x1f999c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1f999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f99a0: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f99a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f99a4: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x1f99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x1f99a8: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f99ac: 0xac600068  sw          $zero, 0x68($v1)
    ctx->pc = 0x1f99acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
    // 0x1f99b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f99b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f99b4: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f99b8: 0xa064007a  sb          $a0, 0x7A($v1)
    ctx->pc = 0x1f99b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 122), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f99bc: 0x8fb00034  lw          $s0, 0x34($sp)
    ctx->pc = 0x1f99bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f99c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f99c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f99c4: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f99c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f99c8: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x1f99c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    ctx->pc = 0x1f99ccu;
}
