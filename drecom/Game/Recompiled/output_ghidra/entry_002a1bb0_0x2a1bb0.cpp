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

// Function: entry_002a1bb0
// Address: 0x2a1bb0 - 0x2a1c70
void entry_002a1bb0_0x2a1bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1bb0_0x2a1bb0");
#endif

    switch (ctx->pc) {
        case 0x2a1bc0u: goto label_2a1bc0;
        case 0x2a1bccu: goto label_2a1bcc;
        case 0x2a1bdcu: goto label_2a1bdc;
        case 0x2a1be8u: goto label_2a1be8;
        case 0x2a1bf4u: goto label_2a1bf4;
        default: break;
    }

    ctx->pc = 0x2a1bb0u;

    // 0x2a1bb0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1bb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1bb8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A1BB8u;
    SET_GPR_U32(ctx, 31, 0x2A1BC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A1BB8u, 0x2A1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BC0u;
label_2a1bc0:
    // 0x2a1bc0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1bc4: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2A1BC4u;
    SET_GPR_U32(ctx, 31, 0x2A1BCCu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2A1BC4u, 0x2A1BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BCCu;
label_2a1bcc:
    // 0x2a1bcc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1bd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1bd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1bd4: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A1BD4u;
    SET_GPR_U32(ctx, 31, 0x2A1BDCu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A1BD4u, 0x2A1BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BDCu;
label_2a1bdc:
    // 0x2a1bdc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1be0: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A1BE0u;
    SET_GPR_U32(ctx, 31, 0x2A1BE8u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A1BE0u, 0x2A1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BE8u;
label_2a1be8:
    // 0x2a1be8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1bec: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A1BECu;
    SET_GPR_U32(ctx, 31, 0x2A1BF4u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A1BECu, 0x2A1BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BF4u;
label_2a1bf4:
    // 0x2a1bf4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1bf8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2a1bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1bfc: 0x9462004a  lhu         $v0, 0x4A($v1)
    ctx->pc = 0x2a1bfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x2a1c00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a1c04: 0xa462004a  sh          $v0, 0x4A($v1)
    ctx->pc = 0x2a1c04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 74), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a1c08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1c10: 0x9442004a  lhu         $v0, 0x4A($v0)
    ctx->pc = 0x2a1c10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 74)));
    // 0x2a1c14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2a1c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a1c18: 0x28410169  slti        $at, $v0, 0x169
    ctx->pc = 0x2a1c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)361) ? 1 : 0);
    // 0x2a1c1c: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A1C1Cu;
    {
        const bool branch_taken_0x2a1c1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1c1c) {
            ctx->pc = 0x2A1C70u;
            return;
        }
    }
    ctx->pc = 0x2A1C24u;
    // 0x2a1c24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c28: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2a1c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1c2c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a1c30: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2a1c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2a1c34: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2a1c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2a1c38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c3c: 0x846210a6  lh          $v0, 0x10A6($v1)
    ctx->pc = 0x2a1c3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2a1c40: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2a1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2a1c44: 0xa46210a6  sh          $v0, 0x10A6($v1)
    ctx->pc = 0x2a1c44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a1c48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c4c: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x2a1c4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x2a1c50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a1c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a1c54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a1c54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a1c58: 0x28411389  slti        $at, $v0, 0x1389
    ctx->pc = 0x2a1c58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x2a1c5c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1C5Cu;
    {
        const bool branch_taken_0x2a1c5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1c5c) {
            ctx->pc = 0x2A1C70u;
            return;
        }
    }
    ctx->pc = 0x2A1C64u;
    // 0x2a1c64: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x2a1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x2a1c68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c6c: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x2a1c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2a1c70u;
}
