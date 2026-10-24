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

// Function: entry_0025b48c
// Address: 0x25b48c - 0x25b4b4
void entry_0025b48c_0x25b48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b48c_0x25b48c");
#endif

    ctx->pc = 0x25b48cu;

    // 0x25b48c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b490: 0x8c6209f8  lw          $v0, 0x9F8($v1)
    ctx->pc = 0x25b490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2552)));
    // 0x25b494: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x25b494u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b498: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x25B498u;
    {
        const bool branch_taken_0x25b498 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x25b498) {
            ctx->pc = 0x25B4B4u;
            return;
        }
    }
    ctx->pc = 0x25B4A0u;
    // 0x25b4a0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x25b4a0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b4a4: 0x0  nop
    ctx->pc = 0x25b4a4u;
    // NOP
    // 0x25b4a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25b4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b4ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25B4ACu;
    {
        const bool branch_taken_0x25b4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b4ac) {
            ctx->pc = 0x25B4D0u;
            return;
        }
    }
    ctx->pc = 0x25B4B4u;
}
