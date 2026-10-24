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

// Function: entry_00333c64
// Address: 0x333c64 - 0x333cb0
void entry_00333c64_0x333c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333c64_0x333c64");
#endif

    ctx->pc = 0x333c64u;

    // 0x333c64: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x333c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x333c68: 0x24c39960  addiu       $v1, $a2, -0x66A0
    ctx->pc = 0x333c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941024));
    // 0x333c6c: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x333c6cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x333c70: 0x9242683e  lbu         $v0, 0x683E($s2)
    ctx->pc = 0x333c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26686)));
    // 0x333c74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x333c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333c78: 0x9247683f  lbu         $a3, 0x683F($s2)
    ctx->pc = 0x333c78u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26687)));
    // 0x333c7c: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x333c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x333c80: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x333c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x333c84: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x333c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x333c88: 0x8e436850  lw          $v1, 0x6850($s2)
    ctx->pc = 0x333c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26704)));
    // 0x333c8c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x333c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x333c90: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x333c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333c94: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x333c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x333c98: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x333c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x333c9c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x333c9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x333ca0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x333CA0u;
    {
        const bool branch_taken_0x333ca0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x333ca0) {
            ctx->pc = 0x333CB0u;
            return;
        }
    }
    ctx->pc = 0x333CA8u;
    // 0x333ca8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x333ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333cac: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x333cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    ctx->pc = 0x333cb0u;
}
