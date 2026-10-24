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

// Function: entry_0033cf40
// Address: 0x33cf40 - 0x33cf9c
void entry_0033cf40_0x33cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033cf40_0x33cf40");
#endif

    switch (ctx->pc) {
        case 0x33cf68u: goto label_33cf68;
        case 0x33cf78u: goto label_33cf78;
        case 0x33cf94u: goto label_33cf94;
        default: break;
    }

    ctx->pc = 0x33cf40u;

    // 0x33cf40: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x33cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cf44: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x33cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cf48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33cf48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33cf4c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x33cf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33cf50: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33cf54: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cf58: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x33cf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x33cf5c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33cf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33cf60: 0xc05db20  jal         func_176C80
    ctx->pc = 0x33CF60u;
    SET_GPR_U32(ctx, 31, 0x33CF68u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x33CF60u, 0x33CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF68u;
label_33cf68:
    // 0x33cf68: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cf6c: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x33cf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33cf70: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x33CF70u;
    SET_GPR_U32(ctx, 31, 0x33CF78u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x33CF70u, 0x33CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF78u;
label_33cf78:
    // 0x33cf78: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x33cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x33cf7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33cf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33cf80: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x33cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cf84: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x33cf84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33cf88: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cf8c: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x33CF8Cu;
    SET_GPR_U32(ctx, 31, 0x33CF94u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x33CF8Cu, 0x33CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF94u;
label_33cf94:
    // 0x33cf94: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x33CF94u;
    {
        const bool branch_taken_0x33cf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cf94) {
            ctx->pc = 0x33D030u;
            return;
        }
    }
    ctx->pc = 0x33CF9Cu;
}
