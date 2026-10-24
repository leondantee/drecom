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

// Function: entry_002f73bc
// Address: 0x2f73bc - 0x2f73dc
void entry_002f73bc_0x2f73bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f73bc_0x2f73bc");
#endif

    ctx->pc = 0x2f73bcu;

    // 0x2f73bc: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x2f73bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2f73c0: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x2f73c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f73c4: 0xa2030100  sb          $v1, 0x100($s0)
    ctx->pc = 0x2f73c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f73c8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f73c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f73cc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f73ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f73d0: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f73d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f73d4: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2F73D4u;
    {
        const bool branch_taken_0x2f73d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f73d4) {
            ctx->pc = 0x2F7690u;
            return;
        }
    }
    ctx->pc = 0x2F73DCu;
}
