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

// Function: entry_0025c4a4
// Address: 0x25c4a4 - 0x25c4c0
void entry_0025c4a4_0x25c4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c4a4_0x25c4a4");
#endif

    ctx->pc = 0x25c4a4u;

    // 0x25c4a4: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x25c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25c4a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25c4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25c4ac: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x25c4acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x25c4b0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25c4b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c4b4: 0x0  nop
    ctx->pc = 0x25c4b4u;
    // NOP
    // 0x25c4b8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25c4b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25c4bc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25c4bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x25c4c0u;
}
