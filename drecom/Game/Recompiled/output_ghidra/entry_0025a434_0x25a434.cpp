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

// Function: entry_0025a434
// Address: 0x25a434 - 0x25a450
void entry_0025a434_0x25a434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a434_0x25a434");
#endif

    ctx->pc = 0x25a434u;

    // 0x25a434: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25a434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a438: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25a438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25a43c: 0xac601924  sw          $zero, 0x1924($v1)
    ctx->pc = 0x25a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6436), GPR_U32(ctx, 0));
    // 0x25a440: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25a440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a444: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25a448: 0xac601a24  sw          $zero, 0x1A24($v1)
    ctx->pc = 0x25a448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6692), GPR_U32(ctx, 0));
    // 0x25a44c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25a44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x25a450u;
}
