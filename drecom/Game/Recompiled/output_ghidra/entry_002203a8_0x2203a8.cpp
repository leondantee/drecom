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

// Function: entry_002203a8
// Address: 0x2203a8 - 0x220438
void entry_002203a8_0x2203a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002203a8_0x2203a8");
#endif

    switch (ctx->pc) {
        case 0x2203f0u: goto label_2203f0;
        case 0x2203fcu: goto label_2203fc;
        default: break;
    }

    ctx->pc = 0x2203a8u;

    // 0x2203a8: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x2203a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2203ac: 0x1440ff19  bnez        $v0, . + 4 + (-0xE7 << 2)
    ctx->pc = 0x2203ACu;
    {
        const bool branch_taken_0x2203ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2203ac) {
            ctx->pc = 0x220014u;
            return;
        }
    }
    ctx->pc = 0x2203B4u;
    // 0x2203b4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2203b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2203b8: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2203b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2203bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2203bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2203c0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2203c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2203c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2203c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2203c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2203c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2203cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2203ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2203d0: 0x0  nop
    ctx->pc = 0x2203d0u;
    // NOP
    // 0x2203d4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2203d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2203d8: 0x24041721  addiu       $a0, $zero, 0x1721
    ctx->pc = 0x2203d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5921));
    // 0x2203dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2203dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2203e0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2203e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2203e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2203e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2203e8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2203E8u;
    SET_GPR_U32(ctx, 31, 0x2203F0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2203E8u, 0x2203F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203F0u;
label_2203f0:
    // 0x2203f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2203f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2203f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2203F4u;
    SET_GPR_U32(ctx, 31, 0x2203FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2203F4u, 0x2203FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203FCu;
label_2203fc:
    // 0x2203fc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2203fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x220400: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x220400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x220404: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x220404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x220408: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22040c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x22040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220410: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x220410u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220414: 0x3c023f7e  lui         $v0, 0x3F7E
    ctx->pc = 0x220414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16254 << 16));
    // 0x220418: 0x3442b852  ori         $v0, $v0, 0xB852
    ctx->pc = 0x220418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47186);
    // 0x22041c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22041cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x220420: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x220420u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220424: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220424u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220428: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x220428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x22042c: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x22042cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x220430: 0xc086488  jal         func_219220
    ctx->pc = 0x220430u;
    SET_GPR_U32(ctx, 31, 0x220438u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x220430u, 0x220438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220438u;
}
