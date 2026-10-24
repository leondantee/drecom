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

// Function: entry_00135f94
// Address: 0x135f94 - 0x135fac
void entry_00135f94_0x135f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135f94_0x135f94");
#endif

    ctx->pc = 0x135f94u;

    // 0x135f94: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x135f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135f98: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x135f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135f9c: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x135f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x135fa0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x135fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x135fa4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x135fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x135fa8: 0xac83121c  sw          $v1, 0x121C($a0)
    ctx->pc = 0x135fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 3));
    ctx->pc = 0x135facu;
}
