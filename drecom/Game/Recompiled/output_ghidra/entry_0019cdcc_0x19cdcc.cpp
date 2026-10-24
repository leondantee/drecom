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

// Function: entry_0019cdcc
// Address: 0x19cdcc - 0x19cde8
void entry_0019cdcc_0x19cdcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cdcc_0x19cdcc");
#endif

    ctx->pc = 0x19cdccu;

    // 0x19cdcc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cdd0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x19cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x19cdd4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19cdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19cdd8: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x19cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x19cddc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19cddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cde0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cde4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x19cde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    ctx->pc = 0x19cde8u;
}
