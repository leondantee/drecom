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

// Function: entry_0036201c
// Address: 0x36201c - 0x362060
void entry_0036201c_0x36201c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036201c_0x36201c");
#endif

    ctx->pc = 0x36201cu;

    // 0x36201c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36201cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x362020: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x362020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x362024: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x362024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x362028: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x362028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36202c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x36202cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x362030: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x362030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x362034: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x362034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362038: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x362038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x36203c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x36203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362040: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x362040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x362044: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x362044u;
    {
        const bool branch_taken_0x362044 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x362044) {
            ctx->pc = 0x362060u;
            return;
        }
    }
    ctx->pc = 0x36204Cu;
    // 0x36204c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36204cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x362050: 0x0  nop
    ctx->pc = 0x362050u;
    // NOP
    // 0x362054: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x362054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x362058: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x362058u;
    {
        const bool branch_taken_0x362058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362058) {
            ctx->pc = 0x36207Cu;
            return;
        }
    }
    ctx->pc = 0x362060u;
}
