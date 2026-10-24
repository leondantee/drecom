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

// Function: entry_00165960
// Address: 0x165960 - 0x165a0c
void entry_00165960_0x165960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165960_0x165960");
#endif

    switch (ctx->pc) {
        case 0x16598cu: goto label_16598c;
        case 0x1659dcu: goto label_1659dc;
        case 0x165a04u: goto label_165a04;
        default: break;
    }

    ctx->pc = 0x165960u;

    // 0x165960: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x165960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x165964: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x165964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x165968: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x165968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x16596c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x16596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x165970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165974: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x165974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x165978: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x165978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x16597c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x16597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x165980: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x165980u;
    runtime->Store32(rdram, ctx, 0x10000800u, GPR_U32(ctx, 0));
    // 0x165984: 0xc059830  jal         func_1660C0
    ctx->pc = 0x165984u;
    SET_GPR_U32(ctx, 31, 0x16598Cu);
    ctx->pc = 0x1660C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1660C0u, 0x165984u, 0x16598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16598Cu;
label_16598c:
    // 0x16598c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16598cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165990: 0x8c231a90  lw          $v1, 0x1A90($at)
    ctx->pc = 0x165990u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A90u));
    // 0x165994: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165998: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x165998u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x16599c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x16599cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1659a0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1659a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1659a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1659a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1659a8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1659A8u;
    {
        const bool branch_taken_0x1659a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1659a8) {
            ctx->pc = 0x165A20u;
            return;
        }
    }
    ctx->pc = 0x1659B0u;
    // 0x1659b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1659b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1659b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1659b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1659b8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1659b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1659bc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1659bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1659c0: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x1659c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1659c4: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x1659c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1659c8: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x1659c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1659cc: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x1659ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1659d0: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x1659d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1659d4: 0xc059190  jal         func_164640
    ctx->pc = 0x1659D4u;
    SET_GPR_U32(ctx, 31, 0x1659DCu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1659D4u, 0x1659DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659DCu;
label_1659dc:
    // 0x1659dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1659dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1659e0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1659e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1659e4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1659e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1659e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1659e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1659ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1659ECu;
    {
        const bool branch_taken_0x1659ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1659ec) {
            ctx->pc = 0x165A0Cu;
            return;
        }
    }
    ctx->pc = 0x1659F4u;
    // 0x1659f4: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x1659f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1659f8: 0x26040590  addiu       $a0, $s0, 0x590
    ctx->pc = 0x1659f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x1659fc: 0xc0599ac  jal         func_1666B0
    ctx->pc = 0x1659FCu;
    SET_GPR_U32(ctx, 31, 0x165A04u);
    ctx->pc = 0x1666B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1666B0u, 0x1659FCu, 0x165A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A04u;
label_165a04:
    // 0x165a04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165A04u;
    {
        const bool branch_taken_0x165a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a04) {
            ctx->pc = 0x165A20u;
            return;
        }
    }
    ctx->pc = 0x165A0Cu;
}
