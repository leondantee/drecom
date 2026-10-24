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

// Function: entry_0020e89c
// Address: 0x20e89c - 0x20e8ec
void entry_0020e89c_0x20e89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e89c_0x20e89c");
#endif

    ctx->pc = 0x20e89cu;

    // 0x20e89c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e8a0: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x20e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x20e8a4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20e8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e8a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e8a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e8ac: 0x0  nop
    ctx->pc = 0x20e8acu;
    // NOP
    // 0x20e8b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20e8b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e8b4: 0x0  nop
    ctx->pc = 0x20e8b4u;
    // NOP
    // 0x20e8b8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x20E8B8u;
    {
        const bool branch_taken_0x20e8b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e8b8) {
            ctx->pc = 0x20E8ECu;
            return;
        }
    }
    ctx->pc = 0x20E8C0u;
    // 0x20e8c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e8c4: 0x24641350  addiu       $a0, $v1, 0x1350
    ctx->pc = 0x20e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x20e8c8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x20e8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e8cc: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x20e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x20e8d0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x20e8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x20e8d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e8d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e8d8: 0x0  nop
    ctx->pc = 0x20e8d8u;
    // NOP
    // 0x20e8dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20e8dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20e8e0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x20e8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x20e8e4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x20E8E4u;
    {
        const bool branch_taken_0x20e8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e8e4) {
            ctx->pc = 0x20EA3Cu;
            return;
        }
    }
    ctx->pc = 0x20E8ECu;
}
