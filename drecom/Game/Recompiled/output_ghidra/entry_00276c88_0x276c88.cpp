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

// Function: entry_00276c88
// Address: 0x276c88 - 0x276cb0
void entry_00276c88_0x276c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276c88_0x276c88");
#endif

    ctx->pc = 0x276c88u;

    // 0x276c88: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c8c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x276c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x276c90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c94: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x276c94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x276c98: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x276c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x276c9c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x276c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x276ca0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x276ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x276ca4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x276ca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276ca8: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x276ca8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276cac: 0x0  nop
    ctx->pc = 0x276cacu;
    // NOP
    ctx->pc = 0x276cb0u;
}
