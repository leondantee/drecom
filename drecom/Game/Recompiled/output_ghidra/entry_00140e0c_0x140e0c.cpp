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

// Function: entry_00140e0c
// Address: 0x140e0c - 0x140e48
void entry_00140e0c_0x140e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140e0c_0x140e0c");
#endif

    ctx->pc = 0x140e0cu;

    // 0x140e0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140e10: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x140e10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x140e14: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x140E14u;
    {
        const bool branch_taken_0x140e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140e14) {
            ctx->pc = 0x140E48u;
            return;
        }
    }
    ctx->pc = 0x140E1Cu;
    // 0x140e1c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140e20: 0x8c23efac  lw          $v1, -0x1054($at)
    ctx->pc = 0x140e20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFACu));
    // 0x140e24: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x140E24u;
    {
        const bool branch_taken_0x140e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140e24) {
            ctx->pc = 0x140E48u;
            return;
        }
    }
    ctx->pc = 0x140E2Cu;
    // 0x140e2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140e30: 0x8c238ef0  lw          $v1, -0x7110($at)
    ctx->pc = 0x140e30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E8EF0u));
    // 0x140e34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x140e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x140e38: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140e3c: 0xac238ef0  sw          $v1, -0x7110($at)
    ctx->pc = 0x140e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E8EF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8EF0u, _value); } while (0);
    // 0x140e40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x140E40u;
    {
        const bool branch_taken_0x140e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140e40) {
            ctx->pc = 0x140E50u;
            return;
        }
    }
    ctx->pc = 0x140E48u;
}
