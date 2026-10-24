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

// Function: set_eff_pl00_denki_tame_lefthand
// Address: 0x2f4930 - 0x2f4db0
void set_eff_pl00_denki_tame_lefthand_0x2f4930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_pl00_denki_tame_lefthand_0x2f4930");
#endif

    switch (ctx->pc) {
        case 0x2f49f8u: goto label_2f49f8;
        case 0x2f4b88u: goto label_2f4b88;
        case 0x2f4c08u: goto label_2f4c08;
        case 0x2f4c24u: goto label_2f4c24;
        case 0x2f4c40u: goto label_2f4c40;
        case 0x2f4c5cu: goto label_2f4c5c;
        case 0x2f4d04u: goto label_2f4d04;
        case 0x2f4da0u: goto label_2f4da0;
        default: break;
    }

    ctx->pc = 0x2f4930u;

    // 0x2f4930: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f4930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f4934: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2f4934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2f4938: 0xa3a40078  sb          $a0, 0x78($sp)
    ctx->pc = 0x2f4938u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f493c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f493cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4940: 0x24428ee0  addiu       $v0, $v0, -0x7120
    ctx->pc = 0x2f4940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938336));
    // 0x2f4944: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f4944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4948: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f4948u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398EE0u));
    // 0x2f494c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f494cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f4950: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f4950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4954: 0x24428ef0  addiu       $v0, $v0, -0x7110
    ctx->pc = 0x2f4954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938352));
    // 0x2f4958: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2f4958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f495c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f495cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398EF0u));
    // 0x2f4960: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f4960u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f4964: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f4964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4968: 0x24428f00  addiu       $v0, $v0, -0x7100
    ctx->pc = 0x2f4968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938368));
    // 0x2f496c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2f496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f4970: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f4970u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398F00u));
    // 0x2f4974: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f4974u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f4978: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f497c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f497cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4980: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4984: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f498c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f498cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4990: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4994: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4998: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4998u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f499c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f499cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f49a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f49a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f49a8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f49a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f49ac: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f49acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f49b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f49b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f49b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f49b8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f49b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f49bc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f49bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f49c0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f49c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f49c4: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x2f49c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f49c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f49c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f49cc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f49d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2f49d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2f49d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f49d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f49d8: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f49d8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f49dc: 0x0  nop
    ctx->pc = 0x2f49dcu;
    // NOP
    // 0x2f49e0: 0x0  nop
    ctx->pc = 0x2f49e0u;
    // NOP
    // 0x2f49e4: 0x1010  mfhi        $v0
    ctx->pc = 0x2f49e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f49e8: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2F49E8u;
    {
        const bool branch_taken_0x2f49e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f49e8) {
            ctx->pc = 0x2F4B88u;
            goto label_2f4b88;
        }
    }
    ctx->pc = 0x2F49F0u;
    // 0x2f49f0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F49F0u;
    SET_GPR_U32(ctx, 31, 0x2F49F8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F49F0u, 0x2F49F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F49F8u;
label_2f49f8:
    // 0x2f49f8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f49fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f49fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4a00: 0x0  nop
    ctx->pc = 0x2f4a00u;
    // NOP
    // 0x2f4a04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f4a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4a08: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f4a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4a10: 0x0  nop
    ctx->pc = 0x2f4a10u;
    // NOP
    // 0x2f4a14: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2f4a14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f4a18: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2f4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2f4a1c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2f4a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2f4a20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4a24: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x2f4a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f4a28: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4A28u;
    {
        const bool branch_taken_0x2f4a28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f4a28) {
            ctx->pc = 0x2F4A44u;
            goto label_2f4a44;
        }
    }
    ctx->pc = 0x2F4A30u;
    // 0x2f4a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4a34: 0x0  nop
    ctx->pc = 0x2f4a34u;
    // NOP
    // 0x2f4a38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f4a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f4a3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4A3Cu;
    {
        const bool branch_taken_0x2f4a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4a3c) {
            ctx->pc = 0x2F4A60u;
            goto label_2f4a60;
        }
    }
    ctx->pc = 0x2F4A44u;
label_2f4a44:
    // 0x2f4a44: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f4a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f4a48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f4a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f4a4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f4a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f4a50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f4a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4a54: 0x0  nop
    ctx->pc = 0x2f4a54u;
    // NOP
    // 0x2f4a58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f4a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f4a5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f4a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f4a60:
    // 0x2f4a60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f4a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4a64: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x2f4a64u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f4a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4a6c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f4a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f4a70: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4a74: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4a78: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4a7c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4a84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4a88: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4a8c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4a90: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4a94: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4a98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4a9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4aa0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4aa4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4aa8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4aac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4ab0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4ab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4ab4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4ab8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f4abc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f4abcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f4ac0: 0x0  nop
    ctx->pc = 0x2f4ac0u;
    // NOP
    // 0x2f4ac4: 0x0  nop
    ctx->pc = 0x2f4ac4u;
    // NOP
    // 0x2f4ac8: 0x1810  mfhi        $v1
    ctx->pc = 0x2f4ac8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f4acc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f4accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4ad0: 0x24428f10  addiu       $v0, $v0, -0x70F0
    ctx->pc = 0x2f4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938384));
    // 0x2f4ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4ad8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f4ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4adc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f4adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4ae0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4ae4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4ae8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4aec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4af0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4af4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4af8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4afc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4b00: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4b00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4b04: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4b08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4b10: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4b14: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4b18: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4b1c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4b20: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4b20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4b24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4b28: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f4b2c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f4b2cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f4b30: 0x0  nop
    ctx->pc = 0x2f4b30u;
    // NOP
    // 0x2f4b34: 0x0  nop
    ctx->pc = 0x2f4b34u;
    // NOP
    // 0x2f4b38: 0x1810  mfhi        $v1
    ctx->pc = 0x2f4b38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f4b3c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4b40: 0x24428f10  addiu       $v0, $v0, -0x70F0
    ctx->pc = 0x2f4b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938384));
    // 0x2f4b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4b48: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f4b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4b4c: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2f4b4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4b50: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f4b54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f4b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f4b58: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f4b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f4b5c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f4b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f4b60: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f4b64: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f4b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f4b68: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2f4b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4b6c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f4b70: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f4b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f4b74: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f4b74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f4b78: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x2f4b78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f4b7c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f4b7cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4b80: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F4B80u;
    SET_GPR_U32(ctx, 31, 0x2F4B88u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F4B80u, 0x2F4B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B88u;
label_2f4b88:
    // 0x2f4b88: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4b8c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4b90: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4b94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4b98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4b9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4ba0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4ba4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4ba8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4bac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4bb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4bb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4bb8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4bbc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4bc0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4bc4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4bc8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4bc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4bcc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f4bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4bd0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f4bd4: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x2f4bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f4bd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4bdc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f4be0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2f4be0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2f4be4: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2f4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x2f4be8: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f4be8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f4bec: 0x0  nop
    ctx->pc = 0x2f4becu;
    // NOP
    // 0x2f4bf0: 0x0  nop
    ctx->pc = 0x2f4bf0u;
    // NOP
    // 0x2f4bf4: 0x1010  mfhi        $v0
    ctx->pc = 0x2f4bf4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f4bf8: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2F4BF8u;
    {
        const bool branch_taken_0x2f4bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4bf8) {
            ctx->pc = 0x2F4D04u;
            goto label_2f4d04;
        }
    }
    ctx->pc = 0x2F4C00u;
    // 0x2f4c00: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4C00u;
    SET_GPR_U32(ctx, 31, 0x2F4C08u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4C00u, 0x2F4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C08u;
label_2f4c08:
    // 0x2f4c08: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f4c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f4c0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4c10: 0x0  nop
    ctx->pc = 0x2f4c10u;
    // NOP
    // 0x2f4c14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f4c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4c18: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f4c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f4c1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4C1Cu;
    SET_GPR_U32(ctx, 31, 0x2F4C24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4C1Cu, 0x2F4C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C24u;
label_2f4c24:
    // 0x2f4c24: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f4c28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4c2c: 0x0  nop
    ctx->pc = 0x2f4c2cu;
    // NOP
    // 0x2f4c30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f4c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4c34: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2f4c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2f4c38: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4C38u;
    SET_GPR_U32(ctx, 31, 0x2F4C40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4C38u, 0x2F4C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C40u;
label_2f4c40:
    // 0x2f4c40: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f4c44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4c48: 0x0  nop
    ctx->pc = 0x2f4c48u;
    // NOP
    // 0x2f4c4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f4c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4c50: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2f4c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2f4c54: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4C54u;
    SET_GPR_U32(ctx, 31, 0x2F4C5Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4C54u, 0x2F4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C5Cu;
label_2f4c5c:
    // 0x2f4c5c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2f4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2f4c60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4c64: 0x0  nop
    ctx->pc = 0x2f4c64u;
    // NOP
    // 0x2f4c68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f4c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4c6c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f4c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4c74: 0x0  nop
    ctx->pc = 0x2f4c74u;
    // NOP
    // 0x2f4c78: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2f4c78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f4c7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4c80: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4c84: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4c88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4c90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4c94: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4c98: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4c9c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4ca0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4ca4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4cac: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4cb0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4cb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4cb8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4cbc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4cc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4cc4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f4cc8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f4cc8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f4ccc: 0x0  nop
    ctx->pc = 0x2f4cccu;
    // NOP
    // 0x2f4cd0: 0x0  nop
    ctx->pc = 0x2f4cd0u;
    // NOP
    // 0x2f4cd4: 0x1810  mfhi        $v1
    ctx->pc = 0x2f4cd4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f4cd8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4cdc: 0x24428f10  addiu       $v0, $v0, -0x70F0
    ctx->pc = 0x2f4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938384));
    // 0x2f4ce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4ce4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f4ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4ce8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f4ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4cec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f4cf0: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f4cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f4cf4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f4cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f4cf8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f4cf8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4cfc: 0xc0bd36c  jal         func_2F4DB0
    ctx->pc = 0x2F4CFCu;
    SET_GPR_U32(ctx, 31, 0x2F4D04u);
    ctx->pc = 0x2F4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4DB0u, 0x2F4CFCu, 0x2F4D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D04u;
label_2f4d04:
    // 0x2f4d04: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4d08: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2f4d08u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4d0c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f4d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f4d10: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2f4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2f4d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4d18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4d1c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2f4d1cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4d20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f4d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f4d24: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f4d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f4d28: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4d2c: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2f4d2cu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4d30: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f4d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f4d34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f4d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4d3c: 0x0  nop
    ctx->pc = 0x2f4d3cu;
    // NOP
    // 0x2f4d40: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f4d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f4d44: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x2f4d44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f4d48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4d4c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f4d4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f4d50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4d54: 0x0  nop
    ctx->pc = 0x2f4d54u;
    // NOP
    // 0x2f4d58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f4d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f4d5c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2f4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2f4d60: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f4d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f4d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4d68: 0x0  nop
    ctx->pc = 0x2f4d68u;
    // NOP
    // 0x2f4d6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f4d6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f4d70: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f4d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2f4d74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f4d78: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f4d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f4d7c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2f4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2f4d80: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f4d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f4d84: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f4d84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4d88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f4d88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4d8c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f4d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f4d90: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2f4d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f4d94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f4d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4d98: 0xc086488  jal         func_219220
    ctx->pc = 0x2F4D98u;
    SET_GPR_U32(ctx, 31, 0x2F4DA0u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2F4D98u, 0x2F4DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4DA0u;
label_2f4da0:
    // 0x2f4da0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2f4da0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4da4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2f4da4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f4da8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4DB0u;
}
