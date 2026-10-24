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

// Function: Technique_menu_move
// Address: 0x379fd0 - 0x37a148
void Technique_menu_move_0x379fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Technique_menu_move_0x379fd0");
#endif

    switch (ctx->pc) {
        case 0x37a05cu: goto label_37a05c;
        case 0x37a0c0u: goto label_37a0c0;
        case 0x37a0e0u: goto label_37a0e0;
        case 0x37a110u: goto label_37a110;
        default: break;
    }

    ctx->pc = 0x379fd0u;

    // 0x379fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x379fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x379fd4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x379fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x379fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379fdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379fe0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x379fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x379fe4: 0x24706150  addiu       $s0, $v1, 0x6150
    ctx->pc = 0x379fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x379fe8: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x379fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x379fec: 0x2471cb10  addiu       $s1, $v1, -0x34F0
    ctx->pc = 0x379fecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953744));
    // 0x379ff0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x379ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x379ff4: 0x8c240128  lw          $a0, 0x128($at)
    ctx->pc = 0x379ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0128u));
    // 0x379ff8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x379ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x379ffc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x379ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x37a000: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x37A000u;
    {
        const bool branch_taken_0x37a000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a000) {
            ctx->pc = 0x37A05Cu;
            goto label_37a05c;
        }
    }
    ctx->pc = 0x37A008u;
    // 0x37a008: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a00c: 0x8c230580  lw          $v1, 0x580($at)
    ctx->pc = 0x37a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37a010: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37a014: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a018: 0xac230580  sw          $v1, 0x580($at)
    ctx->pc = 0x37a018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0580u, _value); } while (0);
    // 0x37a01c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a020: 0x8c230580  lw          $v1, 0x580($at)
    ctx->pc = 0x37a020u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37a024: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x37a024u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37a028: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x37A028u;
    {
        const bool branch_taken_0x37a028 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x37a028) {
            ctx->pc = 0x37A044u;
            goto label_37a044;
        }
    }
    ctx->pc = 0x37A030u;
    // 0x37a030: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37a030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a034: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a038: 0xac230580  sw          $v1, 0x580($at)
    ctx->pc = 0x37a038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0580u, _value); } while (0);
    // 0x37a03c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37A03Cu;
    {
        const bool branch_taken_0x37a03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a03c) {
            ctx->pc = 0x37A05Cu;
            goto label_37a05c;
        }
    }
    ctx->pc = 0x37A044u;
label_37a044:
    // 0x37a044: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37a044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37a048: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x37a048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37a04c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37a04cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a050: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37a050u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a054: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x37A054u;
    SET_GPR_U32(ctx, 31, 0x37A05Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x37A054u, 0x37A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A05Cu;
label_37a05c:
    // 0x37a05c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37a05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x37a060: 0x8c240128  lw          $a0, 0x128($at)
    ctx->pc = 0x37a060u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0128u));
    // 0x37a064: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x37a064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x37a068: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x37a068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x37a06c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x37A06Cu;
    {
        const bool branch_taken_0x37a06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a06c) {
            ctx->pc = 0x37A0E0u;
            goto label_37a0e0;
        }
    }
    ctx->pc = 0x37A074u;
    // 0x37a074: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a078: 0x8c220580  lw          $v0, 0x580($at)
    ctx->pc = 0x37a078u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37a07c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37a080: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a084: 0xac220580  sw          $v0, 0x580($at)
    ctx->pc = 0x37a084u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9A0580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0580u, _value); } while (0);
    // 0x37a088: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a08c: 0x8c220580  lw          $v0, 0x580($at)
    ctx->pc = 0x37a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37a090: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x37A090u;
    {
        const bool branch_taken_0x37a090 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x37a090) {
            ctx->pc = 0x37A0C8u;
            goto label_37a0c8;
        }
    }
    ctx->pc = 0x37A098u;
    // 0x37a098: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a09c: 0xac200580  sw          $zero, 0x580($at)
    ctx->pc = 0x37a09cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0580u, _value); } while (0);
    // 0x37a0a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a0a4: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x37a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
    // 0x37a0a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37a0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37a0ac: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x37a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37a0b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37a0b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a0b4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37a0b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a0b8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x37A0B8u;
    SET_GPR_U32(ctx, 31, 0x37A0C0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x37A0B8u, 0x37A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A0C0u;
label_37a0c0:
    // 0x37a0c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37A0C0u;
    {
        const bool branch_taken_0x37a0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a0c0) {
            ctx->pc = 0x37A0E0u;
            goto label_37a0e0;
        }
    }
    ctx->pc = 0x37A0C8u;
label_37a0c8:
    // 0x37a0c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37a0c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37a0cc: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x37a0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37a0d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37a0d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a0d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37a0d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a0d8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x37A0D8u;
    SET_GPR_U32(ctx, 31, 0x37A0E0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x37A0D8u, 0x37A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A0E0u;
label_37a0e0:
    // 0x37a0e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37a0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x37a0e4: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x37a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x37a0e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x37a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x37a0ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x37a0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x37a0f0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x37A0F0u;
    {
        const bool branch_taken_0x37a0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a0f0) {
            ctx->pc = 0x37A12Cu;
            goto label_37a12c;
        }
    }
    ctx->pc = 0x37A0F8u;
    // 0x37a0f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37a0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37a0fc: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x37a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x37a100: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37a100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a104: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37a104u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a108: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x37A108u;
    SET_GPR_U32(ctx, 31, 0x37A110u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x37A108u, 0x37A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A110u;
label_37a110:
    // 0x37a110: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a114: 0xac200588  sw          $zero, 0x588($at)
    ctx->pc = 0x37a114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0588u, _value); } while (0);
    // 0x37a118: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37a118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a11c: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x37a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x37a120: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37a120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a124: 0xae035dcc  sw          $v1, 0x5DCC($s0)
    ctx->pc = 0x37a124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 3));
    // 0x37a128: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x37a128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
label_37a12c:
    // 0x37a12c: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x37a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x37a130: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x37a130u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37a134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37a138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a13c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x37a13cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37a140: 0x3e00008  jr          $ra
    ctx->pc = 0x37A140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A148u;
}
