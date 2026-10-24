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

// Function: entry_00115e80
// Address: 0x115e80 - 0x115ef0
void entry_00115e80_0x115e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115e80_0x115e80");
#endif

    switch (ctx->pc) {
        case 0x115e90u: goto label_115e90;
        default: break;
    }

    ctx->pc = 0x115e80u;

    // 0x115e80: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x115e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x115e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e88: 0xc0466a4  jal         func_119A90
    ctx->pc = 0x115E88u;
    SET_GPR_U32(ctx, 31, 0x115E90u);
    ctx->pc = 0x115E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E88u;
    // 0x115e8c: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A90u, 0x115E88u, 0x115E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E90u;
label_115e90:
    // 0x115e90: 0x101d02  srl         $v1, $s0, 20
    ctx->pc = 0x115e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x115e94: 0x307407ff  andi        $s4, $v1, 0x7FF
    ctx->pc = 0x115e94u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x115e98: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x115E98u;
    {
        const bool branch_taken_0x115e98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E98u;
        // 0x115e9c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e98) {
            ctx->pc = 0x115EF0u;
            return;
        }
    }
    ctx->pc = 0x115EA0u;
    // 0x115ea0: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x115ea0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ea4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x115ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x115ea8: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x115ea8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x115eac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x115eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x115eb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x115eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x115eb4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x115eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x115eb8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x115eb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x115ebc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x115ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x115ec0: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x115ec0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x115ec4: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x115ec4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x115ec8: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x115ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x115ecc: 0x17103f  dsra32      $v0, $s7, 0
    ctx->pc = 0x115eccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x115ed0: 0x2694fc01  addiu       $s4, $s4, -0x3FF
    ctx->pc = 0x115ed0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966273));
    // 0x115ed4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x115ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x115ed8: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x115ed8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x115edc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x115edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x115ee0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x115ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x115ee4: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x115ee4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x115ee8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x115EE8u;
    {
        const bool branch_taken_0x115ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EE8u;
        // 0x115eec: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ee8) {
            ctx->pc = 0x115F88u;
            return;
        }
    }
    ctx->pc = 0x115EF0u;
}
