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

// Function: set_eff_em18_denki_aura
// Address: 0x323ef0 - 0x324510
void set_eff_em18_denki_aura_0x323ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_em18_denki_aura_0x323ef0");
#endif

    switch (ctx->pc) {
        case 0x32407cu: goto label_32407c;
        case 0x324098u: goto label_324098;
        case 0x3240c4u: goto label_3240c4;
        case 0x3240e8u: goto label_3240e8;
        case 0x324200u: goto label_324200;
        case 0x324210u: goto label_324210;
        case 0x324384u: goto label_324384;
        case 0x324404u: goto label_324404;
        case 0x324420u: goto label_324420;
        case 0x32443cu: goto label_32443c;
        case 0x324458u: goto label_324458;
        case 0x3244fcu: goto label_3244fc;
        default: break;
    }

    ctx->pc = 0x323ef0u;

    // 0x323ef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x323ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x323ef4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x323ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x323ef8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x323ef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x323efc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x323efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x323f00: 0xa3a50068  sb          $a1, 0x68($sp)
    ctx->pc = 0x323f00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x323f04: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x323f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x323f08: 0x2463a0b0  addiu       $v1, $v1, -0x5F50
    ctx->pc = 0x323f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942896));
    // 0x323f0c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x323f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x323f10: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x323f10u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x39A0B0u));
    // 0x323f14: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x323f14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x323f18: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x323f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x323f1c: 0x2463a0c0  addiu       $v1, $v1, -0x5F40
    ctx->pc = 0x323f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942912));
    // 0x323f20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x323f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x323f24: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x323f24u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x39A0C0u));
    // 0x323f28: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x323f28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x323f2c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x323f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x323f30: 0x2463a0d0  addiu       $v1, $v1, -0x5F30
    ctx->pc = 0x323f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942928));
    // 0x323f34: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x323f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x323f38: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x323f38u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x39A0D0u));
    // 0x323f3c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x323f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x323f40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323f44: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x323f44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x323f48: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x323f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x323f4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x323f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x323f50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x323f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x323f54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x323f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x323f58: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x323f58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x323f5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323f60: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x323f60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x323f64: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x323f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x323f68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x323f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x323f6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x323f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x323f70: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x323f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x323f74: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x323f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x323f78: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x323f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x323f7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323f80: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x323f80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x323f84: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x323f84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x323f88: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x323f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x323f8c: 0x93a30068  lbu         $v1, 0x68($sp)
    ctx->pc = 0x323f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x323f90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x323f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x323f94: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x323f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x323f98: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x323f98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x323f9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x323f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x323fa0: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x323fa0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x323fa4: 0x0  nop
    ctx->pc = 0x323fa4u;
    // NOP
    // 0x323fa8: 0x0  nop
    ctx->pc = 0x323fa8u;
    // NOP
    // 0x323fac: 0x1810  mfhi        $v1
    ctx->pc = 0x323facu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x323fb0: 0x146000f4  bnez        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x323FB0u;
    {
        const bool branch_taken_0x323fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x323fb0) {
            ctx->pc = 0x324384u;
            goto label_324384;
        }
    }
    ctx->pc = 0x323FB8u;
    // 0x323fb8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323fbc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x323fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x323fc0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x323fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x323fc4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x323fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x323fc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x323fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x323fcc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x323fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x323fd0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x323fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x323fd4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323fd8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x323fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x323fdc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x323fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x323fe0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x323fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x323fe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x323fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x323fe8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x323fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x323fec: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x323fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x323ff0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x323ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x323ff4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323ff8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x323ff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x323ffc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x323ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x324000: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x324000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x324004: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x324004u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x324008: 0x0  nop
    ctx->pc = 0x324008u;
    // NOP
    // 0x32400c: 0x0  nop
    ctx->pc = 0x32400cu;
    // NOP
    // 0x324010: 0x1810  mfhi        $v1
    ctx->pc = 0x324010u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x324014: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x324014u;
    {
        const bool branch_taken_0x324014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x324014) {
            ctx->pc = 0x324208u;
            goto label_324208;
        }
    }
    ctx->pc = 0x32401Cu;
    // 0x32401c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32401cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324020: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x324020u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x324024: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x324024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x324028: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x324028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32402c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32402cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x324030: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x324030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x324034: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x324034u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x324038: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32403c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x32403cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x324040: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x324040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x324044: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x324044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x324048: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x324048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32404c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x32404cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x324050: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x324050u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x324054: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x324054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x324058: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32405c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x32405cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x324060: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x324060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x324064: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x324064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x324068: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x324068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x32406c: 0x146000c5  bnez        $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x32406Cu;
    {
        const bool branch_taken_0x32406c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32406c) {
            ctx->pc = 0x324384u;
            goto label_324384;
        }
    }
    ctx->pc = 0x324074u;
    // 0x324074: 0xc067648  jal         func_19D920
    ctx->pc = 0x324074u;
    SET_GPR_U32(ctx, 31, 0x32407Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324074u, 0x32407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32407Cu;
label_32407c:
    // 0x32407c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x32407cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x324080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324084: 0x0  nop
    ctx->pc = 0x324084u;
    // NOP
    // 0x324088: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32408c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x32408cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x324090: 0xc067648  jal         func_19D920
    ctx->pc = 0x324090u;
    SET_GPR_U32(ctx, 31, 0x324098u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324090u, 0x324098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324098u;
label_324098:
    // 0x324098: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x324098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x32409c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32409cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3240a0: 0x0  nop
    ctx->pc = 0x3240a0u;
    // NOP
    // 0x3240a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3240a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3240a8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3240a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3240ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3240acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3240b0: 0x0  nop
    ctx->pc = 0x3240b0u;
    // NOP
    // 0x3240b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3240b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3240b8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3240b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3240bc: 0xc067648  jal         func_19D920
    ctx->pc = 0x3240BCu;
    SET_GPR_U32(ctx, 31, 0x3240C4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3240BCu, 0x3240C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3240C4u;
label_3240c4:
    // 0x3240c4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3240c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3240c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3240c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3240cc: 0x0  nop
    ctx->pc = 0x3240ccu;
    // NOP
    // 0x3240d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3240d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3240d4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3240d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3240d8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3240d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3240dc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3240dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3240e0: 0xc067648  jal         func_19D920
    ctx->pc = 0x3240E0u;
    SET_GPR_U32(ctx, 31, 0x3240E8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3240E0u, 0x3240E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3240E8u;
label_3240e8:
    // 0x3240e8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3240e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3240ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3240ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3240f0: 0x0  nop
    ctx->pc = 0x3240f0u;
    // NOP
    // 0x3240f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3240f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3240f8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3240f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3240fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3240fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324100: 0x0  nop
    ctx->pc = 0x324100u;
    // NOP
    // 0x324104: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x324104u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x324108: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x324108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x32410c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32410cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x324110: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324114: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x324114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324118: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x324118u;
    {
        const bool branch_taken_0x324118 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x324118) {
            ctx->pc = 0x324134u;
            goto label_324134;
        }
    }
    ctx->pc = 0x324120u;
    // 0x324120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324124: 0x0  nop
    ctx->pc = 0x324124u;
    // NOP
    // 0x324128: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32412c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32412Cu;
    {
        const bool branch_taken_0x32412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32412c) {
            ctx->pc = 0x324150u;
            goto label_324150;
        }
    }
    ctx->pc = 0x324134u;
label_324134:
    // 0x324134: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x324134u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x324138: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x324138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32413c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32413cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x324140: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x324140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324144: 0x0  nop
    ctx->pc = 0x324144u;
    // NOP
    // 0x324148: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32414c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x32414cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_324150:
    // 0x324150: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324154: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x324154u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x324158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32415c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x324160: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324164: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324164u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324168: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32416c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32416cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324174: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324178: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32417c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32417cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324180: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324180u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324184: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324188: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32418c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324190: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x324190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x324194: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x324194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x324198: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32419c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32419cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3241a0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3241a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3241a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3241a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3241a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3241a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3241ac: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3241acu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3241b0: 0x0  nop
    ctx->pc = 0x3241b0u;
    // NOP
    // 0x3241b4: 0x0  nop
    ctx->pc = 0x3241b4u;
    // NOP
    // 0x3241b8: 0x1810  mfhi        $v1
    ctx->pc = 0x3241b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3241bc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3241bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3241c0: 0x2442a0e0  addiu       $v0, $v0, -0x5F20
    ctx->pc = 0x3241c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942944));
    // 0x3241c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3241c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3241c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3241c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3241cc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3241ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3241d0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3241d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3241d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3241d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3241d8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x3241d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3241dc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3241dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3241e0: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x3241e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3241e4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3241e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3241e8: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x3241e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3241ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3241ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3241f0: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x3241f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3241f4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x3241f4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3241f8: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x3241F8u;
    SET_GPR_U32(ctx, 31, 0x324200u);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x3241F8u, 0x324200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324200u;
label_324200:
    // 0x324200: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x324200u;
    {
        const bool branch_taken_0x324200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324200) {
            ctx->pc = 0x324384u;
            goto label_324384;
        }
    }
    ctx->pc = 0x324208u;
label_324208:
    // 0x324208: 0xc067648  jal         func_19D920
    ctx->pc = 0x324208u;
    SET_GPR_U32(ctx, 31, 0x324210u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324208u, 0x324210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324210u;
label_324210:
    // 0x324210: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x324210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x324214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324218: 0x0  nop
    ctx->pc = 0x324218u;
    // NOP
    // 0x32421c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32421cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324220: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x324220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x324224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324228: 0x0  nop
    ctx->pc = 0x324228u;
    // NOP
    // 0x32422c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x32422cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x324230: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x324230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x324234: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x324234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x324238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32423c: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x32423cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324240: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x324240u;
    {
        const bool branch_taken_0x324240 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x324240) {
            ctx->pc = 0x32425Cu;
            goto label_32425c;
        }
    }
    ctx->pc = 0x324248u;
    // 0x324248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32424c: 0x0  nop
    ctx->pc = 0x32424cu;
    // NOP
    // 0x324250: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x324254: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x324254u;
    {
        const bool branch_taken_0x324254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324254) {
            ctx->pc = 0x324278u;
            goto label_324278;
        }
    }
    ctx->pc = 0x32425Cu;
label_32425c:
    // 0x32425c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32425cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x324260: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x324260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x324264: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x324264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x324268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x324268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32426c: 0x0  nop
    ctx->pc = 0x32426cu;
    // NOP
    // 0x324270: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x324274: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x324274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_324278:
    // 0x324278: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32427c: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x32427cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x324280: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x324280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x324284: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x324284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x324288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32428c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32428cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x324290: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324294: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324298: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32429c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32429cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3242a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3242a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3242a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3242a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3242a8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3242a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3242ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3242acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3242b0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3242b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3242b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3242b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3242b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3242b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3242bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3242bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3242c0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3242c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3242c4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3242c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3242c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3242c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3242cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3242ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3242d0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3242d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3242d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3242d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3242d8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3242d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3242dc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3242dcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3242e0: 0x0  nop
    ctx->pc = 0x3242e0u;
    // NOP
    // 0x3242e4: 0x0  nop
    ctx->pc = 0x3242e4u;
    // NOP
    // 0x3242e8: 0x1810  mfhi        $v1
    ctx->pc = 0x3242e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3242ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3242ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3242f0: 0x2442a0e8  addiu       $v0, $v0, -0x5F18
    ctx->pc = 0x3242f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942952));
    // 0x3242f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3242f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3242f8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3242f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3242fc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3242fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324300: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324304: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324304u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324308: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32430c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32430cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324314: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324318: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324318u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32431c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32431cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324320: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324320u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324324: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324328: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32432c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324330: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x324330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x324334: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x324334u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x324338: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32433c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32433cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324340: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x324340u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x324344: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x324344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324348: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x324348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x32434c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x32434cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x324350: 0x0  nop
    ctx->pc = 0x324350u;
    // NOP
    // 0x324354: 0x0  nop
    ctx->pc = 0x324354u;
    // NOP
    // 0x324358: 0x4010  mfhi        $t0
    ctx->pc = 0x324358u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x32435c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x32435cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x324360: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x324360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x324364: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x324364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x324368: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x324368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32436c: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x32436cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x324370: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x324370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324374: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x324374u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x324378: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x324378u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32437c: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x32437Cu;
    SET_GPR_U32(ctx, 31, 0x324384u);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x32437Cu, 0x324384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324384u;
label_324384:
    // 0x324384: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324388: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x324388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x32438c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x32438cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x324390: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x324390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x324394: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x324394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x324398: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x324398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32439c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x32439cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3243a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3243a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3243a4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x3243a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3243a8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3243a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3243ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3243acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3243b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3243b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3243b4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3243b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3243b8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3243b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3243bc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3243bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3243c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3243c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3243c4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x3243c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3243c8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3243c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3243cc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x3243ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3243d0: 0x93a30068  lbu         $v1, 0x68($sp)
    ctx->pc = 0x3243d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3243d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3243d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3243d8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3243d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3243dc: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3243dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3243e0: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x3243e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x3243e4: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x3243e4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x3243e8: 0x0  nop
    ctx->pc = 0x3243e8u;
    // NOP
    // 0x3243ec: 0x0  nop
    ctx->pc = 0x3243ecu;
    // NOP
    // 0x3243f0: 0x1810  mfhi        $v1
    ctx->pc = 0x3243f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3243f4: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x3243F4u;
    {
        const bool branch_taken_0x3243f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3243f4) {
            ctx->pc = 0x3244FCu;
            goto label_3244fc;
        }
    }
    ctx->pc = 0x3243FCu;
    // 0x3243fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x3243FCu;
    SET_GPR_U32(ctx, 31, 0x324404u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3243FCu, 0x324404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324404u;
label_324404:
    // 0x324404: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x324404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x324408: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32440c: 0x0  nop
    ctx->pc = 0x32440cu;
    // NOP
    // 0x324410: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324414: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x324414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x324418: 0xc067648  jal         func_19D920
    ctx->pc = 0x324418u;
    SET_GPR_U32(ctx, 31, 0x324420u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324418u, 0x324420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324420u;
label_324420:
    // 0x324420: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x324420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x324424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324428: 0x0  nop
    ctx->pc = 0x324428u;
    // NOP
    // 0x32442c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32442cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324430: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x324430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x324434: 0xc067648  jal         func_19D920
    ctx->pc = 0x324434u;
    SET_GPR_U32(ctx, 31, 0x32443Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324434u, 0x32443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32443Cu;
label_32443c:
    // 0x32443c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x32443cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x324440: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324444: 0x0  nop
    ctx->pc = 0x324444u;
    // NOP
    // 0x324448: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32444c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x32444cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x324450: 0xc067648  jal         func_19D920
    ctx->pc = 0x324450u;
    SET_GPR_U32(ctx, 31, 0x324458u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324450u, 0x324458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324458u;
label_324458:
    // 0x324458: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x324458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x32445c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32445cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324460: 0x0  nop
    ctx->pc = 0x324460u;
    // NOP
    // 0x324464: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324468: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x324468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32446c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32446cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324470: 0x0  nop
    ctx->pc = 0x324470u;
    // NOP
    // 0x324474: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x324474u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x324478: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32447c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x32447cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324480: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324484: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32448c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32448cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324490: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x324494: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324498: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324498u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x32449c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32449cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3244a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3244a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3244a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3244a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3244a8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3244a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3244ac: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3244acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3244b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3244b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3244b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3244b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3244b8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3244b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3244bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3244bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3244c0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3244c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3244c4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3244c4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3244c8: 0x0  nop
    ctx->pc = 0x3244c8u;
    // NOP
    // 0x3244cc: 0x0  nop
    ctx->pc = 0x3244ccu;
    // NOP
    // 0x3244d0: 0x1810  mfhi        $v1
    ctx->pc = 0x3244d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3244d4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3244d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3244d8: 0x2442a0f8  addiu       $v0, $v0, -0x5F08
    ctx->pc = 0x3244d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942968));
    // 0x3244dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3244dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3244e0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3244e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3244e4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3244e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3244e8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x3244e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3244ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3244ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3244f0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3244f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3244f4: 0xc0861dc  jal         func_218770
    ctx->pc = 0x3244F4u;
    SET_GPR_U32(ctx, 31, 0x3244FCu);
    ctx->pc = 0x218770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218770u, 0x3244F4u, 0x3244FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3244FCu;
label_3244fc:
    // 0x3244fc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3244fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324500: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x324500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x324504: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x324504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x324508: 0x3e00008  jr          $ra
    ctx->pc = 0x324508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324510u;
}
