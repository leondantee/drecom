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

// Function: entry_0021a468
// Address: 0x21a468 - 0x21a47c
void entry_0021a468_0x21a468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a468_0x21a468");
#endif

    ctx->pc = 0x21a468u;

    // 0x21a468: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x21a468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21a46c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x21a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21a470: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21a470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21a474: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21a474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21a478: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x21a478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x21a47cu;
}
