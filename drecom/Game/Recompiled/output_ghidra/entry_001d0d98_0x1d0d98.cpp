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

// Function: entry_001d0d98
// Address: 0x1d0d98 - 0x1d0de4
void entry_001d0d98_0x1d0d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0d98_0x1d0d98");
#endif

    ctx->pc = 0x1d0d98u;

    // 0x1d0d98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d9c: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1d0d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0da0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d0da4: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1d0da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1d0da8: 0x922213a6  lbu         $v0, 0x13A6($s1)
    ctx->pc = 0x1d0da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5030)));
    // 0x1d0dac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d0dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d0db0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0db4: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D0DB4u;
    {
        const bool branch_taken_0x1d0db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0db4) {
            ctx->pc = 0x1D0E2Cu;
            return;
        }
    }
    ctx->pc = 0x1D0DBCu;
    // 0x1d0dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0dc0: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D0DC0u;
    {
        const bool branch_taken_0x1d0dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0dc0) {
            ctx->pc = 0x1D0E2Cu;
            return;
        }
    }
    ctx->pc = 0x1D0DC8u;
    // 0x1d0dc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0dcc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0DCCu;
    {
        const bool branch_taken_0x1d0dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0dcc) {
            ctx->pc = 0x1D0DE4u;
            return;
        }
    }
    ctx->pc = 0x1D0DD4u;
    // 0x1d0dd4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0DD4u;
    {
        const bool branch_taken_0x1d0dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0dd4) {
            ctx->pc = 0x1D0DE4u;
            return;
        }
    }
    ctx->pc = 0x1D0DDCu;
    // 0x1d0ddc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D0DDCu;
    {
        const bool branch_taken_0x1d0ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0ddc) {
            ctx->pc = 0x1D0DE4u;
            return;
        }
    }
    ctx->pc = 0x1D0DE4u;
}
