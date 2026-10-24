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

// Function: entry_00311870
// Address: 0x311870 - 0x311898
void entry_00311870_0x311870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00311870_0x311870");
#endif

    ctx->pc = 0x311870u;

    // 0x311870: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x311870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x311874: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x311874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x311878: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x311878u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x31187c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31187Cu;
    {
        const bool branch_taken_0x31187c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x31187c) {
            ctx->pc = 0x311898u;
            return;
        }
    }
    ctx->pc = 0x311884u;
    // 0x311884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311888: 0x0  nop
    ctx->pc = 0x311888u;
    // NOP
    // 0x31188c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31188cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x311890: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x311890u;
    {
        const bool branch_taken_0x311890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311890) {
            ctx->pc = 0x3118B4u;
            return;
        }
    }
    ctx->pc = 0x311898u;
}
