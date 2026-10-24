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

// Function: entry_001fdca0
// Address: 0x1fdca0 - 0x1fdcec
void entry_001fdca0_0x1fdca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdca0_0x1fdca0");
#endif

    ctx->pc = 0x1fdca0u;

    // 0x1fdca0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdca4: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fdca4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fdca8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fdca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdcac: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fdcacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fdcb0: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
    ctx->pc = 0x1FDCB0u;
    {
        const bool branch_taken_0x1fdcb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdcb0) {
            ctx->pc = 0x1FDB30u;
            return;
        }
    }
    ctx->pc = 0x1FDCB8u;
    // 0x1fdcb8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdcbc: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fdcbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fdcc0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fdcc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdcc4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdcc8: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fdcc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fdccc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fdcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdcd0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fdcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fdcd4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fdcd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdcd8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdcdc: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x1fdcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fdce0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fdce0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fdce4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1FDCE4u;
    {
        const bool branch_taken_0x1fdce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdce4) {
            ctx->pc = 0x1FDD88u;
            return;
        }
    }
    ctx->pc = 0x1FDCECu;
}
