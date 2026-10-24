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

// Function: entry_00121ae4
// Address: 0x121ae4 - 0x121b74
void entry_00121ae4_0x121ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121ae4_0x121ae4");
#endif

    switch (ctx->pc) {
        case 0x121b08u: goto label_121b08;
        default: break;
    }

    ctx->pc = 0x121ae4u;

    // 0x121ae4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121ae8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x121ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x121aec: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x121aecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x121af0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x121af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x121af4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x121af4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x121af8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121afc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121afcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x121b00: 0xc047ff4  jal         func_11FFD0
    ctx->pc = 0x121B00u;
    SET_GPR_U32(ctx, 31, 0x121B08u);
    ctx->pc = 0x11FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FFD0u, 0x121B00u, 0x121B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B08u;
label_121b08:
    // 0x121b08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121b08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121b0c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121b10: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x121b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121b14: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x121b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x121b18: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x121b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x121b1c: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x121B1Cu;
    {
        const bool branch_taken_0x121b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x121b1c) {
            ctx->pc = 0x121C48u;
            return;
        }
    }
    ctx->pc = 0x121B24u;
    // 0x121b24: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121b28: 0x8cb30008  lw          $s3, 0x8($a1)
    ctx->pc = 0x121b28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x121b2c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x121b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x121b30: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x121b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x121b34: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x121b34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x121b38: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x121b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121b3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121b40: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x121b40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x121b44: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x121b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x121b48: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121b4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x121b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x121b50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121b54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x121b54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x121b58: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121b5c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x121b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x121b60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x121b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121b64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121b68: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x121b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x121b6c: 0x10000470  b           . + 4 + (0x470 << 2)
    ctx->pc = 0x121B6Cu;
    {
        const bool branch_taken_0x121b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121b6c) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121B74u;
}
