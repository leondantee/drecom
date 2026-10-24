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

// Function: entry_00224404
// Address: 0x224404 - 0x224448
void entry_00224404_0x224404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224404_0x224404");
#endif

    ctx->pc = 0x224404u;

    // 0x224404: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224408: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22440c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x22440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224410: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x224410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x224414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224418: 0x0  nop
    ctx->pc = 0x224418u;
    // NOP
    // 0x22441c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22441cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x224420: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224424: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x224424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224428: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22442c: 0x0  nop
    ctx->pc = 0x22442cu;
    // NOP
    // 0x224430: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x224430u;
    {
        const bool branch_taken_0x224430 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x224430) {
            ctx->pc = 0x224448u;
            return;
        }
    }
    ctx->pc = 0x224438u;
    // 0x224438: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x224438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22443c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22443cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224440: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224444: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x224448u;
}
