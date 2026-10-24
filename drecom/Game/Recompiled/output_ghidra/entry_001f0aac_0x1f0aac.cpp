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

// Function: entry_001f0aac
// Address: 0x1f0aac - 0x1f0ac8
void entry_001f0aac_0x1f0aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0aac_0x1f0aac");
#endif

    ctx->pc = 0x1f0aacu;

    // 0x1f0aac: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1f0aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1f0ab0: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x1f0ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1f0ab4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1f0ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1f0ab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0ab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0abc: 0x0  nop
    ctx->pc = 0x1f0abcu;
    // NOP
    // 0x1f0ac0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f0ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0ac4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1f0ac4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x1f0ac8u;
}
