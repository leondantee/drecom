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

// Function: Msg_move_select
// Address: 0x296dc0 - 0x2970c0
void Msg_move_select_0x296dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Msg_move_select_0x296dc0");
#endif

    switch (ctx->pc) {
        case 0x296f10u: goto label_296f10;
        case 0x296fbcu: goto label_296fbc;
        default: break;
    }

    ctx->pc = 0x296dc0u;

    // 0x296dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296dc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x296dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x296dcc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x296dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x296dd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x296dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296dd4: 0x8c6469b8  lw          $a0, 0x69B8($v1)
    ctx->pc = 0x296dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27064)));
    // 0x296dd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x296dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296ddc: 0xac6469b4  sw          $a0, 0x69B4($v1)
    ctx->pc = 0x296ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27060), GPR_U32(ctx, 4));
    // 0x296de0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x296de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296de4: 0x8c6469c4  lw          $a0, 0x69C4($v1)
    ctx->pc = 0x296de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27076)));
    // 0x296de8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x296de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296dec: 0xac6469c0  sw          $a0, 0x69C0($v1)
    ctx->pc = 0x296decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27072), GPR_U32(ctx, 4));
    // 0x296df0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x296df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296df4: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296df8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296dfc: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296e00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x296e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296e04: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x296e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296e08: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x296e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296e0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x296e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296e10: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x296e10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x296e14: 0x3071000f  andi        $s1, $v1, 0xF
    ctx->pc = 0x296e14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x296e18: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296e1c: 0x8c23c9f8  lw          $v1, -0x3608($at)
    ctx->pc = 0x296e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80C9F8u));
    // 0x296e20: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x296E20u;
    {
        const bool branch_taken_0x296e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296e20) {
            ctx->pc = 0x296E50u;
            goto label_296e50;
        }
    }
    ctx->pc = 0x296E28u;
    // 0x296e28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x296e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296e2c: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x296e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296e30: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x296e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296e34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x296e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296e38: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x296e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x296e3c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296e40: 0xac23c9f0  sw          $v1, -0x3610($at)
    ctx->pc = 0x296e40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80C9F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9F0u, _value); } while (0);
    // 0x296e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296e48: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296e4c: 0xac23c9f8  sw          $v1, -0x3608($at)
    ctx->pc = 0x296e4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80C9F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9F8u, _value); } while (0);
label_296e50:
    // 0x296e50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x296e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296e54: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296e58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296e5c: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296e60: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296e64: 0xac20c9e0  sw          $zero, -0x3620($at)
    ctx->pc = 0x296e64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x80C9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E0u, _value); } while (0);
    // 0x296e68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x296e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x296e6c: 0x94230084  lhu         $v1, 0x84($at)
    ctx->pc = 0x296e6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x296e70: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x296e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x296e74: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x296e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x296e78: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296E78u;
    {
        const bool branch_taken_0x296e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296e78) {
            ctx->pc = 0x296E8Cu;
            goto label_296e8c;
        }
    }
    ctx->pc = 0x296E80u;
    // 0x296e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296e84: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296e88: 0xac23c9e0  sw          $v1, -0x3620($at)
    ctx->pc = 0x296e88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80C9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E0u, _value); } while (0);
label_296e8c:
    // 0x296e8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x296e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x296e90: 0x94230084  lhu         $v1, 0x84($at)
    ctx->pc = 0x296e90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x296e94: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x296e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x296e98: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x296e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x296e9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296E9Cu;
    {
        const bool branch_taken_0x296e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296e9c) {
            ctx->pc = 0x296EB0u;
            goto label_296eb0;
        }
    }
    ctx->pc = 0x296EA4u;
    // 0x296ea4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x296ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296ea8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296eac: 0xac23c9e0  sw          $v1, -0x3620($at)
    ctx->pc = 0x296eacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80C9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E0u, _value); } while (0);
label_296eb0:
    // 0x296eb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x296eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x296eb4: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x296eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x296eb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x296eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x296ebc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x296ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x296ec0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296EC0u;
    {
        const bool branch_taken_0x296ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296ec0) {
            ctx->pc = 0x296ED4u;
            goto label_296ed4;
        }
    }
    ctx->pc = 0x296EC8u;
    // 0x296ec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296ecc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296ed0: 0xac23c9e8  sw          $v1, -0x3618($at)
    ctx->pc = 0x296ed0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80C9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E8u, _value); } while (0);
label_296ed4:
    // 0x296ed4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296ed8: 0x8c24c9f0  lw          $a0, -0x3610($at)
    ctx->pc = 0x296ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x80C9F0u));
    // 0x296edc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296ee0: 0x8c23c9e0  lw          $v1, -0x3620($at)
    ctx->pc = 0x296ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80C9E0u));
    // 0x296ee4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x296ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x296ee8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x296ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x296eec: 0x71001a  div         $zero, $v1, $s1
    ctx->pc = 0x296eecu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x296ef0: 0x0  nop
    ctx->pc = 0x296ef0u;
    // NOP
    // 0x296ef4: 0x0  nop
    ctx->pc = 0x296ef4u;
    // NOP
    // 0x296ef8: 0x1810  mfhi        $v1
    ctx->pc = 0x296ef8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x296efc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296f00: 0xac23c9f0  sw          $v1, -0x3610($at)
    ctx->pc = 0x296f00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80C9F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9F0u, _value); } while (0);
    // 0x296f04: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x296f04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x296f08: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x296F08u;
    {
        const bool branch_taken_0x296f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296f08) {
            ctx->pc = 0x297040u;
            goto label_297040;
        }
    }
    ctx->pc = 0x296F10u;
label_296f10:
    // 0x296f10: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296f14: 0x8c23c9f0  lw          $v1, -0x3610($at)
    ctx->pc = 0x296f14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80C9F0u));
    // 0x296f18: 0x16030015  bne         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x296F18u;
    {
        const bool branch_taken_0x296f18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x296f18) {
            ctx->pc = 0x296F70u;
            goto label_296f70;
        }
    }
    ctx->pc = 0x296F20u;
    // 0x296f20: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x296f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296f24: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296f28: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296f2c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296f30: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296f30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296f34: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296f34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296f38: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x296f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x296f3c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296f40: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296f44: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296f48: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296f48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296f4c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296f50: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x296f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296f54: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296f58: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296f5c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296f60: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296f60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296f64: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296f64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296f68: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x296F68u;
    {
        const bool branch_taken_0x296f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296f68) {
            ctx->pc = 0x296FE8u;
            goto label_296fe8;
        }
    }
    ctx->pc = 0x296F70u;
label_296f70:
    // 0x296f70: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x296f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296f74: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296f78: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296f7c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296f80: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296f80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296f84: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296f84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296f88: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x296f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x296f8c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296f90: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296f94: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296f98: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296f9c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296fa0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296fa4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296fa8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296fac: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296fb0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x296fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x296fb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x296FB4u;
    {
        const bool branch_taken_0x296fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296fb4) {
            ctx->pc = 0x296FE8u;
            goto label_296fe8;
        }
    }
    ctx->pc = 0x296FBCu;
label_296fbc:
    // 0x296fbc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296fc0: 0x8ca469b4  lw          $a0, 0x69B4($a1)
    ctx->pc = 0x296fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27060)));
    // 0x296fc4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296fc8: 0xaca369b4  sw          $v1, 0x69B4($a1)
    ctx->pc = 0x296fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27060), GPR_U32(ctx, 3));
    // 0x296fcc: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x296fccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x296fd0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296fd4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296fd8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296fdc: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296fe0: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296fe4: 0x0  nop
    ctx->pc = 0x296fe4u;
    // NOP
label_296fe8:
    // 0x296fe8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x296fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296fec: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x296fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296ff0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x296ff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296ff4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296ff8: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x296ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296ffc: 0x1483ffef  bne         $a0, $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x296FFCu;
    {
        const bool branch_taken_0x296ffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x296ffc) {
            ctx->pc = 0x296FBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296fbc;
        }
    }
    ctx->pc = 0x297004u;
    // 0x297004: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x297004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x297008: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x297008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29700c: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x29700cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x297010: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x297010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x297014: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x297014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x297018: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x297018u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x29701c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x29701cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297020: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x297020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x297024: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x297024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x297028: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x297028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x29702c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x29702cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297030: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x297030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x297034: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x297034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x297038: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x297038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x29703c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29703cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_297040:
    // 0x297040: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x297040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x297044: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x297044u;
    {
        const bool branch_taken_0x297044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297044) {
            ctx->pc = 0x296F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296f10;
        }
    }
    ctx->pc = 0x29704Cu;
    // 0x29704c: 0x24050062  addiu       $a1, $zero, 0x62
    ctx->pc = 0x29704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x297050: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x297050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297054: 0x8c8369c0  lw          $v1, 0x69C0($a0)
    ctx->pc = 0x297054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27072)));
    // 0x297058: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x297058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29705c: 0xac8369c0  sw          $v1, 0x69C0($a0)
    ctx->pc = 0x29705cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27072), GPR_U32(ctx, 3));
    // 0x297060: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x297060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x297064: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x297064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297068: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x297068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29706c: 0x8c8369c0  lw          $v1, 0x69C0($a0)
    ctx->pc = 0x29706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27072)));
    // 0x297070: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x297070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x297074: 0xac8369c0  sw          $v1, 0x69C0($a0)
    ctx->pc = 0x297074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27072), GPR_U32(ctx, 3));
    // 0x297078: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x297078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x29707c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x29707cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297080: 0x8c8369c0  lw          $v1, 0x69C0($a0)
    ctx->pc = 0x297080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27072)));
    // 0x297084: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x297084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x297088: 0xac8369c0  sw          $v1, 0x69C0($a0)
    ctx->pc = 0x297088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27072), GPR_U32(ctx, 3));
    // 0x29708c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x29708cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x297090: 0x8c23c9e8  lw          $v1, -0x3618($at)
    ctx->pc = 0x297090u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80C9E8u));
    // 0x297094: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x297094u;
    {
        const bool branch_taken_0x297094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297094) {
            ctx->pc = 0x2970ACu;
            goto label_2970ac;
        }
    }
    ctx->pc = 0x29709Cu;
    // 0x29709c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x29709cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2970a0: 0xa06069c9  sb          $zero, 0x69C9($v1)
    ctx->pc = 0x2970a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 0));
    // 0x2970a4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2970a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2970a8: 0xac20c9e8  sw          $zero, -0x3618($at)
    ctx->pc = 0x2970a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x80C9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E8u, _value); } while (0);
label_2970ac:
    // 0x2970ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2970acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2970b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2970b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2970b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2970b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2970b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2970B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2970B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2970C0u;
}
