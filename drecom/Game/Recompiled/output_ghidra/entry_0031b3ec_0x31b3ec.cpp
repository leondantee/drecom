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

// Function: entry_0031b3ec
// Address: 0x31b3ec - 0x31b430
void entry_0031b3ec_0x31b3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b3ec_0x31b3ec");
#endif

    ctx->pc = 0x31b3ecu;

    // 0x31b3ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x31b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b3f0: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x31b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x31b3f4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31b3f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31b3f8: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x31b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x31b3fc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31b3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31b400: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b404: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x31b404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b408: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31b408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31b40c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x31b40cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b410: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x31b410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b414: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x31b414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b418: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31b418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31b41c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31b41cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b424: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x31b424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31b428: 0x3e00008  jr          $ra
    ctx->pc = 0x31B428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B430u;
}
