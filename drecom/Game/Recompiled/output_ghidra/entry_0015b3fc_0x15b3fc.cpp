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

// Function: entry_0015b3fc
// Address: 0x15b3fc - 0x15b4a0
void entry_0015b3fc_0x15b3fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b3fc_0x15b3fc");
#endif

    switch (ctx->pc) {
        case 0x15b484u: goto label_15b484;
        default: break;
    }

    ctx->pc = 0x15b3fcu;

    // 0x15b3fc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15b400: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x15b400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x15b404: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x15b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x15b408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b40c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x15b40cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15b410: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x15b410u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x15b414: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15b414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b418: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15b418u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15b41c: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x15B41Cu;
    {
        const bool branch_taken_0x15b41c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15b41c) {
            ctx->pc = 0x15B4A0u;
            return;
        }
    }
    ctx->pc = 0x15B424u;
    // 0x15b424: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x15b424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15b428: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15b428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15b42c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15B42Cu;
    {
        const bool branch_taken_0x15b42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b42c) {
            ctx->pc = 0x15B4A0u;
            return;
        }
    }
    ctx->pc = 0x15B434u;
    // 0x15b434: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x15b434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15b438: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b43c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b440: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x15b440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b444: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x15b444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15b448: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b44c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b450: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x15b450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x15b454: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x15b454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15b458: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b45c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x15b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b460: 0x922210a9  lbu         $v0, 0x10A9($s1)
    ctx->pc = 0x15b460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4265)));
    // 0x15b464: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b468: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15b468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15b46c: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x15b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15b470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b474: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x15b474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15b478: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x15b478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15b47c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15B47Cu;
    SET_GPR_U32(ctx, 31, 0x15B484u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15B47Cu, 0x15B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B484u;
label_15b484:
    // 0x15b484: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15b484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15b488: 0x2e020028  sltiu       $v0, $s0, 0x28
    ctx->pc = 0x15b488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x15b48c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B48Cu;
    {
        const bool branch_taken_0x15b48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b48c) {
            ctx->pc = 0x15B4A0u;
            return;
        }
    }
    ctx->pc = 0x15B494u;
    // 0x15b494: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x15b494u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b498: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x15B498u;
    {
        const bool branch_taken_0x15b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b498) {
            ctx->pc = 0x15B57Cu;
            return;
        }
    }
    ctx->pc = 0x15B4A0u;
}
