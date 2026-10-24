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

// Function: entry_002d4848
// Address: 0x2d4848 - 0x2d4860
void entry_002d4848_0x2d4848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4848_0x2d4848");
#endif

    ctx->pc = 0x2d4848u;

    // 0x2d4848: 0x3c03bf49  lui         $v1, 0xBF49
    ctx->pc = 0x2d4848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48969 << 16));
    // 0x2d484c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2d484cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2d4850: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d4850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4854: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4858: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d4858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d485c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d485cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x2d4860u;
}
