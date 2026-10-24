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

// Function: entry_0012ec94
// Address: 0x12ec94 - 0x12ecf4
void entry_0012ec94_0x12ec94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ec94_0x12ec94");
#endif

    ctx->pc = 0x12ec94u;

    // 0x12ec94: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ec98: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ec9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12eca0: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x12eca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x12eca4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12eca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12eca8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12eca8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12ecac: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x12ecacu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12ecb0: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x12ecb0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x12ecb4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ecb8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ecbc: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x12ecbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12ecc0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12ecc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ecc4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x12ecc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12ecc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ecc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12eccc: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x12ecccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ecd0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ecd4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ecd8: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x12ecd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x12ecdc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12ecdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ece0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x12ece0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12ece4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ece4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ece8: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x12ece8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ecec: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x12ECECu;
    {
        const bool branch_taken_0x12ecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ecec) {
            ctx->pc = 0x12EDC8u;
            return;
        }
    }
    ctx->pc = 0x12ECF4u;
}
