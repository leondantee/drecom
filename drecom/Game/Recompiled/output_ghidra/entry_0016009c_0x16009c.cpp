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

// Function: entry_0016009c
// Address: 0x16009c - 0x1600c0
void entry_0016009c_0x16009c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016009c_0x16009c");
#endif

    ctx->pc = 0x16009cu;

    // 0x16009c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1600a0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1600a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1600a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1600A4u;
    {
        const bool branch_taken_0x1600a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1600a4) {
            ctx->pc = 0x1600C0u;
            return;
        }
    }
    ctx->pc = 0x1600ACu;
    // 0x1600ac: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1600acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x1600b0: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1600b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1600b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1600b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1600b8: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x1600B8u;
    {
        const bool branch_taken_0x1600b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1600b8) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x1600C0u;
}
