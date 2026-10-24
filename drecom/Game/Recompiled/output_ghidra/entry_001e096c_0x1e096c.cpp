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

// Function: entry_001e096c
// Address: 0x1e096c - 0x1e0998
void entry_001e096c_0x1e096c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e096c_0x1e096c");
#endif

    ctx->pc = 0x1e096cu;

    // 0x1e096c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0970: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e0974: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e0974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0978: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1e0978u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e097c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E097Cu;
    {
        const bool branch_taken_0x1e097c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e097c) {
            ctx->pc = 0x1E0998u;
            return;
        }
    }
    ctx->pc = 0x1E0984u;
    // 0x1e0984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0988: 0x0  nop
    ctx->pc = 0x1e0988u;
    // NOP
    // 0x1e098c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e098cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0990: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0990u;
    {
        const bool branch_taken_0x1e0990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0990) {
            ctx->pc = 0x1E09B4u;
            return;
        }
    }
    ctx->pc = 0x1E0998u;
}
