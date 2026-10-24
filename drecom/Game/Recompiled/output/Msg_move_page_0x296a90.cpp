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

// Function: Msg_move_page
// Address: 0x296a90 - 0x296dbc
void Msg_move_page_0x296a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Msg_move_page_0x296a90");
#endif

    ctx->pc = 0x296a90u;

    // 0x296a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296a94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x296a98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x296a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x296a9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296aa0: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x296aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296aa4: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x296aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x296aa8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x296aa8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296aac: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x296aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x296ab0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x296ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x296ab4: 0x14830065  bne         $a0, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x296AB4u;
    {
        const bool branch_taken_0x296ab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x296ab4) {
            ctx->pc = 0x296C4Cu;
            goto label_296c4c;
        }
    }
    ctx->pc = 0x296ABCu;
    // 0x296abc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x296abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x296ac0: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x296ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x296ac4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x296ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x296ac8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x296ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x296acc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x296ACCu;
    {
        const bool branch_taken_0x296acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296acc) {
            ctx->pc = 0x296AECu;
            goto label_296aec;
        }
    }
    ctx->pc = 0x296AD4u;
    // 0x296ad4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x296ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x296ad8: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x296ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x296adc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x296adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x296ae0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x296ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x296ae4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x296AE4u;
    {
        const bool branch_taken_0x296ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296ae4) {
            ctx->pc = 0x296AF8u;
            goto label_296af8;
        }
    }
    ctx->pc = 0x296AECu;
label_296aec:
    // 0x296aec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296af0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296af4: 0xac23c9e8  sw          $v1, -0x3618($at)
    ctx->pc = 0x296af4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80C9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E8u, _value); } while (0);
label_296af8:
    // 0x296af8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296afc: 0x8c23c9e8  lw          $v1, -0x3618($at)
    ctx->pc = 0x296afcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80C9E8u));
    // 0x296b00: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x296B00u;
    {
        const bool branch_taken_0x296b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296b00) {
            ctx->pc = 0x296C34u;
            goto label_296c34;
        }
    }
    ctx->pc = 0x296B08u;
    // 0x296b08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b0c: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x296b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296b10: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x296b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296b14: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296b18: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x296b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x296b1c: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x296B1Cu;
    {
        const bool branch_taken_0x296b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x296b1c) {
            ctx->pc = 0x296BB8u;
            goto label_296bb8;
        }
    }
    ctx->pc = 0x296B24u;
    // 0x296b24: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x296b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x296b28: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x296B28u;
    {
        const bool branch_taken_0x296b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x296b28) {
            ctx->pc = 0x296B38u;
            goto label_296b38;
        }
    }
    ctx->pc = 0x296B30u;
    // 0x296b30: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x296B30u;
    {
        const bool branch_taken_0x296b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296b30) {
            ctx->pc = 0x296C2Cu;
            goto label_296c2c;
        }
    }
    ctx->pc = 0x296B38u;
label_296b38:
    // 0x296b38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b3c: 0x8c6469bc  lw          $a0, 0x69BC($v1)
    ctx->pc = 0x296b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27068)));
    // 0x296b40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b44: 0xac6469c0  sw          $a0, 0x69C0($v1)
    ctx->pc = 0x296b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27072), GPR_U32(ctx, 4));
    // 0x296b48: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b4c: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296b50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296b54: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296b54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296b58: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b5c: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296b60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296b64: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296b68: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x296b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296b6c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b70: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296b74: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296b78: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296b7c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296b80: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x296b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x296b84: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b88: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296b8c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296b90: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296b90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296b94: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296b94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296b98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b9c: 0xac606998  sw          $zero, 0x6998($v1)
    ctx->pc = 0x296b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27032), GPR_U32(ctx, 0));
    // 0x296ba0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296ba4: 0xa06069c9  sb          $zero, 0x69C9($v1)
    ctx->pc = 0x296ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 0));
    // 0x296ba8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296bac: 0xac20c9e8  sw          $zero, -0x3618($at)
    ctx->pc = 0x296bacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x80C9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E8u, _value); } while (0);
    // 0x296bb0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x296BB0u;
    {
        const bool branch_taken_0x296bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296bb0) {
            ctx->pc = 0x296C34u;
            goto label_296c34;
        }
    }
    ctx->pc = 0x296BB8u;
label_296bb8:
    // 0x296bb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296bbc: 0x8c6469bc  lw          $a0, 0x69BC($v1)
    ctx->pc = 0x296bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27068)));
    // 0x296bc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296bc4: 0xac6469c0  sw          $a0, 0x69C0($v1)
    ctx->pc = 0x296bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27072), GPR_U32(ctx, 4));
    // 0x296bc8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296bcc: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296bd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296bd4: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296bd8: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x296bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296bdc: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296be0: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296be4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296be8: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296be8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296bec: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296becu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296bf0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x296bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x296bf4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296bf8: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296bfc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296c00: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296c00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296c04: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296c04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296c08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c0c: 0xac606998  sw          $zero, 0x6998($v1)
    ctx->pc = 0x296c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27032), GPR_U32(ctx, 0));
    // 0x296c10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x296c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296c14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c18: 0xa06469c9  sb          $a0, 0x69C9($v1)
    ctx->pc = 0x296c18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 4));
    // 0x296c1c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296c20: 0xac20c9e8  sw          $zero, -0x3618($at)
    ctx->pc = 0x296c20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x80C9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E8u, _value); } while (0);
    // 0x296c24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x296C24u;
    {
        const bool branch_taken_0x296c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c24) {
            ctx->pc = 0x296C34u;
            goto label_296c34;
        }
    }
    ctx->pc = 0x296C2Cu;
label_296c2c:
    // 0x296c2c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296c30: 0xac20c9e8  sw          $zero, -0x3618($at)
    ctx->pc = 0x296c30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x80C9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E8u, _value); } while (0);
label_296c34:
    // 0x296c34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c38: 0x8c6469b4  lw          $a0, 0x69B4($v1)
    ctx->pc = 0x296c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296c3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c40: 0xac6469b0  sw          $a0, 0x69B0($v1)
    ctx->pc = 0x296c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27056), GPR_U32(ctx, 4));
    // 0x296c44: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x296C44u;
    {
        const bool branch_taken_0x296c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c44) {
            ctx->pc = 0x296D98u;
            goto label_296d98;
        }
    }
    ctx->pc = 0x296C4Cu;
label_296c4c:
    // 0x296c4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c50: 0x8c646998  lw          $a0, 0x6998($v1)
    ctx->pc = 0x296c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27032)));
    // 0x296c54: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x296c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x296c58: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x296c58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x296c5c: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x296C5Cu;
    {
        const bool branch_taken_0x296c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296c5c) {
            ctx->pc = 0x296D88u;
            goto label_296d88;
        }
    }
    ctx->pc = 0x296C64u;
    // 0x296c64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c68: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x296c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296c6c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x296c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296c70: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296c74: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x296c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x296c78: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x296C78u;
    {
        const bool branch_taken_0x296c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x296c78) {
            ctx->pc = 0x296D0Cu;
            goto label_296d0c;
        }
    }
    ctx->pc = 0x296C80u;
    // 0x296c80: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x296c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x296c84: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x296C84u;
    {
        const bool branch_taken_0x296c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x296c84) {
            ctx->pc = 0x296C94u;
            goto label_296c94;
        }
    }
    ctx->pc = 0x296C8Cu;
    // 0x296c8c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x296C8Cu;
    {
        const bool branch_taken_0x296c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c8c) {
            ctx->pc = 0x296D70u;
            goto label_296d70;
        }
    }
    ctx->pc = 0x296C94u;
label_296c94:
    // 0x296c94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c98: 0x8c6469bc  lw          $a0, 0x69BC($v1)
    ctx->pc = 0x296c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27068)));
    // 0x296c9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296ca0: 0xac6469c0  sw          $a0, 0x69C0($v1)
    ctx->pc = 0x296ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27072), GPR_U32(ctx, 4));
    // 0x296ca4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296ca8: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296cac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296cb0: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296cb4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296cb8: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296cbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296cc0: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296cc4: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x296cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296cc8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296ccc: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296cd0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296cd4: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296cd8: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296cdc: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x296cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x296ce0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296ce4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296ce8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296cec: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296cecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296cf0: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296cf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296cf8: 0xa06069c9  sb          $zero, 0x69C9($v1)
    ctx->pc = 0x296cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 0));
    // 0x296cfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d00: 0xac606998  sw          $zero, 0x6998($v1)
    ctx->pc = 0x296d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27032), GPR_U32(ctx, 0));
    // 0x296d04: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x296D04u;
    {
        const bool branch_taken_0x296d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296d04) {
            ctx->pc = 0x296D70u;
            goto label_296d70;
        }
    }
    ctx->pc = 0x296D0Cu;
label_296d0c:
    // 0x296d0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d10: 0x8c6469bc  lw          $a0, 0x69BC($v1)
    ctx->pc = 0x296d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27068)));
    // 0x296d14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d18: 0xac6469c0  sw          $a0, 0x69C0($v1)
    ctx->pc = 0x296d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27072), GPR_U32(ctx, 4));
    // 0x296d1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d20: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296d24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296d28: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296d2c: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x296d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296d30: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d34: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296d38: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296d3c: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296d40: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296d40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296d44: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x296d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x296d48: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d4c: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296d50: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296d54: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296d58: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296d58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296d5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x296d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296d60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d64: 0xa06469c9  sb          $a0, 0x69C9($v1)
    ctx->pc = 0x296d64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 4));
    // 0x296d68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d6c: 0xac606998  sw          $zero, 0x6998($v1)
    ctx->pc = 0x296d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27032), GPR_U32(ctx, 0));
label_296d70:
    // 0x296d70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d74: 0x8c6469b4  lw          $a0, 0x69B4($v1)
    ctx->pc = 0x296d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296d78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d7c: 0xac6469b0  sw          $a0, 0x69B0($v1)
    ctx->pc = 0x296d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27056), GPR_U32(ctx, 4));
    // 0x296d80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x296D80u;
    {
        const bool branch_taken_0x296d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296d80) {
            ctx->pc = 0x296D98u;
            goto label_296d98;
        }
    }
    ctx->pc = 0x296D88u;
label_296d88:
    // 0x296d88: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d8c: 0x8c836998  lw          $v1, 0x6998($a0)
    ctx->pc = 0x296d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27032)));
    // 0x296d90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296d94: 0xac836998  sw          $v1, 0x6998($a0)
    ctx->pc = 0x296d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27032), GPR_U32(ctx, 3));
label_296d98:
    // 0x296d98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x296d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296d9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296da0: 0xa06469cc  sb          $a0, 0x69CC($v1)
    ctx->pc = 0x296da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27084), (uint8_t)GPR_U32(ctx, 4));
    // 0x296da4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296da8: 0xa06069cd  sb          $zero, 0x69CD($v1)
    ctx->pc = 0x296da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27085), (uint8_t)GPR_U32(ctx, 0));
    // 0x296dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296db0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x296db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x296db4: 0x3e00008  jr          $ra
    ctx->pc = 0x296DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296DBCu;
}
