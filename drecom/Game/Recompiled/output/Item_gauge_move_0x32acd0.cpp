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

// Function: Item_gauge_move
// Address: 0x32acd0 - 0x32b42c
void Item_gauge_move_0x32acd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_gauge_move_0x32acd0");
#endif

    switch (ctx->pc) {
        case 0x32adb0u: goto label_32adb0;
        case 0x32ae14u: goto label_32ae14;
        case 0x32afe0u: goto label_32afe0;
        default: break;
    }

    ctx->pc = 0x32acd0u;

    // 0x32acd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32acd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32acd4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x32acd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x32acd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32acdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32acdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ace0: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x32ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x32ace4: 0x2470c2f0  addiu       $s0, $v1, -0x3D10
    ctx->pc = 0x32ace4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951664));
    // 0x32ace8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ace8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32acec: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x32acecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF60u));
    // 0x32acf0: 0xae0328c8  sw          $v1, 0x28C8($s0)
    ctx->pc = 0x32acf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85EBB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85EBB8u, _value); } while (0);
    // 0x32acf4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x32acf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32acf8: 0xa20328b8  sb          $v1, 0x28B8($s0)
    ctx->pc = 0x32acf8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85EBA8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85EBA8u, _value); } while (0);
    // 0x32acfc: 0x920328b9  lbu         $v1, 0x28B9($s0)
    ctx->pc = 0x32acfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x85EBA9u));
    // 0x32ad00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32ad00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32ad04: 0x14600092  bnez        $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x32AD04u;
    {
        const bool branch_taken_0x32ad04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ad04) {
            ctx->pc = 0x32AF50u;
            goto label_32af50;
        }
    }
    ctx->pc = 0x32AD0Cu;
    // 0x32ad0c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ad0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ad10: 0x8c23af70  lw          $v1, -0x5090($at)
    ctx->pc = 0x32ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF70u));
    // 0x32ad14: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32ad14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32ad18: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32AD18u;
    {
        const bool branch_taken_0x32ad18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ad18) {
            ctx->pc = 0x32AD4Cu;
            goto label_32ad4c;
        }
    }
    ctx->pc = 0x32AD20u;
    // 0x32ad20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ad24: 0x8c230110  lw          $v1, 0x110($at)
    ctx->pc = 0x32ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0110u));
    // 0x32ad28: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32ad28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32ad2c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32AD2Cu;
    {
        const bool branch_taken_0x32ad2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ad2c) {
            ctx->pc = 0x32AD4Cu;
            goto label_32ad4c;
        }
    }
    ctx->pc = 0x32AD34u;
    // 0x32ad34: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ad34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ad38: 0x8c24af70  lw          $a0, -0x5090($at)
    ctx->pc = 0x32ad38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x85AF70u));
    // 0x32ad3c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x32ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x32ad40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32ad40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32ad44: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ad44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ad48: 0xac23af70  sw          $v1, -0x5090($at)
    ctx->pc = 0x32ad48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85AF70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF70u, _value); } while (0);
label_32ad4c:
    // 0x32ad4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ad4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ad50: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x32ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x32ad54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32ad54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32ad58: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x32AD58u;
    {
        const bool branch_taken_0x32ad58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ad58) {
            ctx->pc = 0x32ADA4u;
            goto label_32ada4;
        }
    }
    ctx->pc = 0x32AD60u;
    // 0x32ad60: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ad60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ad64: 0x8c23af70  lw          $v1, -0x5090($at)
    ctx->pc = 0x32ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF70u));
    // 0x32ad68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32ad68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32ad6c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x32AD6Cu;
    {
        const bool branch_taken_0x32ad6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ad6c) {
            ctx->pc = 0x32ADA4u;
            goto label_32ada4;
        }
    }
    ctx->pc = 0x32AD74u;
    // 0x32ad74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ad78: 0xa20328b9  sb          $v1, 0x28B9($s0)
    ctx->pc = 0x32ad78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10425), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ad7c: 0xa20028ba  sb          $zero, 0x28BA($s0)
    ctx->pc = 0x32ad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10426), (uint8_t)GPR_U32(ctx, 0));
    // 0x32ad80: 0xae0028bc  sw          $zero, 0x28BC($s0)
    ctx->pc = 0x32ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10428), GPR_U32(ctx, 0));
    // 0x32ad84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ad88: 0xa20328c0  sb          $v1, 0x28C0($s0)
    ctx->pc = 0x32ad88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ad8c: 0xae0028c4  sw          $zero, 0x28C4($s0)
    ctx->pc = 0x32ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 0));
    // 0x32ad90: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ad90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ad94: 0x8c23af70  lw          $v1, -0x5090($at)
    ctx->pc = 0x32ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF70u));
    // 0x32ad98: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x32ad98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x32ad9c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ad9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ada0: 0xac23af70  sw          $v1, -0x5090($at)
    ctx->pc = 0x32ada0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85AF70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF70u, _value); } while (0);
label_32ada4:
    // 0x32ada4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x32ada4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ada8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x32ADA8u;
    {
        const bool branch_taken_0x32ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ada8) {
            ctx->pc = 0x32AF38u;
            goto label_32af38;
        }
    }
    ctx->pc = 0x32ADB0u;
label_32adb0:
    // 0x32adb0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32adb4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32adb8: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32adbc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32adc0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32adc4: 0x8c6328dc  lw          $v1, 0x28DC($v1)
    ctx->pc = 0x32adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10460)));
    // 0x32adc8: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x32ADC8u;
    {
        const bool branch_taken_0x32adc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32adc8) {
            ctx->pc = 0x32AF30u;
            goto label_32af30;
        }
    }
    ctx->pc = 0x32ADD0u;
    // 0x32add0: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x32ADD0u;
    {
        const bool branch_taken_0x32add0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32add0) {
            ctx->pc = 0x32AE18u;
            goto label_32ae18;
        }
    }
    ctx->pc = 0x32ADD8u;
    // 0x32add8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32add8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32addc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32ade0: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32ade4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32ade8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32adec: 0x8c6328dc  lw          $v1, 0x28DC($v1)
    ctx->pc = 0x32adecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10460)));
    // 0x32adf0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x32adf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32adf4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x32ADF4u;
    {
        const bool branch_taken_0x32adf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32adf4) {
            ctx->pc = 0x32AE18u;
            goto label_32ae18;
        }
    }
    ctx->pc = 0x32ADFCu;
    // 0x32adfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32adfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32ae00: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x32ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x32ae04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32ae04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ae08: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x32ae08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ae0c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x32AE0Cu;
    SET_GPR_U32(ctx, 31, 0x32AE14u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x32AE0Cu, 0x32AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE14u;
label_32ae14:
    // 0x32ae14: 0x0  nop
    ctx->pc = 0x32ae14u;
    // NOP
label_32ae18:
    // 0x32ae18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ae1c: 0xa20328b9  sb          $v1, 0x28B9($s0)
    ctx->pc = 0x32ae1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10425), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ae20: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x32ae20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x32ae24: 0xa20328ba  sb          $v1, 0x28BA($s0)
    ctx->pc = 0x32ae24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10426), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ae28: 0xae0028bc  sw          $zero, 0x28BC($s0)
    ctx->pc = 0x32ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10428), GPR_U32(ctx, 0));
    // 0x32ae2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ae30: 0xa20328c0  sb          $v1, 0x28C0($s0)
    ctx->pc = 0x32ae30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ae34: 0xae0028c4  sw          $zero, 0x28C4($s0)
    ctx->pc = 0x32ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 0));
    // 0x32ae38: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32ae3c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32ae40: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32ae44: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32ae48: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32ae4c: 0x8c6328dc  lw          $v1, 0x28DC($v1)
    ctx->pc = 0x32ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10460)));
    // 0x32ae50: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x32ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32ae54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32ae54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ae58: 0x0  nop
    ctx->pc = 0x32ae58u;
    // NOP
    // 0x32ae5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32ae5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32ae60: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ae60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ae64: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32ae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32ae68: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ae68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ae6c: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32ae6cu;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ae70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32ae70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ae74: 0x0  nop
    ctx->pc = 0x32ae74u;
    // NOP
    // 0x32ae78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32ae78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32ae7c: 0x0  nop
    ctx->pc = 0x32ae7cu;
    // NOP
    // 0x32ae80: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x32AE80u;
    {
        const bool branch_taken_0x32ae80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32ae80) {
            ctx->pc = 0x32AED0u;
            goto label_32aed0;
        }
    }
    ctx->pc = 0x32AE88u;
    // 0x32ae88: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ae88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ae8c: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32ae8cu;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ae90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32ae94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32ae94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ae98: 0x0  nop
    ctx->pc = 0x32ae98u;
    // NOP
    // 0x32ae9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32ae9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32aea0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32aea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32aea4: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32aea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32aea8: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32aeac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32aeacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32aeb0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32aeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32aeb4: 0xc420b340  lwc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32aeb4u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32aeb8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32aeb8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32aebc: 0x0  nop
    ctx->pc = 0x32aebcu;
    // NOP
    // 0x32aec0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32aec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32aec4: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32aec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32aec8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x32AEC8u;
    {
        const bool branch_taken_0x32aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aec8) {
            ctx->pc = 0x32AF10u;
            goto label_32af10;
        }
    }
    ctx->pc = 0x32AED0u;
label_32aed0:
    // 0x32aed0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32aed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32aed4: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32aed4u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32aed8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32aedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32aedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32aee0: 0x0  nop
    ctx->pc = 0x32aee0u;
    // NOP
    // 0x32aee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x32aee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32aee8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32aee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32aeec: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32aeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32aef0: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32aef4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32aef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32aef8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32aef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32aefc: 0xc420b340  lwc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32aefcu;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32af00: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32af00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32af04: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32af04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32af08: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32af08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32af0c: 0x0  nop
    ctx->pc = 0x32af0cu;
    // NOP
label_32af10:
    // 0x32af10: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32af10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32af14: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32af14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32af18: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32af18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32af1c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32af20: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32af20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32af24: 0xac6428dc  sw          $a0, 0x28DC($v1)
    ctx->pc = 0x32af24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10460), GPR_U32(ctx, 4));
    // 0x32af28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32AF28u;
    {
        const bool branch_taken_0x32af28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32af28) {
            ctx->pc = 0x32AF50u;
            goto label_32af50;
        }
    }
    ctx->pc = 0x32AF30u;
label_32af30:
    // 0x32af30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32af30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32af34: 0x0  nop
    ctx->pc = 0x32af34u;
    // NOP
label_32af38:
    // 0x32af38: 0x920328b8  lbu         $v1, 0x28B8($s0)
    ctx->pc = 0x32af38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10424)));
    // 0x32af3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32af3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32af40: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x32af40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32af44: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
    ctx->pc = 0x32AF44u;
    {
        const bool branch_taken_0x32af44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32af44) {
            ctx->pc = 0x32ADB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32adb0;
        }
    }
    ctx->pc = 0x32AF4Cu;
    // 0x32af4c: 0x0  nop
    ctx->pc = 0x32af4cu;
    // NOP
label_32af50:
    // 0x32af50: 0x920328b9  lbu         $v1, 0x28B9($s0)
    ctx->pc = 0x32af50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10425)));
    // 0x32af54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32af54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32af58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32af58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32af5c: 0x14830105  bne         $a0, $v1, . + 4 + (0x105 << 2)
    ctx->pc = 0x32AF5Cu;
    {
        const bool branch_taken_0x32af5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32af5c) {
            ctx->pc = 0x32B374u;
            goto label_32b374;
        }
    }
    ctx->pc = 0x32AF64u;
    // 0x32af64: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32af64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32af68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32af68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32af6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32af70: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32af70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32af74: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32af74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32af78: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32af78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32af7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32af7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32af80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32af80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32af84: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32af84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32af88: 0x8c6328dc  lw          $v1, 0x28DC($v1)
    ctx->pc = 0x32af88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10460)));
    // 0x32af8c: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x32AF8Cu;
    {
        const bool branch_taken_0x32af8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32af8c) {
            ctx->pc = 0x32B11Cu;
            goto label_32b11c;
        }
    }
    ctx->pc = 0x32AF94u;
    // 0x32af94: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32af94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32af98: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x32af98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32af9c: 0x16200010  bnez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32AF9Cu;
    {
        const bool branch_taken_0x32af9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32af9c) {
            ctx->pc = 0x32AFE0u;
            goto label_32afe0;
        }
    }
    ctx->pc = 0x32AFA4u;
    // 0x32afa4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32afa8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32afac: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32afacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32afb0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x32afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32afb4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32afb8: 0x8c6328dc  lw          $v1, 0x28DC($v1)
    ctx->pc = 0x32afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10460)));
    // 0x32afbc: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x32afbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32afc0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x32AFC0u;
    {
        const bool branch_taken_0x32afc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32afc0) {
            ctx->pc = 0x32AFE0u;
            goto label_32afe0;
        }
    }
    ctx->pc = 0x32AFC8u;
    // 0x32afc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32afc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32afcc: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x32afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x32afd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32afd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32afd4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x32afd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32afd8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x32AFD8u;
    SET_GPR_U32(ctx, 31, 0x32AFE0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x32AFD8u, 0x32AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFE0u;
label_32afe0:
    // 0x32afe0: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32afe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32afe4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32afe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32afe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32afec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32afecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32aff0: 0x8c6328c8  lw          $v1, 0x28C8($v1)
    ctx->pc = 0x32aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32aff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32aff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32aff8: 0x0  nop
    ctx->pc = 0x32aff8u;
    // NOP
    // 0x32affc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32affcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b000: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b004: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b008: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b00c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b010: 0xc46028f0  lwc1        $f0, 0x28F0($v1)
    ctx->pc = 0x32b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b014: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x32b014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32b018: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b01c: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32b020: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b024: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32b024u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b028: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32b028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b02c: 0x0  nop
    ctx->pc = 0x32b02cu;
    // NOP
    // 0x32b030: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b034: 0x0  nop
    ctx->pc = 0x32b034u;
    // NOP
    // 0x32b038: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x32B038u;
    {
        const bool branch_taken_0x32b038 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b038) {
            ctx->pc = 0x32B0A0u;
            goto label_32b0a0;
        }
    }
    ctx->pc = 0x32B040u;
    // 0x32b040: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b044: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32b044u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b048: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32b048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32b04c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b04cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b050: 0x0  nop
    ctx->pc = 0x32b050u;
    // NOP
    // 0x32b054: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32b054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32b058: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b05c: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32b060: 0x8e0328bc  lw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10428)));
    // 0x32b064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b068: 0x0  nop
    ctx->pc = 0x32b068u;
    // NOP
    // 0x32b06c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32b06cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b070: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32b070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32b074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b078: 0x0  nop
    ctx->pc = 0x32b078u;
    // NOP
    // 0x32b07c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x32b07cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32b080: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b084: 0xc420b340  lwc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b084u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b088: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32b088u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32b08c: 0x0  nop
    ctx->pc = 0x32b08cu;
    // NOP
    // 0x32b090: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b094: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32b098: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x32B098u;
    {
        const bool branch_taken_0x32b098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b098) {
            ctx->pc = 0x32B0F4u;
            goto label_32b0f4;
        }
    }
    ctx->pc = 0x32B0A0u;
label_32b0a0:
    // 0x32b0a0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b0a4: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32b0a4u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b0a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32b0ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b0b0: 0x0  nop
    ctx->pc = 0x32b0b0u;
    // NOP
    // 0x32b0b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x32b0b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32b0b8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b0bc: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32b0c0: 0x8e0328bc  lw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10428)));
    // 0x32b0c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b0c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b0c8: 0x0  nop
    ctx->pc = 0x32b0c8u;
    // NOP
    // 0x32b0cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32b0ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b0d0: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32b0d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b0d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b0d8: 0x0  nop
    ctx->pc = 0x32b0d8u;
    // NOP
    // 0x32b0dc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x32b0dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32b0e0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b0e4: 0xc420b340  lwc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b0e4u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b0e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32b0e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32b0ec: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b0f0: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
label_32b0f4:
    // 0x32b0f4: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b0f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b0fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b100: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b104: 0x8c6428c8  lw          $a0, 0x28C8($v1)
    ctx->pc = 0x32b104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32b108: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b10c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b110: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b114: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b118: 0xac6428dc  sw          $a0, 0x28DC($v1)
    ctx->pc = 0x32b118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10460), GPR_U32(ctx, 4));
label_32b11c:
    // 0x32b11c: 0x8e0328bc  lw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10428)));
    // 0x32b120: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32b120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32b124: 0xae0328bc  sw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10428), GPR_U32(ctx, 3));
    // 0x32b128: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b12c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b130: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b134: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b138: 0xc46128f0  lwc1        $f1, 0x28F0($v1)
    ctx->pc = 0x32b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b13c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b140: 0xc420b340  lwc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b140u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b144: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32b144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32b148: 0xe46028f0  swc1        $f0, 0x28F0($v1)
    ctx->pc = 0x32b148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 10480), bits); }
    // 0x32b14c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b150: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32b150u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32b154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b158: 0x0  nop
    ctx->pc = 0x32b158u;
    // NOP
    // 0x32b15c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b15cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b160: 0x0  nop
    ctx->pc = 0x32b160u;
    // NOP
    // 0x32b164: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x32B164u;
    {
        const bool branch_taken_0x32b164 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b164) {
            ctx->pc = 0x32B1ECu;
            goto label_32b1ec;
        }
    }
    ctx->pc = 0x32B16Cu;
    // 0x32b16c: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b16cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b170: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b174: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b178: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b17c: 0xc46128f0  lwc1        $f1, 0x28F0($v1)
    ctx->pc = 0x32b17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b180: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b184: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b188: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b18c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b190: 0x8c6328c8  lw          $v1, 0x28C8($v1)
    ctx->pc = 0x32b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32b194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b198: 0x0  nop
    ctx->pc = 0x32b198u;
    // NOP
    // 0x32b19c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32b19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32b1a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32b1a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b1a4: 0x0  nop
    ctx->pc = 0x32b1a4u;
    // NOP
    // 0x32b1a8: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x32B1A8u;
    {
        const bool branch_taken_0x32b1a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b1a8) {
            ctx->pc = 0x32B264u;
            goto label_32b264;
        }
    }
    ctx->pc = 0x32B1B0u;
    // 0x32b1b0: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b1b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b1b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b1b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b1bc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b1c0: 0x8c6328c8  lw          $v1, 0x28C8($v1)
    ctx->pc = 0x32b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32b1c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b1c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b1c8: 0x0  nop
    ctx->pc = 0x32b1c8u;
    // NOP
    // 0x32b1cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32b1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32b1d0: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b1d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b1d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b1d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b1dc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b1e0: 0xe46028f0  swc1        $f0, 0x28F0($v1)
    ctx->pc = 0x32b1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 10480), bits); }
    // 0x32b1e4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x32B1E4u;
    {
        const bool branch_taken_0x32b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b1e4) {
            ctx->pc = 0x32B264u;
            goto label_32b264;
        }
    }
    ctx->pc = 0x32B1ECu;
label_32b1ec:
    // 0x32b1ec: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b1ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b1f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b1f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b1f8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b1fc: 0xc46128f0  lwc1        $f1, 0x28F0($v1)
    ctx->pc = 0x32b1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b200: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b204: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b208: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b20c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b210: 0x8c6328c8  lw          $v1, 0x28C8($v1)
    ctx->pc = 0x32b210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32b214: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b218: 0x0  nop
    ctx->pc = 0x32b218u;
    // NOP
    // 0x32b21c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32b21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32b220: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b224: 0x0  nop
    ctx->pc = 0x32b224u;
    // NOP
    // 0x32b228: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x32B228u;
    {
        const bool branch_taken_0x32b228 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b228) {
            ctx->pc = 0x32B264u;
            goto label_32b264;
        }
    }
    ctx->pc = 0x32B230u;
    // 0x32b230: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b234: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b238: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b23c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b240: 0x8c6328c8  lw          $v1, 0x28C8($v1)
    ctx->pc = 0x32b240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32b244: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b248: 0x0  nop
    ctx->pc = 0x32b248u;
    // NOP
    // 0x32b24c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32b24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32b250: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b254: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b258: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b25c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b260: 0xe46028f0  swc1        $f0, 0x28F0($v1)
    ctx->pc = 0x32b260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 10480), bits); }
label_32b264:
    // 0x32b264: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b268: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32b268u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b26c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32b26cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b270: 0x0  nop
    ctx->pc = 0x32b270u;
    // NOP
    // 0x32b274: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b274u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b278: 0x0  nop
    ctx->pc = 0x32b278u;
    // NOP
    // 0x32b27c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x32B27Cu;
    {
        const bool branch_taken_0x32b27c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b27c) {
            ctx->pc = 0x32B2CCu;
            goto label_32b2cc;
        }
    }
    ctx->pc = 0x32B284u;
    // 0x32b284: 0x8e0328bc  lw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10428)));
    // 0x32b288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b28c: 0x0  nop
    ctx->pc = 0x32b28cu;
    // NOP
    // 0x32b290: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32b290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b294: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32b294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32b298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b29c: 0x0  nop
    ctx->pc = 0x32b29cu;
    // NOP
    // 0x32b2a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b2a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b2a4: 0x0  nop
    ctx->pc = 0x32b2a4u;
    // NOP
    // 0x32b2a8: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x32B2A8u;
    {
        const bool branch_taken_0x32b2a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b2a8) {
            ctx->pc = 0x32B374u;
            goto label_32b374;
        }
    }
    ctx->pc = 0x32B2B0u;
    // 0x32b2b0: 0xa20028b9  sb          $zero, 0x28B9($s0)
    ctx->pc = 0x32b2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10425), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b2b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b2b8: 0xa20328c0  sb          $v1, 0x28C0($s0)
    ctx->pc = 0x32b2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 3));
    // 0x32b2bc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x32b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32b2c0: 0xae0328c4  sw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 3));
    // 0x32b2c4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x32B2C4u;
    {
        const bool branch_taken_0x32b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b2c4) {
            ctx->pc = 0x32B374u;
            goto label_32b374;
        }
    }
    ctx->pc = 0x32B2CCu;
label_32b2cc:
    // 0x32b2cc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b2d0: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32b2d0u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b2d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32b2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b2d8: 0x0  nop
    ctx->pc = 0x32b2d8u;
    // NOP
    // 0x32b2dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32b2dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b2e0: 0x0  nop
    ctx->pc = 0x32b2e0u;
    // NOP
    // 0x32b2e4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x32B2E4u;
    {
        const bool branch_taken_0x32b2e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b2e4) {
            ctx->pc = 0x32B334u;
            goto label_32b334;
        }
    }
    ctx->pc = 0x32B2ECu;
    // 0x32b2ec: 0x8e0328bc  lw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10428)));
    // 0x32b2f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b2f4: 0x0  nop
    ctx->pc = 0x32b2f4u;
    // NOP
    // 0x32b2f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32b2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b2fc: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32b300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b304: 0x0  nop
    ctx->pc = 0x32b304u;
    // NOP
    // 0x32b308: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b30c: 0x0  nop
    ctx->pc = 0x32b30cu;
    // NOP
    // 0x32b310: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x32B310u;
    {
        const bool branch_taken_0x32b310 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b310) {
            ctx->pc = 0x32B374u;
            goto label_32b374;
        }
    }
    ctx->pc = 0x32B318u;
    // 0x32b318: 0xa20028b9  sb          $zero, 0x28B9($s0)
    ctx->pc = 0x32b318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10425), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b31c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b320: 0xa20328c0  sb          $v1, 0x28C0($s0)
    ctx->pc = 0x32b320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 3));
    // 0x32b324: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x32b324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32b328: 0xae0328c4  sw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 3));
    // 0x32b32c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x32B32Cu;
    {
        const bool branch_taken_0x32b32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b32c) {
            ctx->pc = 0x32B374u;
            goto label_32b374;
        }
    }
    ctx->pc = 0x32B334u;
label_32b334:
    // 0x32b334: 0x8e0328bc  lw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10428)));
    // 0x32b338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b33c: 0x0  nop
    ctx->pc = 0x32b33cu;
    // NOP
    // 0x32b340: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32b340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b344: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32b344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32b348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b34c: 0x0  nop
    ctx->pc = 0x32b34cu;
    // NOP
    // 0x32b350: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b354: 0x0  nop
    ctx->pc = 0x32b354u;
    // NOP
    // 0x32b358: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x32B358u;
    {
        const bool branch_taken_0x32b358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b358) {
            ctx->pc = 0x32B374u;
            goto label_32b374;
        }
    }
    ctx->pc = 0x32B360u;
    // 0x32b360: 0xa20028b9  sb          $zero, 0x28B9($s0)
    ctx->pc = 0x32b360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10425), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b368: 0xa20328c0  sb          $v1, 0x28C0($s0)
    ctx->pc = 0x32b368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 3));
    // 0x32b36c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x32b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32b370: 0xae0328c4  sw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 3));
label_32b374:
    // 0x32b374: 0x920328c0  lbu         $v1, 0x28C0($s0)
    ctx->pc = 0x32b374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10432)));
    // 0x32b378: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32b378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b37c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b380: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x32B380u;
    {
        const bool branch_taken_0x32b380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32b380) {
            ctx->pc = 0x32B414u;
            goto label_32b414;
        }
    }
    ctx->pc = 0x32B388u;
    // 0x32b388: 0x920328b9  lbu         $v1, 0x28B9($s0)
    ctx->pc = 0x32b388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10425)));
    // 0x32b38c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b390: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x32B390u;
    {
        const bool branch_taken_0x32b390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b390) {
            ctx->pc = 0x32B3ECu;
            goto label_32b3ec;
        }
    }
    ctx->pc = 0x32B398u;
    // 0x32b398: 0x8e0328c4  lw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10436)));
    // 0x32b39c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32b3a0: 0xae0328c4  sw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 3));
    // 0x32b3a4: 0x8e0328c4  lw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10436)));
    // 0x32b3a8: 0x461001a  bgez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x32B3A8u;
    {
        const bool branch_taken_0x32b3a8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x32b3a8) {
            ctx->pc = 0x32B414u;
            goto label_32b414;
        }
    }
    ctx->pc = 0x32B3B0u;
    // 0x32b3b0: 0xa20028c0  sb          $zero, 0x28C0($s0)
    ctx->pc = 0x32b3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b3b4: 0xae0028c4  sw          $zero, 0x28C4($s0)
    ctx->pc = 0x32b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 0));
    // 0x32b3b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32b3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32b3bc: 0x8c230110  lw          $v1, 0x110($at)
    ctx->pc = 0x32b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0110u));
    // 0x32b3c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32b3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32b3c4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x32B3C4u;
    {
        const bool branch_taken_0x32b3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b3c4) {
            ctx->pc = 0x32B414u;
            goto label_32b414;
        }
    }
    ctx->pc = 0x32B3CCu;
    // 0x32b3cc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b3d0: 0x8c24af70  lw          $a0, -0x5090($at)
    ctx->pc = 0x32b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x85AF70u));
    // 0x32b3d4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x32b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x32b3d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32b3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32b3dc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b3e0: 0xac23af70  sw          $v1, -0x5090($at)
    ctx->pc = 0x32b3e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85AF70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF70u, _value); } while (0);
    // 0x32b3e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32B3E4u;
    {
        const bool branch_taken_0x32b3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b3e4) {
            ctx->pc = 0x32B414u;
            goto label_32b414;
        }
    }
    ctx->pc = 0x32B3ECu;
label_32b3ec:
    // 0x32b3ec: 0x8e0328c4  lw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10436)));
    // 0x32b3f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32b3f4: 0xae0328c4  sw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 3));
    // 0x32b3f8: 0x8e0328c4  lw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10436)));
    // 0x32b3fc: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x32b3fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x32b400: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B400u;
    {
        const bool branch_taken_0x32b400 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b400) {
            ctx->pc = 0x32B414u;
            goto label_32b414;
        }
    }
    ctx->pc = 0x32B408u;
    // 0x32b408: 0xa20028c0  sb          $zero, 0x28C0($s0)
    ctx->pc = 0x32b408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b40c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x32b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32b410: 0xae0328c4  sw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 3));
label_32b414:
    // 0x32b414: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x32b414u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b41c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b420: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x32b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32b424: 0x3e00008  jr          $ra
    ctx->pc = 0x32B424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B42Cu;
}
