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

// Function: _Cdvd_cbLoop
// Address: 0x10d1d8 - 0x10d2a0
void ps2__Cdvd_cbLoop_0x10d1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Cdvd_cbLoop_0x10d1d8");
#endif

    switch (ctx->pc) {
        case 0x10d1d8u: goto label_10d1d8;
        case 0x10d1dcu: goto label_10d1dc;
        case 0x10d1e0u: goto label_10d1e0;
        case 0x10d1e4u: goto label_10d1e4;
        case 0x10d1e8u: goto label_10d1e8;
        case 0x10d1ecu: goto label_10d1ec;
        case 0x10d1f0u: goto label_10d1f0;
        case 0x10d1f4u: goto label_10d1f4;
        case 0x10d1f8u: goto label_10d1f8;
        case 0x10d1fcu: goto label_10d1fc;
        case 0x10d200u: goto label_10d200;
        case 0x10d204u: goto label_10d204;
        case 0x10d208u: goto label_10d208;
        case 0x10d20cu: goto label_10d20c;
        case 0x10d210u: goto label_10d210;
        case 0x10d214u: goto label_10d214;
        case 0x10d218u: goto label_10d218;
        case 0x10d21cu: goto label_10d21c;
        case 0x10d220u: goto label_10d220;
        case 0x10d224u: goto label_10d224;
        case 0x10d228u: goto label_10d228;
        case 0x10d22cu: goto label_10d22c;
        case 0x10d230u: goto label_10d230;
        case 0x10d234u: goto label_10d234;
        case 0x10d238u: goto label_10d238;
        case 0x10d23cu: goto label_10d23c;
        case 0x10d240u: goto label_10d240;
        case 0x10d244u: goto label_10d244;
        case 0x10d248u: goto label_10d248;
        case 0x10d24cu: goto label_10d24c;
        case 0x10d250u: goto label_10d250;
        case 0x10d254u: goto label_10d254;
        case 0x10d258u: goto label_10d258;
        case 0x10d25cu: goto label_10d25c;
        case 0x10d260u: goto label_10d260;
        case 0x10d264u: goto label_10d264;
        case 0x10d268u: goto label_10d268;
        case 0x10d26cu: goto label_10d26c;
        case 0x10d270u: goto label_10d270;
        case 0x10d274u: goto label_10d274;
        case 0x10d278u: goto label_10d278;
        case 0x10d27cu: goto label_10d27c;
        case 0x10d280u: goto label_10d280;
        case 0x10d284u: goto label_10d284;
        case 0x10d288u: goto label_10d288;
        case 0x10d28cu: goto label_10d28c;
        case 0x10d290u: goto label_10d290;
        case 0x10d294u: goto label_10d294;
        case 0x10d298u: goto label_10d298;
        case 0x10d29cu: goto label_10d29c;
        default: break;
    }

    ctx->pc = 0x10d1d8u;

label_10d1d8:
    // 0x10d1d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10d1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_10d1dc:
    // 0x10d1dc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x10d1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_10d1e0:
    // 0x10d1e0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10d1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_10d1e4:
    // 0x10d1e4: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x10d1e4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
label_10d1e8:
    // 0x10d1e8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10d1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_10d1ec:
    // 0x10d1ec: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x10d1ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
label_10d1f0:
    // 0x10d1f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10d1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_10d1f4:
    // 0x10d1f4: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x10d1f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
label_10d1f8:
    // 0x10d1f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10d1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_10d1fc:
    // 0x10d1fc: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x10d1fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
label_10d200:
    // 0x10d200: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_10d204:
    // 0x10d204: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x10d204u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
label_10d208:
    // 0x10d208: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_10d20c:
    // 0x10d20c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x10d20cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
label_10d210:
    // 0x10d210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10d214:
    // 0x10d214: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10d214u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
label_10d218:
    // 0x10d218: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x10d218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_10d21c:
    // 0x10d21c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10d21cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_10d220:
    // 0x10d220: 0xc084a98  jal         func_212A60
label_10d224:
    if (ctx->pc == 0x10D224u) {
        ctx->pc = 0x10D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D220u;
        // 0x10d224: 0x8ee445c0  lw          $a0, 0x45C0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 17856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D228u;
        goto label_10d228;
    }
    ctx->pc = 0x10D220u;
    SET_GPR_U32(ctx, 31, 0x10D228u);
    ctx->pc = 0x10D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D220u;
    // 0x10d224: 0x8ee445c0  lw          $a0, 0x45C0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 17856)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x10D228u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D228u) { return; }
    ctx->pc = 0x10D228u;
label_10d228:
    // 0x10d228: 0x8e6345f8  lw          $v1, 0x45F8($s3)
    ctx->pc = 0x10d228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17912)));
label_10d22c:
    // 0x10d22c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10d230:
    // 0x10d230: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_10d234:
    if (ctx->pc == 0x10D234u) {
        ctx->pc = 0x10D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D230u;
        // 0x10d234: 0x8ea245a8  lw          $v0, 0x45A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 17832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D238u;
        goto label_10d238;
    }
    ctx->pc = 0x10D230u;
    {
        const bool branch_taken_0x10d230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D230u;
        // 0x10d234: 0x8ea245a8  lw          $v0, 0x45A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 17832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d230) {
            ctx->pc = 0x10D24Cu;
            goto label_10d24c;
        }
    }
    ctx->pc = 0x10D238u;
label_10d238:
    // 0x10d238: 0xae4045c4  sw          $zero, 0x45C4($s2)
    ctx->pc = 0x10d238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17860), GPR_U32(ctx, 0));
label_10d23c:
    // 0x10d23c: 0xaec045b4  sw          $zero, 0x45B4($s6)
    ctx->pc = 0x10d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 17844), GPR_U32(ctx, 0));
label_10d240:
    // 0x10d240: 0xc084a18  jal         func_212860
label_10d244:
    if (ctx->pc == 0x10D244u) {
        ctx->pc = 0x10D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D240u;
        // 0x10d244: 0xae6045f8  sw          $zero, 0x45F8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 17912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D248u;
        goto label_10d248;
    }
    ctx->pc = 0x10D240u;
    SET_GPR_U32(ctx, 31, 0x10D248u);
    ctx->pc = 0x10D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D240u;
    // 0x10d244: 0xae6045f8  sw          $zero, 0x45F8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 17912), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212860u;
    {
        ctx->pc = 0x10D248u;
        ps2_syscalls::ExitDeleteThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D248u) { return; }
    ctx->pc = 0x10D248u;
label_10d248:
    // 0x10d248: 0x8ea245a8  lw          $v0, 0x45A8($s5)
    ctx->pc = 0x10d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 17832)));
label_10d24c:
    // 0x10d24c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_10d250:
    if (ctx->pc == 0x10D250u) {
        ctx->pc = 0x10D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D24Cu;
        // 0x10d250: 0x2684cbe8  addiu       $a0, $s4, -0x3418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D254u;
        goto label_10d254;
    }
    ctx->pc = 0x10D24Cu;
    {
        const bool branch_taken_0x10d24c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D24Cu;
        // 0x10d250: 0x2684cbe8  addiu       $a0, $s4, -0x3418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d24c) {
            ctx->pc = 0x10D260u;
            goto label_10d260;
        }
    }
    ctx->pc = 0x10D254u;
label_10d254:
    // 0x10d254: 0x8e2545f4  lw          $a1, 0x45F4($s1)
    ctx->pc = 0x10d254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17908)));
label_10d258:
    // 0x10d258: 0xc046760  jal         func_119D80
label_10d25c:
    if (ctx->pc == 0x10D25Cu) {
        ctx->pc = 0x10D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D258u;
        // 0x10d25c: 0x8e0645fc  lw          $a2, 0x45FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D260u;
        goto label_10d260;
    }
    ctx->pc = 0x10D258u;
    SET_GPR_U32(ctx, 31, 0x10D260u);
    ctx->pc = 0x10D25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D258u;
    // 0x10d25c: 0x8e0645fc  lw          $a2, 0x45FC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17916)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10D260u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D260u) { return; }
    ctx->pc = 0x10D260u;
label_10d260:
    // 0x10d260: 0x8e2345f4  lw          $v1, 0x45F4($s1)
    ctx->pc = 0x10d260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17908)));
label_10d264:
    // 0x10d264: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_10d268:
    if (ctx->pc == 0x10D268u) {
        ctx->pc = 0x10D26Cu;
        goto label_10d26c;
    }
    ctx->pc = 0x10D264u;
    {
        const bool branch_taken_0x10d264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d264) {
            ctx->pc = 0x10D280u;
            goto label_10d280;
        }
    }
    ctx->pc = 0x10D26Cu;
label_10d26c:
    // 0x10d26c: 0x8e0245fc  lw          $v0, 0x45FC($s0)
    ctx->pc = 0x10d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17916)));
label_10d270:
    // 0x10d270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10d274:
    if (ctx->pc == 0x10D274u) {
        ctx->pc = 0x10D278u;
        goto label_10d278;
    }
    ctx->pc = 0x10D270u;
    {
        const bool branch_taken_0x10d270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d270) {
            ctx->pc = 0x10D280u;
            goto label_10d280;
        }
    }
    ctx->pc = 0x10D278u;
label_10d278:
    // 0x10d278: 0x60f809  jalr        $v1
label_10d27c:
    if (ctx->pc == 0x10D27Cu) {
        ctx->pc = 0x10D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D278u;
        // 0x10d27c: 0x8e0445fc  lw          $a0, 0x45FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D280u;
        goto label_10d280;
    }
    ctx->pc = 0x10D278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10D280u);
        ctx->pc = 0x10D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D278u;
        // 0x10d27c: 0x8e0445fc  lw          $a0, 0x45FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17916)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D278u, 0x10D280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10D280u;
label_10d280:
    // 0x10d280: 0x8e0345fc  lw          $v1, 0x45FC($s0)
    ctx->pc = 0x10d280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17916)));
label_10d284:
    // 0x10d284: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x10d284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_10d288:
    // 0x10d288: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_10d28c:
    if (ctx->pc == 0x10D28Cu) {
        ctx->pc = 0x10D290u;
        goto label_10d290;
    }
    ctx->pc = 0x10D288u;
    {
        const bool branch_taken_0x10d288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d288) {
            ctx->pc = 0x10D298u;
            goto label_10d298;
        }
    }
    ctx->pc = 0x10D290u;
label_10d290:
    // 0x10d290: 0xc043590  jal         func_10D640
label_10d294:
    if (ctx->pc == 0x10D294u) {
        ctx->pc = 0x10D298u;
        goto label_10d298;
    }
    ctx->pc = 0x10D290u;
    SET_GPR_U32(ctx, 31, 0x10D298u);
    ctx->pc = 0x10D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D640u, 0x10D290u, 0x10D298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D298u;
label_10d298:
    // 0x10d298: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_10d29c:
    if (ctx->pc == 0x10D29Cu) {
        ctx->pc = 0x10D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D298u;
        // 0x10d29c: 0xae4045c4  sw          $zero, 0x45C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D2A0u;
        goto label_fallthrough_0x10d298;
    }
    ctx->pc = 0x10D298u;
    {
        const bool branch_taken_0x10d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D298u;
        // 0x10d29c: 0xae4045c4  sw          $zero, 0x45C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d298) {
            ctx->pc = 0x10D220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d220;
        }
    }
label_fallthrough_0x10d298:
    ctx->pc = 0x10D2A0u;
}
