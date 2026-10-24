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

// Function: Ot_init
// Address: 0x1ab5e0 - 0x1ab6ac
void Ot_init_0x1ab5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ot_init_0x1ab5e0");
#endif

    switch (ctx->pc) {
        case 0x1ab650u: goto label_1ab650;
        case 0x1ab65cu: goto label_1ab65c;
        case 0x1ab668u: goto label_1ab668;
        case 0x1ab674u: goto label_1ab674;
        case 0x1ab680u: goto label_1ab680;
        case 0x1ab698u: goto label_1ab698;
        default: break;
    }

    ctx->pc = 0x1ab5e0u;

    // 0x1ab5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab5e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1ab5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ab5e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ab5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab5ec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ab5ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ab5f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ab5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ab5f4: 0xac20bd00  sw          $zero, -0x4300($at)
    ctx->pc = 0x1ab5f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD00u, _value); } while (0);
    // 0x1ab5f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ab5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ab5fc: 0xac20bd04  sw          $zero, -0x42FC($at)
    ctx->pc = 0x1ab5fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD04u, _value); } while (0);
    // 0x1ab600: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1ab600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1ab604: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x1ab604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x1ab608: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ab608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ab60c: 0xac22bd08  sw          $v0, -0x42F8($at)
    ctx->pc = 0x1ab60cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BD08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD08u, _value); } while (0);
    // 0x1ab610: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x1ab610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x1ab614: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x1ab614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x1ab618: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ab618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ab61c: 0xac22bd0c  sw          $v0, -0x42F4($at)
    ctx->pc = 0x1ab61cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BD0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD0Cu, _value); } while (0);
    // 0x1ab620: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ab620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ab624: 0xac20bd20  sw          $zero, -0x42E0($at)
    ctx->pc = 0x1ab624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD20u, _value); } while (0);
    // 0x1ab628: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ab628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ab62c: 0xac20bd24  sw          $zero, -0x42DC($at)
    ctx->pc = 0x1ab62cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD24u, _value); } while (0);
    // 0x1ab630: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1ab630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1ab634: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x1ab634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x1ab638: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ab638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ab63c: 0xac22bd28  sw          $v0, -0x42D8($at)
    ctx->pc = 0x1ab63cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BD28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD28u, _value); } while (0);
    // 0x1ab640: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x1ab640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x1ab644: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x1ab644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x1ab648: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ab648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ab64c: 0xac22bd2c  sw          $v0, -0x42D4($at)
    ctx->pc = 0x1ab64cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BD2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD2Cu, _value); } while (0);
label_1ab650:
    // 0x1ab650: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1ab650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1ab654: 0xc06ae30  jal         func_1AB8C0
    ctx->pc = 0x1AB654u;
    SET_GPR_U32(ctx, 31, 0x1AB65Cu);
    ctx->pc = 0x1AB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB8C0u, 0x1AB654u, 0x1AB65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB65Cu;
label_1ab65c:
    // 0x1ab65c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1ab65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1ab660: 0xc06adac  jal         func_1AB6B0
    ctx->pc = 0x1AB660u;
    SET_GPR_U32(ctx, 31, 0x1AB668u);
    ctx->pc = 0x1AB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB6B0u, 0x1AB660u, 0x1AB668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB668u;
label_1ab668:
    // 0x1ab668: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1ab668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1ab66c: 0xc04f024  jal         func_13C090
    ctx->pc = 0x1AB66Cu;
    SET_GPR_U32(ctx, 31, 0x1AB674u);
    ctx->pc = 0x13C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C090u, 0x1AB66Cu, 0x1AB674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB674u;
label_1ab674:
    // 0x1ab674: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1ab674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1ab678: 0xc06aeb0  jal         func_1ABAC0
    ctx->pc = 0x1AB678u;
    SET_GPR_U32(ctx, 31, 0x1AB680u);
    ctx->pc = 0x1ABAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABAC0u, 0x1AB678u, 0x1AB680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB680u;
label_1ab680:
    // 0x1ab680: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ab680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ab684: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x1ab684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ab688: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1AB688u;
    {
        const bool branch_taken_0x1ab688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab688) {
            ctx->pc = 0x1AB650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab650;
        }
    }
    ctx->pc = 0x1AB690u;
    // 0x1ab690: 0xc06afc8  jal         func_1ABF20
    ctx->pc = 0x1AB690u;
    SET_GPR_U32(ctx, 31, 0x1AB698u);
    ctx->pc = 0x1ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF20u, 0x1AB690u, 0x1AB698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB698u;
label_1ab698:
    // 0x1ab698: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1ab698u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab69c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab6a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ab6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ab6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB6ACu;
}
