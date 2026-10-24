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

// Function: Event_exec_voice
// Address: 0x377960 - 0x3779fc
void Event_exec_voice_0x377960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_exec_voice_0x377960");
#endif

    switch (ctx->pc) {
        case 0x3779b8u: goto label_3779b8;
        default: break;
    }

    ctx->pc = 0x377960u;

    // 0x377960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x377964: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x377964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x377968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37796c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37796cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377970: 0x8c2302e4  lw          $v1, 0x2E4($at)
    ctx->pc = 0x377970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A02E4u));
    // 0x377974: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x377974u;
    {
        const bool branch_taken_0x377974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377974) {
            ctx->pc = 0x3779E8u;
            goto label_3779e8;
        }
    }
    ctx->pc = 0x37797Cu;
    // 0x37797c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37797cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377980: 0x8c3002e4  lw          $s0, 0x2E4($at)
    ctx->pc = 0x377980u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x9A02E4u));
    // 0x377984: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x377984u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x377988: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x377988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37798c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37798cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377990: 0x94230394  lhu         $v1, 0x394($at)
    ctx->pc = 0x377990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x9A0394u));
    // 0x377994: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x377994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377998: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x377998u;
    {
        const bool branch_taken_0x377998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377998) {
            ctx->pc = 0x3779E8u;
            goto label_3779e8;
        }
    }
    ctx->pc = 0x3779A0u;
    // 0x3779a0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3779a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3779a4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3779a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3779a8: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x3779a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3779ac: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3779acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3779b0: 0xc0de138  jal         func_3784E0
    ctx->pc = 0x3779B0u;
    SET_GPR_U32(ctx, 31, 0x3779B8u);
    ctx->pc = 0x3784E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3784E0u, 0x3779B0u, 0x3779B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3779B8u;
label_3779b8:
    // 0x3779b8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x3779b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3779bc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x3779bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3779c0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3779c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3779c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3779c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3779c8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3779C8u;
    {
        const bool branch_taken_0x3779c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3779c8) {
            ctx->pc = 0x3779E0u;
            goto label_3779e0;
        }
    }
    ctx->pc = 0x3779D0u;
    // 0x3779d0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3779d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3779d4: 0xac2002e4  sw          $zero, 0x2E4($at)
    ctx->pc = 0x3779d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A02E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A02E4u, _value); } while (0);
    // 0x3779d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3779D8u;
    {
        const bool branch_taken_0x3779d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3779d8) {
            ctx->pc = 0x3779E8u;
            goto label_3779e8;
        }
    }
    ctx->pc = 0x3779E0u;
label_3779e0:
    // 0x3779e0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3779e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3779e4: 0xac3002e4  sw          $s0, 0x2E4($at)
    ctx->pc = 0x3779e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x9A02E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A02E4u, _value); } while (0);
label_3779e8:
    // 0x3779e8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3779e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3779ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3779ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3779f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3779f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3779f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3779F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3779F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3779FCu;
}
