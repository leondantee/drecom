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

// Function: Em_set_main
// Address: 0x16eaf0 - 0x16f6d4
void Em_set_main_0x16eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_set_main_0x16eaf0");
#endif

    switch (ctx->pc) {
        case 0x16eb70u: goto label_16eb70;
        case 0x16ebbcu: goto label_16ebbc;
        case 0x16ec58u: goto label_16ec58;
        case 0x16ec68u: goto label_16ec68;
        case 0x16eca8u: goto label_16eca8;
        case 0x16ed68u: goto label_16ed68;
        case 0x16ed98u: goto label_16ed98;
        case 0x16ee38u: goto label_16ee38;
        case 0x16eed4u: goto label_16eed4;
        case 0x16ef38u: goto label_16ef38;
        case 0x16ef5cu: goto label_16ef5c;
        case 0x16ef6cu: goto label_16ef6c;
        case 0x16ef8cu: goto label_16ef8c;
        case 0x16efc4u: goto label_16efc4;
        case 0x16f010u: goto label_16f010;
        case 0x16f024u: goto label_16f024;
        case 0x16f09cu: goto label_16f09c;
        case 0x16f16cu: goto label_16f16c;
        case 0x16f258u: goto label_16f258;
        case 0x16f268u: goto label_16f268;
        case 0x16f2f4u: goto label_16f2f4;
        case 0x16f310u: goto label_16f310;
        case 0x16f324u: goto label_16f324;
        case 0x16f334u: goto label_16f334;
        case 0x16f360u: goto label_16f360;
        case 0x16f374u: goto label_16f374;
        case 0x16f3a4u: goto label_16f3a4;
        case 0x16f3bcu: goto label_16f3bc;
        case 0x16f570u: goto label_16f570;
        case 0x16f5b4u: goto label_16f5b4;
        case 0x16f5d8u: goto label_16f5d8;
        case 0x16f62cu: goto label_16f62c;
        case 0x16f640u: goto label_16f640;
        case 0x16f6a0u: goto label_16f6a0;
        default: break;
    }

    ctx->pc = 0x16eaf0u;

    // 0x16eaf0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x16eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x16eaf4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x16eaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x16eaf8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16eaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16eafc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16eafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16eb00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16eb04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16eb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16eb08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16eb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16eb0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16eb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16eb10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16eb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16eb14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16eb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16eb18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16eb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16eb1c: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x16eb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x16eb20: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16eb24: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x16eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x16eb28: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x16eb28u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16eb2c: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x16eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x16eb30: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x16eb30u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16eb34: 0x24022e00  addiu       $v0, $zero, 0x2E00
    ctx->pc = 0x16eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11776));
    // 0x16eb38: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x16eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x16eb3c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x16eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x16eb40: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x16eb40u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16eb44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16eb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16eb48: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x16eb48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x16eb4c: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x16eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x16eb50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x16eb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16eb54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16eb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16eb58: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x16eb58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x16eb5c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16eb60: 0x2451bbc8  addiu       $s1, $v0, -0x4438
    ctx->pc = 0x16eb60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949832));
    // 0x16eb64: 0xa7a000dc  sh          $zero, 0xDC($sp)
    ctx->pc = 0x16eb64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 0));
    // 0x16eb68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16EB68u;
    {
        const bool branch_taken_0x16eb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eb68) {
            ctx->pc = 0x16EB88u;
            goto label_16eb88;
        }
    }
    ctx->pc = 0x16EB70u;
label_16eb70:
    // 0x16eb70: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x16eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x16eb74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x16eb74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x16eb78: 0x2631003c  addiu       $s1, $s1, 0x3C
    ctx->pc = 0x16eb78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x16eb7c: 0x97a200dc  lhu         $v0, 0xDC($sp)
    ctx->pc = 0x16eb7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x16eb80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16eb84: 0xa7a200dc  sh          $v0, 0xDC($sp)
    ctx->pc = 0x16eb84u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 2));
label_16eb88:
    // 0x16eb88: 0x97a200dc  lhu         $v0, 0xDC($sp)
    ctx->pc = 0x16eb88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x16eb8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16eb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16eb90: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x16eb90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x16eb94: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16EB94u;
    {
        const bool branch_taken_0x16eb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16eb94) {
            ctx->pc = 0x16EB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16eb70;
        }
    }
    ctx->pc = 0x16EB9Cu;
    // 0x16eb9c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16eba0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16eba4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x16eba4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16eba8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16eba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16ebac: 0xac20bb40  sw          $zero, -0x44C0($at)
    ctx->pc = 0x16ebacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BB40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB40u, _value); } while (0);
    // 0x16ebb0: 0xa7a000dc  sh          $zero, 0xDC($sp)
    ctx->pc = 0x16ebb0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 0));
    // 0x16ebb4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16EBB4u;
    {
        const bool branch_taken_0x16ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ebb4) {
            ctx->pc = 0x16EC08u;
            goto label_16ec08;
        }
    }
    ctx->pc = 0x16EBBCu;
label_16ebbc:
    // 0x16ebbc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16ebbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16ebc0: 0x8c24bb40  lw          $a0, -0x44C0($at)
    ctx->pc = 0x16ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47BB40u));
    // 0x16ebc4: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x16ebc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16ebc8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x16ebc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16ebcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16ebd0: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x16ebd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16ebd4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x16EBD4u;
    {
        const bool branch_taken_0x16ebd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ebd4) {
            ctx->pc = 0x16EBF0u;
            goto label_16ebf0;
        }
    }
    ctx->pc = 0x16EBDCu;
    // 0x16ebdc: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x16ebdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16ebe0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16ebe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ebe4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x16ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16ebe8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16ebe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16ebec: 0xac25bb40  sw          $a1, -0x44C0($at)
    ctx->pc = 0x16ebecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x47BB40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB40u, _value); } while (0);
label_16ebf0:
    // 0x16ebf0: 0x26820030  addiu       $v0, $s4, 0x30
    ctx->pc = 0x16ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x16ebf4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x16ebf4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16ebf8: 0x97a500dc  lhu         $a1, 0xDC($sp)
    ctx->pc = 0x16ebf8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x16ebfc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x16ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16ec00: 0xa7a200dc  sh          $v0, 0xDC($sp)
    ctx->pc = 0x16ec00u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 2));
    // 0x16ec04: 0x0  nop
    ctx->pc = 0x16ec04u;
    // NOP
label_16ec08:
    // 0x16ec08: 0x97a200dc  lhu         $v0, 0xDC($sp)
    ctx->pc = 0x16ec08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x16ec0c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x16ec0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ec10: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16ec14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ec18: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x16ec18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16ec1c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x16EC1Cu;
    {
        const bool branch_taken_0x16ec1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ec1c) {
            ctx->pc = 0x16EBBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ebbc;
        }
    }
    ctx->pc = 0x16EC24u;
    // 0x16ec24: 0x8ee20a68  lw          $v0, 0xA68($s7)
    ctx->pc = 0x16ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16ec28: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x16ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x16ec2c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x16ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16ec30: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x16ec30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x16ec34: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16ec38: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x16ec38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16ec3c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x16ec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16ec40: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x16ec40u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x16ec44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16ec44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16ec48: 0xa0200e05  sb          $zero, 0xE05($at)
    ctx->pc = 0x16ec48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D0E05u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E05u, _value); } while (0);
    // 0x16ec4c: 0xa7a000dc  sh          $zero, 0xDC($sp)
    ctx->pc = 0x16ec4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 0));
    // 0x16ec50: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x16EC50u;
    {
        const bool branch_taken_0x16ec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ec50) {
            ctx->pc = 0x16F670u;
            goto label_16f670;
        }
    }
    ctx->pc = 0x16EC58u;
label_16ec58:
    // 0x16ec58: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x16ec58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16ec5c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x16ec5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16ec60: 0xc05ba8c  jal         func_16EA30
    ctx->pc = 0x16EC60u;
    SET_GPR_U32(ctx, 31, 0x16EC68u);
    ctx->pc = 0x16EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EA30u, 0x16EC60u, 0x16EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC68u;
label_16ec68:
    // 0x16ec68: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x16ec68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16ec6c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x16ec6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16ec70: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x16ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ec74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16ec78: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x16ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x16ec7c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x16ec7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16ec80: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x16ec80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16ec84: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x16ec84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x16ec88: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x16ec88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16ec8c: 0xa60210a4  sh          $v0, 0x10A4($s0)
    ctx->pc = 0x16ec8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4260), (uint16_t)GPR_U32(ctx, 2));
    // 0x16ec90: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16ec94: 0x2451bbc8  addiu       $s1, $v0, -0x4438
    ctx->pc = 0x16ec94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949832));
    // 0x16ec98: 0xa7a000de  sh          $zero, 0xDE($sp)
    ctx->pc = 0x16ec98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 222), (uint16_t)GPR_U32(ctx, 0));
    // 0x16ec9c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x16ec9cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16eca0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16ECA0u;
    {
        const bool branch_taken_0x16eca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eca0) {
            ctx->pc = 0x16ECD8u;
            goto label_16ecd8;
        }
    }
    ctx->pc = 0x16ECA8u;
label_16eca8:
    // 0x16eca8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16ecac: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x16ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16ecb0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16ECB0u;
    {
        const bool branch_taken_0x16ecb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ecb0) {
            ctx->pc = 0x16ECC8u;
            goto label_16ecc8;
        }
    }
    ctx->pc = 0x16ECB8u;
    // 0x16ecb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ecbc: 0xa7a200de  sh          $v0, 0xDE($sp)
    ctx->pc = 0x16ecbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 222), (uint16_t)GPR_U32(ctx, 2));
    // 0x16ecc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16ECC0u;
    {
        const bool branch_taken_0x16ecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ecc0) {
            ctx->pc = 0x16ECE8u;
            goto label_16ece8;
        }
    }
    ctx->pc = 0x16ECC8u;
label_16ecc8:
    // 0x16ecc8: 0x2631003c  addiu       $s1, $s1, 0x3C
    ctx->pc = 0x16ecc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x16eccc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x16ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x16ecd0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x16ecd0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ecd4: 0x0  nop
    ctx->pc = 0x16ecd4u;
    // NOP
label_16ecd8:
    // 0x16ecd8: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x16ecd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x16ecdc: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x16ecdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x16ece0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x16ECE0u;
    {
        const bool branch_taken_0x16ece0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ece0) {
            ctx->pc = 0x16ECA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16eca8;
        }
    }
    ctx->pc = 0x16ECE8u;
label_16ece8:
    // 0x16ece8: 0x97a200de  lhu         $v0, 0xDE($sp)
    ctx->pc = 0x16ece8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 222)));
    // 0x16ecec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x16ECECu;
    {
        const bool branch_taken_0x16ecec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ecec) {
            ctx->pc = 0x16ED70u;
            goto label_16ed70;
        }
    }
    ctx->pc = 0x16ECF4u;
    // 0x16ecf4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16ecf8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16ecf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16ecfc: 0xa2030012  sb          $v1, 0x12($s0)
    ctx->pc = 0x16ecfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x16ed00: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x16ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16ed04: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x16ed04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x16ed08: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x16ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16ed0c: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x16ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x16ed10: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x16ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x16ed14: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x16ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
    // 0x16ed18: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x16ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16ed1c: 0xae020360  sw          $v0, 0x360($s0)
    ctx->pc = 0x16ed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 2));
    // 0x16ed20: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x16ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x16ed24: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x16ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x16ed28: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x16ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x16ed2c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x16ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16ed30: 0xae031320  sw          $v1, 0x1320($s0)
    ctx->pc = 0x16ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4896), GPR_U32(ctx, 3));
    // 0x16ed34: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x16ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x16ed38: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x16ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x16ed3c: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x16ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x16ed40: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x16ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x16ed44: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x16ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x16ed48: 0xae0201f8  sw          $v0, 0x1F8($s0)
    ctx->pc = 0x16ed48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
    // 0x16ed4c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x16ed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x16ed50: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x16ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x16ed54: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x16ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x16ed58: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16ed58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16ed5c: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x16ed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x16ed60: 0xc09940c  jal         func_265030
    ctx->pc = 0x16ED60u;
    SET_GPR_U32(ctx, 31, 0x16ED68u);
    ctx->pc = 0x265030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265030u, 0x16ED60u, 0x16ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED68u;
label_16ed68:
    // 0x16ed68: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x16ED68u;
    {
        const bool branch_taken_0x16ed68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ed68) {
            ctx->pc = 0x16F1F8u;
            goto label_16f1f8;
        }
    }
    ctx->pc = 0x16ED70u;
label_16ed70:
    // 0x16ed70: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x16ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16ed74: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x16ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16ed78: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16ed7c: 0x24425770  addiu       $v0, $v0, 0x5770
    ctx->pc = 0x16ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22384));
    // 0x16ed80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ed84: 0x8ee50a68  lw          $a1, 0xA68($s7)
    ctx->pc = 0x16ed84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16ed88: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x16ed88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ed8c: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x16ed8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x16ed90: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x16ED90u;
    SET_GPR_U32(ctx, 31, 0x16ED98u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x16ED90u, 0x16ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED98u;
label_16ed98:
    // 0x16ed98: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x16ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x16ed9c: 0x8ef30a68  lw          $s3, 0xA68($s7)
    ctx->pc = 0x16ed9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16eda0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x16eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x16eda4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16eda8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x16eda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x16edac: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x16edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x16edb0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16edb4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x16edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x16edb8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x16edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x16edbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16EDBCu;
    {
        const bool branch_taken_0x16edbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16edbc) {
            ctx->pc = 0x16EDE0u;
            goto label_16ede0;
        }
    }
    ctx->pc = 0x16EDC4u;
    // 0x16edc4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x16edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x16edc8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16edcc: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x16edccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x16edd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16edd4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x16edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x16edd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16EDD8u;
    {
        const bool branch_taken_0x16edd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16edd8) {
            ctx->pc = 0x16EDE8u;
            goto label_16ede8;
        }
    }
    ctx->pc = 0x16EDE0u;
label_16ede0:
    // 0x16ede0: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x16ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x16ede4: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x16ede4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_16ede8:
    // 0x16ede8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x16ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x16edec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16EDECu;
    {
        const bool branch_taken_0x16edec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16edec) {
            ctx->pc = 0x16EE08u;
            goto label_16ee08;
        }
    }
    ctx->pc = 0x16EDF4u;
    // 0x16edf4: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x16edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x16edf8: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x16edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x16edfc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x16edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x16ee00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16EE00u;
    {
        const bool branch_taken_0x16ee00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee00) {
            ctx->pc = 0x16EE10u;
            goto label_16ee10;
        }
    }
    ctx->pc = 0x16EE08u;
label_16ee08:
    // 0x16ee08: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x16ee08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x16ee0c: 0x0  nop
    ctx->pc = 0x16ee0cu;
    // NOP
label_16ee10:
    // 0x16ee10: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x16ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x16ee14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16EE14u;
    {
        const bool branch_taken_0x16ee14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee14) {
            ctx->pc = 0x16EE40u;
            goto label_16ee40;
        }
    }
    ctx->pc = 0x16EE1Cu;
    // 0x16ee1c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x16ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x16ee20: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16ee24: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x16ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x16ee28: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x16ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x16ee2c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x16ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16ee30: 0xc0794b0  jal         func_1E52C0
    ctx->pc = 0x16EE30u;
    SET_GPR_U32(ctx, 31, 0x16EE38u);
    ctx->pc = 0x1E52C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E52C0u, 0x16EE30u, 0x16EE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EE38u;
label_16ee38:
    // 0x16ee38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16EE38u;
    {
        const bool branch_taken_0x16ee38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee38) {
            ctx->pc = 0x16EE48u;
            goto label_16ee48;
        }
    }
    ctx->pc = 0x16EE40u;
label_16ee40:
    // 0x16ee40: 0xae0001ec  sw          $zero, 0x1EC($s0)
    ctx->pc = 0x16ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
    // 0x16ee44: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x16ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_16ee48:
    // 0x16ee48: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x16ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x16ee4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16EE4Cu;
    {
        const bool branch_taken_0x16ee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee4c) {
            ctx->pc = 0x16EE6Cu;
            goto label_16ee6c;
        }
    }
    ctx->pc = 0x16EE54u;
    // 0x16ee54: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x16ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x16ee58: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x16ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16ee5c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x16ee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x16ee60: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x16ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x16ee64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EE64u;
    {
        const bool branch_taken_0x16ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee64) {
            ctx->pc = 0x16EE78u;
            goto label_16ee78;
        }
    }
    ctx->pc = 0x16EE6Cu;
label_16ee6c:
    // 0x16ee6c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x16ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x16ee70: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x16ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x16ee74: 0x0  nop
    ctx->pc = 0x16ee74u;
    // NOP
label_16ee78:
    // 0x16ee78: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x16ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x16ee7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16EE7Cu;
    {
        const bool branch_taken_0x16ee7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee7c) {
            ctx->pc = 0x16EE9Cu;
            goto label_16ee9c;
        }
    }
    ctx->pc = 0x16EE84u;
    // 0x16ee84: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x16ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x16ee88: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16ee8c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x16ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x16ee90: 0xae021320  sw          $v0, 0x1320($s0)
    ctx->pc = 0x16ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4896), GPR_U32(ctx, 2));
    // 0x16ee94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EE94u;
    {
        const bool branch_taken_0x16ee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee94) {
            ctx->pc = 0x16EEA8u;
            goto label_16eea8;
        }
    }
    ctx->pc = 0x16EE9Cu;
label_16ee9c:
    // 0x16ee9c: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x16ee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x16eea0: 0xae001320  sw          $zero, 0x1320($s0)
    ctx->pc = 0x16eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4896), GPR_U32(ctx, 0));
    // 0x16eea4: 0x0  nop
    ctx->pc = 0x16eea4u;
    // NOP
label_16eea8:
    // 0x16eea8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x16eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x16eeac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16EEACu;
    {
        const bool branch_taken_0x16eeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eeac) {
            ctx->pc = 0x16EEDCu;
            goto label_16eedc;
        }
    }
    ctx->pc = 0x16EEB4u;
    // 0x16eeb4: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x16eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x16eeb8: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x16eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16eebc: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x16eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x16eec0: 0xae0401f8  sw          $a0, 0x1F8($s0)
    ctx->pc = 0x16eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 4));
    // 0x16eec4: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x16eec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x16eec8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x16eec8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x16eecc: 0xc05bdb8  jal         func_16F6E0
    ctx->pc = 0x16EECCu;
    SET_GPR_U32(ctx, 31, 0x16EED4u);
    ctx->pc = 0x16F6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F6E0u, 0x16EECCu, 0x16EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EED4u;
label_16eed4:
    // 0x16eed4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EED4u;
    {
        const bool branch_taken_0x16eed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eed4) {
            ctx->pc = 0x16EEE8u;
            goto label_16eee8;
        }
    }
    ctx->pc = 0x16EEDCu;
label_16eedc:
    // 0x16eedc: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x16eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x16eee0: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x16eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    // 0x16eee4: 0x0  nop
    ctx->pc = 0x16eee4u;
    // NOP
label_16eee8:
    // 0x16eee8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x16eeec: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x16eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x16eef0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16eef4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16eef8: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x16eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x16eefc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ef00: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x16ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
    // 0x16ef04: 0xae1500a8  sw          $s5, 0xA8($s0)
    ctx->pc = 0x16ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 21));
    // 0x16ef08: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x16ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16ef0c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x16ef0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x16ef10: 0x14a7000b  bne         $a1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x16EF10u;
    {
        const bool branch_taken_0x16ef10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x16ef10) {
            ctx->pc = 0x16EF40u;
            goto label_16ef40;
        }
    }
    ctx->pc = 0x16EF18u;
    // 0x16ef18: 0x8fa800b4  lw          $t0, 0xB4($sp)
    ctx->pc = 0x16ef18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16ef1c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x16ef1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x16ef20: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x16ef20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x16ef24: 0x24062700  addiu       $a2, $zero, 0x2700
    ctx->pc = 0x16ef24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9984));
    // 0x16ef28: 0x73c03e28  paddub      $a3, $fp, $zero
    ctx->pc = 0x16ef28u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x16ef2c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x16ef2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ef30: 0xc05e858  jal         func_17A160
    ctx->pc = 0x16EF30u;
    SET_GPR_U32(ctx, 31, 0x16EF38u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x16EF30u, 0x16EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF38u;
label_16ef38:
    // 0x16ef38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16EF38u;
    {
        const bool branch_taken_0x16ef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ef38) {
            ctx->pc = 0x16EF60u;
            goto label_16ef60;
        }
    }
    ctx->pc = 0x16EF40u;
label_16ef40:
    // 0x16ef40: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x16ef40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16ef44: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x16ef44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x16ef48: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x16ef48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16ef4c: 0x73c03e28  paddub      $a3, $fp, $zero
    ctx->pc = 0x16ef4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x16ef50: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x16ef50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ef54: 0xc05e858  jal         func_17A160
    ctx->pc = 0x16EF54u;
    SET_GPR_U32(ctx, 31, 0x16EF5Cu);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x16EF54u, 0x16EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF5Cu;
label_16ef5c:
    // 0x16ef5c: 0x0  nop
    ctx->pc = 0x16ef5cu;
    // NOP
label_16ef60:
    // 0x16ef60: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x16ef60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x16ef64: 0xc05e964  jal         func_17A590
    ctx->pc = 0x16EF64u;
    SET_GPR_U32(ctx, 31, 0x16EF6Cu);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x16EF64u, 0x16EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF6Cu;
label_16ef6c:
    // 0x16ef6c: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x16ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x16ef70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16EF70u;
    {
        const bool branch_taken_0x16ef70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ef70) {
            ctx->pc = 0x16EF90u;
            goto label_16ef90;
        }
    }
    ctx->pc = 0x16EF78u;
    // 0x16ef78: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x16ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x16ef7c: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x16ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16ef80: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x16ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16ef84: 0xc062b60  jal         func_18AD80
    ctx->pc = 0x16EF84u;
    SET_GPR_U32(ctx, 31, 0x16EF8Cu);
    ctx->pc = 0x18AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD80u, 0x16EF84u, 0x16EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF8Cu;
label_16ef8c:
    // 0x16ef8c: 0x0  nop
    ctx->pc = 0x16ef8cu;
    // NOP
label_16ef90:
    // 0x16ef90: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x16ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x16ef94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16EF94u;
    {
        const bool branch_taken_0x16ef94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ef94) {
            ctx->pc = 0x16EFC8u;
            goto label_16efc8;
        }
    }
    ctx->pc = 0x16EF9Cu;
    // 0x16ef9c: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x16ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x16efa0: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x16efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x16efa4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16efa8: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x16efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x16efac: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x16efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x16efb0: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x16efb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16efb4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x16efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16efb8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x16efb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16efbc: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x16EFBCu;
    SET_GPR_U32(ctx, 31, 0x16EFC4u);
    ctx->pc = 0x18B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0B0u, 0x16EFBCu, 0x16EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EFC4u;
label_16efc4:
    // 0x16efc4: 0x0  nop
    ctx->pc = 0x16efc4u;
    // NOP
label_16efc8:
    // 0x16efc8: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x16efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x16efcc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16efd0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16efd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16efd8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16efdc: 0x8ee20a68  lw          $v0, 0xA68($s7)
    ctx->pc = 0x16efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16efe0: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x16efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x16efe4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x16efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16efe8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x16efe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x16efec: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16efecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16eff0: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x16eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x16eff4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16EFF4u;
    {
        const bool branch_taken_0x16eff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eff4) {
            ctx->pc = 0x16F018u;
            goto label_16f018;
        }
    }
    ctx->pc = 0x16EFFCu;
    // 0x16effc: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x16effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x16f000: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x16f000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16f004: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f004u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f008: 0xc099274  jal         func_2649D0
    ctx->pc = 0x16F008u;
    SET_GPR_U32(ctx, 31, 0x16F010u);
    ctx->pc = 0x2649D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2649D0u, 0x16F008u, 0x16F010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F010u;
label_16f010:
    // 0x16f010: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16F010u;
    {
        const bool branch_taken_0x16f010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f010) {
            ctx->pc = 0x16F050u;
            goto label_16f050;
        }
    }
    ctx->pc = 0x16F018u;
label_16f018:
    // 0x16f018: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x16f018u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f01c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16F01Cu;
    {
        const bool branch_taken_0x16f01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f01c) {
            ctx->pc = 0x16F040u;
            goto label_16f040;
        }
    }
    ctx->pc = 0x16F024u;
label_16f024:
    // 0x16f024: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x16f024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x16f028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f02c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16f030: 0xac4001ac  sw          $zero, 0x1AC($v0)
    ctx->pc = 0x16f030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 0));
    // 0x16f034: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x16f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x16f038: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x16f038u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16f03c: 0x0  nop
    ctx->pc = 0x16f03cu;
    // NOP
label_16f040:
    // 0x16f040: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x16f040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x16f044: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x16f044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x16f048: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16F048u;
    {
        const bool branch_taken_0x16f048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f048) {
            ctx->pc = 0x16F024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f024;
        }
    }
    ctx->pc = 0x16F050u;
label_16f050:
    // 0x16f050: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x16f050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16f054: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f058: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x16f058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f05c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x16f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16f060: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x16f060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x16f064: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16f068: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x16f068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x16f06c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x16f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16f070: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x16f070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x16f074: 0xae1e00a4  sw          $fp, 0xA4($s0)
    ctx->pc = 0x16f074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 30));
    // 0x16f078: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16f078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16f07c: 0xae020368  sw          $v0, 0x368($s0)
    ctx->pc = 0x16f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x16f080: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x16f080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x16f084: 0xae020360  sw          $v0, 0x360($s0)
    ctx->pc = 0x16f084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 2));
    // 0x16f088: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16f088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16f08c: 0x2451bbc8  addiu       $s1, $v0, -0x4438
    ctx->pc = 0x16f08cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949832));
    // 0x16f090: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x16f090u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f094: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16F094u;
    {
        const bool branch_taken_0x16f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f094) {
            ctx->pc = 0x16F0B8u;
            goto label_16f0b8;
        }
    }
    ctx->pc = 0x16F09Cu;
label_16f09c:
    // 0x16f09c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16f0a0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x16f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x16f0a4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16F0A4u;
    {
        const bool branch_taken_0x16f0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f0a4) {
            ctx->pc = 0x16F0C8u;
            goto label_16f0c8;
        }
    }
    ctx->pc = 0x16F0ACu;
    // 0x16f0ac: 0x2631003c  addiu       $s1, $s1, 0x3C
    ctx->pc = 0x16f0acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x16f0b0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x16f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x16f0b4: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x16f0b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16f0b8:
    // 0x16f0b8: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x16f0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x16f0bc: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x16f0bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x16f0c0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16F0C0u;
    {
        const bool branch_taken_0x16f0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f0c0) {
            ctx->pc = 0x16F09Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f09c;
        }
    }
    ctx->pc = 0x16F0C8u;
label_16f0c8:
    // 0x16f0c8: 0xafb500d0  sw          $s5, 0xD0($sp)
    ctx->pc = 0x16f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 21));
    // 0x16f0cc: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x16f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x16f0d0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x16f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16f0d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x16f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x16f0d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x16f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16f0dc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x16f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x16f0e0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16f0e4: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x16f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x16f0e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16f0ec: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x16f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x16f0f0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x16f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x16f0f4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x16f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x16f0f8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x16f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16f0fc: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x16f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x16f100: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16f104: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x16f104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x16f108: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x16f108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x16f10c: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x16f10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x16f110: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x16f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16f114: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x16f114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x16f118: 0x260201ac  addiu       $v0, $s0, 0x1AC
    ctx->pc = 0x16f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 428));
    // 0x16f11c: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x16f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x16f120: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x16f120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16f124: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x16f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x16f128: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16F128u;
    {
        const bool branch_taken_0x16f128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f128) {
            ctx->pc = 0x16F160u;
            goto label_16f160;
        }
    }
    ctx->pc = 0x16F130u;
    // 0x16f130: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16f130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x16f134: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x16f134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x16f138: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16f138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16f13c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16f140: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x16f140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x16f144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f148: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x16f148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16f14c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16f14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16f150: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x16f150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16f154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f158: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x16f158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x16f15c: 0x0  nop
    ctx->pc = 0x16f15cu;
    // NOP
label_16f160:
    // 0x16f160: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x16f160u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f164: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16F164u;
    {
        const bool branch_taken_0x16f164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f164) {
            ctx->pc = 0x16F1A0u;
            goto label_16f1a0;
        }
    }
    ctx->pc = 0x16F16Cu;
label_16f16c:
    // 0x16f16c: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x16f16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x16f170: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x16f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16f174: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f17c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16f180: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16f180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16f184: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x16f184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x16f188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f18c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x16f18cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x16f190: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f194: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x16f194u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x16f198: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x16f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x16f19c: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x16f19cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16f1a0:
    // 0x16f1a0: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x16f1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x16f1a4: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x16f1a8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x16f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x16f1ac: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16f1b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16f1b4: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x16f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x16f1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f1bc: 0x94420010  lhu         $v0, 0x10($v0)
    ctx->pc = 0x16f1bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16f1c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16f1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16f1c4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x16f1c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16f1c8: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x16F1C8u;
    {
        const bool branch_taken_0x16f1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f1c8) {
            ctx->pc = 0x16F16Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f16c;
        }
    }
    ctx->pc = 0x16F1D0u;
    // 0x16f1d0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x16f1d4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x16f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x16f1d8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16f1dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16f1e0: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x16f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x16f1e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f1e8: 0x94420010  lhu         $v0, 0x10($v0)
    ctx->pc = 0x16f1e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16f1ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16f1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16f1f0: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x16f1f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16f1f4: 0x0  nop
    ctx->pc = 0x16f1f4u;
    // NOP
label_16f1f8:
    // 0x16f1f8: 0xa2001308  sb          $zero, 0x1308($s0)
    ctx->pc = 0x16f1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4872), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f1fc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x16f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x16f200: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16f200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16f204: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x16f204u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f208: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x16f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x16f20c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16f210: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x16f210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f214: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x16f214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x16f218: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x16f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x16f21c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x16f21cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f220: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x16f220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x16f224: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16f224u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x16f228: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x16f228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x16f22c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16f22cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f230: 0x26020170  addiu       $v0, $s0, 0x170
    ctx->pc = 0x16f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x16f234: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16f234u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16f238: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x16f238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f23c: 0xe6001314  swc1        $f0, 0x1314($s0)
    ctx->pc = 0x16f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4884), bits); }
    // 0x16f240: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x16f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f244: 0xe6001318  swc1        $f0, 0x1318($s0)
    ctx->pc = 0x16f244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4888), bits); }
    // 0x16f248: 0x26110180  addiu       $s1, $s0, 0x180
    ctx->pc = 0x16f248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x16f24c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x16f24cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x16f250: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x16F250u;
    SET_GPR_U32(ctx, 31, 0x16F258u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x16F250u, 0x16F258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F258u;
label_16f258:
    // 0x16f258: 0x26110190  addiu       $s1, $s0, 0x190
    ctx->pc = 0x16f258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x16f25c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x16f25cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x16f260: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x16F260u;
    SET_GPR_U32(ctx, 31, 0x16F268u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x16F260u, 0x16F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F268u;
label_16f268:
    // 0x16f268: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x16f268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x16f26c: 0xa60210a6  sh          $v0, 0x10A6($s0)
    ctx->pc = 0x16f26cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f270: 0xa20010a9  sb          $zero, 0x10A9($s0)
    ctx->pc = 0x16f270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4265), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f274: 0x3c02463b  lui         $v0, 0x463B
    ctx->pc = 0x16f274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17979 << 16));
    // 0x16f278: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x16f278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x16f27c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f280: 0x0  nop
    ctx->pc = 0x16f280u;
    // NOP
    // 0x16f284: 0xe60011e8  swc1        $f0, 0x11E8($s0)
    ctx->pc = 0x16f284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4584), bits); }
    // 0x16f288: 0xa20010a8  sb          $zero, 0x10A8($s0)
    ctx->pc = 0x16f288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f28c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16f290: 0x244257c0  addiu       $v0, $v0, 0x57C0
    ctx->pc = 0x16f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22464));
    // 0x16f294: 0xae021228  sw          $v0, 0x1228($s0)
    ctx->pc = 0x16f294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4648), GPR_U32(ctx, 2));
    // 0x16f298: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16f298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16f29c: 0xae02121c  sw          $v0, 0x121C($s0)
    ctx->pc = 0x16f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 2));
    // 0x16f2a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f2a4: 0xa2041219  sb          $a0, 0x1219($s0)
    ctx->pc = 0x16f2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x16f2a8: 0xa20011ee  sb          $zero, 0x11EE($s0)
    ctx->pc = 0x16f2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f2ac: 0xa20009db  sb          $zero, 0x9DB($s0)
    ctx->pc = 0x16f2acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2523), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f2b0: 0xa20009da  sb          $zero, 0x9DA($s0)
    ctx->pc = 0x16f2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2522), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f2b4: 0xa60009d8  sh          $zero, 0x9D8($s0)
    ctx->pc = 0x16f2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2520), (uint16_t)GPR_U32(ctx, 0));
    // 0x16f2b8: 0x260309d8  addiu       $v1, $s0, 0x9D8
    ctx->pc = 0x16f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2520));
    // 0x16f2bc: 0x260209dc  addiu       $v0, $s0, 0x9DC
    ctx->pc = 0x16f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2524));
    // 0x16f2c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f2c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x16f2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x16f2c8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x16f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x16f2cc: 0xa602122c  sh          $v0, 0x122C($s0)
    ctx->pc = 0x16f2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4652), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f2d0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x16f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x16f2d4: 0xa602122e  sh          $v0, 0x122E($s0)
    ctx->pc = 0x16f2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4654), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f2d8: 0x97a200de  lhu         $v0, 0xDE($sp)
    ctx->pc = 0x16f2d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 222)));
    // 0x16f2dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16F2DCu;
    {
        const bool branch_taken_0x16f2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f2dc) {
            ctx->pc = 0x16F300u;
            goto label_16f300;
        }
    }
    ctx->pc = 0x16F2E4u;
    // 0x16f2e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f2e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f2e8: 0x8ee50a68  lw          $a1, 0xA68($s7)
    ctx->pc = 0x16f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16f2ec: 0xc095228  jal         func_2548A0
    ctx->pc = 0x16F2ECu;
    SET_GPR_U32(ctx, 31, 0x16F2F4u);
    ctx->pc = 0x2548A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A0u, 0x16F2ECu, 0x16F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F2F4u;
label_16f2f4:
    // 0x16f2f4: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16f2f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16F2F8u;
    {
        const bool branch_taken_0x16f2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f2f8) {
            ctx->pc = 0x16F318u;
            goto label_16f318;
        }
    }
    ctx->pc = 0x16F300u;
label_16f300:
    // 0x16f300: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f300u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f304: 0x8ee50a68  lw          $a1, 0xA68($s7)
    ctx->pc = 0x16f304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16f308: 0xc0951c0  jal         func_254700
    ctx->pc = 0x16F308u;
    SET_GPR_U32(ctx, 31, 0x16F310u);
    ctx->pc = 0x254700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254700u, 0x16F308u, 0x16F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F310u;
label_16f310:
    // 0x16f310: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16f310u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16f314: 0x0  nop
    ctx->pc = 0x16f314u;
    // NOP
label_16f318:
    // 0x16f318: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f318u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f31c: 0xc096558  jal         func_259560
    ctx->pc = 0x16F31Cu;
    SET_GPR_U32(ctx, 31, 0x16F324u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x16F31Cu, 0x16F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F324u;
label_16f324:
    // 0x16f324: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f324u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f328: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x16f328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16f32c: 0xc05be64  jal         func_16F990
    ctx->pc = 0x16F32Cu;
    SET_GPR_U32(ctx, 31, 0x16F334u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x16F32Cu, 0x16F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F334u;
label_16f334:
    // 0x16f334: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f338: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f33c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16f340: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16F340u;
    {
        const bool branch_taken_0x16f340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f340) {
            ctx->pc = 0x16F378u;
            goto label_16f378;
        }
    }
    ctx->pc = 0x16F348u;
    // 0x16f348: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16f34c: 0x2445fffe  addiu       $a1, $v0, -0x2
    ctx->pc = 0x16f34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x16f350: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f350u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f354: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x16f354u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f358: 0xc05bf68  jal         func_16FDA0
    ctx->pc = 0x16F358u;
    SET_GPR_U32(ctx, 31, 0x16F360u);
    ctx->pc = 0x16FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FDA0u, 0x16F358u, 0x16F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F360u;
label_16f360:
    // 0x16f360: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f360u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f364: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x16f364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16f368: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f36c: 0xc05bf68  jal         func_16FDA0
    ctx->pc = 0x16F36Cu;
    SET_GPR_U32(ctx, 31, 0x16F374u);
    ctx->pc = 0x16FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FDA0u, 0x16F36Cu, 0x16F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F374u;
label_16f374:
    // 0x16f374: 0x0  nop
    ctx->pc = 0x16f374u;
    // NOP
label_16f378:
    // 0x16f378: 0x92040012  lbu         $a0, 0x12($s0)
    ctx->pc = 0x16f378u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f37c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x16f37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x16f380: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x16f380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16f384: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x16F384u;
    {
        const bool branch_taken_0x16f384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f384) {
            ctx->pc = 0x16F3C0u;
            goto label_16f3c0;
        }
    }
    ctx->pc = 0x16F38Cu;
    // 0x16f38c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16f390: 0x2445fff7  addiu       $a1, $v0, -0x9
    ctx->pc = 0x16f390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x16f394: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f398: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x16f398u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f39c: 0xc05bf68  jal         func_16FDA0
    ctx->pc = 0x16F39Cu;
    SET_GPR_U32(ctx, 31, 0x16F3A4u);
    ctx->pc = 0x16FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FDA0u, 0x16F39Cu, 0x16F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F3A4u;
label_16f3a4:
    // 0x16f3a4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16f3a8: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x16f3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16f3ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f3acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f3b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f3b4: 0xc05bf68  jal         func_16FDA0
    ctx->pc = 0x16F3B4u;
    SET_GPR_U32(ctx, 31, 0x16F3BCu);
    ctx->pc = 0x16FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FDA0u, 0x16F3B4u, 0x16F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F3BCu;
label_16f3bc:
    // 0x16f3bc: 0x0  nop
    ctx->pc = 0x16f3bcu;
    // NOP
label_16f3c0:
    // 0x16f3c0: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x16f3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x16f3c4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f3c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f3c8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x16f3c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f3cc: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x16F3CCu;
    {
        const bool branch_taken_0x16f3cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f3cc) {
            ctx->pc = 0x16F460u;
            goto label_16f460;
        }
    }
    ctx->pc = 0x16F3D4u;
    // 0x16f3d4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f3d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f3d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f3dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16f3e0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x16F3E0u;
    {
        const bool branch_taken_0x16f3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f3e0) {
            ctx->pc = 0x16F460u;
            goto label_16f460;
        }
    }
    ctx->pc = 0x16F3E8u;
    // 0x16f3e8: 0x92110012  lbu         $s1, 0x12($s0)
    ctx->pc = 0x16f3e8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f3ec: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x16f3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x16f3f0: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x16f3f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16f3f4: 0x1052001a  beq         $v0, $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x16F3F4u;
    {
        const bool branch_taken_0x16f3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x16f3f4) {
            ctx->pc = 0x16F460u;
            goto label_16f460;
        }
    }
    ctx->pc = 0x16F3FCu;
    // 0x16f3fc: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f3fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f400: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f404: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x16f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16f408: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16F408u;
    {
        const bool branch_taken_0x16f408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f408) {
            ctx->pc = 0x16F460u;
            goto label_16f460;
        }
    }
    ctx->pc = 0x16F410u;
    // 0x16f410: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f414: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f418: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x16f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x16f41c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16F41Cu;
    {
        const bool branch_taken_0x16f41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f41c) {
            ctx->pc = 0x16F460u;
            goto label_16f460;
        }
    }
    ctx->pc = 0x16F424u;
    // 0x16f424: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f428: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f42c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x16f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16f430: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16F430u;
    {
        const bool branch_taken_0x16f430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f430) {
            ctx->pc = 0x16F460u;
            goto label_16f460;
        }
    }
    ctx->pc = 0x16F438u;
    // 0x16f438: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f43c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f440: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x16f440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x16f444: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F444u;
    {
        const bool branch_taken_0x16f444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f444) {
            ctx->pc = 0x16F460u;
            goto label_16f460;
        }
    }
    ctx->pc = 0x16F44Cu;
    // 0x16f44c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f44cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f450: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f454: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x16f454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16f458: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F458u;
    {
        const bool branch_taken_0x16f458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x16f458) {
            ctx->pc = 0x16F478u;
            goto label_16f478;
        }
    }
    ctx->pc = 0x16F460u;
label_16f460:
    // 0x16f460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f464: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x16f464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x16f468: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x16f468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f46c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x16f46cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f470: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x16f470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x16f474: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x16f474u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_16f478:
    // 0x16f478: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f47c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f480: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f484: 0x1445000a  bne         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x16F484u;
    {
        const bool branch_taken_0x16f484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x16f484) {
            ctx->pc = 0x16F4B0u;
            goto label_16f4b0;
        }
    }
    ctx->pc = 0x16F48Cu;
    // 0x16f48c: 0x92040012  lbu         $a0, 0x12($s0)
    ctx->pc = 0x16f48cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f490: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x16f490u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x16f494: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x16f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16f498: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F498u;
    {
        const bool branch_taken_0x16f498 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f498) {
            ctx->pc = 0x16F4B0u;
            goto label_16f4b0;
        }
    }
    ctx->pc = 0x16F4A0u;
    // 0x16f4a0: 0x9613000c  lhu         $s3, 0xC($s0)
    ctx->pc = 0x16f4a0u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f4a4: 0x36620400  ori         $v0, $s3, 0x400
    ctx->pc = 0x16f4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1024);
    // 0x16f4a8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x16f4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f4ac: 0x0  nop
    ctx->pc = 0x16f4acu;
    // NOP
label_16f4b0:
    // 0x16f4b0: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f4b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f4b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f4b8: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x16f4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x16f4bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16F4BCu;
    {
        const bool branch_taken_0x16f4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f4bc) {
            ctx->pc = 0x16F4E8u;
            goto label_16f4e8;
        }
    }
    ctx->pc = 0x16F4C4u;
    // 0x16f4c4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f4c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f4cc: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x16f4ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x16f4d0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F4D0u;
    {
        const bool branch_taken_0x16f4d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f4d0) {
            ctx->pc = 0x16F4E8u;
            goto label_16f4e8;
        }
    }
    ctx->pc = 0x16F4D8u;
    // 0x16f4d8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x16f4d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f4dc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x16f4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x16f4e0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x16f4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f4e4: 0x0  nop
    ctx->pc = 0x16f4e4u;
    // NOP
label_16f4e8:
    // 0x16f4e8: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f4e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f4ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f4f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x16f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16f4f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F4F4u;
    {
        const bool branch_taken_0x16f4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f4f4) {
            ctx->pc = 0x16F508u;
            goto label_16f508;
        }
    }
    ctx->pc = 0x16F4FCu;
    // 0x16f4fc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x16f4fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f500: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x16f500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x16f504: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x16f504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_16f508:
    // 0x16f508: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f50c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x16f50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f510: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x16f510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x16f514: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16F514u;
    {
        const bool branch_taken_0x16f514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f514) {
            ctx->pc = 0x16F558u;
            goto label_16f558;
        }
    }
    ctx->pc = 0x16F51Cu;
    // 0x16f51c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f51cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f520: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f524: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x16f524u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x16f528: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x16F528u;
    {
        const bool branch_taken_0x16f528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f528) {
            ctx->pc = 0x16F558u;
            goto label_16f558;
        }
    }
    ctx->pc = 0x16F530u;
    // 0x16f530: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x16f530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x16f534: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x16f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x16f538: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x16f538u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x16f53c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x16f53cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f540: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x16f540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x16f544: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x16f544u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f548: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x16f548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f54c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x16f54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x16f550: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x16f550u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f554: 0x0  nop
    ctx->pc = 0x16f554u;
    // NOP
label_16f558:
    // 0x16f558: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x16f558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x16f55c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x16f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x16f560: 0x8ee20a68  lw          $v0, 0xA68($s7)
    ctx->pc = 0x16f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16f564: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x16f564u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16f568: 0xc095384  jal         func_254E10
    ctx->pc = 0x16F568u;
    SET_GPR_U32(ctx, 31, 0x16F570u);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x16F568u, 0x16F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F570u;
label_16f570:
    // 0x16f570: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16f570u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16f574: 0x8ee20a68  lw          $v0, 0xA68($s7)
    ctx->pc = 0x16f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16f578: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x16f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x16f57c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x16f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16f580: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16f580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16f584: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16f584u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16f588: 0xfe000a08  sd          $zero, 0xA08($s0)
    ctx->pc = 0x16f588u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2568), GPR_U64(ctx, 0));
    // 0x16f58c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x16f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x16f590: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16F590u;
    {
        const bool branch_taken_0x16f590 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16f590) {
            ctx->pc = 0x16F5B8u;
            goto label_16f5b8;
        }
    }
    ctx->pc = 0x16F598u;
    // 0x16f598: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f598u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f59c: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x16f59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x16f5a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x16f5a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f5a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16f5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f5a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x16f5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x16f5ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x16F5ACu;
    SET_GPR_U32(ctx, 31, 0x16F5B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x16F5ACu, 0x16F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F5B4u;
label_16f5b4:
    // 0x16f5b4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x16f5b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_16f5b8:
    // 0x16f5b8: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x16f5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16f5bc: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16F5BCu;
    {
        const bool branch_taken_0x16f5bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f5bc) {
            ctx->pc = 0x16F600u;
            goto label_16f600;
        }
    }
    ctx->pc = 0x16F5C4u;
    // 0x16f5c4: 0x8ee20a68  lw          $v0, 0xA68($s7)
    ctx->pc = 0x16f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16f5c8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f5c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f5cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x16f5ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16f5d0: 0xc079534  jal         func_1E54D0
    ctx->pc = 0x16F5D0u;
    SET_GPR_U32(ctx, 31, 0x16F5D8u);
    ctx->pc = 0x1E54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E54D0u, 0x16F5D0u, 0x16F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F5D8u;
label_16f5d8:
    // 0x16f5d8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x16f5d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16f5dc: 0xaee50a68  sw          $a1, 0xA68($s7)
    ctx->pc = 0x16f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 5));
    // 0x16f5e0: 0x8ee60a68  lw          $a2, 0xA68($s7)
    ctx->pc = 0x16f5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16f5e4: 0x24c8000f  addiu       $t0, $a2, 0xF
    ctx->pc = 0x16f5e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x16f5e8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x16f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16f5ec: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x16f5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x16f5f0: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16f5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16f5f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x16f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16f5f8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x16f5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x16f5fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_16f600:
    // 0x16f600: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x16f600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16f604: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16F604u;
    {
        const bool branch_taken_0x16f604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f604) {
            ctx->pc = 0x16F648u;
            goto label_16f648;
        }
    }
    ctx->pc = 0x16F60Cu;
    // 0x16f60c: 0x92050012  lbu         $a1, 0x12($s0)
    ctx->pc = 0x16f60cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f610: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x16f610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16f614: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x16f614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16f618: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F618u;
    {
        const bool branch_taken_0x16f618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f618) {
            ctx->pc = 0x16F634u;
            goto label_16f634;
        }
    }
    ctx->pc = 0x16F620u;
    // 0x16f620: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f620u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f624: 0xc06bde0  jal         func_1AF780
    ctx->pc = 0x16F624u;
    SET_GPR_U32(ctx, 31, 0x16F62Cu);
    ctx->pc = 0x1AF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF780u, 0x16F624u, 0x16F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F62Cu;
label_16f62c:
    // 0x16f62c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16F62Cu;
    {
        const bool branch_taken_0x16f62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f62c) {
            ctx->pc = 0x16F648u;
            goto label_16f648;
        }
    }
    ctx->pc = 0x16F634u;
label_16f634:
    // 0x16f634: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f634u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f638: 0xc06bf40  jal         func_1AFD00
    ctx->pc = 0x16F638u;
    SET_GPR_U32(ctx, 31, 0x16F640u);
    ctx->pc = 0x1AFD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD00u, 0x16F638u, 0x16F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F640u;
label_16f640:
    // 0x16f640: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x16f640u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16f644: 0x0  nop
    ctx->pc = 0x16f644u;
    // NOP
label_16f648:
    // 0x16f648: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16f648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16f64c: 0x90220e05  lbu         $v0, 0xE05($at)
    ctx->pc = 0x16f64cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x16f650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16f650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16f654: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16f654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16f658: 0xa0220e05  sb          $v0, 0xE05($at)
    ctx->pc = 0x16f658u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0E05u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E05u, _value); } while (0);
    // 0x16f65c: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x16f65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x16f660: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x16f660u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x16f664: 0x97a400dc  lhu         $a0, 0xDC($sp)
    ctx->pc = 0x16f664u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x16f668: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x16f668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16f66c: 0xa7a600dc  sh          $a2, 0xDC($sp)
    ctx->pc = 0x16f66cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 6));
label_16f670:
    // 0x16f670: 0x97a200dc  lhu         $v0, 0xDC($sp)
    ctx->pc = 0x16f670u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x16f674: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x16f674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16f678: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16f678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16f67c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f680: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x16f680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16f684: 0x1440fd74  bnez        $v0, . + 4 + (-0x28C << 2)
    ctx->pc = 0x16F684u;
    {
        const bool branch_taken_0x16f684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f684) {
            ctx->pc = 0x16EC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ec58;
        }
    }
    ctx->pc = 0x16F68Cu;
    // 0x16f68c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16f68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16f690: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x16f690u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x16f694: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x16f694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f698: 0xc05ba8c  jal         func_16EA30
    ctx->pc = 0x16F698u;
    SET_GPR_U32(ctx, 31, 0x16F6A0u);
    ctx->pc = 0x16EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EA30u, 0x16F698u, 0x16F6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6A0u;
label_16f6a0:
    // 0x16f6a0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x16f6a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16f6a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16f6a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16f6a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16f6a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f6ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16f6acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f6b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16f6b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f6b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16f6b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f6b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16f6b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f6bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f6bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f6c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f6c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f6c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f6c8: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x16f6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16f6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x16F6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F6D4u;
}
