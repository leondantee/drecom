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

// Function: entry_002e57f0
// Address: 0x2e57f0 - 0x2e5844
void entry_002e57f0_0x2e57f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e57f0_0x2e57f0");
#endif

    ctx->pc = 0x2e57f0u;

    // 0x2e57f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e57f4: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2e57f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e57f8: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x2e57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x2e57fc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e57fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e5800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5804: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e5804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e5808: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2e5808u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e580c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e580cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5810: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e5810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5814: 0x0  nop
    ctx->pc = 0x2e5814u;
    // NOP
    // 0x2e5818: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2E5818u;
    {
        const bool branch_taken_0x2e5818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5818) {
            ctx->pc = 0x2E5844u;
            return;
        }
    }
    ctx->pc = 0x2E5820u;
    // 0x2e5820: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5824: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e5824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5828: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x2e5828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x2e582c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e582cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5830: 0x0  nop
    ctx->pc = 0x2e5830u;
    // NOP
    // 0x2e5834: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e5834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e5838: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2e5838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2e583c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E583Cu;
    {
        const bool branch_taken_0x2e583c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e583c) {
            ctx->pc = 0x2E5850u;
            return;
        }
    }
    ctx->pc = 0x2E5844u;
}
