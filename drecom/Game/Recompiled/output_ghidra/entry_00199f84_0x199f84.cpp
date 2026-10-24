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

// Function: entry_00199f84
// Address: 0x199f84 - 0x19a000
void entry_00199f84_0x199f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199f84_0x199f84");
#endif

    switch (ctx->pc) {
        case 0x199fb0u: goto label_199fb0;
        case 0x199fc4u: goto label_199fc4;
        case 0x199fd8u: goto label_199fd8;
        default: break;
    }

    ctx->pc = 0x199f84u;

    // 0x199f84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199f88: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x199f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199f8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199f90: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x199f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x199f94: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x199f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x199f98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x199f9c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x199f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x199fa0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x199fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x199fa4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x199fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x199fa8: 0xc05c848  jal         func_172120
    ctx->pc = 0x199FA8u;
    SET_GPR_U32(ctx, 31, 0x199FB0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x199FA8u, 0x199FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FB0u;
label_199fb0:
    // 0x199fb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199fb4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x199fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199fb8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x199fb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x199fbc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x199FBCu;
    SET_GPR_U32(ctx, 31, 0x199FC4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x199FBCu, 0x199FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FC4u;
label_199fc4:
    // 0x199fc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199fc8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x199fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x199fcc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199fd0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x199FD0u;
    SET_GPR_U32(ctx, 31, 0x199FD8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x199FD0u, 0x199FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FD8u;
label_199fd8:
    // 0x199fd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199fdc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x199fdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x199fe0: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x199FE0u;
    {
        const bool branch_taken_0x199fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199fe0) {
            ctx->pc = 0x19A284u;
            return;
        }
    }
    ctx->pc = 0x199FE8u;
    // 0x199fe8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199fec: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x199fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x199ff0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199ff4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x199ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x199ff8: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x199FF8u;
    {
        const bool branch_taken_0x199ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ff8) {
            ctx->pc = 0x19A284u;
            return;
        }
    }
    ctx->pc = 0x19A000u;
}
