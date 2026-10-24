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

// Function: entry_002f3dc8
// Address: 0x2f3dc8 - 0x2f3dec
void entry_002f3dc8_0x2f3dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f3dc8_0x2f3dc8");
#endif

    ctx->pc = 0x2f3dc8u;

    // 0x2f3dc8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f3dcc: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f3dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f3dd0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3DD0u;
    {
        const bool branch_taken_0x2f3dd0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f3dd0) {
            ctx->pc = 0x2F3DECu;
            return;
        }
    }
    ctx->pc = 0x2F3DD8u;
    // 0x2f3dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3ddc: 0x0  nop
    ctx->pc = 0x2f3ddcu;
    // NOP
    // 0x2f3de0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f3de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f3de4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3DE4u;
    {
        const bool branch_taken_0x2f3de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3de4) {
            ctx->pc = 0x2F3E08u;
            return;
        }
    }
    ctx->pc = 0x2F3DECu;
}
