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

// Function: entry_0026bf74
// Address: 0x26bf74 - 0x26bff4
void entry_0026bf74_0x26bf74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026bf74_0x26bf74");
#endif

    switch (ctx->pc) {
        case 0x26bf94u: goto label_26bf94;
        case 0x26bfa4u: goto label_26bfa4;
        case 0x26bfb4u: goto label_26bfb4;
        default: break;
    }

    ctx->pc = 0x26bf74u;

    // 0x26bf74: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26bf78: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26bf7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26bf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26bf80: 0x24061461  addiu       $a2, $zero, 0x1461
    ctx->pc = 0x26bf80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5217));
    // 0x26bf84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26bf84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bf88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26bf88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26bf8c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26BF8Cu;
    SET_GPR_U32(ctx, 31, 0x26BF94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26BF8Cu, 0x26BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF94u;
label_26bf94:
    // 0x26bf94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26bf98: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x26bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x26bf9c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26BF9Cu;
    SET_GPR_U32(ctx, 31, 0x26BFA4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26BF9Cu, 0x26BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFA4u;
label_26bfa4:
    // 0x26bfa4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26bfa8: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x26bfac: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26BFACu;
    SET_GPR_U32(ctx, 31, 0x26BFB4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26BFACu, 0x26BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFB4u;
label_26bfb4:
    // 0x26bfb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26bfb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bfb8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26bfbc: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x26bfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x26bfc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26bfc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bfc4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26bfc8: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26bfc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x26bfcc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26bfd0: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x26bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x26bfd4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26bfd8: 0xac601b64  sw          $zero, 0x1B64($v1)
    ctx->pc = 0x26bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 0));
    // 0x26bfdc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26bfe0: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x26bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
    // 0x26bfe4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26bfe8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26bfe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26bfec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26bff0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26bff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x26bff4u;
}
