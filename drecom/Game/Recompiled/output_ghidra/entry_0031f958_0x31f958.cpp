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

// Function: entry_0031f958
// Address: 0x31f958 - 0x31f970
void entry_0031f958_0x31f958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f958_0x31f958");
#endif

    ctx->pc = 0x31f958u;

    // 0x31f958: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f95c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x31f95cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x31f960: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31f960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f964: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x31f964u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x31f968: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x31F968u;
    {
        const bool branch_taken_0x31f968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f968) {
            ctx->pc = 0x31FAD8u;
            return;
        }
    }
    ctx->pc = 0x31F970u;
}
