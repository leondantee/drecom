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

// Function: entry_001cc768
// Address: 0x1cc768 - 0x1cc798
void entry_001cc768_0x1cc768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc768_0x1cc768");
#endif

    ctx->pc = 0x1cc768u;

    // 0x1cc768: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cc768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc76c: 0x8ca613e8  lw          $a2, 0x13E8($a1)
    ctx->pc = 0x1cc76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
    // 0x1cc770: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC770u;
    {
        const bool branch_taken_0x1cc770 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc770) {
            ctx->pc = 0x1CC798u;
            return;
        }
    }
    ctx->pc = 0x1CC778u;
    // 0x1cc778: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cc77c: 0x8c271a98  lw          $a3, 0x1A98($at)
    ctx->pc = 0x1cc77cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cc780: 0x3c080080  lui         $t0, 0x80
    ctx->pc = 0x1cc780u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    // 0x1cc784: 0xe84025  or          $t0, $a3, $t0
    ctx->pc = 0x1cc784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1cc788: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cc78c: 0xac281a98  sw          $t0, 0x1A98($at)
    ctx->pc = 0x1cc78cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1cc790: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1cc790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc794: 0xa0e01921  sb          $zero, 0x1921($a3)
    ctx->pc = 0x1cc794u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6433), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1cc798u;
}
