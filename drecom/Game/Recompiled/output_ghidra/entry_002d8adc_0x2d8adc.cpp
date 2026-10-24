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

// Function: entry_002d8adc
// Address: 0x2d8adc - 0x2d8b6c
void entry_002d8adc_0x2d8adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8adc_0x2d8adc");
#endif

    switch (ctx->pc) {
        case 0x2d8afcu: goto label_2d8afc;
        default: break;
    }

    ctx->pc = 0x2d8adcu;

    // 0x2d8adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8ae0: 0xa20300d9  sb          $v1, 0xD9($s0)
    ctx->pc = 0x2d8ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8ae4: 0x920400db  lbu         $a0, 0xDB($s0)
    ctx->pc = 0x2d8ae4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d8ae8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d8ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d8aec: 0x18600030  blez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D8AECu;
    {
        const bool branch_taken_0x2d8aec = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2d8aec) {
            ctx->pc = 0x2D8BB0u;
            return;
        }
    }
    ctx->pc = 0x2D8AF4u;
    // 0x2d8af4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D8AF4u;
    SET_GPR_U32(ctx, 31, 0x2D8AFCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D8AF4u, 0x2D8AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8AFCu;
label_2d8afc:
    // 0x2d8afc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2d8afcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8b00: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d8b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d8b04: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d8b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d8b08: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D8B08u;
    {
        const bool branch_taken_0x2d8b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8b08) {
            ctx->pc = 0x2D8BB0u;
            return;
        }
    }
    ctx->pc = 0x2D8B10u;
    // 0x2d8b10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b14: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2d8b14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d8b18: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8b1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8b20: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D8B20u;
    {
        const bool branch_taken_0x2d8b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8b20) {
            ctx->pc = 0x2D8BB0u;
            return;
        }
    }
    ctx->pc = 0x2D8B28u;
    // 0x2d8b28: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d8b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b2c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2d8b2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2d8b30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8b34: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8B34u;
    {
        const bool branch_taken_0x2d8b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8b34) {
            ctx->pc = 0x2D8B6Cu;
            return;
        }
    }
    ctx->pc = 0x2D8B3Cu;
    // 0x2d8b3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b40: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8b44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8b4c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8B4Cu;
    {
        const bool branch_taken_0x2d8b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8b4c) {
            ctx->pc = 0x2D8B6Cu;
            return;
        }
    }
    ctx->pc = 0x2D8B54u;
    // 0x2d8b54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b58: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8b5c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8b60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8b64: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8B64u;
    {
        const bool branch_taken_0x2d8b64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8b64) {
            ctx->pc = 0x2D8BB0u;
            return;
        }
    }
    ctx->pc = 0x2D8B6Cu;
}
