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

// Function: entry_00135f50
// Address: 0x135f50 - 0x135f74
void entry_00135f50_0x135f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135f50_0x135f50");
#endif

    ctx->pc = 0x135f50u;

    // 0x135f50: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x135f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135f54: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x135f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135f58: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x135f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x135f5c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x135f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x135f60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x135f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x135f64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x135f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x135f68: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x135f68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x135f6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x135F6Cu;
    {
        const bool branch_taken_0x135f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f6c) {
            ctx->pc = 0x135FACu;
            return;
        }
    }
    ctx->pc = 0x135F74u;
}
