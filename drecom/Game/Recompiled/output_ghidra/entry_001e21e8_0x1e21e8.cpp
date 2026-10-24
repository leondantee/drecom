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

// Function: entry_001e21e8
// Address: 0x1e21e8 - 0x1e2224
void entry_001e21e8_0x1e21e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e21e8_0x1e21e8");
#endif

    ctx->pc = 0x1e21e8u;

    // 0x1e21e8: 0x8fa30248  lw          $v1, 0x248($sp)
    ctx->pc = 0x1e21e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1e21ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e21f0: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x1e21f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
    // 0x1e21f4: 0x1460fe58  bnez        $v1, . + 4 + (-0x1A8 << 2)
    ctx->pc = 0x1E21F4u;
    {
        const bool branch_taken_0x1e21f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e21f4) {
            ctx->pc = 0x1E1B58u;
            return;
        }
    }
    ctx->pc = 0x1E21FCu;
    // 0x1e21fc: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x1e21fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x1e2200: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x1e2200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e2204: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e2204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e2208: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2208u;
    {
        const bool branch_taken_0x1e2208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e2208) {
            ctx->pc = 0x1E2224u;
            return;
        }
    }
    ctx->pc = 0x1E2210u;
    // 0x1e2210: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x1e2210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e2214: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e2214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e2218: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e2218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e221c: 0x839824  and         $s3, $a0, $v1
    ctx->pc = 0x1e221cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e2220: 0xacb30024  sw          $s3, 0x24($a1)
    ctx->pc = 0x1e2220u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 19));
    ctx->pc = 0x1e2224u;
}
