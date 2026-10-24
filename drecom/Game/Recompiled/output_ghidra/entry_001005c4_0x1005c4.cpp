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

// Function: entry_001005c4
// Address: 0x1005c4 - 0x1005d8
void entry_001005c4_0x1005c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001005c4_0x1005c4");
#endif

    ctx->pc = 0x1005c4u;

    // 0x1005c4: 0x2642001f  addiu       $v0, $s2, 0x1F
    ctx->pc = 0x1005c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 31));
    // 0x1005c8: 0x2643003e  addiu       $v1, $s2, 0x3E
    ctx->pc = 0x1005c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 62));
    // 0x1005cc: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x1005ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1005d0: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x1005d0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1005d4: 0x33143  sra         $a2, $v1, 5
    ctx->pc = 0x1005d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 5));
    ctx->pc = 0x1005d8u;
}
