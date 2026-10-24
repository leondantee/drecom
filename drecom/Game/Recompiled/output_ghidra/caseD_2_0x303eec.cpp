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

// Function: caseD_2
// Address: 0x303eec - 0x303f2c
void caseD_2_0x303eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x303eec");
#endif

    switch (ctx->pc) {
        case 0x303f0cu: goto label_303f0c;
        default: break;
    }

    ctx->pc = 0x303eecu;

    // 0x303eec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303ef0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303ef4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x303ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x303ef8: 0x2406282e  addiu       $a2, $zero, 0x282E
    ctx->pc = 0x303ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10286));
    // 0x303efc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303f00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x303f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x303f04: 0xc0965d0  jal         func_259740
    ctx->pc = 0x303F04u;
    SET_GPR_U32(ctx, 31, 0x303F0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x303F04u, 0x303F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F0Cu;
label_303f0c:
    // 0x303f0c: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x303f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x303f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303f14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303f18: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x303f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x303f1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303f20: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x303f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x303f24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x303f28: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x303f28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x303f2cu;
}
