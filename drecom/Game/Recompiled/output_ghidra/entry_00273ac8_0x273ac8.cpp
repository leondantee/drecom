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

// Function: entry_00273ac8
// Address: 0x273ac8 - 0x273ae8
void entry_00273ac8_0x273ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273ac8_0x273ac8");
#endif

    ctx->pc = 0x273ac8u;

    // 0x273ac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x273ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273acc: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x273accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x273ad0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x273ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x273ad4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273ad8: 0xa0851b30  sb          $a1, 0x1B30($a0)
    ctx->pc = 0x273ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6960), (uint8_t)GPR_U32(ctx, 5));
    // 0x273adc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x273adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x273ae0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x273ae0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x273ae4: 0x0  nop
    ctx->pc = 0x273ae4u;
    // NOP
    ctx->pc = 0x273ae8u;
}
