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

// Function: entry_00264a74
// Address: 0x264a74 - 0x264a88
void entry_00264a74_0x264a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264a74_0x264a74");
#endif

    ctx->pc = 0x264a74u;

    // 0x264a74: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x264a74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x264a78: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x264a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x264a7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264a80: 0xac6001ac  sw          $zero, 0x1AC($v1)
    ctx->pc = 0x264a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 428), GPR_U32(ctx, 0));
    // 0x264a84: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x264a84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->pc = 0x264a88u;
}
