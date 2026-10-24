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

// Function: _slice0
// Address: 0x1061a8 - 0x1063a8
void _slice0_0x1061a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_slice0_0x1061a8");
#endif

    switch (ctx->pc) {
        case 0x1061e8u: goto label_1061e8;
        case 0x106200u: goto label_106200;
        case 0x106234u: goto label_106234;
        case 0x106254u: goto label_106254;
        case 0x106278u: goto label_106278;
        case 0x1062acu: goto label_1062ac;
        case 0x1062e0u: goto label_1062e0;
        case 0x106308u: goto label_106308;
        case 0x106330u: goto label_106330;
        case 0x106358u: goto label_106358;
        default: break;
    }

    ctx->pc = 0x1061a8u;

    // 0x1061a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1061a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1061ac: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1061acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1061b0: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x1061b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1061b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1061b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061b8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1061b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1061bc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1061bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1061c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1061c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1061c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1061c8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1061c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061cc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1061ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1061d0: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x1061d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x1061d4: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x1061d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x1061d8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1061d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1061dc: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x1061dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x1061e0: 0xc041820  jal         func_106080
    ctx->pc = 0x1061E0u;
    SET_GPR_U32(ctx, 31, 0x1061E8u);
    ctx->pc = 0x1061E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1061E0u;
    // 0x1061e4: 0xffb00060  sd          $s0, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106080u, 0x1061E0u, 0x1061E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1061E8u;
label_1061e8:
    // 0x1061e8: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1061E8u;
    {
        const bool branch_taken_0x1061e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1061ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061E8u;
        // 0x1061ec: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061e8) {
            ctx->pc = 0x106388u;
            goto label_106388;
        }
    }
    ctx->pc = 0x1061F0u;
    // 0x1061f0: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1061f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x1061f4: 0xae403d08  sw          $zero, 0x3D08($s2)
    ctx->pc = 0x1061f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x383D08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D08u, _value); } while (0);
    // 0x1061f8: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x1061f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061fc: 0x0  nop
    ctx->pc = 0x1061fcu;
    // NOP
label_106200:
    // 0x106200: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x106200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106204: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x106204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x106208: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106208u;
    {
        const bool branch_taken_0x106208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106208u;
        // 0x10620c: 0x3c130038  lui         $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106208) {
            ctx->pc = 0x106218u;
            goto label_106218;
        }
    }
    ctx->pc = 0x106210u;
    // 0x106210: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x106210u;
    {
        const bool branch_taken_0x106210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106210u;
        // 0x106214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106210) {
            ctx->pc = 0x106384u;
            goto label_106384;
        }
    }
    ctx->pc = 0x106218u;
label_106218:
    // 0x106218: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x106218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x10621c: 0x266341f8  addiu       $v1, $s3, 0x41F8
    ctx->pc = 0x10621cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16888));
    // 0x106220: 0x8c620280  lw          $v0, 0x280($v1)
    ctx->pc = 0x106220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x106224: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x106224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x106228: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x106228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10622c: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x10622Cu;
    SET_GPR_U32(ctx, 31, 0x106234u);
    ctx->pc = 0x106230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10622Cu;
    // 0x106230: 0xac40013c  sw          $zero, 0x13C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x10622Cu, 0x106234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106234u;
label_106234:
    // 0x106234: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106234u;
    {
        const bool branch_taken_0x106234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106234u;
        // 0x106238: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106234) {
            ctx->pc = 0x106244u;
            goto label_106244;
        }
    }
    ctx->pc = 0x10623Cu;
    // 0x10623c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x10623Cu;
    {
        const bool branch_taken_0x10623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10623Cu;
        // 0x106240: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10623c) {
            ctx->pc = 0x106384u;
            goto label_106384;
        }
    }
    ctx->pc = 0x106244u;
label_106244:
    // 0x106244: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x106244u;
    {
        const bool branch_taken_0x106244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106244u;
        // 0x106248: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106244) {
            ctx->pc = 0x106294u;
            goto label_106294;
        }
    }
    ctx->pc = 0x10624Cu;
    // 0x10624c: 0xc041c0a  jal         func_107028
    ctx->pc = 0x10624Cu;
    SET_GPR_U32(ctx, 31, 0x106254u);
    ctx->pc = 0x106250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10624Cu;
    // 0x106250: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107028u, 0x10624Cu, 0x106254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106254u;
label_106254:
    // 0x106254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106254u;
    {
        const bool branch_taken_0x106254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106254u;
        // 0x106258: 0x8e423d08  lw          $v0, 0x3D08($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106254) {
            ctx->pc = 0x106264u;
            goto label_106264;
        }
    }
    ctx->pc = 0x10625Cu;
    // 0x10625c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10625Cu;
    {
        const bool branch_taken_0x10625c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10625c) {
            ctx->pc = 0x106270u;
            goto label_106270;
        }
    }
    ctx->pc = 0x106264u;
label_106264:
    // 0x106264: 0xae403d08  sw          $zero, 0x3D08($s2)
    ctx->pc = 0x106264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15624), GPR_U32(ctx, 0));
    // 0x106268: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x106268u;
    {
        const bool branch_taken_0x106268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106268u;
        // 0x10626c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106268) {
            ctx->pc = 0x106384u;
            goto label_106384;
        }
    }
    ctx->pc = 0x106270u;
label_106270:
    // 0x106270: 0xc041792  jal         func_105E48
    ctx->pc = 0x106270u;
    SET_GPR_U32(ctx, 31, 0x106278u);
    ctx->pc = 0x105E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E48u, 0x106270u, 0x106278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106278u;
label_106278:
    // 0x106278: 0x8ea33d08  lw          $v1, 0x3D08($s5)
    ctx->pc = 0x106278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15624)));
    // 0x10627c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10627Cu;
    {
        const bool branch_taken_0x10627c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10627Cu;
        // 0x106280: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10627c) {
            ctx->pc = 0x106290u;
            goto label_106290;
        }
    }
    ctx->pc = 0x106284u;
    // 0x106284: 0xaea03d08  sw          $zero, 0x3D08($s5)
    ctx->pc = 0x106284u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 15624), GPR_U32(ctx, 0));
    // 0x106288: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x106288u;
    {
        const bool branch_taken_0x106288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106288u;
        // 0x10628c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106288) {
            ctx->pc = 0x106384u;
            goto label_106384;
        }
    }
    ctx->pc = 0x106290u;
label_106290:
    // 0x106290: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x106290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_106294:
    // 0x106294: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x106294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x106298: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106298u;
    {
        const bool branch_taken_0x106298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106298u;
        // 0x10629c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106298) {
            ctx->pc = 0x1062B4u;
            goto label_1062b4;
        }
    }
    ctx->pc = 0x1062A0u;
    // 0x1062a0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1062a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1062a4: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x1062A4u;
    SET_GPR_U32(ctx, 31, 0x1062ACu);
    ctx->pc = 0x1062A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1062A4u;
    // 0x1062a8: 0x2484c720  addiu       $a0, $a0, -0x38E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x1062A4u, 0x1062ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062ACu;
label_1062ac:
    // 0x1062ac: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1062ACu;
    {
        const bool branch_taken_0x1062ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062ACu;
        // 0x1062b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062ac) {
            ctx->pc = 0x106384u;
            goto label_106384;
        }
    }
    ctx->pc = 0x1062B4u;
label_1062b4:
    // 0x1062b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1062b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1062b8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1062B8u;
    {
        const bool branch_taken_0x1062b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1062BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062B8u;
        // 0x1062bc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062b8) {
            ctx->pc = 0x1062F4u;
            goto label_1062f4;
        }
    }
    ctx->pc = 0x1062C0u;
    // 0x1062c0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1062c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1062c4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1062c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1062c8: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1062c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1062cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1062ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1062d0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1062d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062d4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1062d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062d8: 0xc04191e  jal         func_106478
    ctx->pc = 0x1062D8u;
    SET_GPR_U32(ctx, 31, 0x1062E0u);
    ctx->pc = 0x1062DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1062D8u;
    // 0x1062dc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106478u, 0x1062D8u, 0x1062E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062E0u;
label_1062e0:
    // 0x1062e0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1062E0u;
    {
        const bool branch_taken_0x1062e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1062E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062E0u;
        // 0x1062e4: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062e0) {
            ctx->pc = 0x106314u;
            goto label_106314;
        }
    }
    ctx->pc = 0x1062E8u;
    // 0x1062e8: 0xae403d08  sw          $zero, 0x3D08($s2)
    ctx->pc = 0x1062e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15624), GPR_U32(ctx, 0));
    // 0x1062ec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1062ECu;
    {
        const bool branch_taken_0x1062ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062ECu;
        // 0x1062f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062ec) {
            ctx->pc = 0x106384u;
            goto label_106384;
        }
    }
    ctx->pc = 0x1062F4u;
label_1062f4:
    // 0x1062f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1062f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062f8: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1062f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1062fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1062fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106300: 0xc0418ea  jal         func_1063A8
    ctx->pc = 0x106300u;
    SET_GPR_U32(ctx, 31, 0x106308u);
    ctx->pc = 0x106304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106300u;
    // 0x106304: 0x27a70048  addiu       $a3, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1063A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1063A8u, 0x106300u, 0x106308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106308u;
label_106308:
    // 0x106308: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x106308u;
    {
        const bool branch_taken_0x106308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106308u;
        // 0x10630c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106308) {
            ctx->pc = 0x106338u;
            goto label_106338;
        }
    }
    ctx->pc = 0x106310u;
    // 0x106310: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x106310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_106314:
    // 0x106314: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x106314u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106318: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x106318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x10631c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x10631cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106320: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x106320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x106324: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x106324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106328: 0xc040f44  jal         func_103D10
    ctx->pc = 0x106328u;
    SET_GPR_U32(ctx, 31, 0x106330u);
    ctx->pc = 0x10632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106328u;
    // 0x10632c: 0x8fa7004c  lw          $a3, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D10u, 0x106328u, 0x106330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106330u;
label_106330:
    // 0x106330: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106330u;
    {
        const bool branch_taken_0x106330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106330u;
        // 0x106334: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106330) {
            ctx->pc = 0x106344u;
            goto label_106344;
        }
    }
    ctx->pc = 0x106338u;
label_106338:
    // 0x106338: 0xae403d08  sw          $zero, 0x3D08($s2)
    ctx->pc = 0x106338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15624), GPR_U32(ctx, 0));
    // 0x10633c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10633Cu;
    {
        const bool branch_taken_0x10633c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10633Cu;
        // 0x106340: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10633c) {
            ctx->pc = 0x106384u;
            goto label_106384;
        }
    }
    ctx->pc = 0x106344u;
label_106344:
    // 0x106344: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106344u;
    {
        const bool branch_taken_0x106344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x106348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106344u;
        // 0x106348: 0x266241f8  addiu       $v0, $s3, 0x41F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106344) {
            ctx->pc = 0x10635Cu;
            goto label_10635c;
        }
    }
    ctx->pc = 0x10634Cu;
    // 0x10634c: 0x8c440280  lw          $a0, 0x280($v0)
    ctx->pc = 0x10634cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x106350: 0xc0412c6  jal         func_104B18
    ctx->pc = 0x106350u;
    SET_GPR_U32(ctx, 31, 0x106358u);
    ctx->pc = 0x106354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106350u;
    // 0x106354: 0x38840001  xori        $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B18u, 0x106350u, 0x106358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106358u;
label_106358:
    // 0x106358: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x106358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10635c:
    // 0x10635c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x10635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x106360: 0x266541f8  addiu       $a1, $s3, 0x41F8
    ctx->pc = 0x106360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16888));
    // 0x106364: 0x8ca30280  lw          $v1, 0x280($a1)
    ctx->pc = 0x106364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 640)));
    // 0x106368: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x106368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10636c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106370: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x106370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x106374: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x106374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x106378: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x106378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x10637c: 0x1000ffa0  b           . + 4 + (-0x60 << 2)
    ctx->pc = 0x10637Cu;
    {
        const bool branch_taken_0x10637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10637Cu;
        // 0x106380: 0xaca30280  sw          $v1, 0x280($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10637c) {
            ctx->pc = 0x106200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106200;
        }
    }
    ctx->pc = 0x106384u;
label_106384:
    // 0x106384: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x106384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_106388:
    // 0x106388: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x106388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10638c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x10638cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106390: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x106390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106394: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x106394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106398: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x106398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10639c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x10639cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1063a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1063A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1063A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063A0u;
        // 0x1063a4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1063A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1063A8u;
}
