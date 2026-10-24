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

// Function: caseD_10
// Address: 0x25cb8c - 0x25cbb8
void caseD_10_0x25cb8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x25cb8c");
#endif

    ctx->pc = 0x25cb8cu;

    // 0x25cb8c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25cb8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25cb90: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x25cb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x25cb94: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25cb94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25cb98: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25cb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cb9c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x25cb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x25cba0: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cba4: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x25cba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x25cba8: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cbac: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x25cbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x25cbb0: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x25CBB0u;
    {
        const bool branch_taken_0x25cbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cbb0) {
            ctx->pc = 0x25D048u;
            return;
        }
    }
    ctx->pc = 0x25CBB8u;
}
