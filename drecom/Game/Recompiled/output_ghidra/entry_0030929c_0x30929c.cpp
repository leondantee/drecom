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

// Function: entry_0030929c
// Address: 0x30929c - 0x309314
void entry_0030929c_0x30929c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030929c_0x30929c");
#endif

    switch (ctx->pc) {
        case 0x3092bcu: goto label_3092bc;
        case 0x3092dcu: goto label_3092dc;
        case 0x3092fcu: goto label_3092fc;
        default: break;
    }

    ctx->pc = 0x30929cu;

    // 0x30929c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3092a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3092a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3092a8: 0x24062833  addiu       $a2, $zero, 0x2833
    ctx->pc = 0x3092a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10291));
    // 0x3092ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3092acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3092b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3092b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3092b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3092B4u;
    SET_GPR_U32(ctx, 31, 0x3092BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3092B4u, 0x3092BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092BCu;
label_3092bc:
    // 0x3092bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3092bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092c0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3092c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3092c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3092c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092c8: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x3092c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x3092cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3092ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3092d0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x3092d0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3092d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3092D4u;
    SET_GPR_U32(ctx, 31, 0x3092DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3092D4u, 0x3092DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092DCu;
label_3092dc:
    // 0x3092dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3092dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3092e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3092e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3092e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092e8: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x3092e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x3092ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3092ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092f0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3092f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3092f4: 0xc0c2038  jal         func_3080E0
    ctx->pc = 0x3092F4u;
    SET_GPR_U32(ctx, 31, 0x3092FCu);
    ctx->pc = 0x3080E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3080E0u, 0x3092F4u, 0x3092FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092FCu;
label_3092fc:
    // 0x3092fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3092fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309300: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x309300u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x309304: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309308: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x309308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30930c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309310: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x309310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x309314u;
}
