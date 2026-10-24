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

// Function: Water_dust_set
// Address: 0x1ae980 - 0x1aeaec
void Water_dust_set_0x1ae980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Water_dust_set_0x1ae980");
#endif

    switch (ctx->pc) {
        case 0x1aea08u: goto label_1aea08;
        case 0x1aea54u: goto label_1aea54;
        case 0x1aea60u: goto label_1aea60;
        default: break;
    }

    ctx->pc = 0x1ae980u;

    // 0x1ae980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ae980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ae984: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ae984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ae988: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ae988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ae98c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ae98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ae990: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ae990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ae994: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ae99c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1ae99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1ae9a0: 0x2473f010  addiu       $s3, $v1, -0xFF0
    ctx->pc = 0x1ae9a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963216));
    // 0x1ae9a4: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1ae9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1ae9a8: 0x2475f000  addiu       $s5, $v1, -0x1000
    ctx->pc = 0x1ae9a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x1ae9ac: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae9b0: 0x9023f001  lbu         $v1, -0xFFF($at)
    ctx->pc = 0x1ae9b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5EF001u));
    // 0x1ae9b4: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1AE9B4u;
    {
        const bool branch_taken_0x1ae9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae9b4) {
            ctx->pc = 0x1AEAC8u;
            goto label_1aeac8;
        }
    }
    ctx->pc = 0x1AE9BCu;
    // 0x1ae9bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae9c0: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae9c4: 0xa023f001  sb          $v1, -0xFFF($at)
    ctx->pc = 0x1ae9c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5EF001u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5EF001u, _value); } while (0);
    // 0x1ae9c8: 0x3c03c3a2  lui         $v1, 0xC3A2
    ctx->pc = 0x1ae9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50082 << 16));
    // 0x1ae9cc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1ae9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1ae9d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ae9d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae9d4: 0x0  nop
    ctx->pc = 0x1ae9d4u;
    // NOP
    // 0x1ae9d8: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x1ae9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x1ae9dc: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x1ae9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x1ae9e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ae9e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae9e4: 0x0  nop
    ctx->pc = 0x1ae9e4u;
    // NOP
    // 0x1ae9e8: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1ae9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x1ae9ec: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1ae9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ae9f0: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x1ae9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ae9f4: 0x26741d08  addiu       $s4, $s3, 0x1D08
    ctx->pc = 0x1ae9f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 7432));
    // 0x1ae9f8: 0x26947ff8  addiu       $s4, $s4, 0x7FF8
    ctx->pc = 0x1ae9f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32760));
    // 0x1ae9fc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1ae9fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aea00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AEA00u;
    {
        const bool branch_taken_0x1aea00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea00) {
            ctx->pc = 0x1AEA18u;
            goto label_1aea18;
        }
    }
    ctx->pc = 0x1AEA08u;
label_1aea08:
    // 0x1aea08: 0x72801e28  paddub      $v1, $s4, $zero
    ctx->pc = 0x1aea08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1aea0c: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x1aea0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aea10: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1aea10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aea14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1aea14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1aea18:
    // 0x1aea18: 0x2e4307d0  sltiu       $v1, $s2, 0x7D0
    ctx->pc = 0x1aea18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1aea1c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AEA1Cu;
    {
        const bool branch_taken_0x1aea1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aea1c) {
            ctx->pc = 0x1AEA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aea08;
        }
    }
    ctx->pc = 0x1AEA24u;
    // 0x1aea24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aea24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aea28: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x1aea28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1aea2c: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1aea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1aea30: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1aea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1aea34: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1aea34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1aea38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aea38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aea3c: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x1aea3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1aea40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aea40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aea44: 0x8c310ae8  lw          $s1, 0xAE8($at)
    ctx->pc = 0x1aea44u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1aea48: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1aea48u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aea4c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AEA4Cu;
    {
        const bool branch_taken_0x1aea4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea4c) {
            ctx->pc = 0x1AEAA0u;
            goto label_1aeaa0;
        }
    }
    ctx->pc = 0x1AEA54u;
label_1aea54:
    // 0x1aea54: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1aea54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aea58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AEA58u;
    {
        const bool branch_taken_0x1aea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea58) {
            ctx->pc = 0x1AEA90u;
            goto label_1aea90;
        }
    }
    ctx->pc = 0x1AEA60u;
label_1aea60:
    // 0x1aea60: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1aea60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1aea64: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x1aea64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1aea68: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1aea68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1aea6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1aea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aea70: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1aea70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1aea74: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1aea74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1aea78: 0xac31b470  sw          $s1, -0x4B90($at)
    ctx->pc = 0x1aea78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947952), GPR_U32(ctx, 17));
    // 0x1aea7c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1aea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1aea80: 0x3463f400  ori         $v1, $v1, 0xF400
    ctx->pc = 0x1aea80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62464);
    // 0x1aea84: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1aea84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1aea88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aea88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aea8c: 0x0  nop
    ctx->pc = 0x1aea8cu;
    // NOP
label_1aea90:
    // 0x1aea90: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1aea90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1aea94: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1AEA94u;
    {
        const bool branch_taken_0x1aea94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aea94) {
            ctx->pc = 0x1AEA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aea60;
        }
    }
    ctx->pc = 0x1AEA9Cu;
    // 0x1aea9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1aea9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1aeaa0:
    // 0x1aeaa0: 0x2e430002  sltiu       $v1, $s2, 0x2
    ctx->pc = 0x1aeaa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aeaa4: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1AEAA4u;
    {
        const bool branch_taken_0x1aeaa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeaa4) {
            ctx->pc = 0x1AEA54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aea54;
        }
    }
    ctx->pc = 0x1AEAACu;
    // 0x1aeaac: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1aeaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1aeab0: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x1aeab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1aeab4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1aeab4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1aeab8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x1aeab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x1aeabc: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1aeabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x1aeac0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1aeac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aeac4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1aeac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
label_1aeac8:
    // 0x1aeac8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1aeac8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aeacc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1aeaccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aead0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1aead0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aead4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1aead4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aead8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aead8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeadc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aeadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aeae0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1aeae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aeae4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEAECu;
}
