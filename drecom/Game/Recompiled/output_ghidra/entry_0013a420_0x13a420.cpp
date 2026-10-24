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

// Function: entry_0013a420
// Address: 0x13a420 - 0x13a470
void entry_0013a420_0x13a420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a420_0x13a420");
#endif

    switch (ctx->pc) {
        case 0x13a468u: goto label_13a468;
        default: break;
    }

    ctx->pc = 0x13a420u;

    // 0x13a420: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x13a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a424: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x13a424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x13a428: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13a428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13a42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a430: 0x0  nop
    ctx->pc = 0x13a430u;
    // NOP
    // 0x13a434: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13a434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a438: 0x0  nop
    ctx->pc = 0x13a438u;
    // NOP
    // 0x13a43c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x13A43Cu;
    {
        const bool branch_taken_0x13a43c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a43c) {
            ctx->pc = 0x13A470u;
            return;
        }
    }
    ctx->pc = 0x13A444u;
    // 0x13a444: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a448: 0xc4411290  lwc1        $f1, 0x1290($v0)
    ctx->pc = 0x13a448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a44c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x13a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x13a450: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13a450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13a454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a458: 0x0  nop
    ctx->pc = 0x13a458u;
    // NOP
    // 0x13a45c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x13a45cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13a460: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x13A460u;
    SET_GPR_U32(ctx, 31, 0x13A468u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x13A460u, 0x13A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A468u;
label_13a468:
    // 0x13a468: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a46c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x13a46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x13a470u;
}
