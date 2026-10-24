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

// Function: entry_0029ec48
// Address: 0x29ec48 - 0x29ec98
void entry_0029ec48_0x29ec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ec48_0x29ec48");
#endif

    switch (ctx->pc) {
        case 0x29ec74u: goto label_29ec74;
        case 0x29ec90u: goto label_29ec90;
        default: break;
    }

    ctx->pc = 0x29ec48u;

    // 0x29ec48: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec50: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x29ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x29ec54: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29ec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29ec58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29ec58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29ec5c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29ec60: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x29ec60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29ec64: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29ec68: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29ec68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29ec6c: 0xc05c848  jal         func_172120
    ctx->pc = 0x29EC6Cu;
    SET_GPR_U32(ctx, 31, 0x29EC74u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x29EC6Cu, 0x29EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC74u;
label_29ec74:
    // 0x29ec74: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x29ec74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x29ec78: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec7c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x29ec7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ec80: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x29ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ec84: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x29ec84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29ec88: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29EC88u;
    SET_GPR_U32(ctx, 31, 0x29EC90u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29EC88u, 0x29EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC90u;
label_29ec90:
    // 0x29ec90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec94: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x29ec94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x29ec98u;
}
