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

// Function: entry_00202564
// Address: 0x202564 - 0x202594
void entry_00202564_0x202564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202564_0x202564");
#endif

    ctx->pc = 0x202564u;

    // 0x202564: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202568: 0xc460482c  lwc1        $f0, 0x482C($v1)
    ctx->pc = 0x202568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20256c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20256cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x202570: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x202570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x202574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x202574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202578: 0x0  nop
    ctx->pc = 0x202578u;
    // NOP
    // 0x20257c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20257cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202580: 0x0  nop
    ctx->pc = 0x202580u;
    // NOP
    // 0x202584: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x202584u;
    {
        const bool branch_taken_0x202584 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x202584) {
            ctx->pc = 0x202594u;
            return;
        }
    }
    ctx->pc = 0x20258Cu;
    // 0x20258c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202590: 0xac604848  sw          $zero, 0x4848($v1)
    ctx->pc = 0x202590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18504), GPR_U32(ctx, 0));
    ctx->pc = 0x202594u;
}
