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

// Function: entry_002dbc44
// Address: 0x2dbc44 - 0x2dbcc0
void entry_002dbc44_0x2dbc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dbc44_0x2dbc44");
#endif

    switch (ctx->pc) {
        case 0x2dbc54u: goto label_2dbc54;
        case 0x2dbc60u: goto label_2dbc60;
        case 0x2dbc70u: goto label_2dbc70;
        case 0x2dbc7cu: goto label_2dbc7c;
        case 0x2dbc88u: goto label_2dbc88;
        default: break;
    }

    ctx->pc = 0x2dbc44u;

    // 0x2dbc44: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dbc48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dbc4c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DBC4Cu;
    SET_GPR_U32(ctx, 31, 0x2DBC54u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DBC4Cu, 0x2DBC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC54u;
label_2dbc54:
    // 0x2dbc54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc58: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DBC58u;
    SET_GPR_U32(ctx, 31, 0x2DBC60u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DBC58u, 0x2DBC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC60u;
label_2dbc60:
    // 0x2dbc60: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dbc64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dbc68: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DBC68u;
    SET_GPR_U32(ctx, 31, 0x2DBC70u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DBC68u, 0x2DBC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC70u;
label_2dbc70:
    // 0x2dbc70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc74: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DBC74u;
    SET_GPR_U32(ctx, 31, 0x2DBC7Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DBC74u, 0x2DBC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC7Cu;
label_2dbc7c:
    // 0x2dbc7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc80: 0xc0c8da4  jal         func_323690
    ctx->pc = 0x2DBC80u;
    SET_GPR_U32(ctx, 31, 0x2DBC88u);
    ctx->pc = 0x323690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323690u, 0x2DBC80u, 0x2DBC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC88u;
label_2dbc88:
    // 0x2dbc88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc8c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2dbc8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2dbc90: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBC90u;
    {
        const bool branch_taken_0x2dbc90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbc90) {
            ctx->pc = 0x2DBCC0u;
            return;
        }
    }
    ctx->pc = 0x2DBC98u;
    // 0x2dbc98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc9c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2dbc9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2dbca0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dbca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dbca4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2dbca4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbca8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbcac: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dbcacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dbcb0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2dbcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2dbcb4: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dbcb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbcb8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DBCB8u;
    {
        const bool branch_taken_0x2dbcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbcb8) {
            ctx->pc = 0x2DBD4Cu;
            return;
        }
    }
    ctx->pc = 0x2DBCC0u;
}
