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

// Function: entry_001b0e88
// Address: 0x1b0e88 - 0x1b1004
void entry_001b0e88_0x1b0e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0e88_0x1b0e88");
#endif

    switch (ctx->pc) {
        case 0x1b0ea0u: goto label_1b0ea0;
        case 0x1b0eb8u: goto label_1b0eb8;
        default: break;
    }

    ctx->pc = 0x1b0e88u;

label_1b0e88:
    // 0x1b0e88: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b0e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b0e8c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1b0e8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1b0e90: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1b0e90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b0e94: 0xc7ac00f4  lwc1        $f12, 0xF4($sp)
    ctx->pc = 0x1b0e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b0e98: 0xc06c560  jal         func_1B1580
    ctx->pc = 0x1B0E98u;
    SET_GPR_U32(ctx, 31, 0x1B0EA0u);
    ctx->pc = 0x1B1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1580u, 0x1B0E98u, 0x1B0EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EA0u;
label_1b0ea0:
    // 0x1b0ea0: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x1b0ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x1b0ea4: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x1b0ea4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b0ea8: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1b0ea8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1b0eac: 0xc7ac00f8  lwc1        $f12, 0xF8($sp)
    ctx->pc = 0x1b0eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b0eb0: 0xc06c560  jal         func_1B1580
    ctx->pc = 0x1B0EB0u;
    SET_GPR_U32(ctx, 31, 0x1B0EB8u);
    ctx->pc = 0x1B1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1580u, 0x1B0EB0u, 0x1B0EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EB8u;
label_1b0eb8:
    // 0x1b0eb8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b0eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0ebc: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1b0ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0ec0: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1b0ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0ec4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b0ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b0ec8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b0ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b0ecc: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0ed0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1b0ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0ed4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1b0ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0ed8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b0ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b0edc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b0edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b0ee0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0ee4: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1b0ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0ee8: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1b0ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0eec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b0eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b0ef0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b0ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1b0ef4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0ef8: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1b0ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0efc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b0efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f04: 0x0  nop
    ctx->pc = 0x1b0f04u;
    // NOP
    // 0x1b0f08: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1b0f08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f0c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1b0f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0f10: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b0f10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f14: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b0f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0f18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0f18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f1c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b0f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b0f20: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b0f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0f24: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1b0f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0f28: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b0f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f30: 0x0  nop
    ctx->pc = 0x1b0f30u;
    // NOP
    // 0x1b0f34: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1b0f34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f38: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1b0f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0f3c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b0f3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f40: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b0f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0f44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f48: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b0f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b0f4c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b0f50: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1b0f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0f54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b0f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f5c: 0x0  nop
    ctx->pc = 0x1b0f5cu;
    // NOP
    // 0x1b0f60: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1b0f60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f64: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1b0f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0f68: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b0f68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f6c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b0f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0f70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b0f74: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b0f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1b0f78: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b0f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b0f7c: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x1b0f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x1b0f80: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x1b0f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x1b0f84: 0x26730006  addiu       $s3, $s3, 0x6
    ctx->pc = 0x1b0f84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x1b0f88: 0x26940006  addiu       $s4, $s4, 0x6
    ctx->pc = 0x1b0f88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
    // 0x1b0f8c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1b0f8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1b0f90: 0x16a0ffbd  bnez        $s5, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1B0F90u;
    {
        const bool branch_taken_0x1b0f90 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f90) {
            ctx->pc = 0x1B0E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0e88;
        }
    }
    ctx->pc = 0x1B0F98u;
    // 0x1b0f98: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b0f98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1b0f9c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x1b0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1b0fa0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b0fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b0fa4: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x1b0fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x1b0fa8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1b0fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1b0fac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b0facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b0fb0: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x1b0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x1b0fb4: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x1b0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1b0fb8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b0fbc: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x1b0fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x1b0fc0: 0x26f700c0  addiu       $s7, $s7, 0xC0
    ctx->pc = 0x1b0fc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
    // 0x1b0fc4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1b0fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b0fc8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b0fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0fcc: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x1b0fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x1b0fd0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1b0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b0fd4: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1b0fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1b0fd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0fdc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b0fdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0fe0: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
    ctx->pc = 0x1B0FE0u;
    {
        const bool branch_taken_0x1b0fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0fe0) {
            ctx->pc = 0x1B0E0Cu;
            return;
        }
    }
    ctx->pc = 0x1B0FE8u;
    // 0x1b0fe8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b0fe8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b0fec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b0fecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0ff0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b0ff0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0ff4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b0ff4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0ff8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b0ff8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0ffc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b0ffcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1000: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b1000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b1004u;
}
