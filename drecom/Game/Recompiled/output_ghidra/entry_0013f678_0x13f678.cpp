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

// Function: entry_0013f678
// Address: 0x13f678 - 0x13f748
void entry_0013f678_0x13f678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f678_0x13f678");
#endif

    switch (ctx->pc) {
        case 0x13f69cu: goto label_13f69c;
        case 0x13f6b0u: goto label_13f6b0;
        case 0x13f6c8u: goto label_13f6c8;
        case 0x13f6e4u: goto label_13f6e4;
        case 0x13f710u: goto label_13f710;
        case 0x13f744u: goto label_13f744;
        default: break;
    }

    ctx->pc = 0x13f678u;

    // 0x13f678: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13f678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f67c: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x13f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x13f680: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x13f680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f684: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13f684u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f688: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13f688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f68c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f68cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f690: 0x27a81690  addiu       $t0, $sp, 0x1690
    ctx->pc = 0x13f690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13f694: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13F694u;
    SET_GPR_U32(ctx, 31, 0x13F69Cu);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13F694u, 0x13F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F69Cu;
label_13f69c:
    // 0x13f69c: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f6a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f6a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f6a4: 0x27a515f0  addiu       $a1, $sp, 0x15F0
    ctx->pc = 0x13f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5616));
    // 0x13f6a8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F6A8u;
    SET_GPR_U32(ctx, 31, 0x13F6B0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F6B0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F6B0u) { return; }
    ctx->pc = 0x13F6B0u;
label_13f6b0:
    // 0x13f6b0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x13f6b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f6b4: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f6b8: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f6bc: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13f6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f6c0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13F6C0u;
    SET_GPR_U32(ctx, 31, 0x13F6C8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13F6C8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F6C8u) { return; }
    ctx->pc = 0x13F6C8u;
label_13f6c8:
    // 0x13f6c8: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f6cc: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x13f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13f6d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f6d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f6d4: 0x27a615e0  addiu       $a2, $sp, 0x15E0
    ctx->pc = 0x13f6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5600));
    // 0x13f6d8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13f6d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13f6dc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F6DCu;
    SET_GPR_U32(ctx, 31, 0x13F6E4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F6E4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F6E4u) { return; }
    ctx->pc = 0x13F6E4u;
label_13f6e4:
    // 0x13f6e4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x13f6e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f6e8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x13f6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13f6ec: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f6f0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13f6f4: 0x8fb116a8  lw          $s1, 0x16A8($sp)
    ctx->pc = 0x13f6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f6f8: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x13f6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13f6fc: 0xafb016a8  sw          $s0, 0x16A8($sp)
    ctx->pc = 0x13f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 16));
    // 0x13f700: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f704: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13f704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f708: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F708u;
    SET_GPR_U32(ctx, 31, 0x13F710u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F708u, 0x13F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F710u;
label_13f710:
    // 0x13f710: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f710u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f714: 0x32050820  andi        $a1, $s0, 0x820
    ctx->pc = 0x13f714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2080);
    // 0x13f718: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x13F718u;
    {
        const bool branch_taken_0x13f718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f718) {
            ctx->pc = 0x13F748u;
            return;
        }
    }
    ctx->pc = 0x13F720u;
    // 0x13f720: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x13f720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x13f724: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x13f724u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f728: 0x27a71610  addiu       $a3, $sp, 0x1610
    ctx->pc = 0x13f728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f72c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x13f72cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13f730: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f734: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13f734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f738: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x13f738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f73c: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F73Cu;
    SET_GPR_U32(ctx, 31, 0x13F744u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F73Cu, 0x13F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F744u;
label_13f744:
    // 0x13f744: 0x0  nop
    ctx->pc = 0x13f744u;
    // NOP
    ctx->pc = 0x13f748u;
}
