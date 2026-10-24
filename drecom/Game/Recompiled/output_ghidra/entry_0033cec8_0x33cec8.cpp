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

// Function: entry_0033cec8
// Address: 0x33cec8 - 0x33cf40
void entry_0033cec8_0x33cec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033cec8_0x33cec8");
#endif

    switch (ctx->pc) {
        case 0x33cef0u: goto label_33cef0;
        case 0x33cf00u: goto label_33cf00;
        case 0x33cf1cu: goto label_33cf1c;
        default: break;
    }

    ctx->pc = 0x33cec8u;

    // 0x33cec8: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x33cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cecc: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x33ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ced0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33ced0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33ced4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x33ced4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33ced8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33cedc: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cee0: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x33cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x33cee4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33cee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33cee8: 0xc05db20  jal         func_176C80
    ctx->pc = 0x33CEE8u;
    SET_GPR_U32(ctx, 31, 0x33CEF0u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x33CEE8u, 0x33CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CEF0u;
label_33cef0:
    // 0x33cef0: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cef4: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x33cef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33cef8: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x33CEF8u;
    SET_GPR_U32(ctx, 31, 0x33CF00u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x33CEF8u, 0x33CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF00u;
label_33cf00:
    // 0x33cf00: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x33cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x33cf04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33cf04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33cf08: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x33cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cf0c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x33cf0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33cf10: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cf14: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x33CF14u;
    SET_GPR_U32(ctx, 31, 0x33CF1Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x33CF14u, 0x33CF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF1Cu;
label_33cf1c:
    // 0x33cf1c: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x33cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cf20: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x33cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x33cf24: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x33cf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x33cf28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33cf28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cf2c: 0x0  nop
    ctx->pc = 0x33cf2cu;
    // NOP
    // 0x33cf30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33cf30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33cf34: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x33cf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x33cf38: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x33CF38u;
    {
        const bool branch_taken_0x33cf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cf38) {
            ctx->pc = 0x33D030u;
            return;
        }
    }
    ctx->pc = 0x33CF40u;
}
