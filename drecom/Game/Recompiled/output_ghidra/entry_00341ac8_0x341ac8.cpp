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

// Function: entry_00341ac8
// Address: 0x341ac8 - 0x341b6c
void entry_00341ac8_0x341ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341ac8_0x341ac8");
#endif

    switch (ctx->pc) {
        case 0x341b14u: goto label_341b14;
        default: break;
    }

    ctx->pc = 0x341ac8u;

    // 0x341ac8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341acc: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x341accu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x341ad0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x341ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x341ad4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x341ad4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x341ad8: 0x480003f  bltz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x341AD8u;
    {
        const bool branch_taken_0x341ad8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x341ad8) {
            ctx->pc = 0x341BD8u;
            return;
        }
    }
    ctx->pc = 0x341AE0u;
    // 0x341ae0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x341ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341ae4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341ae8: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x341ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x341aec: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341af0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x341af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x341af4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341af8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x341af8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x341afc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x341b00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x341b04: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x341b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x341b0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x341B0Cu;
    SET_GPR_U32(ctx, 31, 0x341B14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x341B0Cu, 0x341B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341B14u;
label_341b14:
    // 0x341b14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341b14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341b18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x341b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x341b1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x341b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x341b20: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x341B20u;
    {
        const bool branch_taken_0x341b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341b20) {
            ctx->pc = 0x341B6Cu;
            return;
        }
    }
    ctx->pc = 0x341B28u;
    // 0x341b28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x341b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341b2c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b30: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x341b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x341b34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x341b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x341b38: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b3c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x341b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x341b40: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x341b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b44: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x341b44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x341b48: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x341b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b4c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x341b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x341b50: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x341b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x341b58: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b5c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x341b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341b60: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x341b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x341b64: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x341b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x341b68: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x341b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    ctx->pc = 0x341b6cu;
}
