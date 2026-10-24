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

// Function: entry_0025ec30
// Address: 0x25ec30 - 0x25ec58
void entry_0025ec30_0x25ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ec30_0x25ec30");
#endif

    ctx->pc = 0x25ec30u;

    // 0x25ec30: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x25ec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec34: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x25ec34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x25ec38: 0xc6200138  lwc1        $f0, 0x138($s1)
    ctx->pc = 0x25ec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec3c: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x25ec3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x25ec40: 0xc620013c  lwc1        $f0, 0x13C($s1)
    ctx->pc = 0x25ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec44: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x25ec44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x25ec48: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25ec48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ec4c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x25ec4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x25ec50: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25ec50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ec54: 0x0  nop
    ctx->pc = 0x25ec54u;
    // NOP
    ctx->pc = 0x25ec58u;
}
