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

// Function: entry_00122c5c
// Address: 0x122c5c - 0x122cc0
void entry_00122c5c_0x122c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122c5c_0x122c5c");
#endif

    switch (ctx->pc) {
        case 0x122c80u: goto label_122c80;
        default: break;
    }

    ctx->pc = 0x122c5cu;

    // 0x122c5c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122c60: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x122c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122c64: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x122c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x122c68: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x122c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x122c6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122c6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122c70: 0x0  nop
    ctx->pc = 0x122c70u;
    // NOP
    // 0x122c74: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122c74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x122c78: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x122C78u;
    SET_GPR_U32(ctx, 31, 0x122C80u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122C78u, 0x122C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C80u;
label_122c80:
    // 0x122c80: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122c84: 0xe48011f8  swc1        $f0, 0x11F8($a0)
    ctx->pc = 0x122c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4600), bits); }
    // 0x122c88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122c8c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122c90: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x122c90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x122c94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122c98: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122c9c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x122c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x122ca0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122ca4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x122ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122ca8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122cac: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x122cacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122cb0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122cb4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x122cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x122cb8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x122CB8u;
    {
        const bool branch_taken_0x122cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122cb8) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122CC0u;
}
