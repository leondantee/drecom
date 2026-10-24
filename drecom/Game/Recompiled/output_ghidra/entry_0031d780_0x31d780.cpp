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

// Function: entry_0031d780
// Address: 0x31d780 - 0x31d7a8
void entry_0031d780_0x31d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d780_0x31d780");
#endif

    ctx->pc = 0x31d780u;

    // 0x31d780: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31d780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d784: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x31d784u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x31d788: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31d788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31d78c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d790: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x31D790u;
    {
        const bool branch_taken_0x31d790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d790) {
            ctx->pc = 0x31D830u;
            return;
        }
    }
    ctx->pc = 0x31D798u;
    // 0x31d798: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D798u;
    {
        const bool branch_taken_0x31d798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d798) {
            ctx->pc = 0x31D7A8u;
            return;
        }
    }
    ctx->pc = 0x31D7A0u;
    // 0x31d7a0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x31D7A0u;
    {
        const bool branch_taken_0x31d7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7a0) {
            ctx->pc = 0x31D8B0u;
            return;
        }
    }
    ctx->pc = 0x31D7A8u;
}
