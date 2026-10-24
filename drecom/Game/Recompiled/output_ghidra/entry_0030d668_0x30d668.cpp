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

// Function: entry_0030d668
// Address: 0x30d668 - 0x30d6ac
void entry_0030d668_0x30d668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d668_0x30d668");
#endif

    switch (ctx->pc) {
        case 0x30d688u: goto label_30d688;
        default: break;
    }

    ctx->pc = 0x30d668u;

    // 0x30d668: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d66c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d670: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d674: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30d674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30d678: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30d678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d67c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x30d67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x30d680: 0xc05cc90  jal         func_173240
    ctx->pc = 0x30D680u;
    SET_GPR_U32(ctx, 31, 0x30D688u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x30D680u, 0x30D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D688u;
label_30d688:
    // 0x30d688: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30d688u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30d68c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d690: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d694: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30d694u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x30d698: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x30d698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x30d69c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D69Cu;
    {
        const bool branch_taken_0x30d69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d69c) {
            ctx->pc = 0x30D6ACu;
            return;
        }
    }
    ctx->pc = 0x30D6A4u;
    // 0x30d6a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d6a8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30d6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x30d6acu;
}
