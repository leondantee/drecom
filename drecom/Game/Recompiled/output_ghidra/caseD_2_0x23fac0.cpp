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

// Function: caseD_2
// Address: 0x23fac0 - 0x23fb28
void caseD_2_0x23fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x23fac0");
#endif

    switch (ctx->pc) {
        case 0x23fad0u: goto label_23fad0;
        case 0x23fadcu: goto label_23fadc;
        case 0x23fb0cu: goto label_23fb0c;
        case 0x23fb14u: goto label_23fb14;
        default: break;
    }

    ctx->pc = 0x23fac0u;

    // 0x23fac0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fac4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23fac8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23FAC8u;
    SET_GPR_U32(ctx, 31, 0x23FAD0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23FAC8u, 0x23FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAD0u;
label_23fad0:
    // 0x23fad0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fad4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23FAD4u;
    SET_GPR_U32(ctx, 31, 0x23FADCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23FAD4u, 0x23FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FADCu;
label_23fadc:
    // 0x23fadc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fae0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23fae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23fae4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x23FAE4u;
    {
        const bool branch_taken_0x23fae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fae4) {
            ctx->pc = 0x23FB28u;
            return;
        }
    }
    ctx->pc = 0x23FAECu;
    // 0x23faec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23faf0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23faf4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23faf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23faf8: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x23faf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
    // 0x23fafc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23fafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fb00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23fb00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23fb04: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23FB04u;
    SET_GPR_U32(ctx, 31, 0x23FB0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23FB04u, 0x23FB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB0Cu;
label_23fb0c:
    // 0x23fb0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23FB0Cu;
    SET_GPR_U32(ctx, 31, 0x23FB14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23FB0Cu, 0x23FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB14u;
label_23fb14:
    // 0x23fb14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23fb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23fb18: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x23fb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x23fb1c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x23fb1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x23fb20: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fb24: 0xa46409ee  sh          $a0, 0x9EE($v1)
    ctx->pc = 0x23fb24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2542), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x23fb28u;
}
