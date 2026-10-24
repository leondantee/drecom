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

// Function: entry_00329ad0
// Address: 0x329ad0 - 0x329b00
void entry_00329ad0_0x329ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329ad0_0x329ad0");
#endif

    ctx->pc = 0x329ad0u;

    // 0x329ad0: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329ad4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329ad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329adc: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x329ADCu;
    {
        const bool branch_taken_0x329adc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329adc) {
            ctx->pc = 0x329B00u;
            return;
        }
    }
    ctx->pc = 0x329AE4u;
    // 0x329ae4: 0x8e03282c  lw          $v1, 0x282C($s0)
    ctx->pc = 0x329ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10284)));
    // 0x329ae8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329aec: 0xae03282c  sw          $v1, 0x282C($s0)
    ctx->pc = 0x329aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10284), GPR_U32(ctx, 3));
    // 0x329af0: 0x2863004e  slti        $v1, $v1, 0x4E
    ctx->pc = 0x329af0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)78) ? 1 : 0);
    // 0x329af4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x329AF4u;
    {
        const bool branch_taken_0x329af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329af4) {
            ctx->pc = 0x329B00u;
            return;
        }
    }
    ctx->pc = 0x329AFCu;
    // 0x329afc: 0xae00282c  sw          $zero, 0x282C($s0)
    ctx->pc = 0x329afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10284), GPR_U32(ctx, 0));
    ctx->pc = 0x329b00u;
}
