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

// Function: entry_002de9f4
// Address: 0x2de9f4 - 0x2dea60
void entry_002de9f4_0x2de9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002de9f4_0x2de9f4");
#endif

    switch (ctx->pc) {
        case 0x2dea20u: goto label_2dea20;
        default: break;
    }

    ctx->pc = 0x2de9f4u;

    // 0x2de9f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de9f8: 0x8c6312c4  lw          $v1, 0x12C4($v1)
    ctx->pc = 0x2de9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4804)));
    // 0x2de9fc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2de9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2dea00: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DEA00u;
    {
        const bool branch_taken_0x2dea00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea00) {
            ctx->pc = 0x2DEA60u;
            return;
        }
    }
    ctx->pc = 0x2DEA08u;
    // 0x2dea08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dea0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dea10: 0xc46c12d0  lwc1        $f12, 0x12D0($v1)
    ctx->pc = 0x2dea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dea14: 0xc44d12d8  lwc1        $f13, 0x12D8($v0)
    ctx->pc = 0x2dea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dea18: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2DEA18u;
    SET_GPR_U32(ctx, 31, 0x2DEA20u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DEA18u, 0x2DEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA20u;
label_2dea20:
    // 0x2dea20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dea24: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2dea24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x2dea28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dea28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dea2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dea30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dea30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dea34: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2dea34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dea38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dea3c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dea40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dea44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dea44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dea48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dea4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dea4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dea50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dea54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dea54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dea58: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2DEA58u;
    {
        const bool branch_taken_0x2dea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea58) {
            ctx->pc = 0x2DEAF8u;
            return;
        }
    }
    ctx->pc = 0x2DEA60u;
}
