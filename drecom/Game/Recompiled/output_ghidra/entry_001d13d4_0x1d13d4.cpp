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

// Function: entry_001d13d4
// Address: 0x1d13d4 - 0x1d1414
void entry_001d13d4_0x1d13d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d13d4_0x1d13d4");
#endif

    ctx->pc = 0x1d13d4u;

    // 0x1d13d4: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1d13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d13d8: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1d13d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1d13dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d13dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d13e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d13e4: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D13E4u;
    {
        const bool branch_taken_0x1d13e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d13e4) {
            ctx->pc = 0x1D1458u;
            return;
        }
    }
    ctx->pc = 0x1D13ECu;
    // 0x1d13ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d13ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d13f0: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D13F0u;
    {
        const bool branch_taken_0x1d13f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d13f0) {
            ctx->pc = 0x1D1458u;
            return;
        }
    }
    ctx->pc = 0x1D13F8u;
    // 0x1d13f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d13fc: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D13FCu;
    {
        const bool branch_taken_0x1d13fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d13fc) {
            ctx->pc = 0x1D1414u;
            return;
        }
    }
    ctx->pc = 0x1D1404u;
    // 0x1d1404: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1404u;
    {
        const bool branch_taken_0x1d1404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1404) {
            ctx->pc = 0x1D1414u;
            return;
        }
    }
    ctx->pc = 0x1D140Cu;
    // 0x1d140c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D140Cu;
    {
        const bool branch_taken_0x1d140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d140c) {
            ctx->pc = 0x1D1414u;
            return;
        }
    }
    ctx->pc = 0x1D1414u;
}
