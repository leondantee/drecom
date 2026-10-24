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

// Function: entry_0016f1a0
// Address: 0x16f1a0 - 0x16f1f8
void entry_0016f1a0_0x16f1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f1a0_0x16f1a0");
#endif

    ctx->pc = 0x16f1a0u;

    // 0x16f1a0: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x16f1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x16f1a4: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x16f1a8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x16f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x16f1ac: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16f1b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16f1b4: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x16f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x16f1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f1bc: 0x94420010  lhu         $v0, 0x10($v0)
    ctx->pc = 0x16f1bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16f1c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16f1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16f1c4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x16f1c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16f1c8: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x16F1C8u;
    {
        const bool branch_taken_0x16f1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f1c8) {
            ctx->pc = 0x16F16Cu;
            return;
        }
    }
    ctx->pc = 0x16F1D0u;
    // 0x16f1d0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x16f1d4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x16f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x16f1d8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16f1dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16f1e0: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x16f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x16f1e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f1e8: 0x94420010  lhu         $v0, 0x10($v0)
    ctx->pc = 0x16f1e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16f1ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16f1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16f1f0: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x16f1f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16f1f4: 0x0  nop
    ctx->pc = 0x16f1f4u;
    // NOP
    ctx->pc = 0x16f1f8u;
}
