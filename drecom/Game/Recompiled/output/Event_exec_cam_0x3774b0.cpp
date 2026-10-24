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

// Function: Event_exec_cam
// Address: 0x3774b0 - 0x37756c
void Event_exec_cam_0x3774b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_exec_cam_0x3774b0");
#endif

    switch (ctx->pc) {
        case 0x377524u: goto label_377524;
        default: break;
    }

    ctx->pc = 0x3774b0u;

    // 0x3774b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3774b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3774b4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3774b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3774b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3774b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3774bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3774bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3774c0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3774c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3774c4: 0x8c2302a0  lw          $v1, 0x2A0($at)
    ctx->pc = 0x3774c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A02A0u));
    // 0x3774c8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3774C8u;
    {
        const bool branch_taken_0x3774c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3774c8) {
            ctx->pc = 0x377554u;
            goto label_377554;
        }
    }
    ctx->pc = 0x3774D0u;
    // 0x3774d0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3774d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3774d4: 0x8c3002a0  lw          $s0, 0x2A0($at)
    ctx->pc = 0x3774d4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x9A02A0u));
    // 0x3774d8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x3774d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3774dc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3774dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3774e0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3774e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3774e4: 0x94230394  lhu         $v1, 0x394($at)
    ctx->pc = 0x3774e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x9A0394u));
    // 0x3774e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3774e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3774ec: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3774ECu;
    {
        const bool branch_taken_0x3774ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3774ec) {
            ctx->pc = 0x377554u;
            goto label_377554;
        }
    }
    ctx->pc = 0x3774F4u;
    // 0x3774f4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x3774f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3774f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3774f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3774fc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3774fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x377500: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x377500u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377504: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x377504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x377508: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37750c: 0x8c220390  lw          $v0, 0x390($at)
    ctx->pc = 0x37750cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0390u));
    // 0x377510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x377510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377514: 0x245103c4  addiu       $s1, $v0, 0x3C4
    ctx->pc = 0x377514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 964));
    // 0x377518: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x377518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x37751c: 0xc0de058  jal         func_378160
    ctx->pc = 0x37751Cu;
    SET_GPR_U32(ctx, 31, 0x377524u);
    ctx->pc = 0x378160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378160u, 0x37751Cu, 0x377524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377524u;
label_377524:
    // 0x377524: 0x26100034  addiu       $s0, $s0, 0x34
    ctx->pc = 0x377524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x377528: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x377528u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x37752c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x37752cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377530: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x377530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x377534: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x377534u;
    {
        const bool branch_taken_0x377534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377534) {
            ctx->pc = 0x37754Cu;
            goto label_37754c;
        }
    }
    ctx->pc = 0x37753Cu;
    // 0x37753c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37753cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377540: 0xac2002a0  sw          $zero, 0x2A0($at)
    ctx->pc = 0x377540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A02A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A02A0u, _value); } while (0);
    // 0x377544: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x377544u;
    {
        const bool branch_taken_0x377544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377544) {
            ctx->pc = 0x377554u;
            goto label_377554;
        }
    }
    ctx->pc = 0x37754Cu;
label_37754c:
    // 0x37754c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37754cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377550: 0xac3002a0  sw          $s0, 0x2A0($at)
    ctx->pc = 0x377550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x9A02A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A02A0u, _value); } while (0);
label_377554:
    // 0x377554: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x377554u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377558: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37755c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37755cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377560: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x377560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x377564: 0x3e00008  jr          $ra
    ctx->pc = 0x377564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37756Cu;
}
