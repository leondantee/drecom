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

// Function: caseD_3
// Address: 0x316eb4 - 0x316fc0
void caseD_3_0x316eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x316eb4");
#endif

    switch (ctx->pc) {
        case 0x316f18u: goto label_316f18;
        default: break;
    }

    ctx->pc = 0x316eb4u;

    // 0x316eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316eb8: 0x0  nop
    ctx->pc = 0x316eb8u;
    // NOP
    // 0x316ebc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x316ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x316ec0: 0x3c05c348  lui         $a1, 0xC348
    ctx->pc = 0x316ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49992 << 16));
    // 0x316ec4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x316ec4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316ec8: 0x0  nop
    ctx->pc = 0x316ec8u;
    // NOP
    // 0x316ecc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x316eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x316ed0: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x316ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x316ed4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316ed4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316ed8: 0x0  nop
    ctx->pc = 0x316ed8u;
    // NOP
    // 0x316edc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x316edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x316ee0: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x316ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x316ee4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x316ee4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316ee8: 0x0  nop
    ctx->pc = 0x316ee8u;
    // NOP
    // 0x316eec: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x316eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x316ef0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316ef4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x316ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316ef8: 0x8ca61298  lw          $a2, 0x1298($a1)
    ctx->pc = 0x316ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4760)));
    // 0x316efc: 0x62180  sll         $a0, $a2, 6
    ctx->pc = 0x316efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x316f00: 0x8e090130  lw          $t1, 0x130($s0)
    ctx->pc = 0x316f00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316f04: 0x1242821  addu        $a1, $t1, $a0
    ctx->pc = 0x316f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x316f08: 0x24e40120  addiu       $a0, $a3, 0x120
    ctx->pc = 0x316f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x316f0c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x316f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x316f10: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x316F10u;
    SET_GPR_U32(ctx, 31, 0x316F18u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x316F18u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x316F18u) { return; }
    ctx->pc = 0x316F18u;
label_316f18:
    // 0x316f18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x316f18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x316f1c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316f20: 0xc4e101a0  lwc1        $f1, 0x1A0($a3)
    ctx->pc = 0x316f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x316f24: 0x3c043ba3  lui         $a0, 0x3BA3
    ctx->pc = 0x316f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15267 << 16));
    // 0x316f28: 0x3485d70a  ori         $a1, $a0, 0xD70A
    ctx->pc = 0x316f28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x316f2c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x316f2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316f30: 0x0  nop
    ctx->pc = 0x316f30u;
    // NOP
    // 0x316f34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x316f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x316f38: 0xe4e001a0  swc1        $f0, 0x1A0($a3)
    ctx->pc = 0x316f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 416), bits); }
    // 0x316f3c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316f40: 0xc4e101a4  lwc1        $f1, 0x1A4($a3)
    ctx->pc = 0x316f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x316f44: 0x3c043ba3  lui         $a0, 0x3BA3
    ctx->pc = 0x316f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15267 << 16));
    // 0x316f48: 0x3484d70a  ori         $a0, $a0, 0xD70A
    ctx->pc = 0x316f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x316f4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316f4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316f50: 0x0  nop
    ctx->pc = 0x316f50u;
    // NOP
    // 0x316f54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x316f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x316f58: 0xe4e001a4  swc1        $f0, 0x1A4($a3)
    ctx->pc = 0x316f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 420), bits); }
    // 0x316f5c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316f60: 0xc4e101a8  lwc1        $f1, 0x1A8($a3)
    ctx->pc = 0x316f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x316f64: 0x3c043ba3  lui         $a0, 0x3BA3
    ctx->pc = 0x316f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15267 << 16));
    // 0x316f68: 0x3484d70a  ori         $a0, $a0, 0xD70A
    ctx->pc = 0x316f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x316f6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316f6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316f70: 0x0  nop
    ctx->pc = 0x316f70u;
    // NOP
    // 0x316f74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x316f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x316f78: 0xe4e001a8  swc1        $f0, 0x1A8($a3)
    ctx->pc = 0x316f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 424), bits); }
    // 0x316f7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316f80: 0x8c831290  lw          $v1, 0x1290($a0)
    ctx->pc = 0x316f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
    // 0x316f84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x316f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x316f88: 0xac831290  sw          $v1, 0x1290($a0)
    ctx->pc = 0x316f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 3));
    // 0x316f8c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x316f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316f90: 0x8ca31290  lw          $v1, 0x1290($a1)
    ctx->pc = 0x316f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4752)));
    // 0x316f94: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x316f94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x316f98: 0x142004f2  bnez        $at, . + 4 + (0x4F2 << 2)
    ctx->pc = 0x316F98u;
    {
        const bool branch_taken_0x316f98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x316f98) {
            ctx->pc = 0x318364u;
            return;
        }
    }
    ctx->pc = 0x316FA0u;
    // 0x316fa0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x316fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316fa4: 0xacc01290  sw          $zero, 0x1290($a2)
    ctx->pc = 0x316fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4752), GPR_U32(ctx, 0));
    // 0x316fa8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316fac: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x316facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x316fb0: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x316fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x316fb4: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x316fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x316fb8: 0x100004ea  b           . + 4 + (0x4EA << 2)
    ctx->pc = 0x316FB8u;
    {
        const bool branch_taken_0x316fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316fb8) {
            ctx->pc = 0x318364u;
            return;
        }
    }
    ctx->pc = 0x316FC0u;
}
