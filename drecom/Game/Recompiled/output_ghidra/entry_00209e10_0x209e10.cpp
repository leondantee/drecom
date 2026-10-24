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

// Function: entry_00209e10
// Address: 0x209e10 - 0x209e28
void entry_00209e10_0x209e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209e10_0x209e10");
#endif

    ctx->pc = 0x209e10u;

    // 0x209e10: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x209e10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x209e14: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x209e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x209e18: 0x24a693e0  addiu       $a2, $a1, -0x6C20
    ctx->pc = 0x209e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939616));
    // 0x209e1c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x209e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x209e20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x209e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x209e24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x209e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x209e28u;
}
