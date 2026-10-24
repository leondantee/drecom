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

// Function: entry_00108e48
// Address: 0x108e48 - 0x108e58
void entry_00108e48_0x108e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108e48_0x108e48");
#endif

    ctx->pc = 0x108e48u;

    // 0x108e48: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108e4c: 0x2a320400  slti        $s2, $s1, 0x400
    ctx->pc = 0x108e4cu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x108e50: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x108e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x108e54: 0x0  nop
    ctx->pc = 0x108e54u;
    // NOP
    ctx->pc = 0x108e58u;
}
