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

// Function: entry_00121774
// Address: 0x121774 - 0x1217d0
void entry_00121774_0x121774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121774_0x121774");
#endif

    switch (ctx->pc) {
        case 0x121798u: goto label_121798;
        default: break;
    }

    ctx->pc = 0x121774u;

    // 0x121774: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121778: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x121778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12177c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x12177cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x121780: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x121780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x121784: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x121784u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121788: 0x0  nop
    ctx->pc = 0x121788u;
    // NOP
    // 0x12178c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x12178cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x121790: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x121790u;
    SET_GPR_U32(ctx, 31, 0x121798u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x121790u, 0x121798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121798u;
label_121798:
    // 0x121798: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12179c: 0xe48011f8  swc1        $f0, 0x11F8($a0)
    ctx->pc = 0x12179cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4600), bits); }
    // 0x1217a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1217a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1217a4: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1217a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1217a8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1217a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1217ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1217acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1217b0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1217b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1217b4: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1217b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1217b8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1217b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1217bc: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1217bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1217c0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1217c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1217c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1217c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1217c8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1217c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1217cc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1217ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1217d0u;
}
