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

// Function: entry_00273950
// Address: 0x273950 - 0x273958
void entry_00273950_0x273950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273950_0x273950");
#endif

    ctx->pc = 0x273950u;

    // 0x273950: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x273950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x273954: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x273954u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x273958u;
}
