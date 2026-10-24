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

// Function: entry_0015fe38
// Address: 0x15fe38 - 0x15fe6c
void entry_0015fe38_0x15fe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fe38_0x15fe38");
#endif

    ctx->pc = 0x15fe38u;

    // 0x15fe38: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15fe3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15fe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15fe40: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15FE40u;
    {
        const bool branch_taken_0x15fe40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fe40) {
            ctx->pc = 0x15FE6Cu;
            return;
        }
    }
    ctx->pc = 0x15FE48u;
    // 0x15fe48: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15fe4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15fe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15fe50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FE50u;
    {
        const bool branch_taken_0x15fe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fe50) {
            ctx->pc = 0x15FE6Cu;
            return;
        }
    }
    ctx->pc = 0x15FE58u;
    // 0x15fe58: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15fe5c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15fe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15fe60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fe60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fe64: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x15FE64u;
    {
        const bool branch_taken_0x15fe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe64) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x15FE6Cu;
}
