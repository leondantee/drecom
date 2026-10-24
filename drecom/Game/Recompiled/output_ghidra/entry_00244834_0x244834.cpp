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

// Function: entry_00244834
// Address: 0x244834 - 0x244900
void entry_00244834_0x244834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244834_0x244834");
#endif

    switch (ctx->pc) {
        case 0x244860u: goto label_244860;
        case 0x24487cu: goto label_24487c;
        case 0x244894u: goto label_244894;
        case 0x2448a0u: goto label_2448a0;
        case 0x2448f8u: goto label_2448f8;
        default: break;
    }

    ctx->pc = 0x244834u;

    // 0x244834: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244838: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x244838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24483c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244840: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x244840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244844: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x244844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x244848: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x244848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24484c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24484cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x244850: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x244850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x244854: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x244854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x244858: 0xc05c848  jal         func_172120
    ctx->pc = 0x244858u;
    SET_GPR_U32(ctx, 31, 0x244860u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x244858u, 0x244860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244860u;
label_244860:
    // 0x244860: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x244860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x244864: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244868: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x244868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24486c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x24486cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244870: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x244870u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244874: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x244874u;
    SET_GPR_U32(ctx, 31, 0x24487Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x244874u, 0x24487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24487Cu;
label_24487c:
    // 0x24487c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244880: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x244880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x244884: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244888: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x244888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24488c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x24488Cu;
    SET_GPR_U32(ctx, 31, 0x244894u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x24488Cu, 0x244894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244894u;
label_244894:
    // 0x244894: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244898: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x244898u;
    SET_GPR_U32(ctx, 31, 0x2448A0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x244898u, 0x2448A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448A0u;
label_2448a0:
    // 0x2448a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2448a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2448a4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2448a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2448a8: 0x106000fd  beqz        $v1, . + 4 + (0xFD << 2)
    ctx->pc = 0x2448A8u;
    {
        const bool branch_taken_0x2448a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2448a8) {
            ctx->pc = 0x244CA0u;
            return;
        }
    }
    ctx->pc = 0x2448B0u;
    // 0x2448b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2448b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2448b4: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2448b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2448b8: 0x146000f9  bnez        $v1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x2448B8u;
    {
        const bool branch_taken_0x2448b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2448b8) {
            ctx->pc = 0x244CA0u;
            return;
        }
    }
    ctx->pc = 0x2448C0u;
    // 0x2448c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2448c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2448c4: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2448c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2448c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2448c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2448cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2448ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2448d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2448D0u;
    {
        const bool branch_taken_0x2448d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2448d0) {
            ctx->pc = 0x244900u;
            return;
        }
    }
    ctx->pc = 0x2448D8u;
    // 0x2448d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2448d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2448dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2448dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2448e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2448e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2448e4: 0x3406f009  ori         $a2, $zero, 0xF009
    ctx->pc = 0x2448e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61449);
    // 0x2448e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2448e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2448ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2448ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2448f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2448F0u;
    SET_GPR_U32(ctx, 31, 0x2448F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2448F0u, 0x2448F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448F8u;
label_2448f8:
    // 0x2448f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2448F8u;
    {
        const bool branch_taken_0x2448f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2448f8) {
            ctx->pc = 0x244920u;
            return;
        }
    }
    ctx->pc = 0x244900u;
}
