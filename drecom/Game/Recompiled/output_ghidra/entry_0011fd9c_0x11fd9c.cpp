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

// Function: entry_0011fd9c
// Address: 0x11fd9c - 0x11fdc0
void entry_0011fd9c_0x11fd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd9c_0x11fd9c");
#endif

    ctx->pc = 0x11fd9cu;

    // 0x11fd9c: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x11fd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11fda0: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x11fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x11fda4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11fda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11fda8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x11fda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11fdac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11FDACu;
    {
        const bool branch_taken_0x11fdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDACu;
        // 0x11fdb0: 0x3c053fff  lui         $a1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdac) {
            ctx->pc = 0x11FDE4u;
            return;
        }
    }
    ctx->pc = 0x11FDB4u;
    // 0x11fdb4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x11fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11fdb8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x11fdb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x11fdbc: 0x0  nop
    ctx->pc = 0x11fdbcu;
    // NOP
    ctx->pc = 0x11fdc0u;
}
