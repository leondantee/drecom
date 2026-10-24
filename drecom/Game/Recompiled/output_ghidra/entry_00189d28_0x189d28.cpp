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

// Function: entry_00189d28
// Address: 0x189d28 - 0x189d44
void entry_00189d28_0x189d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189d28_0x189d28");
#endif

    ctx->pc = 0x189d28u;

    // 0x189d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189d2c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189d30: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x189d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
    // 0x189d34: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189d38: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x189d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x189d3c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x189D3Cu;
    {
        const bool branch_taken_0x189d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189d3c) {
            ctx->pc = 0x189FD0u;
            return;
        }
    }
    ctx->pc = 0x189D44u;
}
