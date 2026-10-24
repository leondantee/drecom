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

// Function: entry_0023c2d4
// Address: 0x23c2d4 - 0x23c340
void entry_0023c2d4_0x23c2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c2d4_0x23c2d4");
#endif

    switch (ctx->pc) {
        case 0x23c2ecu: goto label_23c2ec;
        case 0x23c304u: goto label_23c304;
        case 0x23c310u: goto label_23c310;
        default: break;
    }

    ctx->pc = 0x23c2d4u;

    // 0x23c2d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c2d8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23c2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c2dc: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c2e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23c2e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23c2e4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23C2E4u;
    SET_GPR_U32(ctx, 31, 0x23C2ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23C2E4u, 0x23C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2ECu;
label_23c2ec:
    // 0x23c2ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c2f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23c2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23c2f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c2f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23c2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23c2fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23C2FCu;
    SET_GPR_U32(ctx, 31, 0x23C304u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23C2FCu, 0x23C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C304u;
label_23c304:
    // 0x23c304: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c308: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23C308u;
    SET_GPR_U32(ctx, 31, 0x23C310u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23C308u, 0x23C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C310u;
label_23c310:
    // 0x23c310: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c314: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x23c314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x23c318: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C318u;
    {
        const bool branch_taken_0x23c318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c318) {
            ctx->pc = 0x23C340u;
            return;
        }
    }
    ctx->pc = 0x23C320u;
    // 0x23c320: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c324: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c328: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23c328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23c32c: 0x24062800  addiu       $a2, $zero, 0x2800
    ctx->pc = 0x23c32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x23c330: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c334: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23c334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23c338: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23C338u;
    SET_GPR_U32(ctx, 31, 0x23C340u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23C338u, 0x23C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C340u;
}
