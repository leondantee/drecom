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

// Function: entry_00374304
// Address: 0x374304 - 0x374328
void entry_00374304_0x374304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374304_0x374304");
#endif

    ctx->pc = 0x374304u;

    // 0x374304: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x374304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374308: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x374308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x37430c: 0xc6200138  lwc1        $f0, 0x138($s1)
    ctx->pc = 0x37430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374310: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x374310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x374314: 0xc620013c  lwc1        $f0, 0x13C($s1)
    ctx->pc = 0x374314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374318: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x374318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x37431c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x37431cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374320: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x374320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x374324: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x374324u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x374328u;
}
