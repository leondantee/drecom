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

// Function: entry_0010d728
// Address: 0x10d728 - 0x10d76c
void entry_0010d728_0x10d728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d728_0x10d728");
#endif

    switch (ctx->pc) {
        case 0x10d764u: goto label_10d764;
        default: break;
    }

    ctx->pc = 0x10d728u;

    // 0x10d728: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10d728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10d72c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x10d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10d730: 0x24453c88  addiu       $a1, $v0, 0x3C88
    ctx->pc = 0x10d730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15496));
    // 0x10d734: 0x3c0b0011  lui         $t3, 0x11
    ctx->pc = 0x10d734u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17 << 16));
    // 0x10d738: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x10d738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x10d73c: 0x26643c60  addiu       $a0, $s3, 0x3C60
    ctx->pc = 0x10d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 15456));
    // 0x10d740: 0xac433c88  sw          $v1, 0x3C88($v0)
    ctx->pc = 0x10d740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3B3C88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B3C88u, _value); } while (0);
    // 0x10d744: 0x256bd128  addiu       $t3, $t3, -0x2ED8
    ctx->pc = 0x10d744u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955304));
    // 0x10d748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10d748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d74c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d750: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10d750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d754: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10d754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d758: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10d758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d75c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10D75Cu;
    SET_GPR_U32(ctx, 31, 0x10D764u);
    ctx->pc = 0x10D760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D75Cu;
    // 0x10d760: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10D764u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D764u) { return; }
    ctx->pc = 0x10D764u;
label_10d764:
    // 0x10d764: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10d764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d768: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x10d768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x10d76cu;
}
