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

// Function: caseD_0
// Address: 0x1cc12c - 0x1cc164
void caseD_0_0x1cc12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1cc12c");
#endif

    ctx->pc = 0x1cc12cu;

    // 0x1cc12c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc130: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1cc130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc134: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1cc134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1cc138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc13c: 0x0  nop
    ctx->pc = 0x1cc13cu;
    // NOP
    // 0x1cc140: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cc140u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc144: 0x0  nop
    ctx->pc = 0x1cc144u;
    // NOP
    // 0x1cc148: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC148u;
    {
        const bool branch_taken_0x1cc148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc148) {
            ctx->pc = 0x1CC164u;
            return;
        }
    }
    ctx->pc = 0x1CC150u;
    // 0x1cc150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc154: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc158: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1cc158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    // 0x1cc15c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC15Cu;
    {
        const bool branch_taken_0x1cc15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc15c) {
            ctx->pc = 0x1CC16Cu;
            return;
        }
    }
    ctx->pc = 0x1CC164u;
}
