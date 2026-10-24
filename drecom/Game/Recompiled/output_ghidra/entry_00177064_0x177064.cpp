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

// Function: entry_00177064
// Address: 0x177064 - 0x1770e0
void entry_00177064_0x177064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177064_0x177064");
#endif

    switch (ctx->pc) {
        case 0x1770b8u: goto label_1770b8;
        default: break;
    }

    ctx->pc = 0x177064u;

    // 0x177064: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x177064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x177068: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x177068u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17706c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17706cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x177070: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x177070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x177074: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x177074u;
    {
        const bool branch_taken_0x177074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177074) {
            ctx->pc = 0x177138u;
            return;
        }
    }
    ctx->pc = 0x17707Cu;
    // 0x17707c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x17707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x177080: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x177080u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x177084: 0x1412c2  srl         $v0, $s4, 11
    ctx->pc = 0x177084u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 11));
    // 0x177088: 0x30567fff  andi        $s6, $v0, 0x7FFF
    ctx->pc = 0x177088u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x17708c: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x17708cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x177090: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x177090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x177094: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x177094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x177098: 0x24427ff8  addiu       $v0, $v0, 0x7FF8
    ctx->pc = 0x177098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32760));
    // 0x17709c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x17709cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1770a0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1770A0u;
    {
        const bool branch_taken_0x1770a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1770a0) {
            ctx->pc = 0x177100u;
            return;
        }
    }
    ctx->pc = 0x1770A8u;
    // 0x1770a8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1770a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1770ac: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1770acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1770b0: 0xc05dc6c  jal         func_1771B0
    ctx->pc = 0x1770B0u;
    SET_GPR_U32(ctx, 31, 0x1770B8u);
    ctx->pc = 0x1771B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1771B0u, 0x1770B0u, 0x1770B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1770B8u;
label_1770b8:
    // 0x1770b8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1770B8u;
    {
        const bool branch_taken_0x1770b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1770b8) {
            ctx->pc = 0x1770E0u;
            return;
        }
    }
    ctx->pc = 0x1770C0u;
    // 0x1770c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1770c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1770c4: 0x8c23fdf0  lw          $v1, -0x210($at)
    ctx->pc = 0x1770c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFDF0u));
    // 0x1770c8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1770c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1770cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1770ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1770d0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1770d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1770d4: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x1770d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1770d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1770D8u;
    {
        const bool branch_taken_0x1770d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1770d8) {
            ctx->pc = 0x1770F0u;
            return;
        }
    }
    ctx->pc = 0x1770E0u;
}
