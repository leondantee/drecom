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
// Address: 0x34af14 - 0x34afd4
void caseD_3_0x34af14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x34af14");
#endif

    switch (ctx->pc) {
        case 0x34af24u: goto label_34af24;
        case 0x34af30u: goto label_34af30;
        case 0x34af40u: goto label_34af40;
        case 0x34af4cu: goto label_34af4c;
        default: break;
    }

    ctx->pc = 0x34af14u;

    // 0x34af14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34af14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34af18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34af1c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34AF1Cu;
    SET_GPR_U32(ctx, 31, 0x34AF24u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34AF1Cu, 0x34AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF24u;
label_34af24:
    // 0x34af24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34af24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af28: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34AF28u;
    SET_GPR_U32(ctx, 31, 0x34AF30u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34AF28u, 0x34AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF30u;
label_34af30:
    // 0x34af30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34af30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34af34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34af38: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34AF38u;
    SET_GPR_U32(ctx, 31, 0x34AF40u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34AF38u, 0x34AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF40u;
label_34af40:
    // 0x34af40: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34af40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af44: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34AF44u;
    SET_GPR_U32(ctx, 31, 0x34AF4Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34AF44u, 0x34AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF4Cu;
label_34af4c:
    // 0x34af4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af50: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34af50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34af54: 0x106000fd  beqz        $v1, . + 4 + (0xFD << 2)
    ctx->pc = 0x34AF54u;
    {
        const bool branch_taken_0x34af54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34af54) {
            ctx->pc = 0x34B34Cu;
            return;
        }
    }
    ctx->pc = 0x34AF5Cu;
    // 0x34af5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34af5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34af60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af64: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34af64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34af68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34af68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34af6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af70: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34af70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34af74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34af78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34af7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af80: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34af80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34af84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af88: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34af88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34af8c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34af90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34af94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34af98: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34af98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34af9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34afa0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34afa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34afa4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34afa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34afa8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34afac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34afacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34afb0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34afb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34afb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34afb8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34afb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34afbc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34afc0: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x34afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x34afc4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34afc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34afc8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34afcc: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x34AFCCu;
    {
        const bool branch_taken_0x34afcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34afcc) {
            ctx->pc = 0x34B34Cu;
            return;
        }
    }
    ctx->pc = 0x34AFD4u;
}
