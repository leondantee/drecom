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

// Function: entry_002d4798
// Address: 0x2d4798 - 0x2d4848
void entry_002d4798_0x2d4798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4798_0x2d4798");
#endif

    switch (ctx->pc) {
        case 0x2d47a8u: goto label_2d47a8;
        case 0x2d47b4u: goto label_2d47b4;
        case 0x2d47c4u: goto label_2d47c4;
        case 0x2d47d0u: goto label_2d47d0;
        default: break;
    }

    ctx->pc = 0x2d4798u;

    // 0x2d4798: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d479c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d479cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d47a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D47A0u;
    SET_GPR_U32(ctx, 31, 0x2D47A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D47A0u, 0x2D47A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47A8u;
label_2d47a8:
    // 0x2d47a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d47a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47ac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D47ACu;
    SET_GPR_U32(ctx, 31, 0x2D47B4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D47ACu, 0x2D47B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47B4u;
label_2d47b4:
    // 0x2d47b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d47b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d47b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d47bc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D47BCu;
    SET_GPR_U32(ctx, 31, 0x2D47C4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D47BCu, 0x2D47C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47C4u;
label_2d47c4:
    // 0x2d47c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d47c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47c8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D47C8u;
    SET_GPR_U32(ctx, 31, 0x2D47D0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D47C8u, 0x2D47D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47D0u;
label_2d47d0:
    // 0x2d47d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47d4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d47d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d47d8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D47D8u;
    {
        const bool branch_taken_0x2d47d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d47d8) {
            ctx->pc = 0x2D4860u;
            return;
        }
    }
    ctx->pc = 0x2D47E0u;
    // 0x2d47e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d47e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d47e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d47e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d47e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d47ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47f0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d47f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d47f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d47f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d47f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d47fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d47fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4800: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d4800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4804: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4808: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d4808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d480c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4810: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4814: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2d4814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4818: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d481c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2d481cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d4820: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D4820u;
    {
        const bool branch_taken_0x2d4820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4820) {
            ctx->pc = 0x2D4848u;
            return;
        }
    }
    ctx->pc = 0x2D4828u;
    // 0x2d4828: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2d4828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2d482c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2d482cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2d4830: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d4830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4834: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4838: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d4838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d483c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d483cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d4840: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4840u;
    {
        const bool branch_taken_0x2d4840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4840) {
            ctx->pc = 0x2D4860u;
            return;
        }
    }
    ctx->pc = 0x2D4848u;
}
