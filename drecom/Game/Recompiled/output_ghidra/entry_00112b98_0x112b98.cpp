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

// Function: entry_00112b98
// Address: 0x112b98 - 0x112bbc
void entry_00112b98_0x112b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112b98_0x112b98");
#endif

    ctx->pc = 0x112b98u;

    // 0x112b98: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x112b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112b9c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x112b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x112ba0: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x112ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x112ba4: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x112ba4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x112ba8: 0xafa40254  sw          $a0, 0x254($sp)
    ctx->pc = 0x112ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 4));
    // 0x112bac: 0x28a50003  slti        $a1, $a1, 0x3
    ctx->pc = 0x112bacu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x112bb0: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x112bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
    // 0x112bb4: 0xafa5025c  sw          $a1, 0x25C($sp)
    ctx->pc = 0x112bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 5));
    // 0x112bb8: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x112bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    ctx->pc = 0x112bbcu;
}
