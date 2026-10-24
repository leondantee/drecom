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

// Function: entry_00207eec
// Address: 0x207eec - 0x207f88
void entry_00207eec_0x207eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207eec_0x207eec");
#endif

    switch (ctx->pc) {
        case 0x207efcu: goto label_207efc;
        case 0x207f08u: goto label_207f08;
        case 0x207f50u: goto label_207f50;
        case 0x207f80u: goto label_207f80;
        default: break;
    }

    ctx->pc = 0x207eecu;

    // 0x207eec: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207ef0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x207ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207ef4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x207EF4u;
    SET_GPR_U32(ctx, 31, 0x207EFCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x207EF4u, 0x207EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207EFCu;
label_207efc:
    // 0x207efc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f00: 0xc05cd10  jal         func_173440
    ctx->pc = 0x207F00u;
    SET_GPR_U32(ctx, 31, 0x207F08u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x207F00u, 0x207F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F08u;
label_207f08:
    // 0x207f08: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f0c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x207f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207f10: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f14: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x207f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207f18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x207f18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x207f1c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x207f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x207f20: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f24: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x207f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207f28: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f2c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x207f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207f30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x207f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x207f34: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x207f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x207f38: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f3c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x207f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x207f40: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x207f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x207f44: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x207f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x207f48: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x207F48u;
    SET_GPR_U32(ctx, 31, 0x207F50u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x207F48u, 0x207F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F50u;
label_207f50:
    // 0x207f50: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f54: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x207f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207f58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207f5c: 0x0  nop
    ctx->pc = 0x207f5cu;
    // NOP
    // 0x207f60: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x207F60u;
    {
        const bool branch_taken_0x207f60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207f60) {
            ctx->pc = 0x207F88u;
            return;
        }
    }
    ctx->pc = 0x207F68u;
    // 0x207f68: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x207f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x207f70: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x207f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x207f74: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x207f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x207f78: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x207F78u;
    SET_GPR_U32(ctx, 31, 0x207F80u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x207F78u, 0x207F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F80u;
label_207f80:
    // 0x207f80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f84: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x207f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x207f88u;
}
