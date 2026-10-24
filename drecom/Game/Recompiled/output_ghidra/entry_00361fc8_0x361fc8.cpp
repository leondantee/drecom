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

// Function: entry_00361fc8
// Address: 0x361fc8 - 0x362000
void entry_00361fc8_0x361fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361fc8_0x361fc8");
#endif

    ctx->pc = 0x361fc8u;

    // 0x361fc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x361fc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x361fcc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x361fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x361fd0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x361fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x361fd4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x361fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361fd8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x361fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x361fdc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x361fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361fe0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x361fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x361fe4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x361FE4u;
    {
        const bool branch_taken_0x361fe4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x361fe4) {
            ctx->pc = 0x362000u;
            return;
        }
    }
    ctx->pc = 0x361FECu;
    // 0x361fec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x361fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x361ff0: 0x0  nop
    ctx->pc = 0x361ff0u;
    // NOP
    // 0x361ff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x361ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x361ff8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x361FF8u;
    {
        const bool branch_taken_0x361ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361ff8) {
            ctx->pc = 0x36201Cu;
            return;
        }
    }
    ctx->pc = 0x362000u;
}
