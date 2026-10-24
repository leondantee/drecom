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

// Function: entry_001f9ef4
// Address: 0x1f9ef4 - 0x1fa040
void entry_001f9ef4_0x1f9ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9ef4_0x1f9ef4");
#endif

    ctx->pc = 0x1f9ef4u;

    // 0x1f9ef4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ef8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9efc: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x1f9efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
    // 0x1f9f00: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1f9f00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9f04: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1f9f04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1f9f08: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1f9f08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1f9f0c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f9f10: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f9f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f9f14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f9f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f9f18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f9f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f9f1c: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1f9f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1f9f20: 0xde0300e8  ld          $v1, 0xE8($s0)
    ctx->pc = 0x1f9f20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1f9f24: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1f9f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1f9f28: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1f9f28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1f9f2c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f30: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9f34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9f3c: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x1f9f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9f40: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f9f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f9f44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f9f48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f4c: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x1f9f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f9f54: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1f9f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1f9f58: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f5c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9f60: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9f68: 0xc481008c  lwc1        $f1, 0x8C($a0)
    ctx->pc = 0x1f9f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9f6c: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f9f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f9f70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f9f74: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f78: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x1f9f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f9f80: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x1f9f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x1f9f84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f88: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9f8c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1f9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1f9f90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9f94: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x1f9f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9f9c: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x1f9f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x1f9fa0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9fa4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9fa8: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1f9fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1f9fac: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1f9facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1f9fb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9fb4: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x1f9fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9fb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9fbc: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x1f9fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1f9fc0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9fc4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9fc8: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1f9fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1f9fcc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1f9fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1f9fd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9fd4: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x1f9fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9fd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9fdc: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x1f9fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x1f9fe0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9fe4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9fe8: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x1f9fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f9fec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f9fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f9ff0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f9ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f9ff4: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F9FF4u;
    {
        const bool branch_taken_0x1f9ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ff4) {
            ctx->pc = 0x1FA090u;
            return;
        }
    }
    ctx->pc = 0x1F9FFCu;
    // 0x1f9ffc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa000: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa004: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x1fa004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa008: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fa008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa00c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1fa00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa010: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fa010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1fa014: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1fa014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1fa018: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fa018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa01c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa020: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x1fa020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x1fa024: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1fa024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1fa028: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fa028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa02c: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x1fa02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa030: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fa030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fa034: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x1fa034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x1fa038: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FA038u;
    {
        const bool branch_taken_0x1fa038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa038) {
            ctx->pc = 0x1FA090u;
            return;
        }
    }
    ctx->pc = 0x1FA040u;
}
