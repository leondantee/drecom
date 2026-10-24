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

// Function: entry_002fae84
// Address: 0x2fae84 - 0x2faeac
void entry_002fae84_0x2fae84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fae84_0x2fae84");
#endif

    ctx->pc = 0x2fae84u;

    // 0x2fae84: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2fae84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fae88: 0x8ce600d4  lw          $a2, 0xD4($a3)
    ctx->pc = 0x2fae88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x2fae8c: 0x28c60032  slti        $a2, $a2, 0x32
    ctx->pc = 0x2fae8cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2fae90: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAE90u;
    {
        const bool branch_taken_0x2fae90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fae90) {
            ctx->pc = 0x2FAEACu;
            return;
        }
    }
    ctx->pc = 0x2FAE98u;
    // 0x2fae98: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2fae98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fae9c: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x2fae9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2faea0: 0x39460010  xori        $a2, $t2, 0x10
    ctx->pc = 0x2faea0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)16);
    // 0x2faea4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2faea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2faea8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2faea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x2faeacu;
}
