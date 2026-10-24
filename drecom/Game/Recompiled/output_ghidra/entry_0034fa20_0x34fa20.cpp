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

// Function: entry_0034fa20
// Address: 0x34fa20 - 0x34fad8
void entry_0034fa20_0x34fa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034fa20_0x34fa20");
#endif

    switch (ctx->pc) {
        case 0x34fa30u: goto label_34fa30;
        case 0x34fa3cu: goto label_34fa3c;
        case 0x34fa4cu: goto label_34fa4c;
        case 0x34fa58u: goto label_34fa58;
        default: break;
    }

    ctx->pc = 0x34fa20u;

    // 0x34fa20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34fa24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34fa28: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34FA28u;
    SET_GPR_U32(ctx, 31, 0x34FA30u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34FA28u, 0x34FA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA30u;
label_34fa30:
    // 0x34fa30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa34: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34FA34u;
    SET_GPR_U32(ctx, 31, 0x34FA3Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34FA34u, 0x34FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA3Cu;
label_34fa3c:
    // 0x34fa3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34fa40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34fa44: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34FA44u;
    SET_GPR_U32(ctx, 31, 0x34FA4Cu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34FA44u, 0x34FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA4Cu;
label_34fa4c:
    // 0x34fa4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa50: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34FA50u;
    SET_GPR_U32(ctx, 31, 0x34FA58u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34FA50u, 0x34FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA58u;
label_34fa58:
    // 0x34fa58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa5c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34fa5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34fa60: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x34FA60u;
    {
        const bool branch_taken_0x34fa60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fa60) {
            ctx->pc = 0x34FAD8u;
            return;
        }
    }
    ctx->pc = 0x34FA68u;
    // 0x34fa68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fa6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa70: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34fa70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34fa74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fa78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa7c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34fa7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34fa80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34fa84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fa88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa8c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34fa8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fa90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa94: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34fa98: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34fa9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34faa0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34faa4: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34faa4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34faa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34faac: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34faacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34fab0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34fab4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34fab8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34fab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34fabc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34fac0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fac4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34fac8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34facc: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x34faccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x34fad0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34fad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34fad4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x34fad8u;
}
