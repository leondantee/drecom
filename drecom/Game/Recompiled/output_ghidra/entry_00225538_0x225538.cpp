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

// Function: entry_00225538
// Address: 0x225538 - 0x2255a4
void entry_00225538_0x225538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225538_0x225538");
#endif

    switch (ctx->pc) {
        case 0x225564u: goto label_225564;
        case 0x225580u: goto label_225580;
        case 0x225598u: goto label_225598;
        default: break;
    }

    ctx->pc = 0x225538u;

    // 0x225538: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22553c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x22553cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225540: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225544: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x225544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225548: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x225548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22554c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x225550: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x225550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x225554: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x225554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x225558: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x225558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22555c: 0xc05c848  jal         func_172120
    ctx->pc = 0x22555Cu;
    SET_GPR_U32(ctx, 31, 0x225564u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22555Cu, 0x225564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225564u;
label_225564:
    // 0x225564: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x225564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x225568: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22556c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225570: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x225570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225574: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x225574u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x225578: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x225578u;
    SET_GPR_U32(ctx, 31, 0x225580u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x225578u, 0x225580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225580u;
label_225580:
    // 0x225580: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225584: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x225584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x225588: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22558c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22558cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x225590: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x225590u;
    SET_GPR_U32(ctx, 31, 0x225598u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x225590u, 0x225598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225598u;
label_225598:
    // 0x225598: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22559c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22559Cu;
    SET_GPR_U32(ctx, 31, 0x2255A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22559Cu, 0x2255A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2255A4u;
}
