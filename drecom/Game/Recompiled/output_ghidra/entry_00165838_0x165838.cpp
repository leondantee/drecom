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

// Function: entry_00165838
// Address: 0x165838 - 0x16587c
void entry_00165838_0x165838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165838_0x165838");
#endif

    ctx->pc = 0x165838u;

    // 0x165838: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16583c: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x16583cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x165840: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x165840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x165844: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165848: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x165848u;
    {
        const bool branch_taken_0x165848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165848) {
            ctx->pc = 0x1658A0u;
            return;
        }
    }
    ctx->pc = 0x165850u;
    // 0x165850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165854: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x165854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x165858: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x165858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x16585c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x16585cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x165860: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165864: 0x8c225a04  lw          $v0, 0x5A04($at)
    ctx->pc = 0x165864u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5A04u));
    // 0x165868: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16586c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x16586cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165870: 0xac225a04  sw          $v0, 0x5A04($at)
    ctx->pc = 0x165870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A04u, _value); } while (0);
    // 0x165874: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x165874u;
    {
        const bool branch_taken_0x165874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165874) {
            ctx->pc = 0x1658A0u;
            return;
        }
    }
    ctx->pc = 0x16587Cu;
}
