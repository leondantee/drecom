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

// Function: entry_00264784
// Address: 0x264784 - 0x2647b0
void entry_00264784_0x264784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264784_0x264784");
#endif

    ctx->pc = 0x264784u;

    // 0x264784: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x264784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x264788: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x264788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26478c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264790: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x264790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x264794: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x264794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x264798: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x264798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x26479c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2647a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2647a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2647a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2647a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2647a8: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x2647a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2647ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2647acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x2647b0u;
}
