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

// Function: entry_00131f1c
// Address: 0x131f1c - 0x131f84
void entry_00131f1c_0x131f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131f1c_0x131f1c");
#endif

    switch (ctx->pc) {
        case 0x131f3cu: goto label_131f3c;
        case 0x131f4cu: goto label_131f4c;
        default: break;
    }

    ctx->pc = 0x131f1cu;

    // 0x131f1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131f20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131f24: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x131f28: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x131f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x131f2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131f30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131f34: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131F34u;
    SET_GPR_U32(ctx, 31, 0x131F3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131F34u, 0x131F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F3Cu;
label_131f3c:
    // 0x131f3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131f40: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x131f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x131f44: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x131F44u;
    SET_GPR_U32(ctx, 31, 0x131F4Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x131F44u, 0x131F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F4Cu;
label_131f4c:
    // 0x131f4c: 0x3c024297  lui         $v0, 0x4297
    ctx->pc = 0x131f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17047 << 16));
    // 0x131f50: 0x34423332  ori         $v0, $v0, 0x3332
    ctx->pc = 0x131f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13106);
    // 0x131f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131f58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131f5c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x131f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x131f60: 0x3c02402c  lui         $v0, 0x402C
    ctx->pc = 0x131f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16428 << 16));
    // 0x131f64: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x131f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
    // 0x131f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131f6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131f70: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x131f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x131f74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131f78: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x131f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x131f7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131f80: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x131f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x131f84u;
}
