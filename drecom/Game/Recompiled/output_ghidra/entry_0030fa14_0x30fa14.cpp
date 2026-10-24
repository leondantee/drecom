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

// Function: entry_0030fa14
// Address: 0x30fa14 - 0x30fa3c
void entry_0030fa14_0x30fa14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fa14_0x30fa14");
#endif

    ctx->pc = 0x30fa14u;

    // 0x30fa14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa18: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30fa18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30fa1c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30fa1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30fa20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fa24: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30FA24u;
    {
        const bool branch_taken_0x30fa24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30fa24) {
            ctx->pc = 0x30FA74u;
            return;
        }
    }
    ctx->pc = 0x30FA2Cu;
    // 0x30fa2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FA2Cu;
    {
        const bool branch_taken_0x30fa2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fa2c) {
            ctx->pc = 0x30FA3Cu;
            return;
        }
    }
    ctx->pc = 0x30FA34u;
    // 0x30fa34: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x30FA34u;
    {
        const bool branch_taken_0x30fa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fa34) {
            ctx->pc = 0x30FB14u;
            return;
        }
    }
    ctx->pc = 0x30FA3Cu;
}
