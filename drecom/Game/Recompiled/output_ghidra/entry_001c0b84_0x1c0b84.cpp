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

// Function: entry_001c0b84
// Address: 0x1c0b84 - 0x1c0c08
void entry_001c0b84_0x1c0b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0b84_0x1c0b84");
#endif

    ctx->pc = 0x1c0b84u;

    // 0x1c0b84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0b88: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c0b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c0b8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c0b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c0b90: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1c0b90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c0b94: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C0B94u;
    {
        const bool branch_taken_0x1c0b94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b94) {
            ctx->pc = 0x1C0C08u;
            return;
        }
    }
    ctx->pc = 0x1C0B9Cu;
    // 0x1c0b9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0ba0: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c0ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c0ba4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C0BA4u;
    {
        const bool branch_taken_0x1c0ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ba4) {
            ctx->pc = 0x1C0C08u;
            return;
        }
    }
    ctx->pc = 0x1C0BACu;
    // 0x1c0bac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0bb0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c0bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c0bb4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c0bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c0bb8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c0bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c0bbc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C0BBCu;
    {
        const bool branch_taken_0x1c0bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0bbc) {
            ctx->pc = 0x1C0C08u;
            return;
        }
    }
    ctx->pc = 0x1C0BC4u;
    // 0x1c0bc4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c0bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0bc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0bcc: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c0bccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c0bd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c0bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0bd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0bd8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c0bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c0bdc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c0bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0be0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0be4: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c0be4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c0be8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0bec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c0becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0bf0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0bf4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c0bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c0bf8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c0bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c0bfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c0bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c0c00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c0c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c0c04: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c0c04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c0c08u;
}
