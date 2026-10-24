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

// Function: entry_002f70f4
// Address: 0x2f70f4 - 0x2f71cc
void entry_002f70f4_0x2f70f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f70f4_0x2f70f4");
#endif

    switch (ctx->pc) {
        case 0x2f7104u: goto label_2f7104;
        case 0x2f7164u: goto label_2f7164;
        default: break;
    }

    ctx->pc = 0x2f70f4u;

    // 0x2f70f4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f70f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f70f8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2f70f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f70fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F70FCu;
    SET_GPR_U32(ctx, 31, 0x2F7104u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F70FCu, 0x2F7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7104u;
label_2f7104:
    // 0x2f7104: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x2f7104u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7108: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2f7108u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f710c: 0x0  nop
    ctx->pc = 0x2f710cu;
    // NOP
    // 0x2f7110: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7114: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f7114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f7118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f711c: 0x0  nop
    ctx->pc = 0x2f711cu;
    // NOP
    // 0x2f7120: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7120u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7124: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f7124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f7128: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f7128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f712c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7130: 0x8fa900f8  lw          $t1, 0xF8($sp)
    ctx->pc = 0x2f7130u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7134: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7138: 0x8d2400c4  lw          $a0, 0xC4($t1)
    ctx->pc = 0x2f7138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
    // 0x2f713c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x2f713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f7140: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f7140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7144: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f7144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f7148: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x2f7148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f714c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f714cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7150: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f7150u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f7154: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7158: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7158u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f715c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F715Cu;
    SET_GPR_U32(ctx, 31, 0x2F7164u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F715Cu, 0x2F7164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7164u;
label_2f7164:
    // 0x2f7164: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f7164u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7168: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f716c: 0x8c317508  lw          $s1, 0x7508($at)
    ctx->pc = 0x2f716cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7170: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x2f7170u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2f7174: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2f7174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2f7178: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x2f7178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2f717c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f717cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7180: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2f7180u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f7184: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7188: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f7188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f718c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f718cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f7190: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x2f7190u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7194: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x2f7194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2f7198: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x2f7198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2f719c: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x2f719cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2f71a0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2f71a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f71a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f71a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f71a8: 0xac257508  sw          $a1, 0x7508($at)
    ctx->pc = 0x2f71a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f71ac: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2f71acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f71b0: 0x30c70003  andi        $a3, $a2, 0x3
    ctx->pc = 0x2f71b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x2f71b4: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F71B4u;
    {
        const bool branch_taken_0x2f71b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f71b4) {
            ctx->pc = 0x2F71CCu;
            return;
        }
    }
    ctx->pc = 0x2F71BCu;
    // 0x2f71bc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2f71bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f71c0: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x2f71c0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f71c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F71C4u;
    {
        const bool branch_taken_0x2f71c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f71c4) {
            ctx->pc = 0x2F71D4u;
            return;
        }
    }
    ctx->pc = 0x2F71CCu;
}
