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

// Function: entry_0015ba08
// Address: 0x15ba08 - 0x15ba44
void entry_0015ba08_0x15ba08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ba08_0x15ba08");
#endif

    switch (ctx->pc) {
        case 0x15ba3cu: goto label_15ba3c;
        default: break;
    }

    ctx->pc = 0x15ba08u;

    // 0x15ba08: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x15ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15ba0c: 0xa2021920  sb          $v0, 0x1920($s0)
    ctx->pc = 0x15ba0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ba10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15ba10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15ba14: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15ba18: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15ba18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15ba1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15ba1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15ba20: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15ba20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15ba24: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15ba28: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x15ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x15ba2c: 0xa6001574  sh          $zero, 0x1574($s0)
    ctx->pc = 0x15ba2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15ba30: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15ba30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15ba34: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x15BA34u;
    SET_GPR_U32(ctx, 31, 0x15BA3Cu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x15BA34u, 0x15BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA3Cu;
label_15ba3c:
    // 0x15ba3c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x15BA3Cu;
    {
        const bool branch_taken_0x15ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba3c) {
            ctx->pc = 0x15BC5Cu;
            return;
        }
    }
    ctx->pc = 0x15BA44u;
}
