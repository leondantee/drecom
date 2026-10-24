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

// Function: entry_002841bc
// Address: 0x2841bc - 0x2841d8
void entry_002841bc_0x2841bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002841bc_0x2841bc");
#endif

    ctx->pc = 0x2841bcu;

    // 0x2841bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2841bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2841c0: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x2841c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x2841c4: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x2841c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2841c8: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x2841c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x2841cc: 0xae001334  sw          $zero, 0x1334($s0)
    ctx->pc = 0x2841ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 0));
    // 0x2841d0: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2841D0u;
    {
        const bool branch_taken_0x2841d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2841d0) {
            ctx->pc = 0x284458u;
            return;
        }
    }
    ctx->pc = 0x2841D8u;
}
