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

// Function: entry_002294e0
// Address: 0x2294e0 - 0x22955c
void entry_002294e0_0x2294e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002294e0_0x2294e0");
#endif

    switch (ctx->pc) {
        case 0x229528u: goto label_229528;
        case 0x229530u: goto label_229530;
        default: break;
    }

    ctx->pc = 0x2294e0u;

    // 0x2294e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2294e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2294e4: 0x904509e7  lbu         $a1, 0x9E7($v0)
    ctx->pc = 0x2294e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x2294e8: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2294E8u;
    {
        const bool branch_taken_0x2294e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2294e8) {
            ctx->pc = 0x22955Cu;
            return;
        }
    }
    ctx->pc = 0x2294F0u;
    // 0x2294f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2294f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2294f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2294f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2294f8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2294f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2294fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2294fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229500: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x229500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229504: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x229504u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x229508: 0x8c420368  lw          $v0, 0x368($v0)
    ctx->pc = 0x229508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22950c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x22950cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x229510: 0x24067802  addiu       $a2, $zero, 0x7802
    ctx->pc = 0x229510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30722));
    // 0x229514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229518: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x229518u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22951c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22951cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x229520: 0xc0965d0  jal         func_259740
    ctx->pc = 0x229520u;
    SET_GPR_U32(ctx, 31, 0x229528u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x229520u, 0x229528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229528u;
label_229528:
    // 0x229528: 0xc067694  jal         func_19DA50
    ctx->pc = 0x229528u;
    SET_GPR_U32(ctx, 31, 0x229530u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x229528u, 0x229530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229530u;
label_229530:
    // 0x229530: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x229530u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x229534: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x229534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x229538: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x229538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x22953c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x22953cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x229540: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x229540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229544: 0x94830a00  lhu         $v1, 0xA00($a0)
    ctx->pc = 0x229544u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2560)));
    // 0x229548: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x229548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22954c: 0xa4820a00  sh          $v0, 0xA00($a0)
    ctx->pc = 0x22954cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2560), (uint16_t)GPR_U32(ctx, 2));
    // 0x229550: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x229550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x229554: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229558: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x229558u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x22955cu;
}
