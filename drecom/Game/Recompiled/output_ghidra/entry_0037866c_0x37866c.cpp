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

// Function: entry_0037866c
// Address: 0x37866c - 0x3786a0
void entry_0037866c_0x37866c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037866c_0x37866c");
#endif

    ctx->pc = 0x37866cu;

    // 0x37866c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x37866cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378670: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x378670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x378674: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x378674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x378678: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x378678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37867c: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x37867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x378680: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x378680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378684: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x378684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x378688: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x378688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x37868c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x37868cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x378690: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x378690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x378694: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x378694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x378698: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x378698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x37869c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x37869cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x3786a0u;
}
