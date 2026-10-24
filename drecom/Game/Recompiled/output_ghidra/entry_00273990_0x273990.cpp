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

// Function: entry_00273990
// Address: 0x273990 - 0x2739a4
void entry_00273990_0x273990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273990_0x273990");
#endif

    ctx->pc = 0x273990u;

    // 0x273990: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x273990u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x273994: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x273994u;
    {
        const bool branch_taken_0x273994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273994) {
            ctx->pc = 0x27389Cu;
            return;
        }
    }
    ctx->pc = 0x27399Cu;
    // 0x27399c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x27399Cu;
    {
        const bool branch_taken_0x27399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27399c) {
            ctx->pc = 0x273B30u;
            return;
        }
    }
    ctx->pc = 0x2739A4u;
}
