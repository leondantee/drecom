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

// Function: entry_0024821c
// Address: 0x24821c - 0x248238
void entry_0024821c_0x24821c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024821c_0x24821c");
#endif

    ctx->pc = 0x24821cu;

    // 0x24821c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x24821cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x248220: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x248220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x248224: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x248224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x248228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24822c: 0x0  nop
    ctx->pc = 0x24822cu;
    // NOP
    // 0x248230: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x248230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x248234: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x248234u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x248238u;
}
