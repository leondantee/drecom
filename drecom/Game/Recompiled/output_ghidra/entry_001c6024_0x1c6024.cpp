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

// Function: entry_001c6024
// Address: 0x1c6024 - 0x1c609c
void entry_001c6024_0x1c6024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6024_0x1c6024");
#endif

    switch (ctx->pc) {
        case 0x1c6034u: goto label_1c6034;
        case 0x1c6040u: goto label_1c6040;
        case 0x1c6054u: goto label_1c6054;
        case 0x1c6060u: goto label_1c6060;
        default: break;
    }

    ctx->pc = 0x1c6024u;

    // 0x1c6024: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6028: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6028u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c602c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C602Cu;
    SET_GPR_U32(ctx, 31, 0x1C6034u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C602Cu, 0x1C6034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6034u;
label_1c6034:
    // 0x1c6034: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6038: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C6038u;
    SET_GPR_U32(ctx, 31, 0x1C6040u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C6038u, 0x1C6040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6040u;
label_1c6040:
    // 0x1c6040: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6044: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6048: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6048u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c604c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C604Cu;
    SET_GPR_U32(ctx, 31, 0x1C6054u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C604Cu, 0x1C6054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6054u;
label_1c6054:
    // 0x1c6054: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c6054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6058: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C6058u;
    SET_GPR_U32(ctx, 31, 0x1C6060u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C6058u, 0x1C6060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6060u;
label_1c6060:
    // 0x1c6060: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1c6060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c6064: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c6064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c6068: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6068u;
    {
        const bool branch_taken_0x1c6068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6068) {
            ctx->pc = 0x1C609Cu;
            return;
        }
    }
    ctx->pc = 0x1C6070u;
    // 0x1c6070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c6070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6074: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c6074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6078: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c6078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c607c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6080: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6080u;
    {
        const bool branch_taken_0x1c6080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6080) {
            ctx->pc = 0x1C609Cu;
            return;
        }
    }
    ctx->pc = 0x1C6088u;
    // 0x1c6088: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c608c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c608cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c6090: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c6090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6094: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c6094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c6098: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c6098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c609cu;
}
