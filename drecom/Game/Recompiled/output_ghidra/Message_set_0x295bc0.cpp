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

// Function: Message_set
// Address: 0x295bc0 - 0x29605c
void Message_set_0x295bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Message_set_0x295bc0");
#endif

    switch (ctx->pc) {
        case 0x29601cu: goto label_29601c;
        default: break;
    }

    ctx->pc = 0x295bc0u;

    // 0x295bc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x295bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x295bc4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x295bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x295bc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x295bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x295bcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x295bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x295bd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x295bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x295bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x295bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x295bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x295bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x295bdc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x295bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x295be0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x295be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x295be4: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x295be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x295be8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x295be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x295bec: 0x24730080  addiu       $s3, $v1, 0x80
    ctx->pc = 0x295becu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x295bf0: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x295bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x295bf4: 0x2470cb10  addiu       $s0, $v1, -0x34F0
    ctx->pc = 0x295bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953744));
    // 0x295bf8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x295bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x295bfc: 0x24746150  addiu       $s4, $v1, 0x6150
    ctx->pc = 0x295bfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x295c00: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x295c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x295c04: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x295C04u;
    {
        const bool branch_taken_0x295c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295c04) {
            ctx->pc = 0x295C4Cu;
            goto label_295c4c;
        }
    }
    ctx->pc = 0x295C0Cu;
    // 0x295c0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295c10: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x295c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x295c14: 0xac23ca00  sw          $v1, -0x3600($at)
    ctx->pc = 0x295c14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80CA00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80CA00u, _value); } while (0);
    // 0x295c18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x295c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x295c1c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x295c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x295c20: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x295c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x295c24: 0xac23ca08  sw          $v1, -0x35F8($at)
    ctx->pc = 0x295c24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x80CA08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80CA08u, _value); } while (0);
    // 0x295c28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x295c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x295c2c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x295c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x295c30: 0x3c03ffc0  lui         $v1, 0xFFC0
    ctx->pc = 0x295c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65472 << 16));
    // 0x295c34: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x295c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x295c38: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x295c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x295c3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x295c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x295c40: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x295c40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x295c44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x295C44u;
    {
        const bool branch_taken_0x295c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295c44) {
            ctx->pc = 0x295C54u;
            goto label_295c54;
        }
    }
    ctx->pc = 0x295C4Cu;
label_295c4c:
    // 0x295c4c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x295c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x295c50: 0xac20ca00  sw          $zero, -0x3600($at)
    ctx->pc = 0x295c50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x80CA00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80CA00u, _value); } while (0);
label_295c54:
    // 0x295c54: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x295c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x295c58: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x295c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x295c5c: 0x108300e9  beq         $a0, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x295C5Cu;
    {
        const bool branch_taken_0x295c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x295c5c) {
            ctx->pc = 0x296004u;
            goto label_296004;
        }
    }
    ctx->pc = 0x295C64u;
    // 0x295c64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x295c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295c68: 0x108300ab  beq         $a0, $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x295C68u;
    {
        const bool branch_taken_0x295c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x295c68) {
            ctx->pc = 0x295F18u;
            goto label_295f18;
        }
    }
    ctx->pc = 0x295C70u;
    // 0x295c70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295c74: 0x1083006d  beq         $a0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x295C74u;
    {
        const bool branch_taken_0x295c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x295c74) {
            ctx->pc = 0x295E2Cu;
            goto label_295e2c;
        }
    }
    ctx->pc = 0x295C7Cu;
    // 0x295c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295c80: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x295C80u;
    {
        const bool branch_taken_0x295c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x295c80) {
            ctx->pc = 0x295D3Cu;
            goto label_295d3c;
        }
    }
    ctx->pc = 0x295C88u;
    // 0x295c88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295C88u;
    {
        const bool branch_taken_0x295c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x295c88) {
            ctx->pc = 0x295C98u;
            goto label_295c98;
        }
    }
    ctx->pc = 0x295C90u;
    // 0x295c90: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x295C90u;
    {
        const bool branch_taken_0x295c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295c90) {
            ctx->pc = 0x296004u;
            goto label_296004;
        }
    }
    ctx->pc = 0x295C98u;
label_295c98:
    // 0x295c98: 0x8e926858  lw          $s2, 0x6858($s4)
    ctx->pc = 0x295c98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 26712)));
    // 0x295c9c: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x295c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x295ca0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x295ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295ca4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x295ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x295ca8: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x295ca8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x295cac: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x295CACu;
    {
        const bool branch_taken_0x295cac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x295cac) {
            ctx->pc = 0x295CC8u;
            goto label_295cc8;
        }
    }
    ctx->pc = 0x295CB4u;
    // 0x295cb4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x295cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295cb8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x295cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x295cbc: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x295cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x295cc0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x295CC0u;
    {
        const bool branch_taken_0x295cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295cc0) {
            ctx->pc = 0x295CC8u;
            goto label_295cc8;
        }
    }
    ctx->pc = 0x295CC8u;
label_295cc8:
    // 0x295cc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x295cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295ccc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x295cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x295cd0: 0xae0369b0  sw          $v1, 0x69B0($s0)
    ctx->pc = 0x295cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27056), GPR_U32(ctx, 3));
    // 0x295cd4: 0x8e0369b0  lw          $v1, 0x69B0($s0)
    ctx->pc = 0x295cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27056)));
    // 0x295cd8: 0xae0369b4  sw          $v1, 0x69B4($s0)
    ctx->pc = 0x295cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27060), GPR_U32(ctx, 3));
    // 0x295cdc: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x295cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x295ce0: 0x2463ca10  addiu       $v1, $v1, -0x35F0
    ctx->pc = 0x295ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953488));
    // 0x295ce4: 0xae0369bc  sw          $v1, 0x69BC($s0)
    ctx->pc = 0x295ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27068), GPR_U32(ctx, 3));
    // 0x295ce8: 0x8e0369bc  lw          $v1, 0x69BC($s0)
    ctx->pc = 0x295ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27068)));
    // 0x295cec: 0xae0369c0  sw          $v1, 0x69C0($s0)
    ctx->pc = 0x295cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27072), GPR_U32(ctx, 3));
    // 0x295cf0: 0xae00699c  sw          $zero, 0x699C($s0)
    ctx->pc = 0x295cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27036), GPR_U32(ctx, 0));
    // 0x295cf4: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x295cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x295cf8: 0xa60369a8  sh          $v1, 0x69A8($s0)
    ctx->pc = 0x295cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27048), (uint16_t)GPR_U32(ctx, 3));
    // 0x295cfc: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x295cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x295d00: 0xa60369aa  sh          $v1, 0x69AA($s0)
    ctx->pc = 0x295d00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27050), (uint16_t)GPR_U32(ctx, 3));
    // 0x295d04: 0xa20069c9  sb          $zero, 0x69C9($s0)
    ctx->pc = 0x295d04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27081), (uint8_t)GPR_U32(ctx, 0));
    // 0x295d08: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x295d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x295d0c: 0xa20369ca  sb          $v1, 0x69CA($s0)
    ctx->pc = 0x295d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27082), (uint8_t)GPR_U32(ctx, 3));
    // 0x295d10: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x295d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x295d14: 0xa20369cb  sb          $v1, 0x69CB($s0)
    ctx->pc = 0x295d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27083), (uint8_t)GPR_U32(ctx, 3));
    // 0x295d18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295d1c: 0xa20369cc  sb          $v1, 0x69CC($s0)
    ctx->pc = 0x295d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27084), (uint8_t)GPR_U32(ctx, 3));
    // 0x295d20: 0xa20069d0  sb          $zero, 0x69D0($s0)
    ctx->pc = 0x295d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27088), (uint8_t)GPR_U32(ctx, 0));
    // 0x295d24: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x295d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x295d28: 0xae0369d4  sw          $v1, 0x69D4($s0)
    ctx->pc = 0x295d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27092), GPR_U32(ctx, 3));
    // 0x295d2c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x295d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x295d30: 0xae0369d8  sw          $v1, 0x69D8($s0)
    ctx->pc = 0x295d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27096), GPR_U32(ctx, 3));
    // 0x295d34: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x295D34u;
    {
        const bool branch_taken_0x295d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295d34) {
            ctx->pc = 0x296024u;
            goto label_296024;
        }
    }
    ctx->pc = 0x295D3Cu;
label_295d3c:
    // 0x295d3c: 0x8e631a14  lw          $v1, 0x1A14($s3)
    ctx->pc = 0x295d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6676)));
    // 0x295d40: 0x8c720054  lw          $s2, 0x54($v1)
    ctx->pc = 0x295d40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x295d44: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x295d44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x295d48: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x295d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295d4c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x295d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x295d50: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x295d50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x295d54: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x295D54u;
    {
        const bool branch_taken_0x295d54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x295d54) {
            ctx->pc = 0x295D70u;
            goto label_295d70;
        }
    }
    ctx->pc = 0x295D5Cu;
    // 0x295d5c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x295d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295d60: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x295d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x295d64: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x295d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x295d68: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x295D68u;
    {
        const bool branch_taken_0x295d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295d68) {
            ctx->pc = 0x295D70u;
            goto label_295d70;
        }
    }
    ctx->pc = 0x295D70u;
label_295d70:
    // 0x295d70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x295d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295d74: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x295d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x295d78: 0xae0369b0  sw          $v1, 0x69B0($s0)
    ctx->pc = 0x295d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27056), GPR_U32(ctx, 3));
    // 0x295d7c: 0x8e0369b0  lw          $v1, 0x69B0($s0)
    ctx->pc = 0x295d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27056)));
    // 0x295d80: 0xae0369b4  sw          $v1, 0x69B4($s0)
    ctx->pc = 0x295d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27060), GPR_U32(ctx, 3));
    // 0x295d84: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x295d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x295d88: 0x2463ca10  addiu       $v1, $v1, -0x35F0
    ctx->pc = 0x295d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953488));
    // 0x295d8c: 0xae0369bc  sw          $v1, 0x69BC($s0)
    ctx->pc = 0x295d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27068), GPR_U32(ctx, 3));
    // 0x295d90: 0x8e0369bc  lw          $v1, 0x69BC($s0)
    ctx->pc = 0x295d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27068)));
    // 0x295d94: 0xae0369c0  sw          $v1, 0x69C0($s0)
    ctx->pc = 0x295d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27072), GPR_U32(ctx, 3));
    // 0x295d98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x295d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295d9c: 0xae03699c  sw          $v1, 0x699C($s0)
    ctx->pc = 0x295d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27036), GPR_U32(ctx, 3));
    // 0x295da0: 0xa20069c9  sb          $zero, 0x69C9($s0)
    ctx->pc = 0x295da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27081), (uint8_t)GPR_U32(ctx, 0));
    // 0x295da4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x295da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x295da8: 0xa20369ca  sb          $v1, 0x69CA($s0)
    ctx->pc = 0x295da8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27082), (uint8_t)GPR_U32(ctx, 3));
    // 0x295dac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295db0: 0xa20369cb  sb          $v1, 0x69CB($s0)
    ctx->pc = 0x295db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27083), (uint8_t)GPR_U32(ctx, 3));
    // 0x295db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295db8: 0xa20369cc  sb          $v1, 0x69CC($s0)
    ctx->pc = 0x295db8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27084), (uint8_t)GPR_U32(ctx, 3));
    // 0x295dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295dc0: 0xa20369d0  sb          $v1, 0x69D0($s0)
    ctx->pc = 0x295dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27088), (uint8_t)GPR_U32(ctx, 3));
    // 0x295dc4: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x295dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x295dc8: 0xae0369d4  sw          $v1, 0x69D4($s0)
    ctx->pc = 0x295dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27092), GPR_U32(ctx, 3));
    // 0x295dcc: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x295dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x295dd0: 0xae0369d8  sw          $v1, 0x69D8($s0)
    ctx->pc = 0x295dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27096), GPR_U32(ctx, 3));
    // 0x295dd4: 0x920369ca  lbu         $v1, 0x69CA($s0)
    ctx->pc = 0x295dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27082)));
    // 0x295dd8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x295dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x295ddc: 0x8e0369d4  lw          $v1, 0x69D4($s0)
    ctx->pc = 0x295ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x295de0: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x295de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295de4: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x295de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x295de8: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x295de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295dec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295df0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x295df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x295df4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x295df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x295df8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x295df8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x295dfc: 0xa60369a8  sh          $v1, 0x69A8($s0)
    ctx->pc = 0x295dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27048), (uint16_t)GPR_U32(ctx, 3));
    // 0x295e00: 0x920369cb  lbu         $v1, 0x69CB($s0)
    ctx->pc = 0x295e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27083)));
    // 0x295e04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x295e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x295e08: 0x8e0369d8  lw          $v1, 0x69D8($s0)
    ctx->pc = 0x295e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27096)));
    // 0x295e0c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x295e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295e10: 0x24030197  addiu       $v1, $zero, 0x197
    ctx->pc = 0x295e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 407));
    // 0x295e14: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x295e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295e18: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x295e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x295e1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x295e1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x295e20: 0xa60369aa  sh          $v1, 0x69AA($s0)
    ctx->pc = 0x295e20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27050), (uint16_t)GPR_U32(ctx, 3));
    // 0x295e24: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x295E24u;
    {
        const bool branch_taken_0x295e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e24) {
            ctx->pc = 0x296024u;
            goto label_296024;
        }
    }
    ctx->pc = 0x295E2Cu;
label_295e2c:
    // 0x295e2c: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x295e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295e30: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x295e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x295e34: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x295e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295e38: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x295e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x295e3c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x295e3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x295e40: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x295E40u;
    {
        const bool branch_taken_0x295e40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e40) {
            ctx->pc = 0x295E5Cu;
            goto label_295e5c;
        }
    }
    ctx->pc = 0x295E48u;
    // 0x295e48: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x295e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295e4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x295e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x295e50: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x295e50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x295e54: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x295E54u;
    {
        const bool branch_taken_0x295e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e54) {
            ctx->pc = 0x295E5Cu;
            goto label_295e5c;
        }
    }
    ctx->pc = 0x295E5Cu;
label_295e5c:
    // 0x295e5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x295e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295e60: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x295e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x295e64: 0xae0369b0  sw          $v1, 0x69B0($s0)
    ctx->pc = 0x295e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27056), GPR_U32(ctx, 3));
    // 0x295e68: 0x8e0369b0  lw          $v1, 0x69B0($s0)
    ctx->pc = 0x295e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27056)));
    // 0x295e6c: 0xae0369b4  sw          $v1, 0x69B4($s0)
    ctx->pc = 0x295e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27060), GPR_U32(ctx, 3));
    // 0x295e70: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x295e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x295e74: 0x2463ca10  addiu       $v1, $v1, -0x35F0
    ctx->pc = 0x295e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953488));
    // 0x295e78: 0xae0369bc  sw          $v1, 0x69BC($s0)
    ctx->pc = 0x295e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27068), GPR_U32(ctx, 3));
    // 0x295e7c: 0x8e0369bc  lw          $v1, 0x69BC($s0)
    ctx->pc = 0x295e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27068)));
    // 0x295e80: 0xae0369c0  sw          $v1, 0x69C0($s0)
    ctx->pc = 0x295e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27072), GPR_U32(ctx, 3));
    // 0x295e84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x295e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295e88: 0xae03699c  sw          $v1, 0x699C($s0)
    ctx->pc = 0x295e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27036), GPR_U32(ctx, 3));
    // 0x295e8c: 0xa20069c9  sb          $zero, 0x69C9($s0)
    ctx->pc = 0x295e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27081), (uint8_t)GPR_U32(ctx, 0));
    // 0x295e90: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x295e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295e94: 0xa20369ca  sb          $v1, 0x69CA($s0)
    ctx->pc = 0x295e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27082), (uint8_t)GPR_U32(ctx, 3));
    // 0x295e98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x295e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x295e9c: 0xa20369cb  sb          $v1, 0x69CB($s0)
    ctx->pc = 0x295e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27083), (uint8_t)GPR_U32(ctx, 3));
    // 0x295ea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295ea4: 0xa20369cc  sb          $v1, 0x69CC($s0)
    ctx->pc = 0x295ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27084), (uint8_t)GPR_U32(ctx, 3));
    // 0x295ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295eac: 0xa20369d0  sb          $v1, 0x69D0($s0)
    ctx->pc = 0x295eacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27088), (uint8_t)GPR_U32(ctx, 3));
    // 0x295eb0: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x295eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x295eb4: 0xae0369d4  sw          $v1, 0x69D4($s0)
    ctx->pc = 0x295eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27092), GPR_U32(ctx, 3));
    // 0x295eb8: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x295eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x295ebc: 0xae0369d8  sw          $v1, 0x69D8($s0)
    ctx->pc = 0x295ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27096), GPR_U32(ctx, 3));
    // 0x295ec0: 0x920369ca  lbu         $v1, 0x69CA($s0)
    ctx->pc = 0x295ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27082)));
    // 0x295ec4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x295ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x295ec8: 0x8e0369d4  lw          $v1, 0x69D4($s0)
    ctx->pc = 0x295ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x295ecc: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x295eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295ed0: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x295ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x295ed4: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x295ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295ed8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295edc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x295edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x295ee0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x295ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x295ee4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x295ee4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x295ee8: 0xa60369a8  sh          $v1, 0x69A8($s0)
    ctx->pc = 0x295ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27048), (uint16_t)GPR_U32(ctx, 3));
    // 0x295eec: 0x920369cb  lbu         $v1, 0x69CB($s0)
    ctx->pc = 0x295eecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27083)));
    // 0x295ef0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x295ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x295ef4: 0x8e0369d8  lw          $v1, 0x69D8($s0)
    ctx->pc = 0x295ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27096)));
    // 0x295ef8: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x295ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295efc: 0x24030197  addiu       $v1, $zero, 0x197
    ctx->pc = 0x295efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 407));
    // 0x295f00: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x295f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295f04: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x295f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x295f08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x295f08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x295f0c: 0xa60369aa  sh          $v1, 0x69AA($s0)
    ctx->pc = 0x295f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27050), (uint16_t)GPR_U32(ctx, 3));
    // 0x295f10: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x295F10u;
    {
        const bool branch_taken_0x295f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295f10) {
            ctx->pc = 0x296024u;
            goto label_296024;
        }
    }
    ctx->pc = 0x295F18u;
label_295f18:
    // 0x295f18: 0x8e631a14  lw          $v1, 0x1A14($s3)
    ctx->pc = 0x295f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6676)));
    // 0x295f1c: 0x8c720054  lw          $s2, 0x54($v1)
    ctx->pc = 0x295f1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x295f20: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x295f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x295f24: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x295f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295f28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x295f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x295f2c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x295f2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x295f30: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x295F30u;
    {
        const bool branch_taken_0x295f30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x295f30) {
            ctx->pc = 0x295F4Cu;
            goto label_295f4c;
        }
    }
    ctx->pc = 0x295F38u;
    // 0x295f38: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x295f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295f3c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x295f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x295f40: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x295f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x295f44: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x295F44u;
    {
        const bool branch_taken_0x295f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295f44) {
            ctx->pc = 0x295F4Cu;
            goto label_295f4c;
        }
    }
    ctx->pc = 0x295F4Cu;
label_295f4c:
    // 0x295f4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x295f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295f50: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x295f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x295f54: 0xae0369b0  sw          $v1, 0x69B0($s0)
    ctx->pc = 0x295f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27056), GPR_U32(ctx, 3));
    // 0x295f58: 0x8e0369b0  lw          $v1, 0x69B0($s0)
    ctx->pc = 0x295f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27056)));
    // 0x295f5c: 0xae0369b4  sw          $v1, 0x69B4($s0)
    ctx->pc = 0x295f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27060), GPR_U32(ctx, 3));
    // 0x295f60: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x295f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x295f64: 0x2463ca10  addiu       $v1, $v1, -0x35F0
    ctx->pc = 0x295f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953488));
    // 0x295f68: 0xae0369bc  sw          $v1, 0x69BC($s0)
    ctx->pc = 0x295f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27068), GPR_U32(ctx, 3));
    // 0x295f6c: 0x8e0369bc  lw          $v1, 0x69BC($s0)
    ctx->pc = 0x295f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27068)));
    // 0x295f70: 0xae0369c0  sw          $v1, 0x69C0($s0)
    ctx->pc = 0x295f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27072), GPR_U32(ctx, 3));
    // 0x295f74: 0xae00699c  sw          $zero, 0x699C($s0)
    ctx->pc = 0x295f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27036), GPR_U32(ctx, 0));
    // 0x295f78: 0xa20069c9  sb          $zero, 0x69C9($s0)
    ctx->pc = 0x295f78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27081), (uint8_t)GPR_U32(ctx, 0));
    // 0x295f7c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x295f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x295f80: 0xa20369ca  sb          $v1, 0x69CA($s0)
    ctx->pc = 0x295f80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27082), (uint8_t)GPR_U32(ctx, 3));
    // 0x295f84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295f88: 0xa20369cb  sb          $v1, 0x69CB($s0)
    ctx->pc = 0x295f88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27083), (uint8_t)GPR_U32(ctx, 3));
    // 0x295f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295f90: 0xa20369cc  sb          $v1, 0x69CC($s0)
    ctx->pc = 0x295f90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27084), (uint8_t)GPR_U32(ctx, 3));
    // 0x295f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295f98: 0xa20369d0  sb          $v1, 0x69D0($s0)
    ctx->pc = 0x295f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27088), (uint8_t)GPR_U32(ctx, 3));
    // 0x295f9c: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x295f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x295fa0: 0xae0369d4  sw          $v1, 0x69D4($s0)
    ctx->pc = 0x295fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27092), GPR_U32(ctx, 3));
    // 0x295fa4: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x295fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x295fa8: 0xae0369d8  sw          $v1, 0x69D8($s0)
    ctx->pc = 0x295fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27096), GPR_U32(ctx, 3));
    // 0x295fac: 0x920369ca  lbu         $v1, 0x69CA($s0)
    ctx->pc = 0x295facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27082)));
    // 0x295fb0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x295fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x295fb4: 0x8e0369d4  lw          $v1, 0x69D4($s0)
    ctx->pc = 0x295fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x295fb8: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x295fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295fbc: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x295fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x295fc0: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x295fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295fc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295fc8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x295fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x295fcc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x295fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x295fd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x295fd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x295fd4: 0xa60369a8  sh          $v1, 0x69A8($s0)
    ctx->pc = 0x295fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27048), (uint16_t)GPR_U32(ctx, 3));
    // 0x295fd8: 0x920369cb  lbu         $v1, 0x69CB($s0)
    ctx->pc = 0x295fd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27083)));
    // 0x295fdc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x295fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x295fe0: 0x8e0369d8  lw          $v1, 0x69D8($s0)
    ctx->pc = 0x295fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27096)));
    // 0x295fe4: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x295fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295fe8: 0x24030197  addiu       $v1, $zero, 0x197
    ctx->pc = 0x295fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 407));
    // 0x295fec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x295fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295ff0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x295ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x295ff4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x295ff4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x295ff8: 0xa60369aa  sh          $v1, 0x69AA($s0)
    ctx->pc = 0x295ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27050), (uint16_t)GPR_U32(ctx, 3));
    // 0x295ffc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x295FFCu;
    {
        const bool branch_taken_0x295ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295ffc) {
            ctx->pc = 0x296024u;
            goto label_296024;
        }
    }
    ctx->pc = 0x296004u;
label_296004:
    // 0x296004: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x296004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x296008: 0x2444ca10  addiu       $a0, $v0, -0x35F0
    ctx->pc = 0x296008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    // 0x29600c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29600cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x296010: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x296010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x296014: 0xc046314  jal         func_118C50
    ctx->pc = 0x296014u;
    SET_GPR_U32(ctx, 31, 0x29601Cu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x29601Cu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29601Cu) { return; }
    ctx->pc = 0x29601Cu;
label_29601c:
    // 0x29601c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29601cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296020: 0xa20369c9  sb          $v1, 0x69C9($s0)
    ctx->pc = 0x296020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27081), (uint8_t)GPR_U32(ctx, 3));
label_296024:
    // 0x296024: 0xae006998  sw          $zero, 0x6998($s0)
    ctx->pc = 0x296024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27032), GPR_U32(ctx, 0));
    // 0x296028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29602c: 0xa20369e0  sb          $v1, 0x69E0($s0)
    ctx->pc = 0x29602cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27104), (uint8_t)GPR_U32(ctx, 3));
    // 0x296030: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296034: 0xac20c9e8  sw          $zero, -0x3618($at)
    ctx->pc = 0x296034u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x80C9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E8u, _value); } while (0);
    // 0x296038: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x296038u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29603c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29603cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296040: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x296040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296044: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x296044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296048: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29604c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29604cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296050: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x296050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x296054: 0x3e00008  jr          $ra
    ctx->pc = 0x296054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29605Cu;
}
