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

// Function: caseD_4
// Address: 0x309e04 - 0x309e54
void caseD_4_0x309e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x309e04");
#endif

    switch (ctx->pc) {
        case 0x309e24u: goto label_309e24;
        default: break;
    }

    ctx->pc = 0x309e04u;

    // 0x309e04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309e08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309e0c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x309e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x309e10: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x309e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x309e14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x309e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309e18: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x309e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x309e1c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x309E1Cu;
    SET_GPR_U32(ctx, 31, 0x309E24u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x309E1Cu, 0x309E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E24u;
label_309e24:
    // 0x309e24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309e28: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x309e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x309e2c: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x309e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x309e30: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x309e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x309e34: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x309e34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x309e38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309e3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309e40: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x309e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x309e44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309e48: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x309e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x309e4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x309e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309e50: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x309e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x309e54u;
}
