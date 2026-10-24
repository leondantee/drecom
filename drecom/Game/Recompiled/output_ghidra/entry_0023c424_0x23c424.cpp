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

// Function: entry_0023c424
// Address: 0x23c424 - 0x23c4bc
void entry_0023c424_0x23c424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c424_0x23c424");
#endif

    switch (ctx->pc) {
        case 0x23c44cu: goto label_23c44c;
        case 0x23c468u: goto label_23c468;
        case 0x23c480u: goto label_23c480;
        case 0x23c48cu: goto label_23c48c;
        default: break;
    }

    ctx->pc = 0x23c424u;

    // 0x23c424: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c428: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c42c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c430: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c434: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23c434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23c438: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23c438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c43c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23c43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23c440: 0xc44d003c  lwc1        $f13, 0x3C($v0)
    ctx->pc = 0x23c440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23c444: 0xc05c848  jal         func_172120
    ctx->pc = 0x23C444u;
    SET_GPR_U32(ctx, 31, 0x23C44Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23C444u, 0x23C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C44Cu;
label_23c44c:
    // 0x23c44c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23c450: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c454: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23c454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c458: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c45c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23c45cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23c460: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23C460u;
    SET_GPR_U32(ctx, 31, 0x23C468u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23C460u, 0x23C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C468u;
label_23c468:
    // 0x23c468: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c46c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23c46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23c470: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c474: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23c474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23c478: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23C478u;
    SET_GPR_U32(ctx, 31, 0x23C480u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23C478u, 0x23C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C480u;
label_23c480:
    // 0x23c480: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c484: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23C484u;
    SET_GPR_U32(ctx, 31, 0x23C48Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23C484u, 0x23C48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C48Cu;
label_23c48c:
    // 0x23c48c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c490: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23c490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23c494: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C494u;
    {
        const bool branch_taken_0x23c494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c494) {
            ctx->pc = 0x23C4BCu;
            return;
        }
    }
    ctx->pc = 0x23C49Cu;
    // 0x23c49c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c4a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c4a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23c4a8: 0x24061e05  addiu       $a2, $zero, 0x1E05
    ctx->pc = 0x23c4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7685));
    // 0x23c4ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c4b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23c4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23c4b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23C4B4u;
    SET_GPR_U32(ctx, 31, 0x23C4BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23C4B4u, 0x23C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4BCu;
}
