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

// Function: entry_00197788
// Address: 0x197788 - 0x197808
void entry_00197788_0x197788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197788_0x197788");
#endif

    switch (ctx->pc) {
        case 0x1977ccu: goto label_1977cc;
        case 0x1977f4u: goto label_1977f4;
        default: break;
    }

    ctx->pc = 0x197788u;

    // 0x197788: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x197788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19778c: 0x94470094  lhu         $a3, 0x94($v0)
    ctx->pc = 0x19778cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x197790: 0x14e0001d  bnez        $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x197790u;
    {
        const bool branch_taken_0x197790 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x197790) {
            ctx->pc = 0x197808u;
            return;
        }
    }
    ctx->pc = 0x197798u;
    // 0x197798: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x197798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x19779c: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x19779cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x1977a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1977a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1977a4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1977a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1977a8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1977a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1977ac: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1977acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1977b0: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1977b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1977b4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1977b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1977b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1977b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1977bc: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x1977bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1977c0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1977c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1977c4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1977C4u;
    SET_GPR_U32(ctx, 31, 0x1977CCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1977C4u, 0x1977CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1977CCu;
label_1977cc:
    // 0x1977cc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1977ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1977d0: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x1977d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1977d4: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1977d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1977d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1977d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1977dc: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1977dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1977e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1977e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1977e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1977e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1977e8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1977e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1977ec: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1977ECu;
    SET_GPR_U32(ctx, 31, 0x1977F4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1977ECu, 0x1977F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1977F4u;
label_1977f4:
    // 0x1977f4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1977f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1977f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1977f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1977fc: 0x94470094  lhu         $a3, 0x94($v0)
    ctx->pc = 0x1977fcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x197800: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x197800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x197804: 0xa4430094  sh          $v1, 0x94($v0)
    ctx->pc = 0x197804u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x197808u;
}
