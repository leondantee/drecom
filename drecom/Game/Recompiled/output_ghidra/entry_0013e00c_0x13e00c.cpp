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

// Function: entry_0013e00c
// Address: 0x13e00c - 0x13e048
void entry_0013e00c_0x13e00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e00c_0x13e00c");
#endif

    ctx->pc = 0x13e00cu;

    // 0x13e00c: 0x8ed300b0  lw          $s3, 0xB0($s6)
    ctx->pc = 0x13e00cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
    // 0x13e010: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x13e010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x13e014: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e018: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x13e018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x13e01c: 0x8c520038  lw          $s2, 0x38($v0)
    ctx->pc = 0x13e01cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x13e020: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x13e020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x13e024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e028: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x13e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x13e02c: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x13e02cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13e030: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x13e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x13e034: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e038: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x13e038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x13e03c: 0x8c510028  lw          $s1, 0x28($v0)
    ctx->pc = 0x13e03cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x13e040: 0x8ed50020  lw          $s5, 0x20($s6)
    ctx->pc = 0x13e040u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x13e044: 0x0  nop
    ctx->pc = 0x13e044u;
    // NOP
    ctx->pc = 0x13e048u;
}
