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

// Function: entry_001bf0dc
// Address: 0x1bf0dc - 0x1bf170
void entry_001bf0dc_0x1bf0dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf0dc_0x1bf0dc");
#endif

    switch (ctx->pc) {
        case 0x1bf0ecu: goto label_1bf0ec;
        case 0x1bf0f8u: goto label_1bf0f8;
        case 0x1bf10cu: goto label_1bf10c;
        case 0x1bf118u: goto label_1bf118;
        case 0x1bf12cu: goto label_1bf12c;
        default: break;
    }

    ctx->pc = 0x1bf0dcu;

    // 0x1bf0dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf0e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf0e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf0e4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BF0E4u;
    SET_GPR_U32(ctx, 31, 0x1BF0ECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BF0E4u, 0x1BF0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF0ECu;
label_1bf0ec:
    // 0x1bf0ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf0f0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BF0F0u;
    SET_GPR_U32(ctx, 31, 0x1BF0F8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BF0F0u, 0x1BF0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF0F8u;
label_1bf0f8:
    // 0x1bf0f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bf0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf0fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf100: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf104: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BF104u;
    SET_GPR_U32(ctx, 31, 0x1BF10Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BF104u, 0x1BF10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF10Cu;
label_1bf10c:
    // 0x1bf10c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf110: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BF110u;
    SET_GPR_U32(ctx, 31, 0x1BF118u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BF110u, 0x1BF118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF118u;
label_1bf118:
    // 0x1bf118: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf11c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf120: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1bf120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf124: 0xc058c14  jal         func_163050
    ctx->pc = 0x1BF124u;
    SET_GPR_U32(ctx, 31, 0x1BF12Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1BF124u, 0x1BF12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF12Cu;
label_1bf12c:
    // 0x1bf12c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BF12Cu;
    {
        const bool branch_taken_0x1bf12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf12c) {
            ctx->pc = 0x1BF1D0u;
            return;
        }
    }
    ctx->pc = 0x1BF134u;
    // 0x1bf134: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1bf134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bf138: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1bf138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1bf13c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BF13Cu;
    {
        const bool branch_taken_0x1bf13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf13c) {
            ctx->pc = 0x1BF170u;
            return;
        }
    }
    ctx->pc = 0x1BF144u;
    // 0x1bf144: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf148: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bf148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bf14c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bf14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1bf150: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf154: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF154u;
    {
        const bool branch_taken_0x1bf154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf154) {
            ctx->pc = 0x1BF170u;
            return;
        }
    }
    ctx->pc = 0x1BF15Cu;
    // 0x1bf15c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bf15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf160: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bf160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bf164: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bf164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf168: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bf168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bf16c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bf16cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1bf170u;
}
