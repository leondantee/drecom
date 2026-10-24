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

// Function: entry_0023cbe0
// Address: 0x23cbe0 - 0x23cc18
void entry_0023cbe0_0x23cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cbe0_0x23cbe0");
#endif

    ctx->pc = 0x23cbe0u;

    // 0x23cbe0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cbe4: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x23cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cbe8: 0x3c03c20c  lui         $v1, 0xC20C
    ctx->pc = 0x23cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49676 << 16));
    // 0x23cbec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cbecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cbf0: 0x0  nop
    ctx->pc = 0x23cbf0u;
    // NOP
    // 0x23cbf4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23cbf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cbf8: 0x0  nop
    ctx->pc = 0x23cbf8u;
    // NOP
    // 0x23cbfc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23CBFCu;
    {
        const bool branch_taken_0x23cbfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cbfc) {
            ctx->pc = 0x23CC18u;
            return;
        }
    }
    ctx->pc = 0x23CC04u;
    // 0x23cc04: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x23cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x23cc08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cc08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cc0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cc14: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x23cc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    ctx->pc = 0x23cc18u;
}
