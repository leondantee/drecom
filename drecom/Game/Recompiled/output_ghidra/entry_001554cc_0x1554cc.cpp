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

// Function: entry_001554cc
// Address: 0x1554cc - 0x155528
void entry_001554cc_0x1554cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001554cc_0x1554cc");
#endif

    switch (ctx->pc) {
        case 0x1554d8u: goto label_1554d8;
        default: break;
    }

    ctx->pc = 0x1554ccu;

    // 0x1554cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1554ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1554d0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1554D0u;
    SET_GPR_U32(ctx, 31, 0x1554D8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1554D8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1554D8u) { return; }
    ctx->pc = 0x1554D8u;
label_1554d8:
    // 0x1554d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1554d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1554dc: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x1554dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x1554e0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1554e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1554e4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1554e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1554e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1554e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1554ec: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x1554ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x1554f0: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1554f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1554f4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1554f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1554f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1554f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1554fc: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x1554fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155500: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x155500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155504: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x155504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x155508: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x155508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15550c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15550cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155510: 0x0  nop
    ctx->pc = 0x155510u;
    // NOP
    // 0x155514: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x155514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x155518: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x155518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15551c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x15551cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x155520: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x155520u;
    {
        const bool branch_taken_0x155520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155520) {
            ctx->pc = 0x15557Cu;
            return;
        }
    }
    ctx->pc = 0x155528u;
}
