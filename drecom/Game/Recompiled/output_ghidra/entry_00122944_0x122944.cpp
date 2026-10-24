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

// Function: entry_00122944
// Address: 0x122944 - 0x1229a0
void entry_00122944_0x122944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122944_0x122944");
#endif

    switch (ctx->pc) {
        case 0x122968u: goto label_122968;
        default: break;
    }

    ctx->pc = 0x122944u;

    // 0x122944: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122948: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x122948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12294c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x12294cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x122950: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x122950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x122954: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x122954u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122958: 0x0  nop
    ctx->pc = 0x122958u;
    // NOP
    // 0x12295c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x12295cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x122960: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x122960u;
    SET_GPR_U32(ctx, 31, 0x122968u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122960u, 0x122968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122968u;
label_122968:
    // 0x122968: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12296c: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x12296cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x122970: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x122970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122974: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122978: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x122978u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x12297c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12297cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122980: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122984: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x122984u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x122988: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12298c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x12298cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122990: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122994: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x122994u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122998: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12299c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12299cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1229a0u;
}
