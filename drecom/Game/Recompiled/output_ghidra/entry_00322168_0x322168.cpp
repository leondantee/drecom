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

// Function: entry_00322168
// Address: 0x322168 - 0x3221c8
void entry_00322168_0x322168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322168_0x322168");
#endif

    switch (ctx->pc) {
        case 0x32218cu: goto label_32218c;
        case 0x322198u: goto label_322198;
        default: break;
    }

    ctx->pc = 0x322168u;

    // 0x322168: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x322168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32216c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32216cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x322170: 0x24429fe0  addiu       $v0, $v0, -0x6020
    ctx->pc = 0x322170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942688));
    // 0x322174: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x322174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322178: 0x24042600  addiu       $a0, $zero, 0x2600
    ctx->pc = 0x322178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9728));
    // 0x32217c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32217cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322180: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x322180u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322184: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x322184u;
    SET_GPR_U32(ctx, 31, 0x32218Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x322184u, 0x32218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32218Cu;
label_32218c:
    // 0x32218c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32218cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x322190: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x322190u;
    SET_GPR_U32(ctx, 31, 0x322198u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x322190u, 0x322198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322198u;
label_322198:
    // 0x322198: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x322198u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32219c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x32219cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x3221a0: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3221a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x3221a4: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3221A4u;
    {
        const bool branch_taken_0x3221a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3221a4) {
            ctx->pc = 0x3221C8u;
            return;
        }
    }
    ctx->pc = 0x3221ACu;
    // 0x3221ac: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3221acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3221b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3221b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3221b4: 0x0  nop
    ctx->pc = 0x3221b4u;
    // NOP
    // 0x3221b8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3221b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3221bc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3221bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3221c0: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x3221c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x3221c4: 0x0  nop
    ctx->pc = 0x3221c4u;
    // NOP
    ctx->pc = 0x3221c8u;
}
