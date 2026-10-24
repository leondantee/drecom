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

// Function: entry_002dbf6c
// Address: 0x2dbf6c - 0x2dbff8
void entry_002dbf6c_0x2dbf6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dbf6c_0x2dbf6c");
#endif

    switch (ctx->pc) {
        case 0x2dbfacu: goto label_2dbfac;
        case 0x2dbfe0u: goto label_2dbfe0;
        case 0x2dbff0u: goto label_2dbff0;
        default: break;
    }

    ctx->pc = 0x2dbf6cu;

    // 0x2dbf6c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf70: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dbf70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dbf74: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2dbf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2dbf78: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dbf78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbf7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf80: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dbf80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dbf84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dbf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dbf88: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dbf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2dbf8c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DBF8Cu;
    {
        const bool branch_taken_0x2dbf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbf8c) {
            ctx->pc = 0x2DBFF8u;
            return;
        }
    }
    ctx->pc = 0x2DBF94u;
    // 0x2dbf94: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dbf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dbf98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf9c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dbf9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbfa0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dbfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dbfa4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DBFA4u;
    SET_GPR_U32(ctx, 31, 0x2DBFACu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DBFA4u, 0x2DBFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFACu;
label_2dbfac:
    // 0x2dbfac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbfb0: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dbfb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2dbfb4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBFB4u;
    {
        const bool branch_taken_0x2dbfb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbfb4) {
            ctx->pc = 0x2DBFF8u;
            return;
        }
    }
    ctx->pc = 0x2DBFBCu;
    // 0x2dbfbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbfc0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbfc4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dbfc8: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2dbfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x2dbfcc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dbfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dbfd0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2dbfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2dbfd4: 0x24478dd0  addiu       $a3, $v0, -0x7230
    ctx->pc = 0x2dbfd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938064));
    // 0x2dbfd8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DBFD8u;
    SET_GPR_U32(ctx, 31, 0x2DBFE0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DBFD8u, 0x2DBFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFE0u;
label_2dbfe0:
    // 0x2dbfe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBFE0u;
    {
        const bool branch_taken_0x2dbfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbfe0) {
            ctx->pc = 0x2DBFF8u;
            return;
        }
    }
    ctx->pc = 0x2DBFE8u;
    // 0x2dbfe8: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DBFE8u;
    SET_GPR_U32(ctx, 31, 0x2DBFF0u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DBFE8u, 0x2DBFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFF0u;
label_2dbff0:
    // 0x2dbff0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbff4: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2dbff4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2dbff8u;
}
