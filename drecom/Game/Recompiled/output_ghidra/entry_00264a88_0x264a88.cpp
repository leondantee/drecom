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

// Function: entry_00264a88
// Address: 0x264a88 - 0x264ad0
void entry_00264a88_0x264a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264a88_0x264a88");
#endif

    ctx->pc = 0x264a88u;

    // 0x264a88: 0x2ee30010  sltiu       $v1, $s7, 0x10
    ctx->pc = 0x264a88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x264a8c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x264A8Cu;
    {
        const bool branch_taken_0x264a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264a8c) {
            ctx->pc = 0x264A74u;
            return;
        }
    }
    ctx->pc = 0x264A94u;
    // 0x264a94: 0x8fb600e8  lw          $s6, 0xE8($sp)
    ctx->pc = 0x264a94u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264a98: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x264a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x264a9c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x264a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x264aa0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x264aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x264aa4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x264aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x264aa8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264aac: 0x9023e653  lbu         $v1, -0x19AD($at)
    ctx->pc = 0x264aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E653u));
    // 0x264ab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264ab4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264ab8: 0xa023e653  sb          $v1, -0x19AD($at)
    ctx->pc = 0x264ab8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E653u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E653u, _value); } while (0);
    // 0x264abc: 0x26c30004  addiu       $v1, $s6, 0x4
    ctx->pc = 0x264abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x264ac0: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264ac4: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x264ac4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x264ac8: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x264AC8u;
    {
        const bool branch_taken_0x264ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264ac8) {
            ctx->pc = 0x264F98u;
            return;
        }
    }
    ctx->pc = 0x264AD0u;
}
