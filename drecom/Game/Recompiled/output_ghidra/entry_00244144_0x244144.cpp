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

// Function: entry_00244144
// Address: 0x244144 - 0x2441b0
void entry_00244144_0x244144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244144_0x244144");
#endif

    switch (ctx->pc) {
        case 0x244170u: goto label_244170;
        case 0x24418cu: goto label_24418c;
        case 0x2441a4u: goto label_2441a4;
        default: break;
    }

    ctx->pc = 0x244144u;

    // 0x244144: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244148: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x244148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24414c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244150: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x244150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244154: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x244154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x244158: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x244158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24415c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24415cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x244160: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x244160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x244164: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x244164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x244168: 0xc05c848  jal         func_172120
    ctx->pc = 0x244168u;
    SET_GPR_U32(ctx, 31, 0x244170u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x244168u, 0x244170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244170u;
label_244170:
    // 0x244170: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x244170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x244174: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244178: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x244178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24417c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x24417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244180: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x244180u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244184: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x244184u;
    SET_GPR_U32(ctx, 31, 0x24418Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x244184u, 0x24418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24418Cu;
label_24418c:
    // 0x24418c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244190: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x244190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x244194: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244198: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x244198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24419c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x24419Cu;
    SET_GPR_U32(ctx, 31, 0x2441A4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x24419Cu, 0x2441A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441A4u;
label_2441a4:
    // 0x2441a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2441a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2441a8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2441A8u;
    SET_GPR_U32(ctx, 31, 0x2441B0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2441A8u, 0x2441B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441B0u;
}
