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

// Function: entry_00319d50
// Address: 0x319d50 - 0x319d80
void entry_00319d50_0x319d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00319d50_0x319d50");
#endif

    ctx->pc = 0x319d50u;

    // 0x319d50: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319d54: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x319d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x319d58: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x319d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x319d5c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x319d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x319d60: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x319d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x319d64: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x319d64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x319d68: 0x8e530034  lw          $s3, 0x34($s2)
    ctx->pc = 0x319d68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x319d6c: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x319d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x319d70: 0x34850002  ori         $a1, $a0, 0x2
    ctx->pc = 0x319d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x319d74: 0xae650024  sw          $a1, 0x24($s3)
    ctx->pc = 0x319d74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 5));
    // 0x319d78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x319d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x319d7c: 0x0  nop
    ctx->pc = 0x319d7cu;
    // NOP
    ctx->pc = 0x319d80u;
}
