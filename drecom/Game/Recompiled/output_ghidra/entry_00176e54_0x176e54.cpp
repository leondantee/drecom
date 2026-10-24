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

// Function: entry_00176e54
// Address: 0x176e54 - 0x176e60
void entry_00176e54_0x176e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176e54_0x176e54");
#endif

    ctx->pc = 0x176e54u;

    // 0x176e54: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x176e58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176e5c: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x176e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
    ctx->pc = 0x176e60u;
}
