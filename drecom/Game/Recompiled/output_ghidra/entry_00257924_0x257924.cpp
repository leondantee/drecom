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

// Function: entry_00257924
// Address: 0x257924 - 0x257980
void entry_00257924_0x257924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257924_0x257924");
#endif

    ctx->pc = 0x257924u;

    // 0x257924: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x257924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x257928: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x257928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25792c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25792Cu;
    {
        const bool branch_taken_0x25792c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25792c) {
            ctx->pc = 0x257980u;
            return;
        }
    }
    ctx->pc = 0x257934u;
    // 0x257934: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257938: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x257938u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x25793c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x257940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257944: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x257944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x257948: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x25794c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x25794cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x257950: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x257954: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257958: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x257958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25795c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25795cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257960: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x257960u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x257964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x257968: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x257968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25796c: 0x8c84036c  lw          $a0, 0x36C($a0)
    ctx->pc = 0x25796cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x257970: 0x8c65036c  lw          $a1, 0x36C($v1)
    ctx->pc = 0x257970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x257974: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x257974u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x257978: 0xc06ae00  jal         func_1AB800
    ctx->pc = 0x257978u;
    SET_GPR_U32(ctx, 31, 0x257980u);
    ctx->pc = 0x1AB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB800u, 0x257978u, 0x257980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257980u;
}
