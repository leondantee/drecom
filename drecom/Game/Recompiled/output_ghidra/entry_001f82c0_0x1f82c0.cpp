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

// Function: entry_001f82c0
// Address: 0x1f82c0 - 0x1f8324
void entry_001f82c0_0x1f82c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f82c0_0x1f82c0");
#endif

    switch (ctx->pc) {
        case 0x1f8300u: goto label_1f8300;
        case 0x1f8310u: goto label_1f8310;
        case 0x1f831cu: goto label_1f831c;
        default: break;
    }

    ctx->pc = 0x1f82c0u;

    // 0x1f82c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f82c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f82c8: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f82c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f82cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f82d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f82d4: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x1f82d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f82d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f82d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f82dc: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f82dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f82e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f82e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f82e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f82e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f82e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f82ec: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f82ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f82f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f82f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f82f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f82f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f82f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F82F8u;
    SET_GPR_U32(ctx, 31, 0x1F8300u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F82F8u, 0x1F8300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8300u;
label_1f8300:
    // 0x1f8300: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8304: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f8304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f8308: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F8308u;
    SET_GPR_U32(ctx, 31, 0x1F8310u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F8308u, 0x1F8310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8310u;
label_1f8310:
    // 0x1f8310: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8314: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F8314u;
    SET_GPR_U32(ctx, 31, 0x1F831Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F8314u, 0x1F831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F831Cu;
label_1f831c:
    // 0x1f831c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x1F831Cu;
    {
        const bool branch_taken_0x1f831c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f831c) {
            ctx->pc = 0x1F8670u;
            return;
        }
    }
    ctx->pc = 0x1F8324u;
}
