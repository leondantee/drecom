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

// Function: entry_00326668
// Address: 0x326668 - 0x326694
void entry_00326668_0x326668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326668_0x326668");
#endif

    ctx->pc = 0x326668u;

    // 0x326668: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32666c: 0x90620b1c  lbu         $v0, 0xB1C($v1)
    ctx->pc = 0x32666cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x326670: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x326670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326674: 0xa0620b1c  sb          $v0, 0xB1C($v1)
    ctx->pc = 0x326674u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2844), (uint8_t)GPR_U32(ctx, 2));
    // 0x326678: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x326678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32667c: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x32667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x326680: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x326680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x326684: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x326684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x326688: 0xac820b18  sw          $v0, 0xB18($a0)
    ctx->pc = 0x326688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 2));
    // 0x32668c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x32668Cu;
    {
        const bool branch_taken_0x32668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32668c) {
            ctx->pc = 0x3266C8u;
            return;
        }
    }
    ctx->pc = 0x326694u;
}
