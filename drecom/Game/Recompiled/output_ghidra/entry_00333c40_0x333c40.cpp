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

// Function: entry_00333c40
// Address: 0x333c40 - 0x333c64
void entry_00333c40_0x333c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333c40_0x333c40");
#endif

    ctx->pc = 0x333c40u;

    // 0x333c40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x333c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x333c44: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x333c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x333c48: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x333c48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x333c4c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x333c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x333c50: 0x3443103f  ori         $v1, $v0, 0x103F
    ctx->pc = 0x333c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x333c54: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x333c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x333c58: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x333c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x333c5c: 0x10000298  b           . + 4 + (0x298 << 2)
    ctx->pc = 0x333C5Cu;
    {
        const bool branch_taken_0x333c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333c5c) {
            ctx->pc = 0x3346C0u;
            return;
        }
    }
    ctx->pc = 0x333C64u;
}
