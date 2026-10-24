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

// Function: entry_0012ca20
// Address: 0x12ca20 - 0x12cac4
void entry_0012ca20_0x12ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ca20_0x12ca20");
#endif

    switch (ctx->pc) {
        case 0x12ca40u: goto label_12ca40;
        case 0x12ca50u: goto label_12ca50;
        case 0x12ca68u: goto label_12ca68;
        case 0x12ca9cu: goto label_12ca9c;
        default: break;
    }

    ctx->pc = 0x12ca20u;

    // 0x12ca20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ca24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ca28: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x12ca28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x12ca2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ca30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12ca34: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12ca38: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12CA38u;
    SET_GPR_U32(ctx, 31, 0x12CA40u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12CA40u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12CA40u) { return; }
    ctx->pc = 0x12CA40u;
label_12ca40:
    // 0x12ca40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ca40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ca44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12ca44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ca48: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12CA48u;
    SET_GPR_U32(ctx, 31, 0x12CA50u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12CA48u, 0x12CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA50u;
label_12ca50:
    // 0x12ca50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ca54: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12ca58: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12ca58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12ca5c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12ca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12ca60: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12CA60u;
    SET_GPR_U32(ctx, 31, 0x12CA68u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12CA60u, 0x12CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA68u;
label_12ca68:
    // 0x12ca68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ca6c: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x12ca6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ca70: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12ca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ca74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12ca74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12ca78: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x12ca78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x12ca7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ca80: 0xc48112a8  lwc1        $f1, 0x12A8($a0)
    ctx->pc = 0x12ca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ca84: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12ca84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ca88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12ca88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12ca8c: 0xe48012a8  swc1        $f0, 0x12A8($a0)
    ctx->pc = 0x12ca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4776), bits); }
    // 0x12ca90: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ca90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ca94: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12CA94u;
    SET_GPR_U32(ctx, 31, 0x12CA9Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12CA94u, 0x12CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA9Cu;
label_12ca9c:
    // 0x12ca9c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12caa0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12caa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12caa4: 0x106001b7  beqz        $v1, . + 4 + (0x1B7 << 2)
    ctx->pc = 0x12CAA4u;
    {
        const bool branch_taken_0x12caa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12caa4) {
            ctx->pc = 0x12D184u;
            return;
        }
    }
    ctx->pc = 0x12CAACu;
    // 0x12caac: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12caacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cab0: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x12cab0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x12cab4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x12cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12cab8: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x12cab8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12cabc: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x12CABCu;
    {
        const bool branch_taken_0x12cabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cabc) {
            ctx->pc = 0x12D2CCu;
            return;
        }
    }
    ctx->pc = 0x12CAC4u;
}
