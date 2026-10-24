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

// Function: entry_001390a0
// Address: 0x1390a0 - 0x1390ec
void entry_001390a0_0x1390a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001390a0_0x1390a0");
#endif

    ctx->pc = 0x1390a0u;

    // 0x1390a0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1390a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1390a4: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1390A4u;
    {
        const bool branch_taken_0x1390a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1390a4) {
            ctx->pc = 0x138F98u;
            return;
        }
    }
    ctx->pc = 0x1390ACu;
    // 0x1390ac: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x1390acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1390b0: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1390b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1390b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1390b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1390b8: 0x0  nop
    ctx->pc = 0x1390b8u;
    // NOP
    // 0x1390bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1390bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1390c0: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x1390c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x1390c4: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x1390c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1390c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1390c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1390cc: 0x0  nop
    ctx->pc = 0x1390ccu;
    // NOP
    // 0x1390d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1390d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1390d4: 0x0  nop
    ctx->pc = 0x1390d4u;
    // NOP
    // 0x1390d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1390D8u;
    {
        const bool branch_taken_0x1390d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1390d8) {
            ctx->pc = 0x1390ECu;
            return;
        }
    }
    ctx->pc = 0x1390E0u;
    // 0x1390e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1390e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1390e4: 0x0  nop
    ctx->pc = 0x1390e4u;
    // NOP
    // 0x1390e8: 0xe6600048  swc1        $f0, 0x48($s3)
    ctx->pc = 0x1390e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    ctx->pc = 0x1390ecu;
}
