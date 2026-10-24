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

// Function: entry_00309484
// Address: 0x309484 - 0x309538
void entry_00309484_0x309484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00309484_0x309484");
#endif

    switch (ctx->pc) {
        case 0x309494u: goto label_309494;
        case 0x3094a0u: goto label_3094a0;
        case 0x3094b0u: goto label_3094b0;
        case 0x3094bcu: goto label_3094bc;
        default: break;
    }

    ctx->pc = 0x309484u;

    // 0x309484: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309488: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x309488u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30948c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30948Cu;
    SET_GPR_U32(ctx, 31, 0x309494u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30948Cu, 0x309494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309494u;
label_309494:
    // 0x309494: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309498: 0xc05cd10  jal         func_173440
    ctx->pc = 0x309498u;
    SET_GPR_U32(ctx, 31, 0x3094A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x309498u, 0x3094A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094A0u;
label_3094a0:
    // 0x3094a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3094a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3094a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3094a8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3094A8u;
    SET_GPR_U32(ctx, 31, 0x3094B0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3094A8u, 0x3094B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094B0u;
label_3094b0:
    // 0x3094b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3094b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094b4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3094B4u;
    SET_GPR_U32(ctx, 31, 0x3094BCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3094B4u, 0x3094BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094BCu;
label_3094bc:
    // 0x3094bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3094bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094c0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3094c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3094c4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3094C4u;
    {
        const bool branch_taken_0x3094c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3094c4) {
            ctx->pc = 0x309550u;
            return;
        }
    }
    ctx->pc = 0x3094CCu;
    // 0x3094cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3094ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3094d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3094d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3094d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3094d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3094d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3094dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3094dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3094e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3094e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3094e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3094e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3094ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3094ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3094f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3094f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3094f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3094f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3094fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3094fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x309500: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309504: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x309504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x309508: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30950c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x30950cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x309510: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x309510u;
    {
        const bool branch_taken_0x309510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309510) {
            ctx->pc = 0x309538u;
            return;
        }
    }
    ctx->pc = 0x309518u;
    // 0x309518: 0x3c03bf20  lui         $v1, 0xBF20
    ctx->pc = 0x309518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48928 << 16));
    // 0x30951c: 0x3463d97c  ori         $v1, $v1, 0xD97C
    ctx->pc = 0x30951cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55676);
    // 0x309520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309524: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309528: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x309528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x30952c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30952cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x309530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x309530u;
    {
        const bool branch_taken_0x309530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309530) {
            ctx->pc = 0x309550u;
            return;
        }
    }
    ctx->pc = 0x309538u;
}
