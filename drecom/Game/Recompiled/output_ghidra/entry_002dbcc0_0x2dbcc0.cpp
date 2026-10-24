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

// Function: entry_002dbcc0
// Address: 0x2dbcc0 - 0x2dbd4c
void entry_002dbcc0_0x2dbcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dbcc0_0x2dbcc0");
#endif

    switch (ctx->pc) {
        case 0x2dbd00u: goto label_2dbd00;
        case 0x2dbd34u: goto label_2dbd34;
        case 0x2dbd44u: goto label_2dbd44;
        default: break;
    }

    ctx->pc = 0x2dbcc0u;

    // 0x2dbcc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbcc4: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dbcc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dbcc8: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2dbcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2dbccc: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dbcccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbcd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbcd4: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dbcd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dbcd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dbcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dbcdc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dbcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2dbce0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DBCE0u;
    {
        const bool branch_taken_0x2dbce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbce0) {
            ctx->pc = 0x2DBD4Cu;
            return;
        }
    }
    ctx->pc = 0x2DBCE8u;
    // 0x2dbce8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dbce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dbcec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbcf0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dbcf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbcf4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dbcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dbcf8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DBCF8u;
    SET_GPR_U32(ctx, 31, 0x2DBD00u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DBCF8u, 0x2DBD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD00u;
label_2dbd00:
    // 0x2dbd00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd04: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dbd04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2dbd08: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBD08u;
    {
        const bool branch_taken_0x2dbd08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd08) {
            ctx->pc = 0x2DBD4Cu;
            return;
        }
    }
    ctx->pc = 0x2DBD10u;
    // 0x2dbd10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd18: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dbd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dbd1c: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2dbd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2dbd20: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dbd20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dbd24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2dbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2dbd28: 0x24478dd0  addiu       $a3, $v0, -0x7230
    ctx->pc = 0x2dbd28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938064));
    // 0x2dbd2c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DBD2Cu;
    SET_GPR_U32(ctx, 31, 0x2DBD34u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DBD2Cu, 0x2DBD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD34u;
label_2dbd34:
    // 0x2dbd34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBD34u;
    {
        const bool branch_taken_0x2dbd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd34) {
            ctx->pc = 0x2DBD4Cu;
            return;
        }
    }
    ctx->pc = 0x2DBD3Cu;
    // 0x2dbd3c: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DBD3Cu;
    SET_GPR_U32(ctx, 31, 0x2DBD44u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DBD3Cu, 0x2DBD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD44u;
label_2dbd44:
    // 0x2dbd44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd48: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2dbd48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2dbd4cu;
}
