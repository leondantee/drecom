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

// Function: entry_001fcc98
// Address: 0x1fcc98 - 0x1fcd14
void entry_001fcc98_0x1fcc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcc98_0x1fcc98");
#endif

    ctx->pc = 0x1fcc98u;

    // 0x1fcc98: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcc9c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fcc9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fcca0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fcca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcca4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fcca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fcca8: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1FCCA8u;
    {
        const bool branch_taken_0x1fcca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcca8) {
            ctx->pc = 0x1FCBC8u;
            return;
        }
    }
    ctx->pc = 0x1FCCB0u;
    // 0x1fccb0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fccb4: 0x90640347  lbu         $a0, 0x347($v1)
    ctx->pc = 0x1fccb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1fccb8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fccbc: 0xa0640348  sb          $a0, 0x348($v1)
    ctx->pc = 0x1fccbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fccc0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fccc4: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fccc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fccc8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fccc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcccc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fccccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fccd0: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fccd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fccd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fccd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fccd8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fccdc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fccdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcce0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcce4: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x1fcce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fcce8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fccec: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fccecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fccf0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fccf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fccf4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fccf8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fccfc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fccfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcd00: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd04: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fcd04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fcd08: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fcd08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fcd0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FCD0Cu;
    {
        const bool branch_taken_0x1fcd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcd0c) {
            ctx->pc = 0x1FCD50u;
            return;
        }
    }
    ctx->pc = 0x1FCD14u;
}
