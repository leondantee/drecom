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

// Function: Title_load
// Address: 0x1a1d00 - 0x1a1e28
void Title_load_0x1a1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Title_load_0x1a1d00");
#endif

    switch (ctx->pc) {
        case 0x1a1d34u: goto label_1a1d34;
        case 0x1a1d3cu: goto label_1a1d3c;
        case 0x1a1d48u: goto label_1a1d48;
        case 0x1a1d50u: goto label_1a1d50;
        case 0x1a1d70u: goto label_1a1d70;
        case 0x1a1d84u: goto label_1a1d84;
        case 0x1a1d8cu: goto label_1a1d8c;
        case 0x1a1d98u: goto label_1a1d98;
        case 0x1a1da0u: goto label_1a1da0;
        case 0x1a1dbcu: goto label_1a1dbc;
        case 0x1a1dc4u: goto label_1a1dc4;
        case 0x1a1dd0u: goto label_1a1dd0;
        case 0x1a1dd8u: goto label_1a1dd8;
        case 0x1a1decu: goto label_1a1dec;
        case 0x1a1e04u: goto label_1a1e04;
        case 0x1a1e14u: goto label_1a1e14;
        default: break;
    }

    ctx->pc = 0x1a1d00u;

    // 0x1a1d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1d04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1a1d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a1d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1d0c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a1d10: 0x24502880  addiu       $s0, $v0, 0x2880
    ctx->pc = 0x1a1d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10368));
    // 0x1a1d14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a1d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a1d18: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x1a1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1a1d1c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a1d1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D289Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D289Cu, _value); } while (0);
    // 0x1a1d20: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1a1d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1a1d24: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a1d24u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D289Cu));
    // 0x1a1d28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a1d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1d2c: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1A1D2Cu;
    SET_GPR_U32(ctx, 31, 0x1A1D34u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1A1D2Cu, 0x1A1D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D34u;
label_1a1d34:
    // 0x1a1d34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1D34u;
    {
        const bool branch_taken_0x1a1d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d34) {
            ctx->pc = 0x1A1D48u;
            goto label_1a1d48;
        }
    }
    ctx->pc = 0x1A1D3Cu;
label_1a1d3c:
    // 0x1a1d3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1d40: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1A1D40u;
    SET_GPR_U32(ctx, 31, 0x1A1D48u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1A1D40u, 0x1A1D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D48u;
label_1a1d48:
    // 0x1a1d48: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x1A1D48u;
    SET_GPR_U32(ctx, 31, 0x1A1D50u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x1A1D48u, 0x1A1D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D50u;
label_1a1d50:
    // 0x1a1d50: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1D50u;
    {
        const bool branch_taken_0x1a1d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d50) {
            ctx->pc = 0x1A1D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1d3c;
        }
    }
    ctx->pc = 0x1A1D58u;
    // 0x1a1d58: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x1a1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1a1d5c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a1d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1d60: 0x24061b00  addiu       $a2, $zero, 0x1B00
    ctx->pc = 0x1a1d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    // 0x1a1d64: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a1d64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1d68: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x1A1D68u;
    SET_GPR_U32(ctx, 31, 0x1A1D70u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x1A1D68u, 0x1A1D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D70u;
label_1a1d70:
    // 0x1a1d70: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x1a1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1a1d74: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a1d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1d78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a1d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1d7c: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1A1D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A1D84u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1A1D7Cu, 0x1A1D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D84u;
label_1a1d84:
    // 0x1a1d84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1D84u;
    {
        const bool branch_taken_0x1a1d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1d84) {
            ctx->pc = 0x1A1D98u;
            goto label_1a1d98;
        }
    }
    ctx->pc = 0x1A1D8Cu;
label_1a1d8c:
    // 0x1a1d8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1d90: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1A1D90u;
    SET_GPR_U32(ctx, 31, 0x1A1D98u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1A1D90u, 0x1A1D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D98u;
label_1a1d98:
    // 0x1a1d98: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x1A1D98u;
    SET_GPR_U32(ctx, 31, 0x1A1DA0u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x1A1D98u, 0x1A1DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DA0u;
label_1a1da0:
    // 0x1a1da0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1DA0u;
    {
        const bool branch_taken_0x1a1da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1da0) {
            ctx->pc = 0x1A1D8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1d8c;
        }
    }
    ctx->pc = 0x1A1DA8u;
    // 0x1a1da8: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1a1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1a1dac: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a1dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1db0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a1db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1db4: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1A1DB4u;
    SET_GPR_U32(ctx, 31, 0x1A1DBCu);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1A1DB4u, 0x1A1DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DBCu;
label_1a1dbc:
    // 0x1a1dbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1DBCu;
    {
        const bool branch_taken_0x1a1dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1dbc) {
            ctx->pc = 0x1A1DD0u;
            goto label_1a1dd0;
        }
    }
    ctx->pc = 0x1A1DC4u;
label_1a1dc4:
    // 0x1a1dc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1dc8: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1A1DC8u;
    SET_GPR_U32(ctx, 31, 0x1A1DD0u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1A1DC8u, 0x1A1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DD0u;
label_1a1dd0:
    // 0x1a1dd0: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x1A1DD0u;
    SET_GPR_U32(ctx, 31, 0x1A1DD8u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x1A1DD0u, 0x1A1DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DD8u;
label_1a1dd8:
    // 0x1a1dd8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1DD8u;
    {
        const bool branch_taken_0x1a1dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1dd8) {
            ctx->pc = 0x1A1DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1dc4;
        }
    }
    ctx->pc = 0x1A1DE0u;
    // 0x1a1de0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a1de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1de4: 0xc05e990  jal         func_17A640
    ctx->pc = 0x1A1DE4u;
    SET_GPR_U32(ctx, 31, 0x1A1DECu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x1A1DE4u, 0x1A1DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DECu;
label_1a1dec:
    // 0x1a1dec: 0x240400c9  addiu       $a0, $zero, 0xC9
    ctx->pc = 0x1a1decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x1a1df0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a1df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1df4: 0x24062d00  addiu       $a2, $zero, 0x2D00
    ctx->pc = 0x1a1df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11520));
    // 0x1a1df8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1a1df8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a1dfc: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x1A1DFCu;
    SET_GPR_U32(ctx, 31, 0x1A1E04u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x1A1DFCu, 0x1A1E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E04u;
label_1a1e04:
    // 0x1a1e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1e08: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x1a1e08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a1e0c: 0xc0674dc  jal         func_19D370
    ctx->pc = 0x1A1E0Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E14u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x1A1E0Cu, 0x1A1E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E14u;
label_1a1e14:
    // 0x1a1e14: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1a1e14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1e1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a1e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1e20: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1E28u;
}
