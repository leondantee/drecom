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

// Function: entry_0025bb38
// Address: 0x25bb38 - 0x25bb64
void entry_0025bb38_0x25bb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025bb38_0x25bb38");
#endif

    ctx->pc = 0x25bb38u;

    // 0x25bb38: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x25bb38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25bb3c: 0x34830008  ori         $v1, $a0, 0x8
    ctx->pc = 0x25bb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x25bb40: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25bb40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25bb44: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25bb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bb48: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x25bb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x25bb4c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25bb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bb50: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x25bb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x25bb54: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25bb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bb58: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x25bb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x25bb5c: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x25BB5Cu;
    {
        const bool branch_taken_0x25bb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb5c) {
            ctx->pc = 0x25C2A8u;
            return;
        }
    }
    ctx->pc = 0x25BB64u;
}
