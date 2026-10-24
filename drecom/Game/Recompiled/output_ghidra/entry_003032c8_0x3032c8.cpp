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

// Function: entry_003032c8
// Address: 0x3032c8 - 0x3032e8
void entry_003032c8_0x3032c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003032c8_0x3032c8");
#endif

    ctx->pc = 0x3032c8u;

    // 0x3032c8: 0x3c03bf3b  lui         $v1, 0xBF3B
    ctx->pc = 0x3032c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48955 << 16));
    // 0x3032cc: 0x3463a866  ori         $v1, $v1, 0xA866
    ctx->pc = 0x3032ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43110);
    // 0x3032d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3032d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3032d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3032d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3032d8: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x3032d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x3032dc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3032dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3032e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3032E0u;
    {
        const bool branch_taken_0x3032e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3032e0) {
            ctx->pc = 0x303320u;
            return;
        }
    }
    ctx->pc = 0x3032E8u;
}
