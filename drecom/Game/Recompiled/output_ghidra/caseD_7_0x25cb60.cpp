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

// Function: caseD_7
// Address: 0x25cb60 - 0x25cb8c
void caseD_7_0x25cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x25cb60");
#endif

    ctx->pc = 0x25cb60u;

    // 0x25cb60: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cb64: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x25cb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x25cb68: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cb6c: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x25cb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x25cb70: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cb74: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x25cb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x25cb78: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25cb78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25cb7c: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x25cb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
    // 0x25cb80: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25cb80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25cb84: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x25CB84u;
    {
        const bool branch_taken_0x25cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cb84) {
            ctx->pc = 0x25D048u;
            return;
        }
    }
    ctx->pc = 0x25CB8Cu;
}
