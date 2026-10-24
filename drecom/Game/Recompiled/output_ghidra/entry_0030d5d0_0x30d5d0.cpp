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

// Function: entry_0030d5d0
// Address: 0x30d5d0 - 0x30d5f0
void entry_0030d5d0_0x30d5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d5d0_0x30d5d0");
#endif

    ctx->pc = 0x30d5d0u;

    // 0x30d5d0: 0x3c03bf3b  lui         $v1, 0xBF3B
    ctx->pc = 0x30d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48955 << 16));
    // 0x30d5d4: 0x3463a866  ori         $v1, $v1, 0xA866
    ctx->pc = 0x30d5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43110);
    // 0x30d5d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30d5d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d5dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d5e0: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x30d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x30d5e4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30d5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x30d5e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30D5E8u;
    {
        const bool branch_taken_0x30d5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d5e8) {
            ctx->pc = 0x30D608u;
            return;
        }
    }
    ctx->pc = 0x30D5F0u;
}
