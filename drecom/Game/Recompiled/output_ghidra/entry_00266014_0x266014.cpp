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

// Function: entry_00266014
// Address: 0x266014 - 0x266094
void entry_00266014_0x266014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266014_0x266014");
#endif

    switch (ctx->pc) {
        case 0x26603cu: goto label_26603c;
        case 0x266088u: goto label_266088;
        default: break;
    }

    ctx->pc = 0x266014u;

    // 0x266014: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x266014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x266018: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x266018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x26601c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x26601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x266020: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x266020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x266024: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x266024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x266028: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x266028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x26602c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x26602cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x266030: 0x8e260a68  lw          $a2, 0xA68($s1)
    ctx->pc = 0x266030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x266034: 0xc0767a0  jal         func_1D9E80
    ctx->pc = 0x266034u;
    SET_GPR_U32(ctx, 31, 0x26603Cu);
    ctx->pc = 0x1D9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E80u, 0x266034u, 0x26603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26603Cu;
label_26603c:
    // 0x26603c: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x26603cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x266040: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x266040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x266044: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x266044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x266048: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x266048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x26604c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x266050: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x266050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x266054: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x266054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x266058: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x266058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26605c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26605Cu;
    {
        const bool branch_taken_0x26605c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26605c) {
            ctx->pc = 0x2660ACu;
            return;
        }
    }
    ctx->pc = 0x266064u;
    // 0x266064: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x266064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x266068: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x266068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26606c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26606Cu;
    {
        const bool branch_taken_0x26606c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26606c) {
            ctx->pc = 0x266094u;
            return;
        }
    }
    ctx->pc = 0x266074u;
    // 0x266074: 0x8e260a68  lw          $a2, 0xA68($s1)
    ctx->pc = 0x266074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x266078: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x266078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26607c: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x26607cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x266080: 0xc099854  jal         func_266150
    ctx->pc = 0x266080u;
    SET_GPR_U32(ctx, 31, 0x266088u);
    ctx->pc = 0x266150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266150u, 0x266080u, 0x266088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266088u;
label_266088:
    // 0x266088: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x266088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x26608c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26608Cu;
    {
        const bool branch_taken_0x26608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26608c) {
            ctx->pc = 0x2660ACu;
            return;
        }
    }
    ctx->pc = 0x266094u;
}
