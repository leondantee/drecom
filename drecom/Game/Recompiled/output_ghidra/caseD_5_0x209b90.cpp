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

// Function: caseD_5
// Address: 0x209b90 - 0x209bcc
void caseD_5_0x209b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x209b90");
#endif

    ctx->pc = 0x209b90u;

    // 0x209b90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209b94: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x209b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209b98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209b98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209b9c: 0x0  nop
    ctx->pc = 0x209b9cu;
    // NOP
    // 0x209ba0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x209ba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209ba4: 0x0  nop
    ctx->pc = 0x209ba4u;
    // NOP
    // 0x209ba8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x209BA8u;
    {
        const bool branch_taken_0x209ba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209ba8) {
            ctx->pc = 0x209BCCu;
            return;
        }
    }
    ctx->pc = 0x209BB0u;
    // 0x209bb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209bb4: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x209bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209bb8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x209bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x209bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209bc0: 0x0  nop
    ctx->pc = 0x209bc0u;
    // NOP
    // 0x209bc4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209bc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x209bc8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x209bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x209bccu;
}
