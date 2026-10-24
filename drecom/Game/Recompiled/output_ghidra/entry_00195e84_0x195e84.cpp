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

// Function: entry_00195e84
// Address: 0x195e84 - 0x195ed4
void entry_00195e84_0x195e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195e84_0x195e84");
#endif

    ctx->pc = 0x195e84u;

    // 0x195e84: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x195e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195e88: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x195e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195e8c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x195e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195e90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x195e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x195e94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x195e98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x195e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195e9c: 0x0  nop
    ctx->pc = 0x195e9cu;
    // NOP
    // 0x195ea0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x195ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195ea4: 0x0  nop
    ctx->pc = 0x195ea4u;
    // NOP
    // 0x195ea8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x195EA8u;
    {
        const bool branch_taken_0x195ea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195ea8) {
            ctx->pc = 0x195ED4u;
            return;
        }
    }
    ctx->pc = 0x195EB0u;
    // 0x195eb0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x195eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195eb4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x195eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195eb8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x195eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195ebc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x195ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ec0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x195ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x195ec4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x195ec4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x195ec8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x195ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x195ecc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195ECCu;
    {
        const bool branch_taken_0x195ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ecc) {
            ctx->pc = 0x195EECu;
            return;
        }
    }
    ctx->pc = 0x195ED4u;
}
