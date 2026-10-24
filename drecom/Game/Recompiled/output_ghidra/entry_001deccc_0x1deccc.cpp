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

// Function: entry_001deccc
// Address: 0x1deccc - 0x1decec
void entry_001deccc_0x1deccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001deccc_0x1deccc");
#endif

    ctx->pc = 0x1decccu;

    // 0x1deccc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1decccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1decd0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1decd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1decd4: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1decd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1decd8: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x1decd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x1decdc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1decdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dece0: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1dece0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1dece4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1DECE4u;
    {
        const bool branch_taken_0x1dece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dece4) {
            ctx->pc = 0x1DED38u;
            return;
        }
    }
    ctx->pc = 0x1DECECu;
}
