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

// Function: caseD_2
// Address: 0x141014 - 0x141068
void caseD_2_0x141014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x141014");
#endif

    ctx->pc = 0x141014u;

    // 0x141014: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x141014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x141018: 0x245191f0  addiu       $s1, $v0, -0x6E10
    ctx->pc = 0x141018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939120));
    // 0x14101c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x141020: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x141020u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91F0u, _value); } while (0);
    // 0x141024: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x141024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x141028: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x141028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x14102c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x14102cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91F4u, _value); } while (0);
    // 0x141030: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x141030u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E91FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91FCu, _value); } while (0);
    // 0x141034: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x141034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x141038: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x141038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x14103c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x14103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x141040: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9200u, _value); } while (0);
    // 0x141044: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141048: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x141048u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14104c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14104Cu;
    {
        const bool branch_taken_0x14104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14104c) {
            ctx->pc = 0x141068u;
            return;
        }
    }
    ctx->pc = 0x141054u;
    // 0x141054: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x141054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x141058: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x141058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x14105c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x14105cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x141060: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x141060u;
    {
        const bool branch_taken_0x141060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141060) {
            ctx->pc = 0x141078u;
            return;
        }
    }
    ctx->pc = 0x141068u;
}
