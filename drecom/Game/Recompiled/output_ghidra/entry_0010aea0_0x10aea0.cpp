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

// Function: entry_0010aea0
// Address: 0x10aea0 - 0x10af08
void entry_0010aea0_0x10aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010aea0_0x10aea0");
#endif

    switch (ctx->pc) {
        case 0x10aeacu: goto label_10aeac;
        case 0x10aee0u: goto label_10aee0;
        case 0x10aef0u: goto label_10aef0;
        case 0x10aef8u: goto label_10aef8;
        case 0x10af00u: goto label_10af00;
        default: break;
    }

    ctx->pc = 0x10aea0u;

    // 0x10aea0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x10aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x10aea4: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10AEA4u;
    SET_GPR_U32(ctx, 31, 0x10AEACu);
    ctx->pc = 0x10AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEA4u;
    // 0x10aea8: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10AEA4u, 0x10AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEACu;
label_10aeac:
    // 0x10aeac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10aeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aeb0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10aeb4: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x10aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x10aeb8: 0x53b02  srl         $a3, $a1, 12
    ctx->pc = 0x10aeb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x10aebc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x10aebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x10aec0: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x10aec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x10aec4: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10aec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10aec8: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10aec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x10aecc: 0xac833d40  sw          $v1, 0x3D40($a0)
    ctx->pc = 0x10aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15680), GPR_U32(ctx, 3));
    // 0x10aed0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aed4: 0xaca23d3c  sw          $v0, 0x3D3C($a1)
    ctx->pc = 0x10aed4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383D3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D3Cu, _value); } while (0);
    // 0x10aed8: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10AED8u;
    SET_GPR_U32(ctx, 31, 0x10AEE0u);
    ctx->pc = 0x10AEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AED8u;
    // 0x10aedc: 0xacc73d38  sw          $a3, 0x3D38($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 15672), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10AED8u, 0x10AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEE0u;
label_10aee0:
    // 0x10aee0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10AEE0u;
    {
        const bool branch_taken_0x10aee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEE0u;
        // 0x10aee4: 0xae0244a0  sw          $v0, 0x44A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aee0) {
            ctx->pc = 0x10AF08u;
            return;
        }
    }
    ctx->pc = 0x10AEE8u;
    // 0x10aee8: 0xc041b46  jal         func_106D18
    ctx->pc = 0x10AEE8u;
    SET_GPR_U32(ctx, 31, 0x10AEF0u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x10AEE8u, 0x10AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEF0u;
label_10aef0:
    // 0x10aef0: 0xc041b3a  jal         func_106CE8
    ctx->pc = 0x10AEF0u;
    SET_GPR_U32(ctx, 31, 0x10AEF8u);
    ctx->pc = 0x10AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEF0u;
    // 0x10aef4: 0x3c045000  lui         $a0, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE8u, 0x10AEF0u, 0x10AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEF8u;
label_10aef8:
    // 0x10aef8: 0xc041b46  jal         func_106D18
    ctx->pc = 0x10AEF8u;
    SET_GPR_U32(ctx, 31, 0x10AF00u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x10AEF8u, 0x10AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF00u;
label_10af00:
    // 0x10af00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10AF00u;
    {
        const bool branch_taken_0x10af00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF00u;
        // 0x10af04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af00) {
            ctx->pc = 0x10AF1Cu;
            return;
        }
    }
    ctx->pc = 0x10AF08u;
}
