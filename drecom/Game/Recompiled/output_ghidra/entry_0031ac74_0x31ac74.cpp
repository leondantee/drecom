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

// Function: entry_0031ac74
// Address: 0x31ac74 - 0x31ac8c
void entry_0031ac74_0x31ac74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ac74_0x31ac74");
#endif

    ctx->pc = 0x31ac74u;

    // 0x31ac74: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x31ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x31ac78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ac78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ac7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ac80: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x31ac80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x31ac84: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31AC84u;
    {
        const bool branch_taken_0x31ac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ac84) {
            ctx->pc = 0x31ACCCu;
            return;
        }
    }
    ctx->pc = 0x31AC8Cu;
}
