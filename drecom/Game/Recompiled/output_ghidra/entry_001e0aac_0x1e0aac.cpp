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

// Function: entry_001e0aac
// Address: 0x1e0aac - 0x1e0ad8
void entry_001e0aac_0x1e0aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0aac_0x1e0aac");
#endif

    ctx->pc = 0x1e0aacu;

    // 0x1e0aac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ab0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e0ab4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0ab8: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1e0ab8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1e0abc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0ABCu;
    {
        const bool branch_taken_0x1e0abc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e0abc) {
            ctx->pc = 0x1E0AD8u;
            return;
        }
    }
    ctx->pc = 0x1E0AC4u;
    // 0x1e0ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0ac8: 0x0  nop
    ctx->pc = 0x1e0ac8u;
    // NOP
    // 0x1e0acc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0ad0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0AD0u;
    {
        const bool branch_taken_0x1e0ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ad0) {
            ctx->pc = 0x1E0AF4u;
            return;
        }
    }
    ctx->pc = 0x1E0AD8u;
}
