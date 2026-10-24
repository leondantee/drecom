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

// Function: entry_002e0fe0
// Address: 0x2e0fe0 - 0x2e100c
void entry_002e0fe0_0x2e0fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0fe0_0x2e0fe0");
#endif

    ctx->pc = 0x2e0fe0u;

    // 0x2e0fe0: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e0fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0fe4: 0xa4a01278  sh          $zero, 0x1278($a1)
    ctx->pc = 0x2e0fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e0fe8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0fec: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2e0fecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e0ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e0ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0ff4: 0x0  nop
    ctx->pc = 0x2e0ff4u;
    // NOP
    // 0x2e0ff8: 0xe64000a8  swc1        $f0, 0xA8($s2)
    ctx->pc = 0x2e0ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
    // 0x2e0ffc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e0ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1000: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x2e1000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e1004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e1004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e1008: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x2e1008u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e100cu;
}
