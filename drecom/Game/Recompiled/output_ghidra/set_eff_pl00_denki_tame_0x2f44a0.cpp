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

// Function: set_eff_pl00_denki_tame
// Address: 0x2f44a0 - 0x2f492c
void set_eff_pl00_denki_tame_0x2f44a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_pl00_denki_tame_0x2f44a0");
#endif

    switch (ctx->pc) {
        case 0x2f4574u: goto label_2f4574;
        case 0x2f4700u: goto label_2f4700;
        case 0x2f4780u: goto label_2f4780;
        case 0x2f479cu: goto label_2f479c;
        case 0x2f47b8u: goto label_2f47b8;
        case 0x2f47d4u: goto label_2f47d4;
        case 0x2f487cu: goto label_2f487c;
        case 0x2f4918u: goto label_2f4918;
        default: break;
    }

    ctx->pc = 0x2f44a0u;

    // 0x2f44a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f44a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f44a4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2f44a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2f44a8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2f44a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f44ac: 0xa3a40088  sb          $a0, 0x88($sp)
    ctx->pc = 0x2f44acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f44b0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f44b4: 0x24428ea0  addiu       $v0, $v0, -0x7160
    ctx->pc = 0x2f44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938272));
    // 0x2f44b8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2f44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f44bc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f44bcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398EA0u));
    // 0x2f44c0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f44c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f44c4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f44c8: 0x24428eb0  addiu       $v0, $v0, -0x7150
    ctx->pc = 0x2f44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938288));
    // 0x2f44cc: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2f44ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f44d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f44d0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398EB0u));
    // 0x2f44d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f44d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f44d8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f44dc: 0x24428ec0  addiu       $v0, $v0, -0x7140
    ctx->pc = 0x2f44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938304));
    // 0x2f44e0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2f44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f44e4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f44e4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398EC0u));
    // 0x2f44e8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f44e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f44ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f44ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f44f0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f44f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f44f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f44f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f44fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4500: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4504: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4504u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4508: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f450c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f450cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4510: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4514: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f451c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f451cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4520: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4524: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4528: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f452c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f452cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4530: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f4530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4534: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f4534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f4538: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f4538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f453c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f453cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4540: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f4540u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f4544: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2f4544u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2f4548: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f454c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f454cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f4550: 0x0  nop
    ctx->pc = 0x2f4550u;
    // NOP
    // 0x2f4554: 0x0  nop
    ctx->pc = 0x2f4554u;
    // NOP
    // 0x2f4558: 0x1010  mfhi        $v0
    ctx->pc = 0x2f4558u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f455c: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2F455Cu;
    {
        const bool branch_taken_0x2f455c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f455c) {
            ctx->pc = 0x2F4700u;
            goto label_2f4700;
        }
    }
    ctx->pc = 0x2F4564u;
    // 0x2f4564: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f4564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f4568: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2f4568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f456c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F456Cu;
    SET_GPR_U32(ctx, 31, 0x2F4574u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F456Cu, 0x2F4574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4574u;
label_2f4574:
    // 0x2f4574: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f4574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f4578: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f457c: 0x0  nop
    ctx->pc = 0x2f457cu;
    // NOP
    // 0x2f4580: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f4580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4584: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f4584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f4588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f458c: 0x0  nop
    ctx->pc = 0x2f458cu;
    // NOP
    // 0x2f4590: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2f4590u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f4594: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2f4594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2f4598: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2f4598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2f459c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f459cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f45a0: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f45a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f45a4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F45A4u;
    {
        const bool branch_taken_0x2f45a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f45a4) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F45ACu;
    // 0x2f45ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f45acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f45b0: 0x0  nop
    ctx->pc = 0x2f45b0u;
    // NOP
    // 0x2f45b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f45b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f45b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F45B8u;
    {
        const bool branch_taken_0x2f45b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f45b8) {
            ctx->pc = 0x2F45DCu;
            goto label_2f45dc;
        }
    }
    ctx->pc = 0x2F45C0u;
label_2f45c0:
    // 0x2f45c0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f45c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f45c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f45c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f45c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f45c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f45cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f45ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f45d0: 0x0  nop
    ctx->pc = 0x2f45d0u;
    // NOP
    // 0x2f45d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f45d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f45d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f45d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f45dc:
    // 0x2f45dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f45dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f45e0: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x2f45e0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f45e4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f45e8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f45e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f45ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f45f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f45f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f45f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f45f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f45f8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f45fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f45fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4600: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4608: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f460c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f460cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4610: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4614: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4614u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4618: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f461c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f461cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4624: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4628: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4628u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f462c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4630: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4634: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4634u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4638: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f463c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f4640: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f4640u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f4644: 0x0  nop
    ctx->pc = 0x2f4644u;
    // NOP
    // 0x2f4648: 0x0  nop
    ctx->pc = 0x2f4648u;
    // NOP
    // 0x2f464c: 0x1810  mfhi        $v1
    ctx->pc = 0x2f464cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f4650: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f4650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4654: 0x24428ed0  addiu       $v0, $v0, -0x7130
    ctx->pc = 0x2f4654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x2f4658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f465c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f465cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4660: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f4660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4664: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4668: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4668u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f466c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f466cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4670: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4678: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f467c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f467cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4680: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4684: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4684u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4688: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f468c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f468cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4694: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4698: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4698u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f469c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f469cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f46a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f46a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f46a4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f46a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f46a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f46a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f46ac: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f46acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f46b0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f46b0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f46b4: 0x0  nop
    ctx->pc = 0x2f46b4u;
    // NOP
    // 0x2f46b8: 0x0  nop
    ctx->pc = 0x2f46b8u;
    // NOP
    // 0x2f46bc: 0x1810  mfhi        $v1
    ctx->pc = 0x2f46bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f46c0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f46c4: 0x24428ed0  addiu       $v0, $v0, -0x7130
    ctx->pc = 0x2f46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x2f46c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f46cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f46ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f46d0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2f46d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f46d4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f46d8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f46d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f46dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f46dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f46e0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f46e4: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f46e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f46e8: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2f46e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f46ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f46ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f46f0: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f46f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f46f4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f46f4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f46f8: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F46F8u;
    SET_GPR_U32(ctx, 31, 0x2F4700u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F46F8u, 0x2F4700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4700u;
label_2f4700:
    // 0x2f4700: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4704: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4704u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4708: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f470c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f470cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4718: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f471c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f471cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4720: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4720u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4724: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4728: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f472c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4730: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4734: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4734u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4738: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f473c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f473cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4740: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4744: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f4744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4748: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f4748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f474c: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f474cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f4750: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4754: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f4754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f4758: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2f4758u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2f475c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2f475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x2f4760: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f4760u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f4764: 0x0  nop
    ctx->pc = 0x2f4764u;
    // NOP
    // 0x2f4768: 0x0  nop
    ctx->pc = 0x2f4768u;
    // NOP
    // 0x2f476c: 0x1010  mfhi        $v0
    ctx->pc = 0x2f476cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f4770: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2F4770u;
    {
        const bool branch_taken_0x2f4770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4770) {
            ctx->pc = 0x2F487Cu;
            goto label_2f487c;
        }
    }
    ctx->pc = 0x2F4778u;
    // 0x2f4778: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4778u;
    SET_GPR_U32(ctx, 31, 0x2F4780u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4778u, 0x2F4780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4780u;
label_2f4780:
    // 0x2f4780: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f4780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f4784: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4788: 0x0  nop
    ctx->pc = 0x2f4788u;
    // NOP
    // 0x2f478c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f478cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4790: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f4790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f4794: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4794u;
    SET_GPR_U32(ctx, 31, 0x2F479Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4794u, 0x2F479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F479Cu;
label_2f479c:
    // 0x2f479c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f479cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f47a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f47a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f47a4: 0x0  nop
    ctx->pc = 0x2f47a4u;
    // NOP
    // 0x2f47a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f47a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f47ac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f47acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f47b0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F47B0u;
    SET_GPR_U32(ctx, 31, 0x2F47B8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F47B0u, 0x2F47B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F47B8u;
label_2f47b8:
    // 0x2f47b8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f47bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f47bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f47c0: 0x0  nop
    ctx->pc = 0x2f47c0u;
    // NOP
    // 0x2f47c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f47c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f47c8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f47c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f47cc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F47CCu;
    SET_GPR_U32(ctx, 31, 0x2F47D4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F47CCu, 0x2F47D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F47D4u;
label_2f47d4:
    // 0x2f47d4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2f47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2f47d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f47d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f47dc: 0x0  nop
    ctx->pc = 0x2f47dcu;
    // NOP
    // 0x2f47e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f47e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f47e4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f47e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f47e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f47ec: 0x0  nop
    ctx->pc = 0x2f47ecu;
    // NOP
    // 0x2f47f0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2f47f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f47f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f47f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f47f8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f47fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f47fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4800: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4808: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f480c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f480cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4810: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4814: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4818: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f481c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f481cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4824: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4828: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4828u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f482c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4830: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4834: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4834u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4838: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f483c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f4840: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f4840u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f4844: 0x0  nop
    ctx->pc = 0x2f4844u;
    // NOP
    // 0x2f4848: 0x0  nop
    ctx->pc = 0x2f4848u;
    // NOP
    // 0x2f484c: 0x1810  mfhi        $v1
    ctx->pc = 0x2f484cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f4850: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f4850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4854: 0x24428ed0  addiu       $v0, $v0, -0x7130
    ctx->pc = 0x2f4854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x2f4858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f485c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f485cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4860: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f4860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4864: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f4864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f4868: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f4868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f486c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f486cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f4870: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f4870u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4874: 0xc0bd36c  jal         func_2F4DB0
    ctx->pc = 0x2F4874u;
    SET_GPR_U32(ctx, 31, 0x2F487Cu);
    ctx->pc = 0x2F4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4DB0u, 0x2F4874u, 0x2F487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F487Cu;
label_2f487c:
    // 0x2f487c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f487cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4880: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2f4880u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4884: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2f4884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2f4888: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2f4888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2f488c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f488cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4890: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4894: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2f4894u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4898: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f4898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f489c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2f489cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2f48a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f48a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f48a4: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2f48a4u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f48a8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f48a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f48ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f48acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f48b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f48b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f48b4: 0x0  nop
    ctx->pc = 0x2f48b4u;
    // NOP
    // 0x2f48b8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f48b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2f48bc: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f48bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f48c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f48c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f48c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f48c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f48c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f48c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f48cc: 0x0  nop
    ctx->pc = 0x2f48ccu;
    // NOP
    // 0x2f48d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f48d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f48d4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2f48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2f48d8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f48d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f48dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f48dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f48e0: 0x0  nop
    ctx->pc = 0x2f48e0u;
    // NOP
    // 0x2f48e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f48e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f48e8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2f48e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2f48ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f48f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f48f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f48f4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2f48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2f48f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f48f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f48fc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f48fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4900: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f4900u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4904: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2f4904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f4908: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x2f4908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f490c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f490cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4910: 0xc086488  jal         func_219220
    ctx->pc = 0x2F4910u;
    SET_GPR_U32(ctx, 31, 0x2F4918u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2F4910u, 0x2F4918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4918u;
label_2f4918:
    // 0x2f4918: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2f4918u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f491c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f4920: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2f4920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f4924: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F492Cu;
}
