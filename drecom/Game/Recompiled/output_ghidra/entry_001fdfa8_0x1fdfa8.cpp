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

// Function: entry_001fdfa8
// Address: 0x1fdfa8 - 0x1fdfd4
void entry_001fdfa8_0x1fdfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdfa8_0x1fdfa8");
#endif

    ctx->pc = 0x1fdfa8u;

    // 0x1fdfa8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fdfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdfac: 0x8ca40354  lw          $a0, 0x354($a1)
    ctx->pc = 0x1fdfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 852)));
    // 0x1fdfb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fdfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdfb4: 0x14830028  bne         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FDFB4u;
    {
        const bool branch_taken_0x1fdfb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fdfb4) {
            ctx->pc = 0x1FE058u;
            return;
        }
    }
    ctx->pc = 0x1FDFBCu;
    // 0x1fdfbc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fdfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdfc0: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fdfc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fdfc4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fdfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdfc8: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fdfc8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1fdfcc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1FDFCCu;
    {
        const bool branch_taken_0x1fdfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdfcc) {
            ctx->pc = 0x1FE050u;
            return;
        }
    }
    ctx->pc = 0x1FDFD4u;
}
