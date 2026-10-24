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

// Function: entry_0022de94
// Address: 0x22de94 - 0x22df38
void entry_0022de94_0x22de94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022de94_0x22de94");
#endif

    ctx->pc = 0x22de94u;

    // 0x22de94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22de94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22de98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22de9c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22de9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22dea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22dea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dea4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22dea8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22deac: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22deacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22deb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22deb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22deb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22deb8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22debc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22debcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22dec0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22dec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dec8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22decc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22deccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22ded0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22ded0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22ded4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22ded8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ded8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dedc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22dee0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dee4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22dee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22dee8: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22deec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22deecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22def0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22def0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22def4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22def8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22defc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x22defcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x22df00: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x22df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x22df04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22df08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22df08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22df0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22df10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22df14: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x22df14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x22df18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x22df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df20: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22df20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22df24: 0x24060826  addiu       $a2, $zero, 0x826
    ctx->pc = 0x22df24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2086));
    // 0x22df28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22df28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22df2c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22df2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22df30: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22DF30u;
    SET_GPR_U32(ctx, 31, 0x22DF38u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22DF30u, 0x22DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF38u;
}
