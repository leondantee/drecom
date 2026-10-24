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

// Function: entry_0025d460
// Address: 0x25d460 - 0x25d498
void entry_0025d460_0x25d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d460_0x25d460");
#endif

    ctx->pc = 0x25d460u;

    // 0x25d460: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d464: 0x8c4309f8  lw          $v1, 0x9F8($v0)
    ctx->pc = 0x25d464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2552)));
    // 0x25d468: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d46c: 0x8c4209fc  lw          $v0, 0x9FC($v0)
    ctx->pc = 0x25d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x25d470: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x25d470u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25d474: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x25D474u;
    {
        const bool branch_taken_0x25d474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d474) {
            ctx->pc = 0x25D498u;
            return;
        }
    }
    ctx->pc = 0x25D47Cu;
    // 0x25d47c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d480: 0x8c4309fc  lw          $v1, 0x9FC($v0)
    ctx->pc = 0x25d480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x25d484: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d488: 0xac4309f8  sw          $v1, 0x9F8($v0)
    ctx->pc = 0x25d488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2552), GPR_U32(ctx, 3));
    // 0x25d48c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d490: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d494: 0xa04309e7  sb          $v1, 0x9E7($v0)
    ctx->pc = 0x25d494u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x25d498u;
}
