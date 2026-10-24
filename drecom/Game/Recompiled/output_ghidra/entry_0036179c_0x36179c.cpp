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

// Function: entry_0036179c
// Address: 0x36179c - 0x3617cc
void entry_0036179c_0x36179c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036179c_0x36179c");
#endif

    ctx->pc = 0x36179cu;

    // 0x36179c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x36179cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3617a0: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x3617a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x3617a4: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x3617a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3617a8: 0x97a30048  lhu         $v1, 0x48($sp)
    ctx->pc = 0x3617a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3617ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3617acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3617b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3617b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3617b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3617b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3617b8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3617b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3617bc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3617bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3617c0: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x3617c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x3617c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3617C4u;
    {
        const bool branch_taken_0x3617c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3617c4) {
            ctx->pc = 0x361804u;
            return;
        }
    }
    ctx->pc = 0x3617CCu;
}
