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

// Function: entry_0022acd4
// Address: 0x22acd4 - 0x22ad30
void entry_0022acd4_0x22acd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022acd4_0x22acd4");
#endif

    ctx->pc = 0x22acd4u;

    // 0x22acd4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22acd8: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x22acd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x22acdc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x22acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x22ace0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ace0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ace4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ace8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22acec: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x22acecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x22acf0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22acf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22acf4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22acf4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22acf8: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22acf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22acfc: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x22acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22ad00: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22ad00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x22ad04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22ad04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22ad08: 0x8c221a58  lw          $v0, 0x1A58($at)
    ctx->pc = 0x22ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22ad0c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22ad0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x22ad10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22ad10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22ad14: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x22ad14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x22ad18: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ad1c: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x22ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22ad20: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x22ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22ad24: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x22ad24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x22ad28: 0xa63825  or          $a3, $a1, $a2
    ctx->pc = 0x22ad28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x22ad2c: 0xac470030  sw          $a3, 0x30($v0)
    ctx->pc = 0x22ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 7));
    ctx->pc = 0x22ad30u;
}
