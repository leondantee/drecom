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

// Function: entry_001eafac
// Address: 0x1eafac - 0x1eb024
void entry_001eafac_0x1eafac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eafac_0x1eafac");
#endif

    switch (ctx->pc) {
        case 0x1eafdcu: goto label_1eafdc;
        default: break;
    }

    ctx->pc = 0x1eafacu;

    // 0x1eafac: 0x32e6ffff  andi        $a2, $s7, 0xFFFF
    ctx->pc = 0x1eafacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eafb0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1eafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1eafb4: 0x14c2001b  bne         $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EAFB4u;
    {
        const bool branch_taken_0x1eafb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eafb4) {
            ctx->pc = 0x1EB024u;
            return;
        }
    }
    ctx->pc = 0x1EAFBCu;
    // 0x1eafbc: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eafbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eafc0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eafc4: 0x8d050368  lw          $a1, 0x368($t0)
    ctx->pc = 0x1eafc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 872)));
    // 0x1eafc8: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1eafc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1eafcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eafccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eafd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1eafd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eafd4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EAFD4u;
    SET_GPR_U32(ctx, 31, 0x1EAFDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EAFD4u, 0x1EAFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAFDCu;
label_1eafdc:
    // 0x1eafdc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1eafdcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eafe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eafe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eafe4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eafe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eafe8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1eafe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eafec: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1eafecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1eaff0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaff4: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x1eaff4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x1eaff8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eaff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaffc: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1eaffcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb000: 0x8fb10138  lw          $s1, 0x138($sp)
    ctx->pc = 0x1eb000u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb004: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x1eb004u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb008: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb00c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1eb00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1eb010: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb014: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1eb014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eb018: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x1eb018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1eb01c: 0x34c42018  ori         $a0, $a2, 0x2018
    ctx->pc = 0x1eb01cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8216);
    // 0x1eb020: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x1eb020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    ctx->pc = 0x1eb024u;
}
