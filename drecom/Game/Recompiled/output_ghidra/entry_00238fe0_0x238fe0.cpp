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

// Function: entry_00238fe0
// Address: 0x238fe0 - 0x239090
void entry_00238fe0_0x238fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238fe0_0x238fe0");
#endif

    switch (ctx->pc) {
        case 0x23900cu: goto label_23900c;
        case 0x239028u: goto label_239028;
        case 0x239040u: goto label_239040;
        case 0x23904cu: goto label_23904c;
        case 0x23907cu: goto label_23907c;
        default: break;
    }

    ctx->pc = 0x238fe0u;

    // 0x238fe0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x238fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fe4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x238fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fe8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fec: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x238fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238ff0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x238ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x238ff4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x238ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238ff8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x238ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x238ffc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x238ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x239000: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x239000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x239004: 0xc05c848  jal         func_172120
    ctx->pc = 0x239004u;
    SET_GPR_U32(ctx, 31, 0x23900Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x239004u, 0x23900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23900Cu;
label_23900c:
    // 0x23900c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x23900cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x239010: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239014: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x239014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239018: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x239018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23901c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23901cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x239020: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x239020u;
    SET_GPR_U32(ctx, 31, 0x239028u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x239020u, 0x239028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239028u;
label_239028:
    // 0x239028: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23902c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23902cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x239030: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239034: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x239034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x239038: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x239038u;
    SET_GPR_U32(ctx, 31, 0x239040u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x239038u, 0x239040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239040u;
label_239040:
    // 0x239040: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239044: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x239044u;
    SET_GPR_U32(ctx, 31, 0x23904Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x239044u, 0x23904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23904Cu;
label_23904c:
    // 0x23904c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239050: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x239050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x239054: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x239054u;
    {
        const bool branch_taken_0x239054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x239054) {
            ctx->pc = 0x23912Cu;
            return;
        }
    }
    ctx->pc = 0x23905Cu;
    // 0x23905c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23905cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239060: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239064: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239068: 0x3406f005  ori         $a2, $zero, 0xF005
    ctx->pc = 0x239068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61445);
    // 0x23906c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23906cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239070: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239074: 0xc0965d0  jal         func_259740
    ctx->pc = 0x239074u;
    SET_GPR_U32(ctx, 31, 0x23907Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x239074u, 0x23907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23907Cu;
label_23907c:
    // 0x23907c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23907cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239080: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239084: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x239084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x239088: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x239088u;
    {
        const bool branch_taken_0x239088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239088) {
            ctx->pc = 0x23912Cu;
            return;
        }
    }
    ctx->pc = 0x239090u;
}
