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

// Function: entry_001fe2c8
// Address: 0x1fe2c8 - 0x1fe33c
void entry_001fe2c8_0x1fe2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe2c8_0x1fe2c8");
#endif

    ctx->pc = 0x1fe2c8u;

    // 0x1fe2c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe2cc: 0x9063034f  lbu         $v1, 0x34F($v1)
    ctx->pc = 0x1fe2ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1fe2d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe2d4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fe2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fe2d8: 0x14830038  bne         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1FE2D8u;
    {
        const bool branch_taken_0x1fe2d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fe2d8) {
            ctx->pc = 0x1FE3BCu;
            return;
        }
    }
    ctx->pc = 0x1FE2E0u;
    // 0x1fe2e0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe2e4: 0x8c830364  lw          $v1, 0x364($a0)
    ctx->pc = 0x1fe2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x1fe2e8: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1FE2E8u;
    {
        const bool branch_taken_0x1fe2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe2e8) {
            ctx->pc = 0x1FE3A4u;
            return;
        }
    }
    ctx->pc = 0x1FE2F0u;
    // 0x1fe2f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe2f4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe2f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe2f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fe2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fe2fc: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x1fe2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe300: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe304: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fe304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe308: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fe308u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe30c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1fe30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1fe310: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fe310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fe314: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe318: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe31c: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fe31cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe320: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe324: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1fe324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1fe328: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fe328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe32c: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x1fe32cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe330: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fe330u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe334: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE334u;
    {
        const bool branch_taken_0x1fe334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe334) {
            ctx->pc = 0x1FE378u;
            return;
        }
    }
    ctx->pc = 0x1FE33Cu;
}
