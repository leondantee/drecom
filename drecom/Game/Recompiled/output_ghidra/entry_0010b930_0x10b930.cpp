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

// Function: entry_0010b930
// Address: 0x10b930 - 0x10b960
void entry_0010b930_0x10b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b930_0x10b930");
#endif

    ctx->pc = 0x10b930u;

label_10b930:
    // 0x10b930: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b934: 0x0  nop
    ctx->pc = 0x10b934u;
    // NOP
    // 0x10b938: 0x0  nop
    ctx->pc = 0x10b938u;
    // NOP
    // 0x10b93c: 0x0  nop
    ctx->pc = 0x10b93cu;
    // NOP
    // 0x10b940: 0x0  nop
    ctx->pc = 0x10b940u;
    // NOP
    // 0x10b944: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B944u;
    {
        const bool branch_taken_0x10b944 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b944) {
            ctx->pc = 0x10B930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b930;
        }
    }
    ctx->pc = 0x10B94Cu;
    // 0x10b94c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b950: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b954: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10b954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10b958: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10b958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10b95c: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x10b95cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 12));
    ctx->pc = 0x10b960u;
}
