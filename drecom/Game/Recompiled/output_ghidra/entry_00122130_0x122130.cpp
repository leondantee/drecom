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

// Function: entry_00122130
// Address: 0x122130 - 0x122194
void entry_00122130_0x122130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122130_0x122130");
#endif

    switch (ctx->pc) {
        case 0x122154u: goto label_122154;
        default: break;
    }

    ctx->pc = 0x122130u;

    // 0x122130: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122134: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x122134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122138: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x122138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x12213c: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x12213cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x122140: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x122140u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122144: 0x0  nop
    ctx->pc = 0x122144u;
    // NOP
    // 0x122148: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122148u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12214c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12214Cu;
    SET_GPR_U32(ctx, 31, 0x122154u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12214Cu, 0x122154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122154u;
label_122154:
    // 0x122154: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122158: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x122158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x12215c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12215cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122160: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122164: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122168: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12216c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12216cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122170: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x122170u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x122174: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122178: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x122178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12217c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122180: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122180u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122184: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122188: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x122188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12218c: 0x100002e8  b           . + 4 + (0x2E8 << 2)
    ctx->pc = 0x12218Cu;
    {
        const bool branch_taken_0x12218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12218c) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122194u;
}
