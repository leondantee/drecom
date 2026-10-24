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

// Function: entry_0031dd50
// Address: 0x31dd50 - 0x31dda0
void entry_0031dd50_0x31dd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031dd50_0x31dd50");
#endif

    ctx->pc = 0x31dd50u;

    // 0x31dd50: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dd54: 0x8422ec66  lh          $v0, -0x139A($at)
    ctx->pc = 0x31dd54u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x31dd58: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x31dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x31dd5c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dd60: 0xa422ec66  sh          $v0, -0x139A($at)
    ctx->pc = 0x31dd60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEC66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEC66u, _value); } while (0);
    // 0x31dd64: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dd68: 0x8422ec66  lh          $v0, -0x139A($at)
    ctx->pc = 0x31dd68u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x31dd6c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x31dd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31dd70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31dd70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31dd74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dd78: 0x8422ef4c  lh          $v0, -0x10B4($at)
    ctx->pc = 0x31dd78u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF4Cu));
    // 0x31dd7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31dd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31dd80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31dd80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31dd84: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x31dd84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31dd88: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DD88u;
    {
        const bool branch_taken_0x31dd88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dd88) {
            ctx->pc = 0x31DDA0u;
            return;
        }
    }
    ctx->pc = 0x31DD90u;
    // 0x31dd90: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dd94: 0x8422ef4c  lh          $v0, -0x10B4($at)
    ctx->pc = 0x31dd94u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF4Cu));
    // 0x31dd98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31dd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31dd9c: 0xa422ec66  sh          $v0, -0x139A($at)
    ctx->pc = 0x31dd9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEC66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEC66u, _value); } while (0);
    ctx->pc = 0x31dda0u;
}
