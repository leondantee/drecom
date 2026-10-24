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

// Function: entry_00121fc4
// Address: 0x121fc4 - 0x122028
void entry_00121fc4_0x121fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121fc4_0x121fc4");
#endif

    switch (ctx->pc) {
        case 0x121fe8u: goto label_121fe8;
        default: break;
    }

    ctx->pc = 0x121fc4u;

    // 0x121fc4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121fc8: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x121fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121fcc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x121fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x121fd0: 0x34720fdb  ori         $s2, $v1, 0xFDB
    ctx->pc = 0x121fd0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x121fd4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x121fd4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121fd8: 0x0  nop
    ctx->pc = 0x121fd8u;
    // NOP
    // 0x121fdc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x121fdcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x121fe0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x121FE0u;
    SET_GPR_U32(ctx, 31, 0x121FE8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x121FE0u, 0x121FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FE8u;
label_121fe8:
    // 0x121fe8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121fec: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x121fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x121ff0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121ff4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121ff8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x121ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x121ffc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122000: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122004: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x122004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x122008: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12200c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x12200cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122010: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122014: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x122014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122018: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12201c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12201cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x122020: 0x10000343  b           . + 4 + (0x343 << 2)
    ctx->pc = 0x122020u;
    {
        const bool branch_taken_0x122020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122020) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122028u;
}
