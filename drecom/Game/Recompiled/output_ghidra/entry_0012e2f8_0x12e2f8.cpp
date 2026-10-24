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

// Function: entry_0012e2f8
// Address: 0x12e2f8 - 0x12e35c
void entry_0012e2f8_0x12e2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e2f8_0x12e2f8");
#endif

    switch (ctx->pc) {
        case 0x12e328u: goto label_12e328;
        case 0x12e354u: goto label_12e354;
        default: break;
    }

    ctx->pc = 0x12e2f8u;

    // 0x12e2f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e2fc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12e2fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12e300: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12e300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12e304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12e304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12e308: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12E308u;
    {
        const bool branch_taken_0x12e308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e308) {
            ctx->pc = 0x12E35Cu;
            return;
        }
    }
    ctx->pc = 0x12E310u;
    // 0x12e310: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e314: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12e314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12e318: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12e318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12e31c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12e31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12e320: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12E320u;
    SET_GPR_U32(ctx, 31, 0x12E328u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12E320u, 0x12E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E328u;
label_12e328:
    // 0x12e328: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e32c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12e32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12e330: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x12e330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x12e334: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12e338: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12e338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12e33c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e340: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e344: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x12e344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12e348: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12e34c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12E34Cu;
    SET_GPR_U32(ctx, 31, 0x12E354u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12E34Cu, 0x12E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E354u;
label_12e354:
    // 0x12e354: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e358: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12e358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x12e35cu;
}
