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

// Function: entry_00310b1c
// Address: 0x310b1c - 0x310b60
void entry_00310b1c_0x310b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310b1c_0x310b1c");
#endif

    ctx->pc = 0x310b1cu;

    // 0x310b1c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x310b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x310b20: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x310b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x310b24: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x310b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x310b28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310b2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x310b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310b30: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x310b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x310b34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310b38: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x310b38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x310b3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310b40: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310b44: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x310b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310b48: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x310b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x310b4c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x310b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x310b50: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x310b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x310b54: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x310b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x310b58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x310b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x310b5c: 0x0  nop
    ctx->pc = 0x310b5cu;
    // NOP
    ctx->pc = 0x310b60u;
}
