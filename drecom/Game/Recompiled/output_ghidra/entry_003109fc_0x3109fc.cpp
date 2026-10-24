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

// Function: entry_003109fc
// Address: 0x3109fc - 0x310a40
void entry_003109fc_0x3109fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003109fc_0x3109fc");
#endif

    ctx->pc = 0x3109fcu;

    // 0x3109fc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3109fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x310a00: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x310a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x310a04: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x310a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x310a08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310a0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x310a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310a10: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x310a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x310a14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310a18: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x310a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x310a1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310a20: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310a24: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x310a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310a28: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x310a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x310a2c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x310a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x310a30: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x310a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x310a34: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x310a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x310a38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x310a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x310a3c: 0x0  nop
    ctx->pc = 0x310a3cu;
    // NOP
    ctx->pc = 0x310a40u;
}
