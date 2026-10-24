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

// Function: entry_0017b590
// Address: 0x17b590 - 0x17b5ac
void entry_0017b590_0x17b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b590_0x17b590");
#endif

    ctx->pc = 0x17b590u;

    // 0x17b590: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b594: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b598: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B598u;
    {
        const bool branch_taken_0x17b598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b598) {
            ctx->pc = 0x17B5ACu;
            return;
        }
    }
    ctx->pc = 0x17B5A0u;
    // 0x17b5a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b5a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b5a4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b5a8: 0xe420ef10  swc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF10u, _value); } while (0); }
    ctx->pc = 0x17b5acu;
}
