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

// Function: caseD_3
// Address: 0x1cce88 - 0x1ccf1c
void caseD_3_0x1cce88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1cce88");
#endif

    switch (ctx->pc) {
        case 0x1ccee0u: goto label_1ccee0;
        case 0x1ccf0cu: goto label_1ccf0c;
        default: break;
    }

    ctx->pc = 0x1cce88u;

    // 0x1cce88: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cce88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cce8c: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1cce8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cce90: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1cce90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1cce94: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x1cce94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1cce98: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x1cce98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x1cce9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccea0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1ccea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1ccea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ccea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ccea8: 0x30440020  andi        $a0, $v0, 0x20
    ctx->pc = 0x1ccea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1cceac: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CCEACu;
    {
        const bool branch_taken_0x1cceac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cceac) {
            ctx->pc = 0x1CCF48u;
            return;
        }
    }
    ctx->pc = 0x1CCEB4u;
    // 0x1cceb4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cceb8: 0x8ca213e8  lw          $v0, 0x13E8($a1)
    ctx->pc = 0x1cceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
    // 0x1ccebc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CCEBCu;
    {
        const bool branch_taken_0x1ccebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccebc) {
            ctx->pc = 0x1CCF1Cu;
            return;
        }
    }
    ctx->pc = 0x1CCEC4u;
    // 0x1ccec4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccec8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccecc: 0x8c6213e8  lw          $v0, 0x13E8($v1)
    ctx->pc = 0x1cceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cced0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1cced0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1cced4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1cced4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1cced8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CCED8u;
    SET_GPR_U32(ctx, 31, 0x1CCEE0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CCED8u, 0x1CCEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEE0u;
label_1ccee0:
    // 0x1ccee0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccee4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1ccee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1ccee8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ccee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cceec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cceecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccef0: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1ccef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1ccef4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ccef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ccef8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1ccef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ccefc: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1ccefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ccf00: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1ccf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ccf04: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CCF04u;
    SET_GPR_U32(ctx, 31, 0x1CCF0Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CCF04u, 0x1CCF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF0Cu;
label_1ccf0c:
    // 0x1ccf0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf10: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ccf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ccf14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CCF14u;
    {
        const bool branch_taken_0x1ccf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf14) {
            ctx->pc = 0x1CCF48u;
            return;
        }
    }
    ctx->pc = 0x1CCF1Cu;
}
