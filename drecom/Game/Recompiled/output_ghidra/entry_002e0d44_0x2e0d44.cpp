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

// Function: entry_002e0d44
// Address: 0x2e0d44 - 0x2e0dd0
void entry_002e0d44_0x2e0d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0d44_0x2e0d44");
#endif

    switch (ctx->pc) {
        case 0x2e0d78u: goto label_2e0d78;
        case 0x2e0dacu: goto label_2e0dac;
        case 0x2e0dc8u: goto label_2e0dc8;
        default: break;
    }

    ctx->pc = 0x2e0d44u;

    // 0x2e0d44: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d48: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2e0d48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2e0d4c: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2e0d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2e0d50: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2e0d50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e0d54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d58: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2e0d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2e0d5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e0d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e0d60: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2e0d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2e0d64: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E0D64u;
    {
        const bool branch_taken_0x2e0d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d64) {
            ctx->pc = 0x2E0DD0u;
            return;
        }
    }
    ctx->pc = 0x2E0D6Cu;
    // 0x2e0d6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e0d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e0d70: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E0D70u;
    SET_GPR_U32(ctx, 31, 0x2E0D78u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E0D70u, 0x2E0D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D78u;
label_2e0d78:
    // 0x2e0d78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d7c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2e0d7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2e0d80: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E0D80u;
    {
        const bool branch_taken_0x2e0d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d80) {
            ctx->pc = 0x2E0DD0u;
            return;
        }
    }
    ctx->pc = 0x2E0D88u;
    // 0x2e0d88: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e0d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0d90: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2e0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e0d94: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x2e0d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x2e0d98: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2e0d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e0d9c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2e0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2e0da0: 0x24478ddc  addiu       $a3, $v0, -0x7224
    ctx->pc = 0x2e0da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938076));
    // 0x2e0da4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2E0DA4u;
    SET_GPR_U32(ctx, 31, 0x2E0DACu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2E0DA4u, 0x2E0DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DACu;
label_2e0dac:
    // 0x2e0dac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0DACu;
    {
        const bool branch_taken_0x2e0dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0dac) {
            ctx->pc = 0x2E0DD0u;
            return;
        }
    }
    ctx->pc = 0x2E0DB4u;
    // 0x2e0db4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e0db8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0dbc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2e0dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e0dc0: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2E0DC0u;
    SET_GPR_U32(ctx, 31, 0x2E0DC8u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2E0DC0u, 0x2E0DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0DC8u;
label_2e0dc8:
    // 0x2e0dc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0dcc: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2e0dccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2e0dd0u;
}
