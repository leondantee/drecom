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

// Function: entry_0025ba90
// Address: 0x25ba90 - 0x25babc
void entry_0025ba90_0x25ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ba90_0x25ba90");
#endif

    ctx->pc = 0x25ba90u;

    // 0x25ba90: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25ba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ba94: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x25ba94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x25ba98: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25ba98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ba9c: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x25ba9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x25baa0: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25baa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25baa4: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x25baa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x25baa8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25baa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25baac: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x25baacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
    // 0x25bab0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25bab0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25bab4: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x25BAB4u;
    {
        const bool branch_taken_0x25bab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bab4) {
            ctx->pc = 0x25C2A8u;
            return;
        }
    }
    ctx->pc = 0x25BABCu;
}
