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

// Function: entry_0016f16c
// Address: 0x16f16c - 0x16f1a0
void entry_0016f16c_0x16f16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f16c_0x16f16c");
#endif

    ctx->pc = 0x16f16cu;

    // 0x16f16c: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x16f16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x16f170: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x16f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16f174: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f17c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16f180: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16f180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16f184: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x16f184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x16f188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f18c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x16f18cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x16f190: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f194: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x16f194u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x16f198: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x16f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x16f19c: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x16f19cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x16f1a0u;
}
