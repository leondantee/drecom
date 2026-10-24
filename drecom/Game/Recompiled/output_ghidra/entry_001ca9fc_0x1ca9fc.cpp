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

// Function: entry_001ca9fc
// Address: 0x1ca9fc - 0x1caa6c
void entry_001ca9fc_0x1ca9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca9fc_0x1ca9fc");
#endif

    switch (ctx->pc) {
        case 0x1caa0cu: goto label_1caa0c;
        case 0x1caa1cu: goto label_1caa1c;
        case 0x1caa28u: goto label_1caa28;
        case 0x1caa3cu: goto label_1caa3c;
        case 0x1caa48u: goto label_1caa48;
        default: break;
    }

    ctx->pc = 0x1ca9fcu;

    // 0x1ca9fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1ca9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1caa00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1caa04: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CAA04u;
    SET_GPR_U32(ctx, 31, 0x1CAA0Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CAA04u, 0x1CAA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA0Cu;
label_1caa0c:
    // 0x1caa0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa10: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1caa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1caa14: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CAA14u;
    SET_GPR_U32(ctx, 31, 0x1CAA1Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CAA14u, 0x1CAA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA1Cu;
label_1caa1c:
    // 0x1caa1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1caa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa20: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CAA20u;
    SET_GPR_U32(ctx, 31, 0x1CAA28u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CAA20u, 0x1CAA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA28u;
label_1caa28:
    // 0x1caa28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1caa28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1caa2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1caa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1caa30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1caa34: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x1CAA34u;
    SET_GPR_U32(ctx, 31, 0x1CAA3Cu);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x1CAA34u, 0x1CAA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA3Cu;
label_1caa3c:
    // 0x1caa3c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1caa3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1caa40: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CAA40u;
    SET_GPR_U32(ctx, 31, 0x1CAA48u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CAA40u, 0x1CAA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA48u;
label_1caa48:
    // 0x1caa48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1caa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa4c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1caa4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1caa50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1caa50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1caa54: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1caa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1caa58: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAA58u;
    {
        const bool branch_taken_0x1caa58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caa58) {
            ctx->pc = 0x1CAA6Cu;
            return;
        }
    }
    ctx->pc = 0x1CAA60u;
    // 0x1caa60: 0x240400e6  addiu       $a0, $zero, 0xE6
    ctx->pc = 0x1caa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1caa64: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x1CAA64u;
    SET_GPR_U32(ctx, 31, 0x1CAA6Cu);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x1CAA64u, 0x1CAA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA6Cu;
}
