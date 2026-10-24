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

// Function: entry_001d1460
// Address: 0x1d1460 - 0x1d14b8
void entry_001d1460_0x1d1460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1460_0x1d1460");
#endif

    ctx->pc = 0x1d1460u;

    // 0x1d1460: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1464: 0xa0600060  sb          $zero, 0x60($v1)
    ctx->pc = 0x1d1464u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1468: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x1d1468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d146c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d146cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d1470: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D1470u;
    {
        const bool branch_taken_0x1d1470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d1470) {
            ctx->pc = 0x1D14F4u;
            return;
        }
    }
    ctx->pc = 0x1D1478u;
    // 0x1d1478: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1d1478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d147c: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1d147cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1d1480: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d1480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d1484: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d1484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1488: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D1488u;
    {
        const bool branch_taken_0x1d1488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1488) {
            ctx->pc = 0x1D14D4u;
            return;
        }
    }
    ctx->pc = 0x1D1490u;
    // 0x1d1490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1494: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D1494u;
    {
        const bool branch_taken_0x1d1494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1494) {
            ctx->pc = 0x1D14D4u;
            return;
        }
    }
    ctx->pc = 0x1D149Cu;
    // 0x1d149c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d149cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d14a0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D14A0u;
    {
        const bool branch_taken_0x1d14a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d14a0) {
            ctx->pc = 0x1D14B8u;
            return;
        }
    }
    ctx->pc = 0x1D14A8u;
    // 0x1d14a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D14A8u;
    {
        const bool branch_taken_0x1d14a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d14a8) {
            ctx->pc = 0x1D14B8u;
            return;
        }
    }
    ctx->pc = 0x1D14B0u;
    // 0x1d14b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D14B0u;
    {
        const bool branch_taken_0x1d14b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d14b0) {
            ctx->pc = 0x1D1518u;
            return;
        }
    }
    ctx->pc = 0x1D14B8u;
}
