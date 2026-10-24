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

// Function: entry_00333534
// Address: 0x333534 - 0x33359c
void entry_00333534_0x333534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333534_0x333534");
#endif

    ctx->pc = 0x333534u;

    // 0x333534: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x333534u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x333538: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x333538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33353c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x33353cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x333540: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x333544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x333544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x333548: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x333548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33354c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x33354Cu;
    {
        const bool branch_taken_0x33354c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33354c) {
            ctx->pc = 0x3335C0u;
            return;
        }
    }
    ctx->pc = 0x333554u;
    // 0x333554: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x333558: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x333558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33355c: 0xae026850  sw          $v0, 0x6850($s0)
    ctx->pc = 0x33355cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26704), GPR_U32(ctx, 2));
    // 0x333560: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333564: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x333564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x333568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x333568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33356c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33356cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333570: 0xac222720  sw          $v0, 0x2720($at)
    ctx->pc = 0x333570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892720u, _value); } while (0);
    // 0x333574: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333578: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x333578u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x33357c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x33357cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x333580: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x333580u;
    {
        const bool branch_taken_0x333580 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x333580) {
            ctx->pc = 0x33359Cu;
            return;
        }
    }
    ctx->pc = 0x333588u;
    // 0x333588: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33358c: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x33358cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x333590: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x333590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x333594: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333598: 0xac222720  sw          $v0, 0x2720($at)
    ctx->pc = 0x333598u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892720u, _value); } while (0);
    ctx->pc = 0x33359cu;
}
