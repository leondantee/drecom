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

// Function: entry_002e517c
// Address: 0x2e517c - 0x2e51bc
void entry_002e517c_0x2e517c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e517c_0x2e517c");
#endif

    switch (ctx->pc) {
        case 0x2e519cu: goto label_2e519c;
        default: break;
    }

    ctx->pc = 0x2e517cu;

    // 0x2e517c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e517cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5180: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e5180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5184: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e5184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e5188: 0x24060a09  addiu       $a2, $zero, 0xA09
    ctx->pc = 0x2e5188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2569));
    // 0x2e518c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e518cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5190: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e5190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e5194: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E5194u;
    SET_GPR_U32(ctx, 31, 0x2E519Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E5194u, 0x2E519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E519Cu;
label_2e519c:
    // 0x2e519c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2e519cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x2e51a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e51a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e51a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e51a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e51a8: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2e51a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x2e51ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e51acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e51b0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e51b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e51b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e51b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e51b8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e51b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e51bcu;
}
