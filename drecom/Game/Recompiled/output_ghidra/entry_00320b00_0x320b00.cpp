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

// Function: entry_00320b00
// Address: 0x320b00 - 0x320b28
void entry_00320b00_0x320b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320b00_0x320b00");
#endif

    ctx->pc = 0x320b00u;

    // 0x320b00: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320b04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320b08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320b0c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x320b0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320b10: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x320b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320b14: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x320b14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320b18: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x320b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x320b1c: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x320b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320b20: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x320b20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x320b24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x320b28u;
}
