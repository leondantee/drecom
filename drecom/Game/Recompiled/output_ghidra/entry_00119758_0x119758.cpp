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

// Function: entry_00119758
// Address: 0x119758 - 0x119798
void entry_00119758_0x119758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119758_0x119758");
#endif

    switch (ctx->pc) {
        case 0x119764u: goto label_119764;
        default: break;
    }

    ctx->pc = 0x119758u;

    // 0x119758: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x119758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11975c: 0xc046348  jal         func_118D20
    ctx->pc = 0x11975Cu;
    SET_GPR_U32(ctx, 31, 0x119764u);
    ctx->pc = 0x119760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11975Cu;
    // 0x119760: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x11975Cu, 0x119764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119764u;
label_119764:
    // 0x119764: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x119764u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119768: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x119768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x11976c: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x11976cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x119770: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x119770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x119774: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x119774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x119778: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x119778u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11977c: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x11977cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x119780: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x119780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x119784: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x119784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x119788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11978c: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x11978cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x119790: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x119790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x119794: 0x0  nop
    ctx->pc = 0x119794u;
    // NOP
    ctx->pc = 0x119798u;
}
