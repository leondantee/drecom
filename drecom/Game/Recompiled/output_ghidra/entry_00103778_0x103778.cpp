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

// Function: entry_00103778
// Address: 0x103778 - 0x1037d0
void entry_00103778_0x103778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103778_0x103778");
#endif

    switch (ctx->pc) {
        case 0x10379cu: goto label_10379c;
        case 0x1037a8u: goto label_1037a8;
        case 0x1037b4u: goto label_1037b4;
        default: break;
    }

    ctx->pc = 0x103778u;

    // 0x103778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x103778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10377c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10377cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x103780: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x103780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103784: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x103784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103788: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10378c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10378cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103790: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x103790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x103794: 0xc040c9e  jal         func_103278
    ctx->pc = 0x103794u;
    SET_GPR_U32(ctx, 31, 0x10379Cu);
    ctx->pc = 0x103798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103794u;
    // 0x103798: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103278u, 0x103794u, 0x10379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10379Cu;
label_10379c:
    // 0x10379c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10379cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1037a0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1037A0u;
    SET_GPR_U32(ctx, 31, 0x1037A8u);
    ctx->pc = 0x1037A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1037A0u;
    // 0x1037a4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103278u, 0x1037A0u, 0x1037A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1037A8u;
label_1037a8:
    // 0x1037a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1037a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1037ac: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1037ACu;
    SET_GPR_U32(ctx, 31, 0x1037B4u);
    ctx->pc = 0x1037B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1037ACu;
    // 0x1037b0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103278u, 0x1037ACu, 0x1037B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1037B4u;
label_1037b4:
    // 0x1037b4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1037b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1037b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1037b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1037bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1037bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1037c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1037c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1037c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1037c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1037c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1037c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1037cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1037ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1037d0u;
}
