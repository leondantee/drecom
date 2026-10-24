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

// Function: entry_002dfeac
// Address: 0x2dfeac - 0x2dfef0
void entry_002dfeac_0x2dfeac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dfeac_0x2dfeac");
#endif

    switch (ctx->pc) {
        case 0x2dfebcu: goto label_2dfebc;
        case 0x2dfec8u: goto label_2dfec8;
        default: break;
    }

    ctx->pc = 0x2dfeacu;

    // 0x2dfeac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfeb0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dfeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dfeb4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DFEB4u;
    SET_GPR_U32(ctx, 31, 0x2DFEBCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DFEB4u, 0x2DFEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFEBCu;
label_2dfebc:
    // 0x2dfebc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfec0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DFEC0u;
    SET_GPR_U32(ctx, 31, 0x2DFEC8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DFEC0u, 0x2DFEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFEC8u;
label_2dfec8:
    // 0x2dfec8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfecc: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dfeccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dfed0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dfed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dfed4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dfed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2dfed8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DFED8u;
    {
        const bool branch_taken_0x2dfed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfed8) {
            ctx->pc = 0x2DFEF0u;
            return;
        }
    }
    ctx->pc = 0x2DFEE0u;
    // 0x2dfee0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfee4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dfee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dfee8: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2DFEE8u;
    {
        const bool branch_taken_0x2dfee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfee8) {
            ctx->pc = 0x2DFFACu;
            return;
        }
    }
    ctx->pc = 0x2DFEF0u;
}
