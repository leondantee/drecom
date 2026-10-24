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

// Function: entry_001d2744
// Address: 0x1d2744 - 0x1d276c
void entry_001d2744_0x1d2744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2744_0x1d2744");
#endif

    ctx->pc = 0x1d2744u;

    // 0x1d2744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2748: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1d2748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1d274c: 0x2c631fff  sltiu       $v1, $v1, 0x1FFF
    ctx->pc = 0x1d274cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8191) ? 1 : 0);
    // 0x1d2750: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2750u;
    {
        const bool branch_taken_0x1d2750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2750) {
            ctx->pc = 0x1D276Cu;
            return;
        }
    }
    ctx->pc = 0x1D2758u;
    // 0x1d2758: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d275c: 0xac6000a4  sw          $zero, 0xA4($v1)
    ctx->pc = 0x1d275cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
    // 0x1d2760: 0x240407f0  addiu       $a0, $zero, 0x7F0
    ctx->pc = 0x1d2760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    // 0x1d2764: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2768: 0xac6400d4  sw          $a0, 0xD4($v1)
    ctx->pc = 0x1d2768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 4));
    ctx->pc = 0x1d276cu;
}
