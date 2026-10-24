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

// Function: entry_0013d214
// Address: 0x13d214 - 0x13d230
void entry_0013d214_0x13d214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d214_0x13d214");
#endif

    ctx->pc = 0x13d214u;

    // 0x13d214: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x13d214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x13d218: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x13d218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x13d21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d220: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d224: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x13d224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x13d228: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13D228u;
    {
        const bool branch_taken_0x13d228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d228) {
            ctx->pc = 0x13D28Cu;
            return;
        }
    }
    ctx->pc = 0x13D230u;
}
