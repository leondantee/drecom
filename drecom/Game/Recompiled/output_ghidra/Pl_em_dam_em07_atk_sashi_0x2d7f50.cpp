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

// Function: Pl_em_dam_em07_atk_sashi
// Address: 0x2d7f50 - 0x2d8160
void Pl_em_dam_em07_atk_sashi_0x2d7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_dam_em07_atk_sashi_0x2d7f50");
#endif

    switch (ctx->pc) {
        case 0x2d7fe8u: goto label_2d7fe8;
        case 0x2d8044u: goto label_2d8044;
        case 0x2d8084u: goto label_2d8084;
        case 0x2d80ccu: goto label_2d80cc;
        default: break;
    }

    ctx->pc = 0x2d7f50u;

    // 0x2d7f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d7f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d7f54: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2d7f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2d7f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d7f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d7f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d7f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d7f60: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2d7f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x2d7f64: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2d7f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2d7f68: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x2d7f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2d7f6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d7f70: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x2d7f70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x2d7f74: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2d7f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2d7f78: 0x246389a0  addiu       $v1, $v1, -0x7660
    ctx->pc = 0x2d7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936992));
    // 0x2d7f7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2d7f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d7f80: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2d7f80u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3989A0u));
    // 0x2d7f84: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2d7f84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2d7f88: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2d7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2d7f8c: 0x246389b0  addiu       $v1, $v1, -0x7650
    ctx->pc = 0x2d7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937008));
    // 0x2d7f90: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2d7f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d7f94: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2d7f94u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3989B0u));
    // 0x2d7f98: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2d7f98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2d7f9c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d7f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d7fa0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d7fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d7fa4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d7fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d7fa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7fac: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D7FACu;
    {
        const bool branch_taken_0x2d7fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d7fac) {
            ctx->pc = 0x2D808Cu;
            goto label_2d808c;
        }
    }
    ctx->pc = 0x2D7FB4u;
    // 0x2d7fb4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7FB4u;
    {
        const bool branch_taken_0x2d7fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7fb4) {
            ctx->pc = 0x2D7FC4u;
            goto label_2d7fc4;
        }
    }
    ctx->pc = 0x2D7FBCu;
    // 0x2d7fbc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2D7FBCu;
    {
        const bool branch_taken_0x2d7fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7fbc) {
            ctx->pc = 0x2D8148u;
            goto label_2d8148;
        }
    }
    ctx->pc = 0x2D7FC4u;
label_2d7fc4:
    // 0x2d7fc4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d7fc8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2d7fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2d7fcc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d7fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d7fd0: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x2d7fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDF28u));
    // 0x2d7fd4: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x2d7fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2d7fd8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d7fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7fdc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d7fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d7fe0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D7FE0u;
    SET_GPR_U32(ctx, 31, 0x2D7FE8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D7FE0u, 0x2D7FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7FE8u;
label_2d7fe8:
    // 0x2d7fe8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2d7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d7fec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d7ff0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2d7ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7ff4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d7ff8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d7ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d7ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d8000: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d8000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d8004: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x2d8004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2d8008: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x2d8008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x2d800c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d800cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8010: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d8010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8014: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2d8014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2d8018: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d8018u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2d801c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d801cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8020: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2d8020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8024: 0x3c024402  lui         $v0, 0x4402
    ctx->pc = 0x2d8024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17410 << 16));
    // 0x2d8028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d802c: 0x0  nop
    ctx->pc = 0x2d802cu;
    // NOP
    // 0x2d8030: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d8030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d8034: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2d8034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2d8038: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2d8038u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d803c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x2D803Cu;
    SET_GPR_U32(ctx, 31, 0x2D8044u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x2D803Cu, 0x2D8044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8044u;
label_2d8044:
    // 0x2d8044: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d8044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8048: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2d8048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d804c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2d804cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2d8050: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d8050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d8054: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2d8054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2d8058: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d8058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d805c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d805cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d8060: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d8060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d8064: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x2d8064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x2d8068: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d8068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d806c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2d806cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d8070: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2d8070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d8074: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2d8074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d8078: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2d8078u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d807c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2D807Cu;
    SET_GPR_U32(ctx, 31, 0x2D8084u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2D807Cu, 0x2D8084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8084u;
label_2d8084:
    // 0x2d8084: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2D8084u;
    {
        const bool branch_taken_0x2d8084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8084) {
            ctx->pc = 0x2D8148u;
            goto label_2d8148;
        }
    }
    ctx->pc = 0x2D808Cu;
label_2d808c:
    // 0x2d808c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x2d808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2d8090: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x2d8090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x2d8094: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d8094u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8098: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d8098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d809c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2d809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2d80a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d80a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2d80a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d80a8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2d80a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d80ac: 0x3c024402  lui         $v0, 0x4402
    ctx->pc = 0x2d80acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17410 << 16));
    // 0x2d80b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d80b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d80b4: 0x0  nop
    ctx->pc = 0x2d80b4u;
    // NOP
    // 0x2d80b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d80b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d80bc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2d80bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2d80c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d80c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d80c4: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2D80C4u;
    SET_GPR_U32(ctx, 31, 0x2D80CCu);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2D80C4u, 0x2D80CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D80CCu;
label_2d80cc:
    // 0x2d80cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d80ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d80d0: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x2d80d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2d80d4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D80D4u;
    {
        const bool branch_taken_0x2d80d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d80d4) {
            ctx->pc = 0x2D8148u;
            goto label_2d8148;
        }
    }
    ctx->pc = 0x2D80DCu;
    // 0x2d80dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d80dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d80e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d80e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d80e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d80e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d80e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d80ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d80ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d80f0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d80f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d80f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d80f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d80f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d80f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d80fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d80fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8100: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8104: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d8104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8108: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d810c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d810cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8110: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8114: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x2d8114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8118: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d8118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d811c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2d811cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d8120: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2d8120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2d8124: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2d8124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d8128: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2d8128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2d812c: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x2d812cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x2d8130: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2d8130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2d8134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d8134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8138: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d813c: 0xe4601b34  swc1        $f0, 0x1B34($v1)
    ctx->pc = 0x2d813cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6964), bits); }
    // 0x2d8140: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D8140u;
    {
        const bool branch_taken_0x2d8140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8140) {
            ctx->pc = 0x2D8148u;
            goto label_2d8148;
        }
    }
    ctx->pc = 0x2D8148u;
label_2d8148:
    // 0x2d8148: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2d8148u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d814c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d814cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8154: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d8154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d8158: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8160u;
}
