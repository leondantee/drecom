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

// Function: entry_0014e4c4
// Address: 0x14e4c4 - 0x14e530
void entry_0014e4c4_0x14e4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e4c4_0x14e4c4");
#endif

    switch (ctx->pc) {
        case 0x14e4ecu: goto label_14e4ec;
        default: break;
    }

    ctx->pc = 0x14e4c4u;

    // 0x14e4c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e4c8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e4cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e4d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x14e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x14e4d4: 0x8c500244  lw          $s0, 0x244($v0)
    ctx->pc = 0x14e4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x14e4d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x14e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e4dc: 0x2624021c  addiu       $a0, $s1, 0x21C
    ctx->pc = 0x14e4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 540));
    // 0x14e4e0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x14e4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14e4e4: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x14E4E4u;
    SET_GPR_U32(ctx, 31, 0x14E4ECu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x14E4E4u, 0x14E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4ECu;
label_14e4ec:
    // 0x14e4ec: 0x8e300244  lw          $s0, 0x244($s1)
    ctx->pc = 0x14e4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x14e4f0: 0x8e240244  lw          $a0, 0x244($s1)
    ctx->pc = 0x14e4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x14e4f4: 0x8e250248  lw          $a1, 0x248($s1)
    ctx->pc = 0x14e4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x14e4f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e4fc: 0x844215f0  lh          $v0, 0x15F0($v0)
    ctx->pc = 0x14e4fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5616)));
    // 0x14e500: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14e500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14e504: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14e504u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14e508: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x14e508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x14e50c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e514: 0x24461600  addiu       $a2, $v0, 0x1600
    ctx->pc = 0x14e514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x14e518: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x14e518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e51c: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x14e51cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14e520: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e524: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x14e524u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e528: 0xc0750ec  jal         func_1D43B0
    ctx->pc = 0x14E528u;
    SET_GPR_U32(ctx, 31, 0x14E530u);
    ctx->pc = 0x1D43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43B0u, 0x14E528u, 0x14E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E530u;
}
