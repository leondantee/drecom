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

// Function: entry_003164dc
// Address: 0x3164dc - 0x316548
void entry_003164dc_0x3164dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003164dc_0x3164dc");
#endif

    switch (ctx->pc) {
        case 0x316508u: goto label_316508;
        default: break;
    }

    ctx->pc = 0x3164dcu;

    // 0x3164dc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3164dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3164e0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x3164e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3164e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3164e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3164e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3164e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3164ec: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x3164ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x3164f0: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x3164f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3164f4: 0x8e740034  lw          $s4, 0x34($s3)
    ctx->pc = 0x3164f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3164f8: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x3164f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x3164fc: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x3164fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x316500: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x316500u;
    SET_GPR_U32(ctx, 31, 0x316508u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x316500u, 0x316508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316508u;
label_316508:
    // 0x316508: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x316508u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31650c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x31650cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x316510: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x316510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x316514: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x316514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x316518: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x316518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x31651c: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x31651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x316520: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x316520u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x316524: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x316524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316528: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x316528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x31652c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x31652cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x316530: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x316530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x316534: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x316534u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x316538: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x316538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x31653c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31653cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x316540: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x316540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x316544: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x316544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x316548u;
}
