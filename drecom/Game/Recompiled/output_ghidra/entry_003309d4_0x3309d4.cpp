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

// Function: entry_003309d4
// Address: 0x3309d4 - 0x330a08
void entry_003309d4_0x3309d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003309d4_0x3309d4");
#endif

    ctx->pc = 0x3309d4u;

    // 0x3309d4: 0x3c074248  lui         $a3, 0x4248
    ctx->pc = 0x3309d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16968 << 16));
    // 0x3309d8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3309d8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3309dc: 0x0  nop
    ctx->pc = 0x3309dcu;
    // NOP
    // 0x3309e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3309e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3309e4: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x3309e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
    // 0x3309e8: 0x96c20004  lhu         $v0, 0x4($s6)
    ctx->pc = 0x3309e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x3309ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3309ECu;
    {
        const bool branch_taken_0x3309ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3309ec) {
            ctx->pc = 0x330A08u;
            return;
        }
    }
    ctx->pc = 0x3309F4u;
    // 0x3309f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3309f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3309f8: 0x0  nop
    ctx->pc = 0x3309f8u;
    // NOP
    // 0x3309fc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3309fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x330a00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x330A00u;
    {
        const bool branch_taken_0x330a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330a00) {
            ctx->pc = 0x330A24u;
            return;
        }
    }
    ctx->pc = 0x330A08u;
}
