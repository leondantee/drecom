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

// Function: caseD_4
// Address: 0x2da69c - 0x2da6e8
void caseD_4_0x2da69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2da69c");
#endif

    ctx->pc = 0x2da69cu;

    // 0x2da69c: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x2da69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da6a0: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2da6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da6a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2da6a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2da6a8: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2da6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2da6ac: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x2da6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da6b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2da6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2da6b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da6b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da6b8: 0x0  nop
    ctx->pc = 0x2da6b8u;
    // NOP
    // 0x2da6bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2da6bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2da6c0: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2da6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2da6c4: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x2da6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da6c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da6c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da6cc: 0x0  nop
    ctx->pc = 0x2da6ccu;
    // NOP
    // 0x2da6d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da6d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da6d4: 0x0  nop
    ctx->pc = 0x2da6d4u;
    // NOP
    // 0x2da6d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA6D8u;
    {
        const bool branch_taken_0x2da6d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da6d8) {
            ctx->pc = 0x2DA6E8u;
            return;
        }
    }
    ctx->pc = 0x2DA6E0u;
    // 0x2da6e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2da6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2da6e4: 0xa20300d9  sb          $v1, 0xD9($s0)
    ctx->pc = 0x2da6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2da6e8u;
}
