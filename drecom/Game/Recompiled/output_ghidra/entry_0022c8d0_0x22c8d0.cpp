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

// Function: entry_0022c8d0
// Address: 0x22c8d0 - 0x22c9a4
void entry_0022c8d0_0x22c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c8d0_0x22c8d0");
#endif

    switch (ctx->pc) {
        case 0x22c8fcu: goto label_22c8fc;
        case 0x22c918u: goto label_22c918;
        case 0x22c930u: goto label_22c930;
        case 0x22c93cu: goto label_22c93c;
        case 0x22c96cu: goto label_22c96c;
        case 0x22c974u: goto label_22c974;
        default: break;
    }

    ctx->pc = 0x22c8d0u;

    // 0x22c8d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c8d4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x22c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c8d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c8dc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c8e0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22c8e4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22c8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22c8e8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22c8ec: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22c8f0: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22c8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22c8f4: 0xc05c848  jal         func_172120
    ctx->pc = 0x22C8F4u;
    SET_GPR_U32(ctx, 31, 0x22C8FCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22C8F4u, 0x22C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8FCu;
label_22c8fc:
    // 0x22c8fc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22c8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x22c900: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c904: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22c904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c908: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x22c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c90c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22c90cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22c910: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22C910u;
    SET_GPR_U32(ctx, 31, 0x22C918u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22C910u, 0x22C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C918u;
label_22c918:
    // 0x22c918: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c91c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22c91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22c920: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22c920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c924: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22c928: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22C928u;
    SET_GPR_U32(ctx, 31, 0x22C930u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22C928u, 0x22C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C930u;
label_22c930:
    // 0x22c930: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22c930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c934: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22C934u;
    SET_GPR_U32(ctx, 31, 0x22C93Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22C934u, 0x22C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C93Cu;
label_22c93c:
    // 0x22c93c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c940: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22c940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22c944: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x22C944u;
    {
        const bool branch_taken_0x22c944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c944) {
            ctx->pc = 0x22C9A4u;
            return;
        }
    }
    ctx->pc = 0x22C94Cu;
    // 0x22c94c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c950: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22c950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c954: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22c954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22c958: 0x24063c24  addiu       $a2, $zero, 0x3C24
    ctx->pc = 0x22c958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15396));
    // 0x22c95c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c95cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c960: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22c960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22c964: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22C964u;
    SET_GPR_U32(ctx, 31, 0x22C96Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22C964u, 0x22C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C96Cu;
label_22c96c:
    // 0x22c96c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22C96Cu;
    SET_GPR_U32(ctx, 31, 0x22C974u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22C96Cu, 0x22C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C974u;
label_22c974:
    // 0x22c974: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22c974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22c978: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x22c978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x22c97c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22C97Cu;
    {
        const bool branch_taken_0x22c97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c97c) {
            ctx->pc = 0x22C9A4u;
            return;
        }
    }
    ctx->pc = 0x22C984u;
    // 0x22c984: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c988: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c98c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22c98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22c990: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x22c990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x22c994: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c998: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22c998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22c99c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22C99Cu;
    SET_GPR_U32(ctx, 31, 0x22C9A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22C99Cu, 0x22C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9A4u;
}
