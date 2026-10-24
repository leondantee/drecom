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

// Function: entry_002dc290
// Address: 0x2dc290 - 0x2dc31c
void entry_002dc290_0x2dc290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc290_0x2dc290");
#endif

    switch (ctx->pc) {
        case 0x2dc2c4u: goto label_2dc2c4;
        case 0x2dc2f8u: goto label_2dc2f8;
        case 0x2dc314u: goto label_2dc314;
        default: break;
    }

    ctx->pc = 0x2dc290u;

    // 0x2dc290: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc294: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dc294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dc298: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2dc298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2dc29c: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dc29cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc2a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc2a4: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dc2a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dc2a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc2ac: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dc2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2dc2b0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DC2B0u;
    {
        const bool branch_taken_0x2dc2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc2b0) {
            ctx->pc = 0x2DC31Cu;
            return;
        }
    }
    ctx->pc = 0x2DC2B8u;
    // 0x2dc2b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dc2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dc2bc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DC2BCu;
    SET_GPR_U32(ctx, 31, 0x2DC2C4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DC2BCu, 0x2DC2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC2C4u;
label_2dc2c4:
    // 0x2dc2c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc2c8: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dc2c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2dc2cc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DC2CCu;
    {
        const bool branch_taken_0x2dc2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc2cc) {
            ctx->pc = 0x2DC31Cu;
            return;
        }
    }
    ctx->pc = 0x2DC2D4u;
    // 0x2dc2d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc2d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc2dc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dc2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dc2e0: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x2dc2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x2dc2e4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dc2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dc2e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2dc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2dc2ec: 0x24478ddc  addiu       $a3, $v0, -0x7224
    ctx->pc = 0x2dc2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938076));
    // 0x2dc2f0: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DC2F0u;
    SET_GPR_U32(ctx, 31, 0x2DC2F8u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DC2F0u, 0x2DC2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC2F8u;
label_2dc2f8:
    // 0x2dc2f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DC2F8u;
    {
        const bool branch_taken_0x2dc2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc2f8) {
            ctx->pc = 0x2DC31Cu;
            return;
        }
    }
    ctx->pc = 0x2DC300u;
    // 0x2dc300: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dc300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dc304: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc308: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dc308u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc30c: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DC30Cu;
    SET_GPR_U32(ctx, 31, 0x2DC314u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DC30Cu, 0x2DC314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC314u;
label_2dc314:
    // 0x2dc314: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc318: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2dc318u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2dc31cu;
}
