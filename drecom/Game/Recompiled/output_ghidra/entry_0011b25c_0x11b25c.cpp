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

// Function: entry_0011b25c
// Address: 0x11b25c - 0x11b2dc
void entry_0011b25c_0x11b25c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b25c_0x11b25c");
#endif

    switch (ctx->pc) {
        case 0x11b2bcu: goto label_11b2bc;
        case 0x11b2d0u: goto label_11b2d0;
        default: break;
    }

    ctx->pc = 0x11b25cu;

    // 0x11b25c: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x11b25cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x11b260: 0xffb10470  sd          $s1, 0x470($sp)
    ctx->pc = 0x11b260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 17));
    // 0x11b264: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x11b264u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11b268: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x11b268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x11b26c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b270: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x11b270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
    // 0x11b274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b278: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x11b278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x11b27c: 0x8e280054  lw          $t0, 0x54($s1)
    ctx->pc = 0x11b27cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x11b280: 0x9629000e  lhu         $t1, 0xE($s1)
    ctx->pc = 0x11b280u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x11b284: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x11b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x11b288: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x11b288u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x11b28c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x11b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x11b290: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x11b290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x11b294: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x11b294u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x11b298: 0xa7a9000e  sh          $t1, 0xE($sp)
    ctx->pc = 0x11b298u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x11b29c: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x11b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    // 0x11b2a0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x11b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x11b2a4: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x11b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x11b2a8: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x11b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x11b2ac: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x11b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x11b2b0: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x11b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x11b2b4: 0xc046cc4  jal         func_11B310
    ctx->pc = 0x11B2B4u;
    SET_GPR_U32(ctx, 31, 0x11B2BCu);
    ctx->pc = 0x11B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2B4u;
    // 0x11b2b8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B310u, 0x11B2B4u, 0x11B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2BCu;
label_11b2bc:
    // 0x11b2bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2c0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B2C0u;
    {
        const bool branch_taken_0x11b2c0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2C0u;
        // 0x11b2c4: 0x97a2000c  lhu         $v0, 0xC($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2c0) {
            ctx->pc = 0x11B2DCu;
            return;
        }
    }
    ctx->pc = 0x11B2C8u;
    // 0x11b2c8: 0xc045bec  jal         func_116FB0
    ctx->pc = 0x11B2C8u;
    SET_GPR_U32(ctx, 31, 0x11B2D0u);
    ctx->pc = 0x11B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2C8u;
    // 0x11b2cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116FB0u;
    {
        ctx->pc = 0x11B2D0u;
        ps2_stubs::fflush(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11B2D0u) { return; }
    ctx->pc = 0x11B2D0u;
label_11b2d0:
    // 0x11b2d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b2d4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x11b2d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x11b2d8: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x11b2d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->pc = 0x11b2dcu;
}
