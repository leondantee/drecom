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

// Function: entry_0020646c
// Address: 0x20646c - 0x2064dc
void entry_0020646c_0x20646c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020646c_0x20646c");
#endif

    switch (ctx->pc) {
        case 0x2064c0u: goto label_2064c0;
        case 0x2064d4u: goto label_2064d4;
        default: break;
    }

    ctx->pc = 0x20646cu;

    // 0x20646c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206470: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x206470u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x206474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x206474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x206478: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x206478u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x20647c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206480: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x206480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x206484: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x206484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x206488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20648c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20648Cu;
    {
        const bool branch_taken_0x20648c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20648c) {
            ctx->pc = 0x2064DCu;
            return;
        }
    }
    ctx->pc = 0x206494u;
    // 0x206494: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206498: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x206498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20649c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20649cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2064a0: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x2064a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x2064a4: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x2064a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x2064a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2064a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2064ac: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2064acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2064b0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2064b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2064b4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x2064b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x2064b8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2064B8u;
    SET_GPR_U32(ctx, 31, 0x2064C0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2064B8u, 0x2064C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064C0u;
label_2064c0:
    // 0x2064c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2064c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2064c4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2064c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2064c8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2064c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2064cc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2064CCu;
    SET_GPR_U32(ctx, 31, 0x2064D4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2064CCu, 0x2064D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064D4u;
label_2064d4:
    // 0x2064d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2064d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2064d8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2064d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x2064dcu;
}
