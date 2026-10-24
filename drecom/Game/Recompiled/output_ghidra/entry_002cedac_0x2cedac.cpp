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

// Function: entry_002cedac
// Address: 0x2cedac - 0x2ceeb0
void entry_002cedac_0x2cedac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cedac_0x2cedac");
#endif

    switch (ctx->pc) {
        case 0x2cedb4u: goto label_2cedb4;
        case 0x2cee20u: goto label_2cee20;
        case 0x2ceeacu: goto label_2ceeac;
        default: break;
    }

    ctx->pc = 0x2cedacu;

    // 0x2cedac: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2CEDACu;
    SET_GPR_U32(ctx, 31, 0x2CEDB4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2CEDACu, 0x2CEDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEDB4u;
label_2cedb4:
    // 0x2cedb4: 0x1548c0  sll         $t1, $s5, 3
    ctx->pc = 0x2cedb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2cedb8: 0x3c0a003a  lui         $t2, 0x3A
    ctx->pc = 0x2cedb8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
    // 0x2cedbc: 0x25578480  addiu       $s7, $t2, -0x7B80
    ctx->pc = 0x2cedbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935680));
    // 0x2cedc0: 0x2e91821  addu        $v1, $s7, $t1
    ctx->pc = 0x2cedc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
    // 0x2cedc4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2cedc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cedc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cedc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cedcc: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2cedccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2cedd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cedd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cedd4: 0x0  nop
    ctx->pc = 0x2cedd4u;
    // NOP
    // 0x2cedd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cedd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ceddc: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x2ceddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2cede0: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x2cede0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2cede4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cede4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2cede8: 0x24768480  addiu       $s6, $v1, -0x7B80
    ctx->pc = 0x2cede8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935680));
    // 0x2cedec: 0x2c49021  addu        $s2, $s6, $a0
    ctx->pc = 0x2cedecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x2cedf0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cedf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cedf4: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2cedf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2cedf8: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cedf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cedfc: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x2cedfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2cee00: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x2cee00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cee04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2cee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cee08: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cee08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cee0c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2cee0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2cee10: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x2cee10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2cee14: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x2cee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cee18: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2CEE18u;
    SET_GPR_U32(ctx, 31, 0x2CEE20u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2CEE18u, 0x2CEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE20u;
label_2cee20:
    // 0x2cee20: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cee20u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cee24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cee24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cee28: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cee28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2cee2c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2cee2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2cee30: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2cee30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2cee34: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2cee34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2cee38: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2cee38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2cee3c: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x2cee3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2cee40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cee40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cee44: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x2cee44u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x387508u));
    // 0x2cee48: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x2cee48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2cee4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cee50: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2cee50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cee54: 0x30a4ff00  andi        $a0, $a1, 0xFF00
    ctx->pc = 0x2cee54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x2cee58: 0x43202  srl         $a2, $a0, 8
    ctx->pc = 0x2cee58u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2cee5c: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x2cee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2cee60: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cee60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cee64: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2cee64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2cee68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2cee68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cee6c: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x2cee6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2cee70: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2CEE70u;
    {
        const bool branch_taken_0x2cee70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cee70) {
            ctx->pc = 0x2CEEB0u;
            return;
        }
    }
    ctx->pc = 0x2CEE78u;
    // 0x2cee78: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x2cee78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2cee7c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2cee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2cee80: 0x24a38480  addiu       $v1, $a1, -0x7B80
    ctx->pc = 0x2cee80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935680));
    // 0x2cee84: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cee84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cee88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cee8c: 0x39980  sll         $s3, $v1, 6
    ctx->pc = 0x2cee8cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2cee90: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cee94: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2cee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2cee98: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x2cee98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2cee9c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2ceea0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2ceea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ceea4: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2CEEA4u;
    SET_GPR_U32(ctx, 31, 0x2CEEACu);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2CEEA4u, 0x2CEEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEEACu;
label_2ceeac:
    // 0x2ceeac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2ceeacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2ceeb0u;
}
