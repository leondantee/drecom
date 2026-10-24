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

// Function: entry_00331dd0
// Address: 0x331dd0 - 0x331dec
void entry_00331dd0_0x331dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331dd0_0x331dd0");
#endif

    ctx->pc = 0x331dd0u;

    // 0x331dd0: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x331dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x331dd4: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x331dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x331dd8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x331dd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x331ddc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331ddcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331de0: 0x0  nop
    ctx->pc = 0x331de0u;
    // NOP
    // 0x331de4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x331de8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x331de8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x331decu;
}
