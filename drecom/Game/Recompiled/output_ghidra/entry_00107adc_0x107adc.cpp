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

// Function: entry_00107adc
// Address: 0x107adc - 0x107b8c
void entry_00107adc_0x107adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107adc_0x107adc");
#endif

    switch (ctx->pc) {
        case 0x107b10u: goto label_107b10;
        case 0x107b1cu: goto label_107b1c;
        case 0x107b2cu: goto label_107b2c;
        case 0x107b3cu: goto label_107b3c;
        case 0x107b44u: goto label_107b44;
        case 0x107b50u: goto label_107b50;
        case 0x107b5cu: goto label_107b5c;
        case 0x107b68u: goto label_107b68;
        default: break;
    }

    ctx->pc = 0x107adcu;

    // 0x107adc: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x107adcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107ae0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x107ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x107ae4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x107ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107ae8: 0x8c623a9c  lw          $v0, 0x3A9C($v1)
    ctx->pc = 0x107ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15004)));
    // 0x107aec: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x107aecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x107af0: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x107af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x107af4: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x107af4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x107af8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x107af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x107afc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107b00: 0xac6000e8  sw          $zero, 0xE8($v1)
    ctx->pc = 0x107b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 0));
    // 0x107b04: 0xacc23a98  sw          $v0, 0x3A98($a2)
    ctx->pc = 0x107b04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 15000), GPR_U32(ctx, 2));
    // 0x107b08: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107B08u;
    SET_GPR_U32(ctx, 31, 0x107B10u);
    ctx->pc = 0x107B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B08u;
    // 0x107b0c: 0xace53aa0  sw          $a1, 0x3AA0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 15008), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107B08u, 0x107B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B10u;
label_107b10:
    // 0x107b10: 0xae023e1c  sw          $v0, 0x3E1C($s0)
    ctx->pc = 0x107b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15900), GPR_U32(ctx, 2));
    // 0x107b14: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107B14u;
    SET_GPR_U32(ctx, 31, 0x107B1Cu);
    ctx->pc = 0x107B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B14u;
    // 0x107b18: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107B14u, 0x107B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B1Cu;
label_107b1c:
    // 0x107b1c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x107b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107b20: 0xae223e20  sw          $v0, 0x3E20($s1)
    ctx->pc = 0x107b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15904), GPR_U32(ctx, 2));
    // 0x107b24: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107B24u;
    SET_GPR_U32(ctx, 31, 0x107B2Cu);
    ctx->pc = 0x107B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B24u;
    // 0x107b28: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107B24u, 0x107B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B2Cu;
label_107b2c:
    // 0x107b2c: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x107b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107b30: 0xae423e24  sw          $v0, 0x3E24($s2)
    ctx->pc = 0x107b30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15908), GPR_U32(ctx, 2));
    // 0x107b34: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107B34u;
    SET_GPR_U32(ctx, 31, 0x107B3Cu);
    ctx->pc = 0x107B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B34u;
    // 0x107b38: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107B34u, 0x107B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B3Cu;
label_107b3c:
    // 0x107b3c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107B3Cu;
    SET_GPR_U32(ctx, 31, 0x107B44u);
    ctx->pc = 0x107B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B3Cu;
    // 0x107b40: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107B3Cu, 0x107B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B44u;
label_107b44:
    // 0x107b44: 0xae823e28  sw          $v0, 0x3E28($s4)
    ctx->pc = 0x107b44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 15912), GPR_U32(ctx, 2));
    // 0x107b48: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107B48u;
    SET_GPR_U32(ctx, 31, 0x107B50u);
    ctx->pc = 0x107B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B48u;
    // 0x107b4c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107B48u, 0x107B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B50u;
label_107b50:
    // 0x107b50: 0xae623e2c  sw          $v0, 0x3E2C($s3)
    ctx->pc = 0x107b50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 15916), GPR_U32(ctx, 2));
    // 0x107b54: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107B54u;
    SET_GPR_U32(ctx, 31, 0x107B5Cu);
    ctx->pc = 0x107B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B54u;
    // 0x107b58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107B54u, 0x107B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B5Cu;
label_107b5c:
    // 0x107b5c: 0xae223e30  sw          $v0, 0x3E30($s1)
    ctx->pc = 0x107b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15920), GPR_U32(ctx, 2));
    // 0x107b60: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107B60u;
    SET_GPR_U32(ctx, 31, 0x107B68u);
    ctx->pc = 0x107B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B60u;
    // 0x107b64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107B60u, 0x107B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B68u;
label_107b68:
    // 0x107b68: 0xae023e34  sw          $v0, 0x3E34($s0)
    ctx->pc = 0x107b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15924), GPR_U32(ctx, 2));
    // 0x107b6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x107b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107b70: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x107b70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107b74: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x107b74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107b78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107b7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107b84: 0x8041dac  j           func_1076B0
    ctx->pc = 0x107B84u;
    ctx->pc = 0x107B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B84u;
    // 0x107b88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076B0u;
    _extensionAndUserData_0x1076b0(rdram, ctx, runtime); return;
    ctx->pc = 0x107B8Cu;
}
