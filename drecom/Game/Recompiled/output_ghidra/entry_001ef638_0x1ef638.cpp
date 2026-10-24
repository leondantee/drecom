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

// Function: entry_001ef638
// Address: 0x1ef638 - 0x1ef6b0
void entry_001ef638_0x1ef638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef638_0x1ef638");
#endif

    switch (ctx->pc) {
        case 0x1ef658u: goto label_1ef658;
        case 0x1ef67cu: goto label_1ef67c;
        default: break;
    }

    ctx->pc = 0x1ef638u;

    // 0x1ef638: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ef638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef63c: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x1ef63cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x1ef640: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1ef640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ef644: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x1ef644u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef648: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EF648u;
    {
        const bool branch_taken_0x1ef648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef648) {
            ctx->pc = 0x1EF6B0u;
            return;
        }
    }
    ctx->pc = 0x1EF650u;
    // 0x1ef650: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EF650u;
    SET_GPR_U32(ctx, 31, 0x1EF658u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EF650u, 0x1EF658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF658u;
label_1ef658:
    // 0x1ef658: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef65c: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x1ef65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x1ef660: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1ef660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1ef664: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1ef664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ef668: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ef668u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ef66c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef670: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1ef670u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef674: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EF674u;
    SET_GPR_U32(ctx, 31, 0x1EF67Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EF674u, 0x1EF67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF67Cu;
label_1ef67c:
    // 0x1ef67c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ef67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef680: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1ef680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1ef684: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EF684u;
    {
        const bool branch_taken_0x1ef684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef684) {
            ctx->pc = 0x1EF6B0u;
            return;
        }
    }
    ctx->pc = 0x1EF68Cu;
    // 0x1ef68c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1ef68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x1ef690: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ef690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ef694: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ef694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ef698: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef69c: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x1ef69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x1ef6a0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1ef6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1ef6a4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ef6a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef6a8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EF6A8u;
    SET_GPR_U32(ctx, 31, 0x1EF6B0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EF6A8u, 0x1EF6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF6B0u;
}
