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

// Function: entry_001a2698
// Address: 0x1a2698 - 0x1a26c0
void entry_001a2698_0x1a2698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2698_0x1a2698");
#endif

    ctx->pc = 0x1a2698u;

    // 0x1a2698: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a269c: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x1a269cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x1a26a0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1a26a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1a26a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A26A4u;
    {
        const bool branch_taken_0x1a26a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a26a4) {
            ctx->pc = 0x1A26C0u;
            return;
        }
    }
    ctx->pc = 0x1A26ACu;
    // 0x1a26ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a26acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a26b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a26b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a26b4: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1a26b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1a26b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A26B8u;
    {
        const bool branch_taken_0x1a26b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a26b8) {
            ctx->pc = 0x1A26C8u;
            return;
        }
    }
    ctx->pc = 0x1A26C0u;
}
