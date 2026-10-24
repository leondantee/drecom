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

// Function: entry_0025947c
// Address: 0x25947c - 0x25949c
void entry_0025947c_0x25947c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025947c_0x25947c");
#endif

    ctx->pc = 0x25947cu;

    // 0x25947c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x25947cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x259480: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x259480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x259484: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x259484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x259488: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x259488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x25948c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25948cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x259490: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x259490u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x259494: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x259494u;
    {
        const bool branch_taken_0x259494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259494) {
            ctx->pc = 0x2594F0u;
            return;
        }
    }
    ctx->pc = 0x25949Cu;
}
