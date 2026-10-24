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

// Function: entry_00124988
// Address: 0x124988 - 0x124a20
void entry_00124988_0x124988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124988_0x124988");
#endif

    switch (ctx->pc) {
        case 0x124998u: goto label_124998;
        case 0x1249a4u: goto label_1249a4;
        case 0x1249b4u: goto label_1249b4;
        case 0x1249c0u: goto label_1249c0;
        default: break;
    }

    ctx->pc = 0x124988u;

    // 0x124988: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12498c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12498cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x124990: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x124990u;
    SET_GPR_U32(ctx, 31, 0x124998u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x124990u, 0x124998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124998u;
label_124998:
    // 0x124998: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12499c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12499Cu;
    SET_GPR_U32(ctx, 31, 0x1249A4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12499Cu, 0x1249A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1249A4u;
label_1249a4:
    // 0x1249a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1249a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1249a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1249a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1249ac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1249ACu;
    SET_GPR_U32(ctx, 31, 0x1249B4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1249ACu, 0x1249B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1249B4u;
label_1249b4:
    // 0x1249b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1249b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1249b8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1249B8u;
    SET_GPR_U32(ctx, 31, 0x1249C0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1249B8u, 0x1249C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1249C0u;
label_1249c0:
    // 0x1249c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1249c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1249c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1249c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1249c8: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1249C8u;
    {
        const bool branch_taken_0x1249c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1249c8) {
            ctx->pc = 0x124A58u;
            return;
        }
    }
    ctx->pc = 0x1249D0u;
    // 0x1249d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1249d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1249d4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1249d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1249d8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1249d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1249dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1249dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1249e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1249E0u;
    {
        const bool branch_taken_0x1249e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1249e0) {
            ctx->pc = 0x124A20u;
            return;
        }
    }
    ctx->pc = 0x1249E8u;
    // 0x1249e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1249e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1249ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1249ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1249f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1249f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1249f4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1249f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1249f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1249f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1249fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1249fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x124a00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a04: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124a08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x124a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x124a10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124a14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x124a18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x124A18u;
    {
        const bool branch_taken_0x124a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124a18) {
            ctx->pc = 0x124A50u;
            return;
        }
    }
    ctx->pc = 0x124A20u;
}
