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

// Function: entry_0012a5e8
// Address: 0x12a5e8 - 0x12a610
void entry_0012a5e8_0x12a5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a5e8_0x12a5e8");
#endif

    ctx->pc = 0x12a5e8u;

    // 0x12a5e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12a5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x12a5ec: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x12a5ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x12a5f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A5F0u;
    {
        const bool branch_taken_0x12a5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a5f0) {
            ctx->pc = 0x12A610u;
            return;
        }
    }
    ctx->pc = 0x12A5F8u;
    // 0x12a5f8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12a5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x12a5fc: 0x8423ec66  lh          $v1, -0x139A($at)
    ctx->pc = 0x12a5fcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x12a600: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12a600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12a604: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12a604u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12a608: 0x4600078  bltz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x12A608u;
    {
        const bool branch_taken_0x12a608 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x12a608) {
            ctx->pc = 0x12A7ECu;
            return;
        }
    }
    ctx->pc = 0x12A610u;
}
