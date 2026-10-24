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

// Function: entry_0023a3b0
// Address: 0x23a3b0 - 0x23a41c
void entry_0023a3b0_0x23a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a3b0_0x23a3b0");
#endif

    switch (ctx->pc) {
        case 0x23a3c8u: goto label_23a3c8;
        case 0x23a3e0u: goto label_23a3e0;
        case 0x23a3ecu: goto label_23a3ec;
        default: break;
    }

    ctx->pc = 0x23a3b0u;

    // 0x23a3b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a3b4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a3b8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a3bc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23a3bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23a3c0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23A3C0u;
    SET_GPR_U32(ctx, 31, 0x23A3C8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23A3C0u, 0x23A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3C8u;
label_23a3c8:
    // 0x23a3c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a3cc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23a3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23a3d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a3d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23a3d8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23A3D8u;
    SET_GPR_U32(ctx, 31, 0x23A3E0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23A3D8u, 0x23A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3E0u;
label_23a3e0:
    // 0x23a3e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a3e4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23A3E4u;
    SET_GPR_U32(ctx, 31, 0x23A3ECu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23A3E4u, 0x23A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3ECu;
label_23a3ec:
    // 0x23a3ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a3f0: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x23a3f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x23a3f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23A3F4u;
    {
        const bool branch_taken_0x23a3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a3f4) {
            ctx->pc = 0x23A41Cu;
            return;
        }
    }
    ctx->pc = 0x23A3FCu;
    // 0x23a3fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a400: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23a400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a404: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23a404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23a408: 0x24062800  addiu       $a2, $zero, 0x2800
    ctx->pc = 0x23a408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x23a40c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23a40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a410: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23a410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23a414: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23A414u;
    SET_GPR_U32(ctx, 31, 0x23A41Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23A414u, 0x23A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A41Cu;
}
