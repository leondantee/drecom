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

// Function: entry_00121b90
// Address: 0x121b90 - 0x121c20
void entry_00121b90_0x121b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121b90_0x121b90");
#endif

    switch (ctx->pc) {
        case 0x121bb4u: goto label_121bb4;
        default: break;
    }

    ctx->pc = 0x121b90u;

    // 0x121b90: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121b94: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x121b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x121b98: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x121b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x121b9c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x121b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x121ba0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x121ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x121ba4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121ba8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121ba8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x121bac: 0xc048044  jal         func_120110
    ctx->pc = 0x121BACu;
    SET_GPR_U32(ctx, 31, 0x121BB4u);
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x121BACu, 0x121BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BB4u;
label_121bb4:
    // 0x121bb4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121bb4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121bb8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121bbc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x121bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x121bc0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x121bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x121bc4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x121bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x121bc8: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x121BC8u;
    {
        const bool branch_taken_0x121bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x121bc8) {
            ctx->pc = 0x121C48u;
            return;
        }
    }
    ctx->pc = 0x121BD0u;
    // 0x121bd0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121bd4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x121bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x121bd8: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x121bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x121bdc: 0x662025  or          $a0, $v1, $a2
    ctx->pc = 0x121bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x121be0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x121be0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x121be4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121be8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121bec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x121becu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x121bf0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x121bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x121bf4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121bf8: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x121bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x121bfc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121c00: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x121c00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x121c04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121c08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x121c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x121c0c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x121c0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121c10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121c14: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x121c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x121c18: 0x10000445  b           . + 4 + (0x445 << 2)
    ctx->pc = 0x121C18u;
    {
        const bool branch_taken_0x121c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121c18) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121C20u;
}
