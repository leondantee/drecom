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

// Function: entry_003118b4
// Address: 0x3118b4 - 0x3118dc
void entry_003118b4_0x3118b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003118b4_0x3118b4");
#endif

    ctx->pc = 0x3118b4u;

    // 0x3118b4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3118b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3118b8: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x3118b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3118bc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3118bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3118c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3118C0u;
    {
        const bool branch_taken_0x3118c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3118c0) {
            ctx->pc = 0x3118DCu;
            return;
        }
    }
    ctx->pc = 0x3118C8u;
    // 0x3118c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3118c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3118cc: 0x0  nop
    ctx->pc = 0x3118ccu;
    // NOP
    // 0x3118d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3118d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3118d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3118D4u;
    {
        const bool branch_taken_0x3118d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3118d4) {
            ctx->pc = 0x3118F8u;
            return;
        }
    }
    ctx->pc = 0x3118DCu;
}
