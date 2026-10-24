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

// Function: entry_00229f28
// Address: 0x229f28 - 0x229f78
void entry_00229f28_0x229f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229f28_0x229f28");
#endif

    ctx->pc = 0x229f28u;

    // 0x229f28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229f30: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x229f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229f34: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x229f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x229f38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229f38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229f3c: 0x0  nop
    ctx->pc = 0x229f3cu;
    // NOP
    // 0x229f40: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x229f40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229f44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f48: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x229f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229f4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x229f4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229f50: 0x0  nop
    ctx->pc = 0x229f50u;
    // NOP
    // 0x229f54: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x229F54u;
    {
        const bool branch_taken_0x229f54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229f54) {
            ctx->pc = 0x229F78u;
            return;
        }
    }
    ctx->pc = 0x229F5Cu;
    // 0x229f5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f60: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229f64: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x229f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229f68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f6c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x229f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229f70: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x229f70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x229f74: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x229f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x229f78u;
}
