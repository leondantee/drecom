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

// Function: entry_0036207c
// Address: 0x36207c - 0x3620b4
void entry_0036207c_0x36207c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036207c_0x36207c");
#endif

    ctx->pc = 0x36207cu;

    // 0x36207c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36207cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x362080: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x362080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x362084: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x362084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x362088: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x362088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36208c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x36208cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x362090: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x362090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362094: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x362094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x362098: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x362098u;
    {
        const bool branch_taken_0x362098 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x362098) {
            ctx->pc = 0x3620B4u;
            return;
        }
    }
    ctx->pc = 0x3620A0u;
    // 0x3620a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3620a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3620a4: 0x0  nop
    ctx->pc = 0x3620a4u;
    // NOP
    // 0x3620a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3620a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3620ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3620ACu;
    {
        const bool branch_taken_0x3620ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3620ac) {
            ctx->pc = 0x3620D0u;
            return;
        }
    }
    ctx->pc = 0x3620B4u;
}
