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

// Function: entry_003032e8
// Address: 0x3032e8 - 0x303308
void entry_003032e8_0x3032e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003032e8_0x3032e8");
#endif

    ctx->pc = 0x3032e8u;

    // 0x3032e8: 0x3c033f3b  lui         $v1, 0x3F3B
    ctx->pc = 0x3032e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16187 << 16));
    // 0x3032ec: 0x3463a866  ori         $v1, $v1, 0xA866
    ctx->pc = 0x3032ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43110);
    // 0x3032f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3032f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3032f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3032f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3032f8: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x3032f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x3032fc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3032fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x303300: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x303300u;
    {
        const bool branch_taken_0x303300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303300) {
            ctx->pc = 0x303320u;
            return;
        }
    }
    ctx->pc = 0x303308u;
}
