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

// Function: entry_00320710
// Address: 0x320710 - 0x32072c
void entry_00320710_0x320710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320710_0x320710");
#endif

    ctx->pc = 0x320710u;

    // 0x320710: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x320710u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x320714: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x320714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x320718: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x320718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x32071c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x32071cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320720: 0x0  nop
    ctx->pc = 0x320720u;
    // NOP
    // 0x320724: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x320724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x320728: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x320728u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x32072cu;
}
