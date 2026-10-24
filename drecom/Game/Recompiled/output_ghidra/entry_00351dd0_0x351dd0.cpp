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

// Function: entry_00351dd0
// Address: 0x351dd0 - 0x351e24
void entry_00351dd0_0x351dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00351dd0_0x351dd0");
#endif

    switch (ctx->pc) {
        case 0x351decu: goto label_351dec;
        case 0x351e1cu: goto label_351e1c;
        default: break;
    }

    ctx->pc = 0x351dd0u;

    // 0x351dd0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351dd4: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x351dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x351dd8: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x351dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x351ddc: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x351ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x351de0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x351de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x351de4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x351DE4u;
    SET_GPR_U32(ctx, 31, 0x351DECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x351DE4u, 0x351DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351DECu;
label_351dec:
    // 0x351dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x351decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351df0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351df4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x351df4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x351df8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351dfc: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x351dfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x351e00: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x351e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x351e04: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x351e04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x351e08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e0c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x351e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x351e10: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x351e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x351e14: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x351E14u;
    SET_GPR_U32(ctx, 31, 0x351E1Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x351E14u, 0x351E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E1Cu;
label_351e1c:
    // 0x351e1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e20: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x351e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x351e24u;
}
