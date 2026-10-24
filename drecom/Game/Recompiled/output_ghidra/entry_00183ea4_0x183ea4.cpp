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

// Function: entry_00183ea4
// Address: 0x183ea4 - 0x183ef0
void entry_00183ea4_0x183ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183ea4_0x183ea4");
#endif

    ctx->pc = 0x183ea4u;

    // 0x183ea4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183ea8: 0x8c220270  lw          $v0, 0x270($at)
    ctx->pc = 0x183ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x480270u));
    // 0x183eac: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x183eacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x183eb0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x183EB0u;
    {
        const bool branch_taken_0x183eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x183eb0) {
            ctx->pc = 0x183EF0u;
            return;
        }
    }
    ctx->pc = 0x183EB8u;
    // 0x183eb8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x183eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x183ebc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183ec0: 0x8c220270  lw          $v0, 0x270($at)
    ctx->pc = 0x183ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x480270u));
    // 0x183ec4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x183ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x183ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183ecc: 0x0  nop
    ctx->pc = 0x183eccu;
    // NOP
    // 0x183ed0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x183ed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x183ed4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x183ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x183ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183edc: 0x0  nop
    ctx->pc = 0x183edcu;
    // NOP
    // 0x183ee0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x183ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x183ee4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x183ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183ee8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x183ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x183eec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x183eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->pc = 0x183ef0u;
}
