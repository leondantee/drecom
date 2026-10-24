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

// Function: entry_0019a180
// Address: 0x19a180 - 0x19a1fc
void entry_0019a180_0x19a180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a180_0x19a180");
#endif

    switch (ctx->pc) {
        case 0x19a1acu: goto label_19a1ac;
        case 0x19a1c0u: goto label_19a1c0;
        case 0x19a1d4u: goto label_19a1d4;
        default: break;
    }

    ctx->pc = 0x19a180u;

    // 0x19a180: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a184: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x19a184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a188: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a18c: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x19a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x19a190: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x19a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x19a194: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19a194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19a198: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x19a198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x19a19c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x19a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a1a0: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x19a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x19a1a4: 0xc05c848  jal         func_172120
    ctx->pc = 0x19A1A4u;
    SET_GPR_U32(ctx, 31, 0x19A1ACu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x19A1A4u, 0x19A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1ACu;
label_19a1ac:
    // 0x19a1ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a1b0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x19a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a1b4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x19a1b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19a1b8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x19A1B8u;
    SET_GPR_U32(ctx, 31, 0x19A1C0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x19A1B8u, 0x19A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1C0u;
label_19a1c0:
    // 0x19a1c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a1c4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x19a1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x19a1c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a1cc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19A1CCu;
    SET_GPR_U32(ctx, 31, 0x19A1D4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19A1CCu, 0x19A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1D4u;
label_19a1d4:
    // 0x19a1d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a1d8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19a1d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19a1dc: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x19A1DCu;
    {
        const bool branch_taken_0x19a1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a1dc) {
            ctx->pc = 0x19A284u;
            return;
        }
    }
    ctx->pc = 0x19A1E4u;
    // 0x19a1e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a1e8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19a1e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19a1ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a1f0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19a1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a1f4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x19A1F4u;
    {
        const bool branch_taken_0x19a1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a1f4) {
            ctx->pc = 0x19A284u;
            return;
        }
    }
    ctx->pc = 0x19A1FCu;
}
