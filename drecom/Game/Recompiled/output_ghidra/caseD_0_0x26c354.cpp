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
// Address: 0x26c354 - 0x26c38c
void caseD_0_0x26c354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x26c354");
#endif

    ctx->pc = 0x26c354u;

    // 0x26c354: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c358: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26c358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c35c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x26c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x26c360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26c360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c364: 0x0  nop
    ctx->pc = 0x26c364u;
    // NOP
    // 0x26c368: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26c368u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c36c: 0x0  nop
    ctx->pc = 0x26c36cu;
    // NOP
    // 0x26c370: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x26C370u;
    {
        const bool branch_taken_0x26c370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c370) {
            ctx->pc = 0x26C38Cu;
            return;
        }
    }
    ctx->pc = 0x26C378u;
    // 0x26c378: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26c378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c37c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c380: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x26c380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
    // 0x26c384: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26C384u;
    {
        const bool branch_taken_0x26c384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c384) {
            ctx->pc = 0x26C394u;
            return;
        }
    }
    ctx->pc = 0x26C38Cu;
}
