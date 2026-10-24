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

// Function: entry_002daa34
// Address: 0x2daa34 - 0x2daa50
void entry_002daa34_0x2daa34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002daa34_0x2daa34");
#endif

    ctx->pc = 0x2daa34u;

    // 0x2daa34: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2daa34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2daa38: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x2daa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x2daa3c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2daa3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2daa40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2daa40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2daa44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2daa44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa48: 0x0  nop
    ctx->pc = 0x2daa48u;
    // NOP
    // 0x2daa4c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2daa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    ctx->pc = 0x2daa50u;
}
