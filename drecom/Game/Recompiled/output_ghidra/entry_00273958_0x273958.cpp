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

// Function: entry_00273958
// Address: 0x273958 - 0x273970
void entry_00273958_0x273958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273958_0x273958");
#endif

    ctx->pc = 0x273958u;

    // 0x273958: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x273958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27395c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x27395Cu;
    {
        const bool branch_taken_0x27395c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27395c) {
            ctx->pc = 0x273970u;
            return;
        }
    }
    ctx->pc = 0x273964u;
    // 0x273964: 0x2414001d  addiu       $s4, $zero, 0x1D
    ctx->pc = 0x273964u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x273968: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273968u;
    {
        const bool branch_taken_0x273968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273968) {
            ctx->pc = 0x273978u;
            return;
        }
    }
    ctx->pc = 0x273970u;
}
