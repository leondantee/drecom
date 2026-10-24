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

// Function: entry_00191be4
// Address: 0x191be4 - 0x191c08
void entry_00191be4_0x191be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191be4_0x191be4");
#endif

    ctx->pc = 0x191be4u;

    // 0x191be4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191be8: 0x8c370af0  lw          $s7, 0xAF0($at)
    ctx->pc = 0x191be8u;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x191bec: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x191BECu;
    {
        const bool branch_taken_0x191bec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x191bec) {
            ctx->pc = 0x191C08u;
            return;
        }
    }
    ctx->pc = 0x191BF4u;
    // 0x191bf4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x191bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x191bf8: 0x2442df50  addiu       $v0, $v0, -0x20B0
    ctx->pc = 0x191bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x191bfc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x191bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x191c00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x191C00u;
    {
        const bool branch_taken_0x191c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c00) {
            ctx->pc = 0x191C14u;
            return;
        }
    }
    ctx->pc = 0x191C08u;
}
