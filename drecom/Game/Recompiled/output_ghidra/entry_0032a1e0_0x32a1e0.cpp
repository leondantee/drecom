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

// Function: entry_0032a1e0
// Address: 0x32a1e0 - 0x32a220
void entry_0032a1e0_0x32a1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a1e0_0x32a1e0");
#endif

    ctx->pc = 0x32a1e0u;

    // 0x32a1e0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a1e4: 0x8c23a4e0  lw          $v1, -0x5B20($at)
    ctx->pc = 0x32a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A4E0u));
    // 0x32a1e8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x32A1E8u;
    {
        const bool branch_taken_0x32a1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a1e8) {
            ctx->pc = 0x32A220u;
            return;
        }
    }
    ctx->pc = 0x32A1F0u;
    // 0x32a1f0: 0x866313a8  lh          $v1, 0x13A8($s3)
    ctx->pc = 0x32a1f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5032)));
    // 0x32a1f4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x32a1f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a1f8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32a1f8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32a1fc: 0x866313aa  lh          $v1, 0x13AA($s3)
    ctx->pc = 0x32a1fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5034)));
    // 0x32a200: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x32a200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a204: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a204u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a208: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x32a208u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32a20c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A20Cu;
    {
        const bool branch_taken_0x32a20c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a20c) {
            ctx->pc = 0x32A220u;
            return;
        }
    }
    ctx->pc = 0x32A214u;
    // 0x32a214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a218: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a21c: 0xac23a4e0  sw          $v1, -0x5B20($at)
    ctx->pc = 0x32a21cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A4E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A4E0u, _value); } while (0);
    ctx->pc = 0x32a220u;
}
