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

// Function: entry_002f8058
// Address: 0x2f8058 - 0x2f8074
void entry_002f8058_0x2f8058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8058_0x2f8058");
#endif

    ctx->pc = 0x2f8058u;

    // 0x2f8058: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2f8058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f805c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f805cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f8060: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f8060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f8064: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8068: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f8068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2f806c: 0x100002c0  b           . + 4 + (0x2C0 << 2)
    ctx->pc = 0x2F806Cu;
    {
        const bool branch_taken_0x2f806c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f806c) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F8074u;
}
