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

// Function: entry_002985c4
// Address: 0x2985c4 - 0x298610
void entry_002985c4_0x2985c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002985c4_0x2985c4");
#endif

    switch (ctx->pc) {
        case 0x2985d0u: goto label_2985d0;
        case 0x2985d8u: goto label_2985d8;
        default: break;
    }

    ctx->pc = 0x2985c4u;

    // 0x2985c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2985c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2985c8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2985C8u;
    SET_GPR_U32(ctx, 31, 0x2985D0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2985C8u, 0x2985D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985D0u;
label_2985d0:
    // 0x2985d0: 0xc0a60cc  jal         func_298330
    ctx->pc = 0x2985D0u;
    SET_GPR_U32(ctx, 31, 0x2985D8u);
    ctx->pc = 0x298330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298330u, 0x2985D0u, 0x2985D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985D8u;
label_2985d8:
    // 0x2985d8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2985d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2985dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2985dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2985e0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2985e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2985e4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2985e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2985e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2985e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2985ec: 0x0  nop
    ctx->pc = 0x2985ecu;
    // NOP
    // 0x2985f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2985F0u;
    {
        const bool branch_taken_0x2985f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2985f0) {
            ctx->pc = 0x298610u;
            return;
        }
    }
    ctx->pc = 0x2985F8u;
    // 0x2985f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2985f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2985fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2985fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298600: 0x0  nop
    ctx->pc = 0x298600u;
    // NOP
    // 0x298604: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x298604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x298608: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x298608u;
    {
        const bool branch_taken_0x298608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298608) {
            ctx->pc = 0x298620u;
            return;
        }
    }
    ctx->pc = 0x298610u;
}
