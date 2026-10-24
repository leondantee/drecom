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

// Function: entry_0018e008
// Address: 0x18e008 - 0x18e038
void entry_0018e008_0x18e008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e008_0x18e008");
#endif

    ctx->pc = 0x18e008u;

    // 0x18e008: 0x8e8300d4  lw          $v1, 0xD4($s4)
    ctx->pc = 0x18e008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x18e00c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e010: 0xae8300d4  sw          $v1, 0xD4($s4)
    ctx->pc = 0x18e010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 3));
    // 0x18e014: 0xc68100d8  lwc1        $f1, 0xD8($s4)
    ctx->pc = 0x18e014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e018: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18e018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18e01c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18e01cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e020: 0x0  nop
    ctx->pc = 0x18e020u;
    // NOP
    // 0x18e024: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18e024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18e028: 0xe68000d8  swc1        $f0, 0xD8($s4)
    ctx->pc = 0x18e028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 216), bits); }
    // 0x18e02c: 0x8e9400e8  lw          $s4, 0xE8($s4)
    ctx->pc = 0x18e02cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
    // 0x18e030: 0x0  nop
    ctx->pc = 0x18e030u;
    // NOP
    // 0x18e034: 0x0  nop
    ctx->pc = 0x18e034u;
    // NOP
    ctx->pc = 0x18e038u;
}
