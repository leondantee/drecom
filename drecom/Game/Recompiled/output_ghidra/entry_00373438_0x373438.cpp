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

// Function: entry_00373438
// Address: 0x373438 - 0x373464
void entry_00373438_0x373438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373438_0x373438");
#endif

    ctx->pc = 0x373438u;

    // 0x373438: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x373438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x37343c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x37343cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x373440: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x373440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x373444: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x373444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373448: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x373448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x37344c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x37344cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373450: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x373450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x373454: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x373454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373458: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x373458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x37345c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x37345Cu;
    {
        const bool branch_taken_0x37345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37345c) {
            ctx->pc = 0x373628u;
            return;
        }
    }
    ctx->pc = 0x373464u;
}
