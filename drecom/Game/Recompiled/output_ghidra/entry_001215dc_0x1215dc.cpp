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

// Function: entry_001215dc
// Address: 0x1215dc - 0x121608
void entry_001215dc_0x1215dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001215dc_0x1215dc");
#endif

    ctx->pc = 0x1215dcu;

    // 0x1215dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1215dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1215e0: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x1215e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1215e4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1215e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1215e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1215e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1215ec: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1215ECu;
    {
        const bool branch_taken_0x1215ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1215ec) {
            ctx->pc = 0x121608u;
            return;
        }
    }
    ctx->pc = 0x1215F4u;
    // 0x1215f4: 0x32630020  andi        $v1, $s3, 0x20
    ctx->pc = 0x1215f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
    // 0x1215f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1215F8u;
    {
        const bool branch_taken_0x1215f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1215f8) {
            ctx->pc = 0x121608u;
            return;
        }
    }
    ctx->pc = 0x121600u;
    // 0x121600: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121604: 0xa46010a6  sh          $zero, 0x10A6($v1)
    ctx->pc = 0x121604u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x121608u;
}
