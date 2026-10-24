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

// Function: entry_00160068
// Address: 0x160068 - 0x16009c
void entry_00160068_0x160068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160068_0x160068");
#endif

    ctx->pc = 0x160068u;

    // 0x160068: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x160068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16006c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x160070: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x160070u;
    {
        const bool branch_taken_0x160070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160070) {
            ctx->pc = 0x16009Cu;
            return;
        }
    }
    ctx->pc = 0x160078u;
    // 0x160078: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x160078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16007c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16007cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x160080: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x160080u;
    {
        const bool branch_taken_0x160080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160080) {
            ctx->pc = 0x16009Cu;
            return;
        }
    }
    ctx->pc = 0x160088u;
    // 0x160088: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x16008c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x16008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x160090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160094: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x160094u;
    {
        const bool branch_taken_0x160094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160094) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x16009Cu;
}
