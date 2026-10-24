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

// Function: entry_00261444
// Address: 0x261444 - 0x261484
void entry_00261444_0x261444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00261444_0x261444");
#endif

    switch (ctx->pc) {
        case 0x261454u: goto label_261454;
        default: break;
    }

    ctx->pc = 0x261444u;

    // 0x261444: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x261444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x261448: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x261448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26144c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26144Cu;
    SET_GPR_U32(ctx, 31, 0x261454u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26144Cu, 0x261454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261454u;
label_261454:
    // 0x261454: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x261458: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x261458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x26145c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x26145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x261460: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x261460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261464: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x261464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261468: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x261468u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26146c: 0x0  nop
    ctx->pc = 0x26146cu;
    // NOP
    // 0x261470: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x261470u;
    {
        const bool branch_taken_0x261470 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x261470) {
            ctx->pc = 0x261484u;
            return;
        }
    }
    ctx->pc = 0x261478u;
    // 0x261478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x261478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26147c: 0x0  nop
    ctx->pc = 0x26147cu;
    // NOP
    // 0x261480: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    ctx->pc = 0x261484u;
}
