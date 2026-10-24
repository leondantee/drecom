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

// Function: entry_0018f28c
// Address: 0x18f28c - 0x18f294
void entry_0018f28c_0x18f28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f28c_0x18f28c");
#endif

    ctx->pc = 0x18f28cu;

    // 0x18f28c: 0x113182  srl         $a2, $s1, 6
    ctx->pc = 0x18f28cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x18f290: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x18f290u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18f294u;
}
