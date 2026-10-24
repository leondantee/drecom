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

// Function: entry_001d1390
// Address: 0x1d1390 - 0x1d13d4
void entry_001d1390_0x1d1390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1390_0x1d1390");
#endif

    ctx->pc = 0x1d1390u;

    // 0x1d1390: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1394: 0x90630060  lbu         $v1, 0x60($v1)
    ctx->pc = 0x1d1394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1d1398: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d1398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d139c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1d139cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d13a0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1D13A0u;
    {
        const bool branch_taken_0x1d13a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d13a0) {
            ctx->pc = 0x1D1458u;
            return;
        }
    }
    ctx->pc = 0x1D13A8u;
    // 0x1d13a8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d13a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d13ac: 0x90830060  lbu         $v1, 0x60($a0)
    ctx->pc = 0x1d13acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1d13b0: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1d13b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1d13b4: 0xa0830060  sb          $v1, 0x60($a0)
    ctx->pc = 0x1d13b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d13b8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d13bc: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x1d13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1d13c0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d13c4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D13C4u;
    {
        const bool branch_taken_0x1d13c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d13c4) {
            ctx->pc = 0x1D13D4u;
            return;
        }
    }
    ctx->pc = 0x1D13CCu;
    // 0x1d13cc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1D13CCu;
    {
        const bool branch_taken_0x1d13cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d13cc) {
            ctx->pc = 0x1D1458u;
            return;
        }
    }
    ctx->pc = 0x1D13D4u;
}
