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

// Function: entry_001eef80
// Address: 0x1eef80 - 0x1eefac
void entry_001eef80_0x1eef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eef80_0x1eef80");
#endif

    ctx->pc = 0x1eef80u;

    // 0x1eef80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1eef80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1eef84: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1eef84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1eef88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1eef88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1eef8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1eef8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1eef90: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEF90u;
    {
        const bool branch_taken_0x1eef90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eef90) {
            ctx->pc = 0x1EEFACu;
            return;
        }
    }
    ctx->pc = 0x1EEF98u;
    // 0x1eef98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1eef98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1eef9c: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x1eef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x1eefa0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1eefa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1eefa4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1eefa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1eefa8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1eefa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    ctx->pc = 0x1eefacu;
}
