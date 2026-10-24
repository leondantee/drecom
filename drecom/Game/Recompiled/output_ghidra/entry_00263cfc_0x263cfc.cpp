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

// Function: entry_00263cfc
// Address: 0x263cfc - 0x263d48
void entry_00263cfc_0x263cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263cfc_0x263cfc");
#endif

    ctx->pc = 0x263cfcu;

    // 0x263cfc: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x263cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x263d00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263d04: 0x0  nop
    ctx->pc = 0x263d04u;
    // NOP
    // 0x263d08: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x263d08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x263d0c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x263d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x263d10: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d14: 0xe4601070  swc1        $f0, 0x1070($v1)
    ctx->pc = 0x263d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4208), bits); }
    // 0x263d18: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d1c: 0xc4601070  lwc1        $f0, 0x1070($v1)
    ctx->pc = 0x263d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263d20: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x263d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x263d24: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d28: 0xc4601074  lwc1        $f0, 0x1074($v1)
    ctx->pc = 0x263d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263d2c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x263d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x263d30: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d34: 0x94631080  lhu         $v1, 0x1080($v1)
    ctx->pc = 0x263d34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4224)));
    // 0x263d38: 0xa7a300a8  sh          $v1, 0xA8($sp)
    ctx->pc = 0x263d38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 168), (uint16_t)GPR_U32(ctx, 3));
    // 0x263d3c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d40: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x263d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x263d44: 0xa3a300c0  sb          $v1, 0xC0($sp)
    ctx->pc = 0x263d44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x263d48u;
}
