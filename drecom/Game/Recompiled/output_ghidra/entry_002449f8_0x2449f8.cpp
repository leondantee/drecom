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

// Function: entry_002449f8
// Address: 0x2449f8 - 0x244ad0
void entry_002449f8_0x2449f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002449f8_0x2449f8");
#endif

    switch (ctx->pc) {
        case 0x244a24u: goto label_244a24;
        case 0x244a40u: goto label_244a40;
        case 0x244a58u: goto label_244a58;
        case 0x244a64u: goto label_244a64;
        case 0x244abcu: goto label_244abc;
        default: break;
    }

    ctx->pc = 0x2449f8u;

    // 0x2449f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2449f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2449fc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2449fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a04: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x244a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244a08: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x244a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x244a0c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x244a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x244a10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x244a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x244a14: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x244a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x244a18: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x244a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x244a1c: 0xc05c848  jal         func_172120
    ctx->pc = 0x244A1Cu;
    SET_GPR_U32(ctx, 31, 0x244A24u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x244A1Cu, 0x244A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A24u;
label_244a24:
    // 0x244a24: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x244a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x244a28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a2c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x244a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244a30: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x244a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244a34: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x244a34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244a38: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x244A38u;
    SET_GPR_U32(ctx, 31, 0x244A40u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x244A38u, 0x244A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A40u;
label_244a40:
    // 0x244a40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x244a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x244a48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a4c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x244a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x244a50: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x244A50u;
    SET_GPR_U32(ctx, 31, 0x244A58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x244A50u, 0x244A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A58u;
label_244a58:
    // 0x244a58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a5c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x244A5Cu;
    SET_GPR_U32(ctx, 31, 0x244A64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x244A5Cu, 0x244A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A64u;
label_244a64:
    // 0x244a64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a68: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x244a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x244a6c: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x244A6Cu;
    {
        const bool branch_taken_0x244a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a6c) {
            ctx->pc = 0x244CA0u;
            return;
        }
    }
    ctx->pc = 0x244A74u;
    // 0x244a74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a78: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x244a78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x244a7c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x244a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x244a80: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x244a80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x244a84: 0x14600086  bnez        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x244A84u;
    {
        const bool branch_taken_0x244a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x244a84) {
            ctx->pc = 0x244CA0u;
            return;
        }
    }
    ctx->pc = 0x244A8Cu;
    // 0x244a8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a90: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x244a90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x244a94: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x244A94u;
    {
        const bool branch_taken_0x244a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x244a94) {
            ctx->pc = 0x244CA0u;
            return;
        }
    }
    ctx->pc = 0x244A9Cu;
    // 0x244a9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244aa0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244aa4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x244aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x244aa8: 0x3406f009  ori         $a2, $zero, 0xF009
    ctx->pc = 0x244aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61449);
    // 0x244aac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x244aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244ab0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x244ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x244ab4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x244AB4u;
    SET_GPR_U32(ctx, 31, 0x244ABCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x244AB4u, 0x244ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244ABCu;
label_244abc:
    // 0x244abc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x244abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244ac0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244ac4: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x244ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x244ac8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x244AC8u;
    {
        const bool branch_taken_0x244ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ac8) {
            ctx->pc = 0x244CA0u;
            return;
        }
    }
    ctx->pc = 0x244AD0u;
}
