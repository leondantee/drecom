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

// Function: entry_0037b408
// Address: 0x37b408 - 0x37b460
void entry_0037b408_0x37b408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b408_0x37b408");
#endif

    ctx->pc = 0x37b408u;

    // 0x37b408: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b40c: 0x8c260588  lw          $a2, 0x588($at)
    ctx->pc = 0x37b40cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37b410: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37b410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37b414: 0x14c30012  bne         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x37B414u;
    {
        const bool branch_taken_0x37b414 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x37b414) {
            ctx->pc = 0x37B460u;
            return;
        }
    }
    ctx->pc = 0x37B41Cu;
    // 0x37b41c: 0xae205dcc  sw          $zero, 0x5DCC($s1)
    ctx->pc = 0x37b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 0));
    // 0x37b420: 0xae205dd0  sw          $zero, 0x5DD0($s1)
    ctx->pc = 0x37b420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 0));
    // 0x37b424: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b428: 0x8c230580  lw          $v1, 0x580($at)
    ctx->pc = 0x37b428u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37b42c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b430: 0xac230590  sw          $v1, 0x590($at)
    ctx->pc = 0x37b430u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0590u, _value); } while (0);
    // 0x37b434: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b438: 0x8c230588  lw          $v1, 0x588($at)
    ctx->pc = 0x37b438u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37b43c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b440: 0xac230598  sw          $v1, 0x598($at)
    ctx->pc = 0x37b440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0598u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0598u, _value); } while (0);
    // 0x37b444: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b448: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37b448u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37b44c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x37b44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x37b450: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b454: 0xac2305a0  sw          $v1, 0x5A0($at)
    ctx->pc = 0x37b454u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A05A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A0u, _value); } while (0);
    // 0x37b458: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37B458u;
    {
        const bool branch_taken_0x37b458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b458) {
            ctx->pc = 0x37B46Cu;
            return;
        }
    }
    ctx->pc = 0x37B460u;
}
