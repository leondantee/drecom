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

// Function: entry_0019a7f0
// Address: 0x19a7f0 - 0x19a860
void entry_0019a7f0_0x19a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a7f0_0x19a7f0");
#endif

    switch (ctx->pc) {
        case 0x19a810u: goto label_19a810;
        default: break;
    }

    ctx->pc = 0x19a7f0u;

    // 0x19a7f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a7f4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a7f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19a7fc: 0x24061e2e  addiu       $a2, $zero, 0x1E2E
    ctx->pc = 0x19a7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7726));
    // 0x19a800: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19a800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a804: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19a804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19a808: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19A808u;
    SET_GPR_U32(ctx, 31, 0x19A810u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19A808u, 0x19A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A810u;
label_19a810:
    // 0x19a810: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a814: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x19a814u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a818: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a81c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x19a81cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a820: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a824: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x19a824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19a828: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a82c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x19a82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a830: 0x3c024361  lui         $v0, 0x4361
    ctx->pc = 0x19a830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17249 << 16));
    // 0x19a834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a838: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a83c: 0xe420d380  swc1        $f0, -0x2C80($at)
    ctx->pc = 0x19a83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD380u, _value); } while (0); }
    // 0x19a840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a844: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a848: 0xa4430096  sh          $v1, 0x96($v0)
    ctx->pc = 0x19a848u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x19a84c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a850: 0xa4400094  sh          $zero, 0x94($v0)
    ctx->pc = 0x19a850u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a858: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a85c: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x19a85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    ctx->pc = 0x19a860u;
}
