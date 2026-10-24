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

// Function: entry_002f6064
// Address: 0x2f6064 - 0x2f6088
void entry_002f6064_0x2f6064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6064_0x2f6064");
#endif

    ctx->pc = 0x2f6064u;

    // 0x2f6064: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f6064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6068: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2f6068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f606c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6070: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6070u;
    {
        const bool branch_taken_0x2f6070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6070) {
            ctx->pc = 0x2F6088u;
            return;
        }
    }
    ctx->pc = 0x2F6078u;
    // 0x2f6078: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f6078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f607c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f607cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6080: 0x0  nop
    ctx->pc = 0x2f6080u;
    // NOP
    // 0x2f6084: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2f6084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x2f6088u;
}
