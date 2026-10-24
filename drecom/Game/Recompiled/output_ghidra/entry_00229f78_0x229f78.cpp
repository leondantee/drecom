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

// Function: entry_00229f78
// Address: 0x229f78 - 0x229fc8
void entry_00229f78_0x229f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229f78_0x229f78");
#endif

    ctx->pc = 0x229f78u;

    // 0x229f78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229f80: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x229f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229f84: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x229f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x229f88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229f8c: 0x0  nop
    ctx->pc = 0x229f8cu;
    // NOP
    // 0x229f90: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x229f90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229f94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f98: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x229f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229f9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x229f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229fa0: 0x0  nop
    ctx->pc = 0x229fa0u;
    // NOP
    // 0x229fa4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x229FA4u;
    {
        const bool branch_taken_0x229fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229fa4) {
            ctx->pc = 0x229FC8u;
            return;
        }
    }
    ctx->pc = 0x229FACu;
    // 0x229fac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229fb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229fb4: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x229fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229fb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229fbc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x229fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229fc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229fc4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x229fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x229fc8u;
}
