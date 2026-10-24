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

// Function: entry_00329050
// Address: 0x329050 - 0x329068
void entry_00329050_0x329050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329050_0x329050");
#endif

    ctx->pc = 0x329050u;

    // 0x329050: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x329050u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x329054: 0x27c3a4b0  addiu       $v1, $fp, -0x5B50
    ctx->pc = 0x329054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294943920));
    // 0x329058: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x329058u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32905c: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x32905cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x329060: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x329060u;
    {
        const bool branch_taken_0x329060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329060) {
            ctx->pc = 0x329658u;
            return;
        }
    }
    ctx->pc = 0x329068u;
}
