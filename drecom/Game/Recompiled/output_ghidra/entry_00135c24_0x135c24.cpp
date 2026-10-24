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

// Function: entry_00135c24
// Address: 0x135c24 - 0x135c40
void entry_00135c24_0x135c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135c24_0x135c24");
#endif

    ctx->pc = 0x135c24u;

    // 0x135c24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x135c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135c28: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x135c28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x135c2c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x135c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135c30: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x135c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x135c34: 0x4187c  dsll32      $v1, $a0, 1
    ctx->pc = 0x135c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 1));
    // 0x135c38: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x135c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x135c3c: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x135c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    ctx->pc = 0x135c40u;
}
