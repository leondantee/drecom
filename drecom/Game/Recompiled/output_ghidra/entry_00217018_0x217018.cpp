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

// Function: entry_00217018
// Address: 0x217018 - 0x21705c
void entry_00217018_0x217018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217018_0x217018");
#endif

    ctx->pc = 0x217018u;

    // 0x217018: 0x8c62aaf8  lw          $v0, -0x5508($v1)
    ctx->pc = 0x217018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945528)));
    // 0x21701c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21701cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217020: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x217020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x217024: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x217024u;
    {
        const bool branch_taken_0x217024 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x217028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217024u;
        // 0x217028: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217024) {
            ctx->pc = 0x21706Cu;
            return;
        }
    }
    ctx->pc = 0x21702Cu;
    // 0x21702c: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x21702cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x217030: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x217030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x217034: 0xace5cb40  sw          $a1, -0x34C0($a3)
    ctx->pc = 0x217034u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61CB40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61CB40u, _value); } while (0);
    // 0x217038: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x217038u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x21703c: 0x2484cac0  addiu       $a0, $a0, -0x3540
    ctx->pc = 0x21703cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953664));
    // 0x217040: 0x24e7cb40  addiu       $a3, $a3, -0x34C0
    ctx->pc = 0x217040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953792));
    // 0x217044: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x217044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x217048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x217048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21704c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21704cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217050: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x217050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217054: 0x2609cb00  addiu       $t1, $s0, -0x3500
    ctx->pc = 0x217054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953728));
    // 0x217058: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x217058u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x21705cu;
}
