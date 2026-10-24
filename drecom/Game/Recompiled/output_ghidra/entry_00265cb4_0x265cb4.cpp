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

// Function: entry_00265cb4
// Address: 0x265cb4 - 0x265ce0
void entry_00265cb4_0x265cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265cb4_0x265cb4");
#endif

    ctx->pc = 0x265cb4u;

    // 0x265cb4: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x265cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x265cb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x265cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x265cbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265cc0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x265cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x265cc4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x265cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x265cc8: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x265cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x265ccc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265cd0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x265cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x265cd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x265cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x265cd8: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x265cd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x265cdc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x265cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x265ce0u;
}
