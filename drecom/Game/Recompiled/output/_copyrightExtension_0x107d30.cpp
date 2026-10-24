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

// Function: _copyrightExtension
// Address: 0x107d30 - 0x107ddc
void _copyrightExtension_0x107d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_copyrightExtension_0x107d30");
#endif

    switch (ctx->pc) {
        case 0x107d58u: goto label_107d58;
        case 0x107d64u: goto label_107d64;
        case 0x107d74u: goto label_107d74;
        case 0x107d84u: goto label_107d84;
        case 0x107d90u: goto label_107d90;
        case 0x107d98u: goto label_107d98;
        case 0x107da4u: goto label_107da4;
        case 0x107dacu: goto label_107dac;
        case 0x107db8u: goto label_107db8;
        case 0x107dc0u: goto label_107dc0;
        default: break;
    }

    ctx->pc = 0x107d30u;

    // 0x107d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x107d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x107d34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107d38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x107d3c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107d40: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x107d40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x107d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107d48: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x107d48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107d4c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x107d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x107d50: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107D50u;
    SET_GPR_U32(ctx, 31, 0x107D58u);
    ctx->pc = 0x107D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D50u;
    // 0x107d54: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107D50u, 0x107D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D58u;
label_107d58:
    // 0x107d58: 0x0  nop
    ctx->pc = 0x107d58u;
    // NOP
    // 0x107d5c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107D5Cu;
    SET_GPR_U32(ctx, 31, 0x107D64u);
    ctx->pc = 0x107D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D5Cu;
    // 0x107d60: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107D5Cu, 0x107D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D64u;
label_107d64:
    // 0x107d64: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x107d64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107d68: 0x0  nop
    ctx->pc = 0x107d68u;
    // NOP
    // 0x107d6c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107D6Cu;
    SET_GPR_U32(ctx, 31, 0x107D74u);
    ctx->pc = 0x107D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D6Cu;
    // 0x107d70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107D6Cu, 0x107D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D74u;
label_107d74:
    // 0x107d74: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x107d74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107d78: 0x0  nop
    ctx->pc = 0x107d78u;
    // NOP
    // 0x107d7c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107D7Cu;
    SET_GPR_U32(ctx, 31, 0x107D84u);
    ctx->pc = 0x107D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D7Cu;
    // 0x107d80: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107D7Cu, 0x107D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D84u;
label_107d84:
    // 0x107d84: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x107d84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107d88: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107D88u;
    SET_GPR_U32(ctx, 31, 0x107D90u);
    ctx->pc = 0x107D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D88u;
    // 0x107d8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107D88u, 0x107D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D90u;
label_107d90:
    // 0x107d90: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107D90u;
    SET_GPR_U32(ctx, 31, 0x107D98u);
    ctx->pc = 0x107D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D90u;
    // 0x107d94: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107D90u, 0x107D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D98u;
label_107d98:
    // 0x107d98: 0xae223e10  sw          $v0, 0x3E10($s1)
    ctx->pc = 0x107d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15888), GPR_U32(ctx, 2));
    // 0x107d9c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107D9Cu;
    SET_GPR_U32(ctx, 31, 0x107DA4u);
    ctx->pc = 0x107DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D9Cu;
    // 0x107da0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107D9Cu, 0x107DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DA4u;
label_107da4:
    // 0x107da4: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107DA4u;
    SET_GPR_U32(ctx, 31, 0x107DACu);
    ctx->pc = 0x107DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107DA4u;
    // 0x107da8: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107DA4u, 0x107DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DACu;
label_107dac:
    // 0x107dac: 0xae023e14  sw          $v0, 0x3E14($s0)
    ctx->pc = 0x107dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15892), GPR_U32(ctx, 2));
    // 0x107db0: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107DB0u;
    SET_GPR_U32(ctx, 31, 0x107DB8u);
    ctx->pc = 0x107DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107DB0u;
    // 0x107db4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107DB0u, 0x107DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DB8u;
label_107db8:
    // 0x107db8: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107DB8u;
    SET_GPR_U32(ctx, 31, 0x107DC0u);
    ctx->pc = 0x107DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107DB8u;
    // 0x107dbc: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107DB8u, 0x107DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DC0u;
label_107dc0:
    // 0x107dc0: 0xae423e18  sw          $v0, 0x3E18($s2)
    ctx->pc = 0x107dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15896), GPR_U32(ctx, 2));
    // 0x107dc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x107dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107dc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107dcc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x107DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DD4u;
        // 0x107dd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107DDCu;
}
