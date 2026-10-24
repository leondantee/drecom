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

// Function: entry_0010fba4
// Address: 0x10fba4 - 0x10fbcc
void entry_0010fba4_0x10fba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fba4_0x10fba4");
#endif

    switch (ctx->pc) {
        case 0x10fbc0u: goto label_10fbc0;
        default: break;
    }

    ctx->pc = 0x10fba4u;

    // 0x10fba4: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x10fba4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x10fba8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10fba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x10fbacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbb0: 0x25084600  addiu       $t0, $t0, 0x4600
    ctx->pc = 0x10fbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17920));
    // 0x10fbb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10fbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbb8: 0xc043f3c  jal         func_10FCF0
    ctx->pc = 0x10FBB8u;
    SET_GPR_U32(ctx, 31, 0x10FBC0u);
    ctx->pc = 0x10FBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FBB8u;
    // 0x10fbbc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCF0u, 0x10FBB8u, 0x10FBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBC0u;
label_10fbc0:
    // 0x10fbc0: 0x28402  srl         $s0, $v0, 16
    ctx->pc = 0x10fbc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x10fbc4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x10fbc4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x10fbc8: 0xafd00000  sw          $s0, 0x0($fp)
    ctx->pc = 0x10fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x10fbccu;
}
