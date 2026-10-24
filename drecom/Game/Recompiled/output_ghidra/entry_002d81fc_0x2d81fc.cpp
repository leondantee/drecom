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

// Function: entry_002d81fc
// Address: 0x2d81fc - 0x2d8238
void entry_002d81fc_0x2d81fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d81fc_0x2d81fc");
#endif

    ctx->pc = 0x2d81fcu;

    // 0x2d81fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d81fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d8200: 0x8422ef68  lh          $v0, -0x1098($at)
    ctx->pc = 0x2d8200u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x2d8204: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x2d8204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d8208: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d8208u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d820c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d820cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d8210: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x2d8210u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x2d8214: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2d8214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d8218: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2d8218u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2d821c: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x2d821cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d8220: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8220u;
    {
        const bool branch_taken_0x2d8220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8220) {
            ctx->pc = 0x2D8238u;
            return;
        }
    }
    ctx->pc = 0x2D8228u;
    // 0x2d8228: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d8228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d822c: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x2d822cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x2d8230: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d8230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d8234: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x2d8234u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    ctx->pc = 0x2d8238u;
}
