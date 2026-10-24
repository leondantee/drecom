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

// Function: entry_001c0304
// Address: 0x1c0304 - 0x1c037c
void entry_001c0304_0x1c0304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0304_0x1c0304");
#endif

    switch (ctx->pc) {
        case 0x1c0314u: goto label_1c0314;
        case 0x1c0320u: goto label_1c0320;
        case 0x1c0334u: goto label_1c0334;
        case 0x1c0340u: goto label_1c0340;
        default: break;
    }

    ctx->pc = 0x1c0304u;

    // 0x1c0304: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0308: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0308u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c030c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C030Cu;
    SET_GPR_U32(ctx, 31, 0x1C0314u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C030Cu, 0x1C0314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0314u;
label_1c0314:
    // 0x1c0314: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0318: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C0318u;
    SET_GPR_U32(ctx, 31, 0x1C0320u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C0318u, 0x1C0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0320u;
label_1c0320:
    // 0x1c0320: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0324: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0328: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0328u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c032c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C032Cu;
    SET_GPR_U32(ctx, 31, 0x1C0334u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C032Cu, 0x1C0334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0334u;
label_1c0334:
    // 0x1c0334: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c0334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0338: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C0338u;
    SET_GPR_U32(ctx, 31, 0x1C0340u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C0338u, 0x1C0340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0340u;
label_1c0340:
    // 0x1c0340: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c0340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c0344: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c0344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c0348: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0348u;
    {
        const bool branch_taken_0x1c0348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0348) {
            ctx->pc = 0x1C037Cu;
            return;
        }
    }
    ctx->pc = 0x1C0350u;
    // 0x1c0350: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0354: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c0354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c0358: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c0358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c035c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c035cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c0360: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0360u;
    {
        const bool branch_taken_0x1c0360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0360) {
            ctx->pc = 0x1C037Cu;
            return;
        }
    }
    ctx->pc = 0x1C0368u;
    // 0x1c0368: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c036c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c036cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c0370: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c0370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c0374: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c0374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c0378: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c0378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c037cu;
}
