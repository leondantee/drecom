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

// Function: entry_00342198
// Address: 0x342198 - 0x3421c0
void entry_00342198_0x342198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00342198_0x342198");
#endif

    ctx->pc = 0x342198u;

    // 0x342198: 0x8fb00118  lw          $s0, 0x118($sp)
    ctx->pc = 0x342198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34219c: 0x26021330  addiu       $v0, $s0, 0x1330
    ctx->pc = 0x34219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x3421a0: 0x84530068  lh          $s3, 0x68($v0)
    ctx->pc = 0x3421a0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x3421a4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3421A4u;
    {
        const bool branch_taken_0x3421a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3421a4) {
            ctx->pc = 0x3421C0u;
            return;
        }
    }
    ctx->pc = 0x3421ACu;
    // 0x3421ac: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3421acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3421b0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3421b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3421b4: 0x84620068  lh          $v0, 0x68($v1)
    ctx->pc = 0x3421b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x3421b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3421b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3421bc: 0xa4620068  sh          $v0, 0x68($v1)
    ctx->pc = 0x3421bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3421c0u;
}
