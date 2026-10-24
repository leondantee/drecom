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

// Function: entry_0028e0e8
// Address: 0x28e0e8 - 0x28e160
void entry_0028e0e8_0x28e0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e0e8_0x28e0e8");
#endif

    switch (ctx->pc) {
        case 0x28e10cu: goto label_28e10c;
        case 0x28e158u: goto label_28e158;
        default: break;
    }

    ctx->pc = 0x28e0e8u;

    // 0x28e0e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28e0e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e0ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28e0f0: 0x244427e0  addiu       $a0, $v0, 0x27E0
    ctx->pc = 0x28e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10208));
    // 0x28e0f4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x28e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x28e0f8: 0x2445bf58  addiu       $a1, $v0, -0x40A8
    ctx->pc = 0x28e0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950744));
    // 0x28e0fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28e100: 0x24462800  addiu       $a2, $v0, 0x2800
    ctx->pc = 0x28e100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
    // 0x28e104: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x28E104u;
    SET_GPR_U32(ctx, 31, 0x28E10Cu);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x28E104u, 0x28E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E10Cu;
label_28e10c:
    // 0x28e10c: 0x10400284  beqz        $v0, . + 4 + (0x284 << 2)
    ctx->pc = 0x28E10Cu;
    {
        const bool branch_taken_0x28e10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e10c) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28E114u;
    // 0x28e114: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28e114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e118: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x28e118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28e11c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28E11Cu;
    {
        const bool branch_taken_0x28e11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e11c) {
            ctx->pc = 0x28E180u;
            return;
        }
    }
    ctx->pc = 0x28E124u;
    // 0x28e124: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28e124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28e128: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x28e128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28e12c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x28e12cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x28e130: 0x82065de8  lb          $a2, 0x5DE8($s0)
    ctx->pc = 0x28e130u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x28e134: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x28e134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
    // 0x28e138: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x28e138u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x28e13c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E13Cu;
    {
        const bool branch_taken_0x28e13c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x28e13c) {
            ctx->pc = 0x28E160u;
            return;
        }
    }
    ctx->pc = 0x28E144u;
    // 0x28e144: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28e144u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e148: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28e148u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e14c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e14cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e150: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x28E150u;
    SET_GPR_U32(ctx, 31, 0x28E158u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x28E150u, 0x28E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E158u;
label_28e158:
    // 0x28e158: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28E158u;
    {
        const bool branch_taken_0x28e158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e158) {
            ctx->pc = 0x28E1E8u;
            return;
        }
    }
    ctx->pc = 0x28E160u;
}
