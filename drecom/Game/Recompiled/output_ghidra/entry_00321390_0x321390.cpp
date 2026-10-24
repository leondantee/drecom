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

// Function: entry_00321390
// Address: 0x321390 - 0x321398
void entry_00321390_0x321390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321390_0x321390");
#endif

    ctx->pc = 0x321390u;

    // 0x321390: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x321390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321394: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x321394u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x321398u;
}
