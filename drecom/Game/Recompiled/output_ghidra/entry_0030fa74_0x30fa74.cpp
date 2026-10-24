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

// Function: entry_0030fa74
// Address: 0x30fa74 - 0x30fb14
void entry_0030fa74_0x30fa74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fa74_0x30fa74");
#endif

    switch (ctx->pc) {
        case 0x30fa94u: goto label_30fa94;
        case 0x30faa0u: goto label_30faa0;
        case 0x30fab0u: goto label_30fab0;
        case 0x30fabcu: goto label_30fabc;
        default: break;
    }

    ctx->pc = 0x30fa74u;

    // 0x30fa74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa78: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30fa78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30fa7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30fa80: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30fa80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30fa84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30fa88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30fa8c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30FA8Cu;
    SET_GPR_U32(ctx, 31, 0x30FA94u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30FA8Cu, 0x30FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FA94u;
label_30fa94:
    // 0x30fa94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa98: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30FA98u;
    SET_GPR_U32(ctx, 31, 0x30FAA0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30FA98u, 0x30FAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FAA0u;
label_30faa0:
    // 0x30faa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30faa4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30faa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30faa8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30FAA8u;
    SET_GPR_U32(ctx, 31, 0x30FAB0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30FAA8u, 0x30FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FAB0u;
label_30fab0:
    // 0x30fab0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fab4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30FAB4u;
    SET_GPR_U32(ctx, 31, 0x30FABCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30FAB4u, 0x30FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FABCu;
label_30fabc:
    // 0x30fabc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fac0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30fac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30fac4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30FAC4u;
    {
        const bool branch_taken_0x30fac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fac4) {
            ctx->pc = 0x30FB14u;
            return;
        }
    }
    ctx->pc = 0x30FACCu;
    // 0x30facc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30faccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fad0: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30fad4: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x30fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x30fad8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30fad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30fadc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30fadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30fae0: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x30fae4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fae8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30faec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30faecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30faf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30faf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30faf8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30faf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30fafc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fb00: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30fb00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fb04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fb08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30fb08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fb0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fb10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30fb14u;
}
