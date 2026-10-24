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

// Function: entry_001f35b4
// Address: 0x1f35b4 - 0x1f35f0
void entry_001f35b4_0x1f35b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f35b4_0x1f35b4");
#endif

    ctx->pc = 0x1f35b4u;

    // 0x1f35b4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1f35b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f35b8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1f35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1f35bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f35bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f35c0: 0x0  nop
    ctx->pc = 0x1f35c0u;
    // NOP
    // 0x1f35c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f35c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f35c8: 0x0  nop
    ctx->pc = 0x1f35c8u;
    // NOP
    // 0x1f35cc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F35CCu;
    {
        const bool branch_taken_0x1f35cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f35cc) {
            ctx->pc = 0x1F35F0u;
            return;
        }
    }
    ctx->pc = 0x1F35D4u;
    // 0x1f35d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f35d8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f35dc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1f35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1f35e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f35e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f35e4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f35e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f35e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f35e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f35ec: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f35ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x1f35f0u;
}
