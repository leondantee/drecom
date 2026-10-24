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

// Function: entry_001c7424
// Address: 0x1c7424 - 0x1c7450
void entry_001c7424_0x1c7424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7424_0x1c7424");
#endif

    ctx->pc = 0x1c7424u;

    // 0x1c7424: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7428: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c7428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c742c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1c742cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1c7430: 0x653024  and         $a2, $v1, $a1
    ctx->pc = 0x1c7430u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1c7434: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7434u;
    {
        const bool branch_taken_0x1c7434 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7434) {
            ctx->pc = 0x1C7450u;
            return;
        }
    }
    ctx->pc = 0x1C743Cu;
    // 0x1c743c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1c743cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c7440: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c7440u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7444: 0xa1070002  sb          $a3, 0x2($t0)
    ctx->pc = 0x1c7444u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x1c7448: 0x100003c6  b           . + 4 + (0x3C6 << 2)
    ctx->pc = 0x1C7448u;
    {
        const bool branch_taken_0x1c7448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7448) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C7450u;
}
