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

// Function: entry_00326f70
// Address: 0x326f70 - 0x326f80
void entry_00326f70_0x326f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326f70_0x326f70");
#endif

    ctx->pc = 0x326f70u;

    // 0x326f70: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x326f70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x326f74: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x326f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x326f78: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x326f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x326f7c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x326f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x326f80u;
}
