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

// Function: entry_001d50a0
// Address: 0x1d50a0 - 0x1d50d4
void entry_001d50a0_0x1d50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d50a0_0x1d50a0");
#endif

    ctx->pc = 0x1d50a0u;

    // 0x1d50a0: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x1d50a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d50a4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d50a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d50a8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D50A8u;
    {
        const bool branch_taken_0x1d50a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d50a8) {
            ctx->pc = 0x1D50D4u;
            return;
        }
    }
    ctx->pc = 0x1D50B0u;
    // 0x1d50b0: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1d50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1d50b4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d50b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d50b8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D50B8u;
    {
        const bool branch_taken_0x1d50b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d50b8) {
            ctx->pc = 0x1D50D4u;
            return;
        }
    }
    ctx->pc = 0x1D50C0u;
    // 0x1d50c0: 0x8e6400bc  lw          $a0, 0xBC($s3)
    ctx->pc = 0x1d50c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x1d50c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d50c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d50c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d50c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d50cc: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1D50CCu;
    {
        const bool branch_taken_0x1d50cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d50cc) {
            ctx->pc = 0x1D5250u;
            return;
        }
    }
    ctx->pc = 0x1D50D4u;
}
