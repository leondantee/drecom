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

// Function: entry_001c5284
// Address: 0x1c5284 - 0x1c52fc
void entry_001c5284_0x1c5284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5284_0x1c5284");
#endif

    switch (ctx->pc) {
        case 0x1c5294u: goto label_1c5294;
        case 0x1c52a0u: goto label_1c52a0;
        case 0x1c52b4u: goto label_1c52b4;
        case 0x1c52c0u: goto label_1c52c0;
        default: break;
    }

    ctx->pc = 0x1c5284u;

    // 0x1c5284: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5288: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5288u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c528c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C528Cu;
    SET_GPR_U32(ctx, 31, 0x1C5294u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C528Cu, 0x1C5294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5294u;
label_1c5294:
    // 0x1c5294: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5298: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C5298u;
    SET_GPR_U32(ctx, 31, 0x1C52A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C5298u, 0x1C52A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52A0u;
label_1c52a0:
    // 0x1c52a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c52a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c52a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c52a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c52a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c52a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c52ac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C52ACu;
    SET_GPR_U32(ctx, 31, 0x1C52B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C52ACu, 0x1C52B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52B4u;
label_1c52b4:
    // 0x1c52b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c52b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c52b8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C52B8u;
    SET_GPR_U32(ctx, 31, 0x1C52C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C52B8u, 0x1C52C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52C0u;
label_1c52c0:
    // 0x1c52c0: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1c52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c52c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c52c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c52c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C52C8u;
    {
        const bool branch_taken_0x1c52c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c52c8) {
            ctx->pc = 0x1C52FCu;
            return;
        }
    }
    ctx->pc = 0x1C52D0u;
    // 0x1c52d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c52d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c52d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c52d8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c52dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c52dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c52e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C52E0u;
    {
        const bool branch_taken_0x1c52e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c52e0) {
            ctx->pc = 0x1C52FCu;
            return;
        }
    }
    ctx->pc = 0x1C52E8u;
    // 0x1c52e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c52e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c52ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c52ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c52f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c52f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c52f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c52f8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c52f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c52fcu;
}
