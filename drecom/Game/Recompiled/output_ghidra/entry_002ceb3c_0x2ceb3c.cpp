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

// Function: entry_002ceb3c
// Address: 0x2ceb3c - 0x2cec40
void entry_002ceb3c_0x2ceb3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ceb3c_0x2ceb3c");
#endif

    switch (ctx->pc) {
        case 0x2ceb44u: goto label_2ceb44;
        case 0x2cebb0u: goto label_2cebb0;
        case 0x2cec3cu: goto label_2cec3c;
        default: break;
    }

    ctx->pc = 0x2ceb3cu;

    // 0x2ceb3c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2CEB3Cu;
    SET_GPR_U32(ctx, 31, 0x2CEB44u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2CEB3Cu, 0x2CEB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB44u;
label_2ceb44:
    // 0x2ceb44: 0x1438c0  sll         $a3, $s4, 3
    ctx->pc = 0x2ceb44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2ceb48: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2ceb48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2ceb4c: 0x24a68480  addiu       $a2, $a1, -0x7B80
    ctx->pc = 0x2ceb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935680));
    // 0x2ceb50: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x2ceb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2ceb54: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2ceb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ceb58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ceb58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ceb5c: 0x3c0742c8  lui         $a3, 0x42C8
    ctx->pc = 0x2ceb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17096 << 16));
    // 0x2ceb60: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ceb60u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ceb64: 0x0  nop
    ctx->pc = 0x2ceb64u;
    // NOP
    // 0x2ceb68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ceb68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ceb6c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2ceb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2ceb70: 0x1448c0  sll         $t1, $s4, 3
    ctx->pc = 0x2ceb70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2ceb74: 0x3c0a003a  lui         $t2, 0x3A
    ctx->pc = 0x2ceb74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
    // 0x2ceb78: 0x25578480  addiu       $s7, $t2, -0x7B80
    ctx->pc = 0x2ceb78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935680));
    // 0x2ceb7c: 0x2e91821  addu        $v1, $s7, $t1
    ctx->pc = 0x2ceb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
    // 0x2ceb80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ceb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ceb84: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2ceb84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2ceb88: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2ceb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2ceb8c: 0x8c760130  lw          $s6, 0x130($v1)
    ctx->pc = 0x2ceb8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2ceb90: 0x2c43821  addu        $a3, $s6, $a0
    ctx->pc = 0x2ceb90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x2ceb94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ceb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ceb98: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2ceb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2ceb9c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2ceb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ceba0: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2ceba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ceba4: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x2ceba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ceba8: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2CEBA8u;
    SET_GPR_U32(ctx, 31, 0x2CEBB0u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2CEBA8u, 0x2CEBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBB0u;
label_2cebb0:
    // 0x2cebb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cebb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cebb4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cebb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cebb8: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2cebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2cebbc: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2cebbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2cebc0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2cebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2cebc4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2cebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cebc8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cebc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cebcc: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x2cebccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2cebd0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cebd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cebd4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2cebd8: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x2cebd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2cebdc: 0x69080  sll         $s2, $a2, 2
    ctx->pc = 0x2cebdcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cebe0: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x2cebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2cebe4: 0x3065ff00  andi        $a1, $v1, 0xFF00
    ctx->pc = 0x2cebe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2cebe8: 0x52202  srl         $a0, $a1, 8
    ctx->pc = 0x2cebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2cebec: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x2cebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2cebf0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cebf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cebf4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2cebf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2cebf8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cebf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cebfc: 0x30650003  andi        $a1, $v1, 0x3
    ctx->pc = 0x2cebfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2cec00: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2CEC00u;
    {
        const bool branch_taken_0x2cec00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cec00) {
            ctx->pc = 0x2CEC40u;
            return;
        }
    }
    ctx->pc = 0x2CEC08u;
    // 0x2cec08: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x2cec08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2cec0c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2cec0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2cec10: 0x24c38480  addiu       $v1, $a2, -0x7B80
    ctx->pc = 0x2cec10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935680));
    // 0x2cec14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cec14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cec18: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2cec18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cec1c: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x2cec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2cec20: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cec20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cec24: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x2cec24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2cec28: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2cec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cec2c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cec30: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2cec30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2cec34: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2CEC34u;
    SET_GPR_U32(ctx, 31, 0x2CEC3Cu);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2CEC34u, 0x2CEC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC3Cu;
label_2cec3c:
    // 0x2cec3c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cec3cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2cec40u;
}
