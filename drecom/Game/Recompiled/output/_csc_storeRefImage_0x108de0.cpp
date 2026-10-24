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

// Function: _csc_storeRefImage
// Address: 0x108de0 - 0x108f34
void _csc_storeRefImage_0x108de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_csc_storeRefImage_0x108de0");
#endif

    switch (ctx->pc) {
        case 0x108e28u: goto label_108e28;
        case 0x108e58u: goto label_108e58;
        case 0x108e7cu: goto label_108e7c;
        case 0x108e88u: goto label_108e88;
        case 0x108ef0u: goto label_108ef0;
        case 0x108f00u: goto label_108f00;
        case 0x108f14u: goto label_108f14;
        default: break;
    }

    ctx->pc = 0x108de0u;

    // 0x108de0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x108de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x108de4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x108de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108de8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x108de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x108dec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x108decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108df0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x108df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x108df4: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x108df4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x108df8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x108df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x108dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e00: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x108e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x108e04: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x108e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x108e08: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x108e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x108e0c: 0x8e843bf4  lw          $a0, 0x3BF4($s4)
    ctx->pc = 0x108e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383BF4u));
    // 0x108e10: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x108e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x108e14: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x108e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x108e18: 0x8c930040  lw          $s3, 0x40($a0)
    ctx->pc = 0x108e18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x108e1c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x108e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x108e20: 0xc042914  jal         func_10A450
    ctx->pc = 0x108E20u;
    SET_GPR_U32(ctx, 31, 0x108E28u);
    ctx->pc = 0x108E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E20u;
    // 0x108e24: 0xc28818  mult        $s1, $a2, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x108E20u, 0x108E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E28u;
label_108e28:
    // 0x108e28: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108e2c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x108e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x108e30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108e30u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x108e34: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x108e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x108e38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108E38u;
    {
        const bool branch_taken_0x108e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E38u;
        // 0x108e3c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e38) {
            ctx->pc = 0x108E48u;
            goto label_108e48;
        }
    }
    ctx->pc = 0x108E40u;
    // 0x108e40: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x108e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x108e44: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x108e44u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2)); // MMIO: 0x10002010
label_108e48:
    // 0x108e48: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108e4c: 0x2a320400  slti        $s2, $s1, 0x400
    ctx->pc = 0x108e4cu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x108e50: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x108e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x108e54: 0x0  nop
    ctx->pc = 0x108e54u;
    // NOP
label_108e58:
    // 0x108e58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108e5c: 0x0  nop
    ctx->pc = 0x108e5cu;
    // NOP
    // 0x108e60: 0x0  nop
    ctx->pc = 0x108e60u;
    // NOP
    // 0x108e64: 0x0  nop
    ctx->pc = 0x108e64u;
    // NOP
    // 0x108e68: 0x0  nop
    ctx->pc = 0x108e68u;
    // NOP
    // 0x108e6c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108E6Cu;
    {
        const bool branch_taken_0x108e6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x108e6c) {
            ctx->pc = 0x108E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108e58;
        }
    }
    ctx->pc = 0x108E74u;
    // 0x108e74: 0xc041b3a  jal         func_106CE8
    ctx->pc = 0x108E74u;
    SET_GPR_U32(ctx, 31, 0x108E7Cu);
    ctx->pc = 0x108E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E74u;
    // 0x108e78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE8u, 0x108E74u, 0x108E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E7Cu;
label_108e7c:
    // 0x108e7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108e80: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x108e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x108e84: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x108e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_108e88:
    // 0x108e88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108e88u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x108e8c: 0x0  nop
    ctx->pc = 0x108e8cu;
    // NOP
    // 0x108e90: 0x0  nop
    ctx->pc = 0x108e90u;
    // NOP
    // 0x108e94: 0x0  nop
    ctx->pc = 0x108e94u;
    // NOP
    // 0x108e98: 0x0  nop
    ctx->pc = 0x108e98u;
    // NOP
    // 0x108e9c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108E9Cu;
    {
        const bool branch_taken_0x108e9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x108e9c) {
            ctx->pc = 0x108E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108e88;
        }
    }
    ctx->pc = 0x108EA4u;
    // 0x108ea4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x108ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x108ea8: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x108ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x108eac: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x108eacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x108eb0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x108eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x108eb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108eb8: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x108eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x108ebc: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x108ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x108ec0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108ec4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x108ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x108ec8: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x108ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x108ecc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x108eccu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 5)); // MMIO: 0x1000b420
    // 0x108ed0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108ed4: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x108ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x108ed8: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x108ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x108edc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108edcu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 3)); // MMIO: 0x1000b400
    // 0x108ee0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x108EE0u;
    {
        const bool branch_taken_0x108ee0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EE0u;
        // 0x108ee4: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ee0) {
            ctx->pc = 0x108EF8u;
            goto label_108ef8;
        }
    }
    ctx->pc = 0x108EE8u;
    // 0x108ee8: 0xc0422a4  jal         func_108A90
    ctx->pc = 0x108EE8u;
    SET_GPR_U32(ctx, 31, 0x108EF0u);
    ctx->pc = 0x108EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EE8u;
    // 0x108eec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A90u, 0x108EE8u, 0x108EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EF0u;
label_108ef0:
    // 0x108ef0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108EF0u;
    {
        const bool branch_taken_0x108ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EF0u;
        // 0x108ef4: 0x8e843bf4  lw          $a0, 0x3BF4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ef0) {
            ctx->pc = 0x108F04u;
            goto label_108f04;
        }
    }
    ctx->pc = 0x108EF8u;
label_108ef8:
    // 0x108ef8: 0xc04230c  jal         func_108C30
    ctx->pc = 0x108EF8u;
    SET_GPR_U32(ctx, 31, 0x108F00u);
    ctx->pc = 0x108EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EF8u;
    // 0x108efc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108C30u, 0x108EF8u, 0x108F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F00u;
label_108f00:
    // 0x108f00: 0x8e843bf4  lw          $a0, 0x3BF4($s4)
    ctx->pc = 0x108f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15348)));
label_108f04:
    // 0x108f04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108f08: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x108f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x108f0c: 0xc042914  jal         func_10A450
    ctx->pc = 0x108F0Cu;
    SET_GPR_U32(ctx, 31, 0x108F14u);
    ctx->pc = 0x108F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F0Cu;
    // 0x108f10: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x108F0Cu, 0x108F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F14u;
label_108f14:
    // 0x108f14: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x108f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108f18: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x108f18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108f1c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x108f1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108f20: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x108f20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108f24: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x108f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108f28: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x108f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x108F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F2Cu;
        // 0x108f30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108F34u;
}
