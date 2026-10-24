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

// Function: entry_0022bbf0
// Address: 0x22bbf0 - 0x22bc2c
void entry_0022bbf0_0x22bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022bbf0_0x22bbf0");
#endif

    ctx->pc = 0x22bbf0u;

    // 0x22bbf0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bbf4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bbf8: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bbfc: 0x3c054170  lui         $a1, 0x4170
    ctx->pc = 0x22bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16752 << 16));
    // 0x22bc00: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22bc00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bc04: 0x0  nop
    ctx->pc = 0x22bc04u;
    // NOP
    // 0x22bc08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bc08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bc0c: 0x0  nop
    ctx->pc = 0x22bc0cu;
    // NOP
    // 0x22bc10: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22BC10u;
    {
        const bool branch_taken_0x22bc10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bc10) {
            ctx->pc = 0x22BC2Cu;
            return;
        }
    }
    ctx->pc = 0x22BC18u;
    // 0x22bc18: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x22bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x22bc1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22bc1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bc20: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bc24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bc28: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22bc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x22bc2cu;
}
