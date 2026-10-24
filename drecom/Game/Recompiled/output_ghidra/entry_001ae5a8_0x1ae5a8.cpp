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

// Function: entry_001ae5a8
// Address: 0x1ae5a8 - 0x1ae5f4
void entry_001ae5a8_0x1ae5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae5a8_0x1ae5a8");
#endif

    ctx->pc = 0x1ae5a8u;

    // 0x1ae5a8: 0x0  nop
    ctx->pc = 0x1ae5a8u;
    // NOP
    // 0x1ae5ac: 0x0  nop
    ctx->pc = 0x1ae5acu;
    // NOP
    // 0x1ae5b0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ae5b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae5b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae5b8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae5bc: 0xc420b510  lwc1        $f0, -0x4AF0($at)
    ctx->pc = 0x1ae5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae5c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ae5c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ae5c4: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae5c8: 0xe420efe0  swc1        $f0, -0x1020($at)
    ctx->pc = 0x1ae5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5EEFE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5EEFE0u, _value); } while (0); }
    // 0x1ae5cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae5d0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae5d4: 0x9422b504  lhu         $v0, -0x4AFC($at)
    ctx->pc = 0x1ae5d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948100)));
    // 0x1ae5d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE5D8u;
    {
        const bool branch_taken_0x1ae5d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ae5d8) {
            ctx->pc = 0x1AE5F4u;
            return;
        }
    }
    ctx->pc = 0x1AE5E0u;
    // 0x1ae5e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae5e4: 0x0  nop
    ctx->pc = 0x1ae5e4u;
    // NOP
    // 0x1ae5e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ae5e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae5ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE5ECu;
    {
        const bool branch_taken_0x1ae5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae5ec) {
            ctx->pc = 0x1AE610u;
            return;
        }
    }
    ctx->pc = 0x1AE5F4u;
}
