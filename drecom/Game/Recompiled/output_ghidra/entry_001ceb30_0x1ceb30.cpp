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

// Function: entry_001ceb30
// Address: 0x1ceb30 - 0x1ceb6c
void entry_001ceb30_0x1ceb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceb30_0x1ceb30");
#endif

    ctx->pc = 0x1ceb30u;

    // 0x1ceb30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ceb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceb34: 0x8c441b60  lw          $a0, 0x1B60($v0)
    ctx->pc = 0x1ceb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x1ceb38: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CEB38u;
    {
        const bool branch_taken_0x1ceb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceb38) {
            ctx->pc = 0x1CEB6Cu;
            return;
        }
    }
    ctx->pc = 0x1CEB40u;
    // 0x1ceb40: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ceb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceb44: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1ceb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ceb48: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1ceb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x1ceb4c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1ceb4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1ceb50: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1ceb50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1ceb54: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1ceb54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceb58: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1ceb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ceb5c: 0x3c04fdff  lui         $a0, 0xFDFF
    ctx->pc = 0x1ceb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65023 << 16));
    // 0x1ceb60: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x1ceb60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1ceb64: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1ceb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ceb68: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1ceb68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1ceb6cu;
}
