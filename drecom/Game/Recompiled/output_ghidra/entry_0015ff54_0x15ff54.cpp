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

// Function: entry_0015ff54
// Address: 0x15ff54 - 0x15ff88
void entry_0015ff54_0x15ff54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ff54_0x15ff54");
#endif

    ctx->pc = 0x15ff54u;

    // 0x15ff54: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15ff58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ff58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15ff5c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15FF5Cu;
    {
        const bool branch_taken_0x15ff5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ff5c) {
            ctx->pc = 0x15FF88u;
            return;
        }
    }
    ctx->pc = 0x15FF64u;
    // 0x15ff64: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15ff68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15ff68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15ff6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FF6Cu;
    {
        const bool branch_taken_0x15ff6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ff6c) {
            ctx->pc = 0x15FF88u;
            return;
        }
    }
    ctx->pc = 0x15FF74u;
    // 0x15ff74: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15ff78: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15ff78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15ff7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ff7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ff80: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x15FF80u;
    {
        const bool branch_taken_0x15ff80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff80) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x15FF88u;
}
