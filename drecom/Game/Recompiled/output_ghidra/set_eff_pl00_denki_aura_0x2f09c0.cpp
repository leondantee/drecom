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

// Function: set_eff_pl00_denki_aura
// Address: 0x2f09c0 - 0x2f111c
void set_eff_pl00_denki_aura_0x2f09c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_pl00_denki_aura_0x2f09c0");
#endif

    switch (ctx->pc) {
        case 0x2f0b48u: goto label_2f0b48;
        case 0x2f0b64u: goto label_2f0b64;
        case 0x2f0b90u: goto label_2f0b90;
        case 0x2f0bb4u: goto label_2f0bb4;
        case 0x2f0cd4u: goto label_2f0cd4;
        case 0x2f0cecu: goto label_2f0cec;
        case 0x2f0e50u: goto label_2f0e50;
        case 0x2f0ed0u: goto label_2f0ed0;
        case 0x2f0eecu: goto label_2f0eec;
        case 0x2f0f08u: goto label_2f0f08;
        case 0x2f0f24u: goto label_2f0f24;
        case 0x2f0fccu: goto label_2f0fcc;
        case 0x2f106cu: goto label_2f106c;
        case 0x2f1108u: goto label_2f1108;
        default: break;
    }

    ctx->pc = 0x2f09c0u;

    // 0x2f09c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f09c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f09c4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2f09c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2f09c8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2f09c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f09cc: 0xa3a40088  sb          $a0, 0x88($sp)
    ctx->pc = 0x2f09ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f09d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f09d4: 0x24428da0  addiu       $v0, $v0, -0x7260
    ctx->pc = 0x2f09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938016));
    // 0x2f09d8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f09d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f09dc: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x2f09dcu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x398DA0u));
    // 0x2f09e0: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x2f09e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x2f09e4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f09e8: 0x24428db0  addiu       $v0, $v0, -0x7250
    ctx->pc = 0x2f09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938032));
    // 0x2f09ec: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2f09ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f09f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f09f0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398DB0u));
    // 0x2f09f4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f09f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f09f8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f09fc: 0x24428dc0  addiu       $v0, $v0, -0x7240
    ctx->pc = 0x2f09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938048));
    // 0x2f0a00: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2f0a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0a04: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f0a04u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398DC0u));
    // 0x2f0a08: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f0a08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f0a0c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0a10: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0a14: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0a18: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0a1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0a20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0a24: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0a28: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0a2c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0a30: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0a34: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0a38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0a3c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0a40: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0a44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0a48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0a4c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0a4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0a50: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f0a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0a54: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f0a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f0a58: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f0a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f0a5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0a60: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f0a64: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2f0a64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2f0a68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f0a6c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f0a6cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f0a70: 0x0  nop
    ctx->pc = 0x2f0a70u;
    // NOP
    // 0x2f0a74: 0x0  nop
    ctx->pc = 0x2f0a74u;
    // NOP
    // 0x2f0a78: 0x1010  mfhi        $v0
    ctx->pc = 0x2f0a78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f0a7c: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x2F0A7Cu;
    {
        const bool branch_taken_0x2f0a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0a7c) {
            ctx->pc = 0x2F0E50u;
            goto label_2f0e50;
        }
    }
    ctx->pc = 0x2F0A84u;
    // 0x2f0a84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0a88: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0a8c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0a90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0a94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0a98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0a9c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0aa0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0aa4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0aa8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0aac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0ab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0ab4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0ab8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0abc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0ac0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0ac4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0ac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0ac8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f0ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0acc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f0accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f0ad0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f0ad0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f0ad4: 0x0  nop
    ctx->pc = 0x2f0ad4u;
    // NOP
    // 0x2f0ad8: 0x0  nop
    ctx->pc = 0x2f0ad8u;
    // NOP
    // 0x2f0adc: 0x1010  mfhi        $v0
    ctx->pc = 0x2f0adcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f0ae0: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2F0AE0u;
    {
        const bool branch_taken_0x2f0ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0ae0) {
            ctx->pc = 0x2F0CDCu;
            goto label_2f0cdc;
        }
    }
    ctx->pc = 0x2F0AE8u;
    // 0x2f0ae8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0aec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0af0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0af4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0af8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0afc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0b00: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0b04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0b08: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0b0c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0b10: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0b18: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0b1c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0b20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0b24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0b28: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0b28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0b2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f0b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0b30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2f0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f0b34: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2f0b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2f0b38: 0x144000c5  bnez        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2F0B38u;
    {
        const bool branch_taken_0x2f0b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0b38) {
            ctx->pc = 0x2F0E50u;
            goto label_2f0e50;
        }
    }
    ctx->pc = 0x2F0B40u;
    // 0x2f0b40: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0B40u;
    SET_GPR_U32(ctx, 31, 0x2F0B48u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0B40u, 0x2F0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0B48u;
label_2f0b48:
    // 0x2f0b48: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2f0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2f0b4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0b50: 0x0  nop
    ctx->pc = 0x2f0b50u;
    // NOP
    // 0x2f0b54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0b58: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2f0b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f0b5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0B5Cu;
    SET_GPR_U32(ctx, 31, 0x2F0B64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0B5Cu, 0x2F0B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0B64u;
label_2f0b64:
    // 0x2f0b64: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2f0b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2f0b68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0b6c: 0x0  nop
    ctx->pc = 0x2f0b6cu;
    // NOP
    // 0x2f0b70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f0b70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0b74: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2f0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2f0b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0b7c: 0x0  nop
    ctx->pc = 0x2f0b7cu;
    // NOP
    // 0x2f0b80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f0b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f0b84: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2f0b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2f0b88: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0B88u;
    SET_GPR_U32(ctx, 31, 0x2F0B90u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0B88u, 0x2F0B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0B90u;
label_2f0b90:
    // 0x2f0b90: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2f0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2f0b94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0b98: 0x0  nop
    ctx->pc = 0x2f0b98u;
    // NOP
    // 0x2f0b9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0b9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0ba0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2f0ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2f0ba4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f0ba8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2f0ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f0bac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0BACu;
    SET_GPR_U32(ctx, 31, 0x2F0BB4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0BACu, 0x2F0BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0BB4u;
label_2f0bb4:
    // 0x2f0bb4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f0bb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0bbc: 0x0  nop
    ctx->pc = 0x2f0bbcu;
    // NOP
    // 0x2f0bc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f0bc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0bc4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f0bc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0bcc: 0x0  nop
    ctx->pc = 0x2f0bccu;
    // NOP
    // 0x2f0bd0: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2f0bd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f0bd4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2f0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2f0bd8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f0bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f0bdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0be0: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f0be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f0be4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0BE4u;
    {
        const bool branch_taken_0x2f0be4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f0be4) {
            ctx->pc = 0x2F0C00u;
            goto label_2f0c00;
        }
    }
    ctx->pc = 0x2F0BECu;
    // 0x2f0bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0bf0: 0x0  nop
    ctx->pc = 0x2f0bf0u;
    // NOP
    // 0x2f0bf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0bf8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F0BF8u;
    {
        const bool branch_taken_0x2f0bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0bf8) {
            ctx->pc = 0x2F0C1Cu;
            goto label_2f0c1c;
        }
    }
    ctx->pc = 0x2F0C00u;
label_2f0c00:
    // 0x2f0c00: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f0c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f0c04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f0c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f0c08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f0c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0c10: 0x0  nop
    ctx->pc = 0x2f0c10u;
    // NOP
    // 0x2f0c14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0c18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f0c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f0c1c:
    // 0x2f0c1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0c20: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x2f0c20u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f0c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0c28: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f0c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f0c2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0c30: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0c34: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0c38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0c3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0c40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0c44: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0c48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0c4c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0c50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0c54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0c5c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0c60: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0c64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0c68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0c6c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0c6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0c70: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f0c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0c74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f0c78: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f0c78u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f0c7c: 0x0  nop
    ctx->pc = 0x2f0c7cu;
    // NOP
    // 0x2f0c80: 0x0  nop
    ctx->pc = 0x2f0c80u;
    // NOP
    // 0x2f0c84: 0x1810  mfhi        $v1
    ctx->pc = 0x2f0c84u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f0c88: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f0c8c: 0x24428dd0  addiu       $v0, $v0, -0x7230
    ctx->pc = 0x2f0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938064));
    // 0x2f0c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0c94: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f0c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f0c98: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f0c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0c9c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f0ca0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f0ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f0ca4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0ca8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f0ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0cac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f0cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f0cb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0cb4: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f0cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0cb8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2f0cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f0cbc: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f0cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f0cc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f0cc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f0cc4: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f0cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0cc8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f0cc8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f0ccc: 0xc0bbe74  jal         func_2EF9D0
    ctx->pc = 0x2F0CCCu;
    SET_GPR_U32(ctx, 31, 0x2F0CD4u);
    ctx->pc = 0x2EF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF9D0u, 0x2F0CCCu, 0x2F0CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0CD4u;
label_2f0cd4:
    // 0x2f0cd4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2F0CD4u;
    {
        const bool branch_taken_0x2f0cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0cd4) {
            ctx->pc = 0x2F0E50u;
            goto label_2f0e50;
        }
    }
    ctx->pc = 0x2F0CDCu;
label_2f0cdc:
    // 0x2f0cdc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2f0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2f0ce0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2f0ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f0ce4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0CE4u;
    SET_GPR_U32(ctx, 31, 0x2F0CECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0CE4u, 0x2F0CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0CECu;
label_2f0cec:
    // 0x2f0cec: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f0cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0cf4: 0x0  nop
    ctx->pc = 0x2f0cf4u;
    // NOP
    // 0x2f0cf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f0cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0cfc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f0d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0d04: 0x0  nop
    ctx->pc = 0x2f0d04u;
    // NOP
    // 0x2f0d08: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2f0d08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f0d0c: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2f0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2f0d10: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2f0d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2f0d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0d18: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f0d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f0d1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0D1Cu;
    {
        const bool branch_taken_0x2f0d1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f0d1c) {
            ctx->pc = 0x2F0D38u;
            goto label_2f0d38;
        }
    }
    ctx->pc = 0x2F0D24u;
    // 0x2f0d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0d28: 0x0  nop
    ctx->pc = 0x2f0d28u;
    // NOP
    // 0x2f0d2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0d30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F0D30u;
    {
        const bool branch_taken_0x2f0d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0d30) {
            ctx->pc = 0x2F0D54u;
            goto label_2f0d54;
        }
    }
    ctx->pc = 0x2F0D38u;
label_2f0d38:
    // 0x2f0d38: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f0d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f0d3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f0d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f0d40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f0d44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0d44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0d48: 0x0  nop
    ctx->pc = 0x2f0d48u;
    // NOP
    // 0x2f0d4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0d4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0d50: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f0d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f0d54:
    // 0x2f0d54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0d58: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x2f0d58u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f0d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0d60: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f0d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f0d64: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0d68: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0d6c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0d70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0d78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0d7c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0d80: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0d84: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0d88: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0d8c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0d94: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0d98: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0d9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0da0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0da4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0da4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0da8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f0da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0dac: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2f0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2f0db0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f0db0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f0db4: 0x0  nop
    ctx->pc = 0x2f0db4u;
    // NOP
    // 0x2f0db8: 0x0  nop
    ctx->pc = 0x2f0db8u;
    // NOP
    // 0x2f0dbc: 0x2810  mfhi        $a1
    ctx->pc = 0x2f0dbcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2f0dc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0dc4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0dc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0dcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0dd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0dd8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0ddc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0de0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0de4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0de8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0df0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0df4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0df8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0dfc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0e00: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0e00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0e04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f0e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0e08: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2f0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2f0e0c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f0e0cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f0e10: 0x0  nop
    ctx->pc = 0x2f0e10u;
    // NOP
    // 0x2f0e14: 0x0  nop
    ctx->pc = 0x2f0e14u;
    // NOP
    // 0x2f0e18: 0x4010  mfhi        $t0
    ctx->pc = 0x2f0e18u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x2f0e1c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f0e20: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f0e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f0e24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0e28: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f0e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0e2c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f0e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f0e30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0e34: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f0e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0e38: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2f0e38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f0e3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f0e3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f0e40: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f0e40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0e44: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f0e44u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f0e48: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F0E48u;
    SET_GPR_U32(ctx, 31, 0x2F0E50u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F0E48u, 0x2F0E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0E50u;
label_2f0e50:
    // 0x2f0e50: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0e54: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0e58: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0e5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0e64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0e68: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0e6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0e70: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0e74: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0e78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0e7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0e80: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0e84: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0e88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0e8c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0e90: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0e90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0e94: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f0e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0e98: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f0e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f0e9c: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f0e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f0ea0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0ea4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f0ea8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2f0ea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2f0eac: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2f0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x2f0eb0: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f0eb0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f0eb4: 0x0  nop
    ctx->pc = 0x2f0eb4u;
    // NOP
    // 0x2f0eb8: 0x0  nop
    ctx->pc = 0x2f0eb8u;
    // NOP
    // 0x2f0ebc: 0x1010  mfhi        $v0
    ctx->pc = 0x2f0ebcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f0ec0: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2F0EC0u;
    {
        const bool branch_taken_0x2f0ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0ec0) {
            ctx->pc = 0x2F0FCCu;
            goto label_2f0fcc;
        }
    }
    ctx->pc = 0x2F0EC8u;
    // 0x2f0ec8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0EC8u;
    SET_GPR_U32(ctx, 31, 0x2F0ED0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0EC8u, 0x2F0ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0ED0u;
label_2f0ed0:
    // 0x2f0ed0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f0ed4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0ed8: 0x0  nop
    ctx->pc = 0x2f0ed8u;
    // NOP
    // 0x2f0edc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0ee0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f0ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f0ee4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0EE4u;
    SET_GPR_U32(ctx, 31, 0x2F0EECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0EE4u, 0x2F0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0EECu;
label_2f0eec:
    // 0x2f0eec: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f0ef0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0ef4: 0x0  nop
    ctx->pc = 0x2f0ef4u;
    // NOP
    // 0x2f0ef8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0efc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f0efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f0f00: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0F00u;
    SET_GPR_U32(ctx, 31, 0x2F0F08u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0F00u, 0x2F0F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F08u;
label_2f0f08:
    // 0x2f0f08: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f0f0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0f10: 0x0  nop
    ctx->pc = 0x2f0f10u;
    // NOP
    // 0x2f0f14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0f18: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f0f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f0f1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0F1Cu;
    SET_GPR_U32(ctx, 31, 0x2F0F24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0F1Cu, 0x2F0F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F24u;
label_2f0f24:
    // 0x2f0f24: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2f0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2f0f28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0f2c: 0x0  nop
    ctx->pc = 0x2f0f2cu;
    // NOP
    // 0x2f0f30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f0f30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0f34: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f0f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0f3c: 0x0  nop
    ctx->pc = 0x2f0f3cu;
    // NOP
    // 0x2f0f40: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2f0f40u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f0f44: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0f48: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0f4c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0f50: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0f58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0f5c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0f60: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0f64: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0f68: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0f6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0f74: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0f78: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0f7c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0f80: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0f84: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0f84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0f88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f0f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0f8c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2f0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2f0f90: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f0f90u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f0f94: 0x0  nop
    ctx->pc = 0x2f0f94u;
    // NOP
    // 0x2f0f98: 0x0  nop
    ctx->pc = 0x2f0f98u;
    // NOP
    // 0x2f0f9c: 0x1810  mfhi        $v1
    ctx->pc = 0x2f0f9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f0fa0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f0fa4: 0x24428de0  addiu       $v0, $v0, -0x7220
    ctx->pc = 0x2f0fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938080));
    // 0x2f0fa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0fac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f0facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f0fb0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f0fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0fb4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0fb8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f0fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0fbc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f0fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0fc0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f0fc0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f0fc4: 0xc0bd36c  jal         func_2F4DB0
    ctx->pc = 0x2F0FC4u;
    SET_GPR_U32(ctx, 31, 0x2F0FCCu);
    ctx->pc = 0x2F4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4DB0u, 0x2F0FC4u, 0x2F0FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0FCCu;
label_2f0fcc:
    // 0x2f0fcc: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x2f0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x2f0fd0: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x2f0fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x2f0fd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0fd8: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f0fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f0fdc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0FDCu;
    {
        const bool branch_taken_0x2f0fdc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f0fdc) {
            ctx->pc = 0x2F0FF8u;
            goto label_2f0ff8;
        }
    }
    ctx->pc = 0x2F0FE4u;
    // 0x2f0fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0fe8: 0x0  nop
    ctx->pc = 0x2f0fe8u;
    // NOP
    // 0x2f0fec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0ff0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F0FF0u;
    {
        const bool branch_taken_0x2f0ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0ff0) {
            ctx->pc = 0x2F1014u;
            goto label_2f1014;
        }
    }
    ctx->pc = 0x2F0FF8u;
label_2f0ff8:
    // 0x2f0ff8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f0ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f0ffc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f0ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f1000: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f1000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f1004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f1004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1008: 0x0  nop
    ctx->pc = 0x2f1008u;
    // NOP
    // 0x2f100c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f100cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1010: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f1010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f1014:
    // 0x2f1014: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1018: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2f1018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f101c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2f101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2f1020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1024: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f1024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1028: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f1028u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f102c: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x2f102cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
    // 0x2f1030: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1034: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f1034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1038: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2f1038u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f103c: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x2f103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x2f1040: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1044: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f1044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1048: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2f1048u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f104c: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x2f104cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
    // 0x2f1050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1054: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f1054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1058: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x2f1058u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f105c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1060: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f1060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1064: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x2F1064u;
    SET_GPR_U32(ctx, 31, 0x2F106Cu);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x2F1064u, 0x2F106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F106Cu;
label_2f106c:
    // 0x2f106c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f106cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f1070: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2f1070u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1074: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2f1074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2f1078: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2f1078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2f107c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f107cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1080: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f1080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f1084: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2f1084u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1088: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f1088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f108c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2f108cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2f1090: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f1090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f1094: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2f1094u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1098: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f1098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f109c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f10a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f10a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f10a4: 0x0  nop
    ctx->pc = 0x2f10a4u;
    // NOP
    // 0x2f10a8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f10a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2f10ac: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f10acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f10b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f10b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f10b4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f10b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f10b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f10b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f10bc: 0x0  nop
    ctx->pc = 0x2f10bcu;
    // NOP
    // 0x2f10c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f10c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f10c4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2f10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2f10c8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f10c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f10cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f10ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f10d0: 0x0  nop
    ctx->pc = 0x2f10d0u;
    // NOP
    // 0x2f10d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f10d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f10d8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2f10d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2f10dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f10e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f10e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f10e4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2f10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2f10e8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f10e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f10ec: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f10ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f10f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f10f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f10f4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2f10f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f10f8: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x2f10f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f10fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f10fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1100: 0xc086488  jal         func_219220
    ctx->pc = 0x2F1100u;
    SET_GPR_U32(ctx, 31, 0x2F1108u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2F1100u, 0x2F1108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1108u;
label_2f1108:
    // 0x2f1108: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2f1108u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f110c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f1110: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2f1110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f1114: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F111Cu;
}
