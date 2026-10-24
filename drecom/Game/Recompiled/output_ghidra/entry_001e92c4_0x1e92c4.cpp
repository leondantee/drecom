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

// Function: entry_001e92c4
// Address: 0x1e92c4 - 0x1e931c
void entry_001e92c4_0x1e92c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e92c4_0x1e92c4");
#endif

    ctx->pc = 0x1e92c4u;

    // 0x1e92c4: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e92c8: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x1e92c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e92cc: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e92d0: 0x8c421210  lw          $v0, 0x1210($v0)
    ctx->pc = 0x1e92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x1e92d4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1e92d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e92d8: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e92d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e92dc: 0x904411ef  lbu         $a0, 0x11EF($v0)
    ctx->pc = 0x1e92dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x1e92e0: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e92e4: 0xa04410a8  sb          $a0, 0x10A8($v0)
    ctx->pc = 0x1e92e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e92e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e92e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e92ec: 0x8c251a58  lw          $a1, 0x1A58($at)
    ctx->pc = 0x1e92ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1e92f0: 0x30a60fff  andi        $a2, $a1, 0xFFF
    ctx->pc = 0x1e92f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x1e92f4: 0x2cc1000b  sltiu       $at, $a2, 0xB
    ctx->pc = 0x1e92f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1e92f8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E92F8u;
    {
        const bool branch_taken_0x1e92f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e92f8) {
            ctx->pc = 0x1E931Cu;
            return;
        }
    }
    ctx->pc = 0x1E9300u;
    // 0x1e9300: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e9304: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1e9304u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1e9308: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e9308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e930c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e930cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e9310: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1e9310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1e9314: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9314u;
    {
        const bool branch_taken_0x1e9314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9314) {
            ctx->pc = 0x1E9330u;
            return;
        }
    }
    ctx->pc = 0x1E931Cu;
}
