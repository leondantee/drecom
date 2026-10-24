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

// Function: entry_001848b8
// Address: 0x1848b8 - 0x1848dc
void entry_001848b8_0x1848b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001848b8_0x1848b8");
#endif

    ctx->pc = 0x1848b8u;

    // 0x1848b8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1848b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1848bc: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1848bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1848c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1848C0u;
    {
        const bool branch_taken_0x1848c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1848c0) {
            ctx->pc = 0x1848DCu;
            return;
        }
    }
    ctx->pc = 0x1848C8u;
    // 0x1848c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1848c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1848cc: 0x0  nop
    ctx->pc = 0x1848ccu;
    // NOP
    // 0x1848d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1848d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1848d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1848D4u;
    {
        const bool branch_taken_0x1848d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1848d4) {
            ctx->pc = 0x1848F8u;
            return;
        }
    }
    ctx->pc = 0x1848DCu;
}
