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

// Function: entry_00263398
// Address: 0x263398 - 0x2633b0
void entry_00263398_0x263398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263398_0x263398");
#endif

    ctx->pc = 0x263398u;

    // 0x263398: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x263398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x26339c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x26339cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2633a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2633a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2633a4: 0x0  nop
    ctx->pc = 0x2633a4u;
    // NOP
    // 0x2633a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2633a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2633ac: 0x0  nop
    ctx->pc = 0x2633acu;
    // NOP
    ctx->pc = 0x2633b0u;
}
