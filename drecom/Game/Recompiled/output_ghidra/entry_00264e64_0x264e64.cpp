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

// Function: entry_00264e64
// Address: 0x264e64 - 0x264e90
void entry_00264e64_0x264e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264e64_0x264e64");
#endif

    ctx->pc = 0x264e64u;

    // 0x264e64: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x264e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x264e68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x264e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x264e6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264e70: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x264e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x264e74: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x264e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x264e78: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x264e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x264e7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264e80: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x264e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x264e84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x264e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x264e88: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x264e88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x264e8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x264e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x264e90u;
}
