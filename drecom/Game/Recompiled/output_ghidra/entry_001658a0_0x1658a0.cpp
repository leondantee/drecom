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

// Function: entry_001658a0
// Address: 0x1658a0 - 0x1658e0
void entry_001658a0_0x1658a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001658a0_0x1658a0");
#endif

    ctx->pc = 0x1658a0u;

label_1658a0:
    // 0x1658a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1658a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1658a4: 0x8c235890  lw          $v1, 0x5890($at)
    ctx->pc = 0x1658a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F5890u));
    // 0x1658a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1658a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1658ac: 0x8c225a00  lw          $v0, 0x5A00($at)
    ctx->pc = 0x1658acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5A00u));
    // 0x1658b0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1658b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1658b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1658B4u;
    {
        const bool branch_taken_0x1658b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1658b4) {
            ctx->pc = 0x1658A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1658a0;
        }
    }
    ctx->pc = 0x1658BCu;
    // 0x1658bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1658bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1658c0: 0x8c225a04  lw          $v0, 0x5A04($at)
    ctx->pc = 0x1658c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5A04u));
    // 0x1658c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1658C4u;
    {
        const bool branch_taken_0x1658c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658c4) {
            ctx->pc = 0x1658E0u;
            return;
        }
    }
    ctx->pc = 0x1658CCu;
    // 0x1658cc: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1658ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1658d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1658d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1658d4: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x1658d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x1658d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1658D8u;
    {
        const bool branch_taken_0x1658d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658d8) {
            ctx->pc = 0x165900u;
            return;
        }
    }
    ctx->pc = 0x1658E0u;
}
