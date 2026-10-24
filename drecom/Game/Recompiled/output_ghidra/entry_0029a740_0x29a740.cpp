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

// Function: entry_0029a740
// Address: 0x29a740 - 0x29a7ac
void entry_0029a740_0x29a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a740_0x29a740");
#endif

    switch (ctx->pc) {
        case 0x29a768u: goto label_29a768;
        case 0x29a7a4u: goto label_29a7a4;
        default: break;
    }

    ctx->pc = 0x29a740u;

    // 0x29a740: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x29a740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a744: 0x8ca201a4  lw          $v0, 0x1A4($a1)
    ctx->pc = 0x29a744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 420)));
    // 0x29a748: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x29A748u;
    {
        const bool branch_taken_0x29a748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a748) {
            ctx->pc = 0x29A7ECu;
            return;
        }
    }
    ctx->pc = 0x29A750u;
    // 0x29a750: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a754: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x29a754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a758: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x29a758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x29a75c: 0x8ca501a4  lw          $a1, 0x1A4($a1)
    ctx->pc = 0x29a75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 420)));
    // 0x29a760: 0xc040ca2  jal         func_103288
    ctx->pc = 0x29A760u;
    SET_GPR_U32(ctx, 31, 0x29A768u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x29A768u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A768u) { return; }
    ctx->pc = 0x29A768u;
label_29a768:
    // 0x29a768: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a76c: 0x944201a8  lhu         $v0, 0x1A8($v0)
    ctx->pc = 0x29a76cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x29a770: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29a770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29a774: 0x30510002  andi        $s1, $v0, 0x2
    ctx->pc = 0x29a774u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x29a778: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x29A778u;
    {
        const bool branch_taken_0x29a778 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a778) {
            ctx->pc = 0x29A7ACu;
            return;
        }
    }
    ctx->pc = 0x29A780u;
    // 0x29a780: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x29a780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a784: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a788: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x29a788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a78c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29a78cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a790: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x29a790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x29a794: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x29a794u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29a798: 0x246600c0  addiu       $a2, $v1, 0xC0
    ctx->pc = 0x29a798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x29a79c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x29A79Cu;
    SET_GPR_U32(ctx, 31, 0x29A7A4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x29A79Cu, 0x29A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7A4u;
label_29a7a4:
    // 0x29a7a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29A7A4u;
    {
        const bool branch_taken_0x29a7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a7a4) {
            ctx->pc = 0x29A7D0u;
            return;
        }
    }
    ctx->pc = 0x29A7ACu;
}
