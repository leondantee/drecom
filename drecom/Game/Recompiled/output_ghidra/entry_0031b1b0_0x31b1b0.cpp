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

// Function: entry_0031b1b0
// Address: 0x31b1b0 - 0x31b1e8
void entry_0031b1b0_0x31b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b1b0_0x31b1b0");
#endif

    ctx->pc = 0x31b1b0u;

    // 0x31b1b0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x31b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x31b1b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x31b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b1b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b1bc: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x31b1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x31b1c0: 0x8e041338  lw          $a0, 0x1338($s0)
    ctx->pc = 0x31b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x31b1c4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x31b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x31b1c8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31B1C8u;
    {
        const bool branch_taken_0x31b1c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31b1c8) {
            ctx->pc = 0x31B1E8u;
            return;
        }
    }
    ctx->pc = 0x31B1D0u;
    // 0x31b1d0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x31b1d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b1d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31b1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31b1d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b1dc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B1DCu;
    {
        const bool branch_taken_0x31b1dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b1dc) {
            ctx->pc = 0x31B200u;
            return;
        }
    }
    ctx->pc = 0x31B1E4u;
    // 0x31b1e4: 0x0  nop
    ctx->pc = 0x31b1e4u;
    // NOP
    ctx->pc = 0x31b1e8u;
}
