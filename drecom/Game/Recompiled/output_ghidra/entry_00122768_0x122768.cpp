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

// Function: entry_00122768
// Address: 0x122768 - 0x1227cc
void entry_00122768_0x122768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122768_0x122768");
#endif

    switch (ctx->pc) {
        case 0x12278cu: goto label_12278c;
        default: break;
    }

    ctx->pc = 0x122768u;

    // 0x122768: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12276c: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x12276cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122770: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x122770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x122774: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x122774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x122778: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x122778u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12277c: 0x0  nop
    ctx->pc = 0x12277cu;
    // NOP
    // 0x122780: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122780u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x122784: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x122784u;
    SET_GPR_U32(ctx, 31, 0x12278Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122784u, 0x12278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12278Cu;
label_12278c:
    // 0x12278c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12278cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122790: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x122790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x122794: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122798: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12279c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12279cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1227a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1227a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1227a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1227a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1227a8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1227a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1227ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1227acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1227b0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1227b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1227b4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1227b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1227b8: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1227b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1227bc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1227bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1227c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1227c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1227c4: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x1227C4u;
    {
        const bool branch_taken_0x1227c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1227c4) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x1227CCu;
}
