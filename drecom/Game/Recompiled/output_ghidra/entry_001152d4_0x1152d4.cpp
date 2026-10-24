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

// Function: entry_001152d4
// Address: 0x1152d4 - 0x115300
void entry_001152d4_0x1152d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001152d4_0x1152d4");
#endif

    ctx->pc = 0x1152d4u;

    // 0x1152d4: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x1152d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x1152d8: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x1152d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x1152dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1152dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1152e0: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x1152e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x1152e4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1152e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1152e8: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x1152e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1152ec: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x1152ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x1152f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1152f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1152f4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1152f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1152f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1152f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1152fc: 0x0  nop
    ctx->pc = 0x1152fcu;
    // NOP
    ctx->pc = 0x115300u;
}
