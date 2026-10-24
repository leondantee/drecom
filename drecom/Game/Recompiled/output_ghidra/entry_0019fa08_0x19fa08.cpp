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

// Function: entry_0019fa08
// Address: 0x19fa08 - 0x19fa2c
void entry_0019fa08_0x19fa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fa08_0x19fa08");
#endif

    ctx->pc = 0x19fa08u;

    // 0x19fa08: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x19fa08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x19fa0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fa10: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FA10u;
    {
        const bool branch_taken_0x19fa10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19fa10) {
            ctx->pc = 0x19FA2Cu;
            return;
        }
    }
    ctx->pc = 0x19FA18u;
    // 0x19fa18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19fa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19fa1c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x19fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x19fa20: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x19fa20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x19fa24: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x19FA24u;
    {
        const bool branch_taken_0x19fa24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fa24) {
            ctx->pc = 0x19FB1Cu;
            return;
        }
    }
    ctx->pc = 0x19FA2Cu;
}
