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

// Function: entry_0015bab0
// Address: 0x15bab0 - 0x15bafc
void entry_0015bab0_0x15bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bab0_0x15bab0");
#endif

    switch (ctx->pc) {
        case 0x15baf4u: goto label_15baf4;
        default: break;
    }

    ctx->pc = 0x15bab0u;

    // 0x15bab0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bab4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x15bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15bab8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x15bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x15babc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15babcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15bac0: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x15BAC0u;
    {
        const bool branch_taken_0x15bac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bac0) {
            ctx->pc = 0x15BB90u;
            return;
        }
    }
    ctx->pc = 0x15BAC8u;
    // 0x15bac8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bacc: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15baccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15bad0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15bad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15bad4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bad8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15bad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15badc: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15bae0: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x15bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x15bae4: 0xa6001574  sh          $zero, 0x1574($s0)
    ctx->pc = 0x15bae4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15bae8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15bae8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15baec: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x15BAECu;
    SET_GPR_U32(ctx, 31, 0x15BAF4u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x15BAECu, 0x15BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BAF4u;
label_15baf4:
    // 0x15baf4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x15BAF4u;
    {
        const bool branch_taken_0x15baf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15baf4) {
            ctx->pc = 0x15BC5Cu;
            return;
        }
    }
    ctx->pc = 0x15BAFCu;
}
