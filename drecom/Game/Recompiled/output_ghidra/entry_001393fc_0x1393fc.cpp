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

// Function: entry_001393fc
// Address: 0x1393fc - 0x13946c
void entry_001393fc_0x1393fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001393fc_0x1393fc");
#endif

    switch (ctx->pc) {
        case 0x13941cu: goto label_13941c;
        default: break;
    }

    ctx->pc = 0x1393fcu;

    // 0x1393fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1393fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139400: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x139400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139404: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x139404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x139408: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x139408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x13940c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13940cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139410: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x139414: 0xc0965d0  jal         func_259740
    ctx->pc = 0x139414u;
    SET_GPR_U32(ctx, 31, 0x13941Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139414u, 0x13941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13941Cu;
label_13941c:
    // 0x13941c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x13941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x139420: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x139420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139424: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x139424u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x139428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13942c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139430: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x139430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x139434: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x139434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x139438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13943c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139440: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x139440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x139444: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x139444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x139448: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x139448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13944c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x13944cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x139450: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x139450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x139454: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x139454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139458: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x139458u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x13945c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x13945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139460: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x139460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x139464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x139468: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x139468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13946cu;
}
