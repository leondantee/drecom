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

// Function: entry_002d8cf8
// Address: 0x2d8cf8 - 0x2d8d88
void entry_002d8cf8_0x2d8cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8cf8_0x2d8cf8");
#endif

    switch (ctx->pc) {
        case 0x2d8d18u: goto label_2d8d18;
        default: break;
    }

    ctx->pc = 0x2d8cf8u;

    // 0x2d8cf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8cfc: 0xa20400d9  sb          $a0, 0xD9($s0)
    ctx->pc = 0x2d8cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8d00: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2d8d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d8d04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8d08: 0x18800031  blez        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D8D08u;
    {
        const bool branch_taken_0x2d8d08 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2d8d08) {
            ctx->pc = 0x2D8DD0u;
            return;
        }
    }
    ctx->pc = 0x2D8D10u;
    // 0x2d8d10: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D8D10u;
    SET_GPR_U32(ctx, 31, 0x2D8D18u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D8D10u, 0x2D8D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D18u;
label_2d8d18:
    // 0x2d8d18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8d18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8d1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8d20: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d8d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d8d24: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D8D24u;
    {
        const bool branch_taken_0x2d8d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8d24) {
            ctx->pc = 0x2D8DD0u;
            return;
        }
    }
    ctx->pc = 0x2D8D2Cu;
    // 0x2d8d2c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8d30: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2d8d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8d34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8d38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8d3c: 0x14640024  bne         $v1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D8D3Cu;
    {
        const bool branch_taken_0x2d8d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d8d3c) {
            ctx->pc = 0x2D8DD0u;
            return;
        }
    }
    ctx->pc = 0x2D8D44u;
    // 0x2d8d44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8d48: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8d4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8d50: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8D50u;
    {
        const bool branch_taken_0x2d8d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8d50) {
            ctx->pc = 0x2D8D88u;
            return;
        }
    }
    ctx->pc = 0x2D8D58u;
    // 0x2d8d58: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d8d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8d5c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2d8d5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2d8d60: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8d64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8d68: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8D68u;
    {
        const bool branch_taken_0x2d8d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8d68) {
            ctx->pc = 0x2D8D88u;
            return;
        }
    }
    ctx->pc = 0x2D8D70u;
    // 0x2d8d70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8d74: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8d74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8d78: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8d7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8d80: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8D80u;
    {
        const bool branch_taken_0x2d8d80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8d80) {
            ctx->pc = 0x2D8DD0u;
            return;
        }
    }
    ctx->pc = 0x2D8D88u;
}
