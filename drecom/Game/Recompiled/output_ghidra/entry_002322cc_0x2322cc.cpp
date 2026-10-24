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

// Function: entry_002322cc
// Address: 0x2322cc - 0x23231c
void entry_002322cc_0x2322cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002322cc_0x2322cc");
#endif

    switch (ctx->pc) {
        case 0x232310u: goto label_232310;
        default: break;
    }

    ctx->pc = 0x2322ccu;

    // 0x2322cc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2322ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2322d0: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x2322d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2322d4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2322d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2322d8: 0xa4a30030  sh          $v1, 0x30($a1)
    ctx->pc = 0x2322d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x2322dc: 0x14800154  bnez        $a0, . + 4 + (0x154 << 2)
    ctx->pc = 0x2322DCu;
    {
        const bool branch_taken_0x2322dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2322dc) {
            ctx->pc = 0x232830u;
            return;
        }
    }
    ctx->pc = 0x2322E4u;
    // 0x2322e4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2322e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2322e8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2322e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2322ec: 0xa4640030  sh          $a0, 0x30($v1)
    ctx->pc = 0x2322ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x2322f0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x2322f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x2322f4: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x2322f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2322f8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2322f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2322fc: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x2322fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x232300: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x232300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x232304: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x232304u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x232308: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x232308u;
    SET_GPR_U32(ctx, 31, 0x232310u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x232308u, 0x232310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232310u;
label_232310:
    // 0x232310: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x232310u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x232314: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x232314u;
    {
        const bool branch_taken_0x232314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232314) {
            ctx->pc = 0x232830u;
            return;
        }
    }
    ctx->pc = 0x23231Cu;
}
