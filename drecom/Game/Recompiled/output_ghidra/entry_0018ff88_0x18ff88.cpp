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

// Function: entry_0018ff88
// Address: 0x18ff88 - 0x19016c
void entry_0018ff88_0x18ff88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ff88_0x18ff88");
#endif

    switch (ctx->pc) {
        case 0x190134u: goto label_190134;
        case 0x190160u: goto label_190160;
        default: break;
    }

    ctx->pc = 0x18ff88u;

    // 0x18ff88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18ff8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ff8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ff90: 0x0  nop
    ctx->pc = 0x18ff90u;
    // NOP
    // 0x18ff94: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x18ff94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x18ff98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18ff9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ff9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ffa0: 0x0  nop
    ctx->pc = 0x18ffa0u;
    // NOP
    // 0x18ffa4: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x18ffa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x18ffa8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18ffac: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x18ffacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ffb0: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x18ffb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x18ffb4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18ffb8: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x18ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ffbc: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x18ffbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x18ffc0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18ffc4: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x18ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ffc8: 0xc4400108  lwc1        $f0, 0x108($v0)
    ctx->pc = 0x18ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ffcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18ffccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18ffd0: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x18ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ffd4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18ffd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18ffd8: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x18ffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ffdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18ffdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18ffe0: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x18ffe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x18ffe4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18ffe8: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x18ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ffec: 0xc440010c  lwc1        $f0, 0x10C($v0)
    ctx->pc = 0x18ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fff0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18fff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18fff4: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x18fff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fff8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18fff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18fffc: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x18fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190000: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x190000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190004: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x190004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x190008: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x190008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19000c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19000cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190010: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x190010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x190014: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x190014u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x190018: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x190018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19001c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19001cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190020: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x190020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x190024: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x190024u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x190028: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x19002c: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x19002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x190030: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x190030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190034: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x190034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190038: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x190038u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19003c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x19003cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190040: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190044: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x190044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x190048: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x19004c: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x19004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x190050: 0xc7a1018c  lwc1        $f1, 0x18C($sp)
    ctx->pc = 0x190050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190054: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x190054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190058: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x190058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19005c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x19005cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190060: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190064: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x190064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x190068: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19006c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19006cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190070: 0x0  nop
    ctx->pc = 0x190070u;
    // NOP
    // 0x190074: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x190074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x190078: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x19007c: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x19007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x190080: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x190080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190084: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x190084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x190088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19008c: 0x0  nop
    ctx->pc = 0x19008cu;
    // NOP
    // 0x190090: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x190090u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190094: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x190094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190098: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x190098u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19009c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x19009cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1900a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1900a4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1900a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1900a8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1900a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1900ac: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x1900acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x1900b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1900b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1900b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1900b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1900b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1900b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1900bc: 0x0  nop
    ctx->pc = 0x1900bcu;
    // NOP
    // 0x1900c0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1900c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1900c4: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x1900c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900c8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1900c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1900cc: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1900ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1900d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1900d4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1900d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1900d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1900d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1900dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1900dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1900e0: 0x0  nop
    ctx->pc = 0x1900e0u;
    // NOP
    // 0x1900e4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1900e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1900e8: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1900e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900ec: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1900ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1900f0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1900f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900f4: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1900f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1900f8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1900f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900fc: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1900fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x190100: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x190100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190104: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x190104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x190108: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x190108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19010c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x19010cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x190110: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x190110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190114: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x190114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x190118: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x190118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19011c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x19011cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x190120: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x190120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190124: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x190124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x190128: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x190128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x19012c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x19012Cu;
    SET_GPR_U32(ctx, 31, 0x190134u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x19012Cu, 0x190134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190134u;
label_190134:
    // 0x190134: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19013c: 0x0  nop
    ctx->pc = 0x19013cu;
    // NOP
    // 0x190140: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x190140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x190144: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190148: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x190148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x19014c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x19014cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x190150: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x190150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x190154: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x190154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x190158: 0xc056858  jal         func_15A160
    ctx->pc = 0x190158u;
    SET_GPR_U32(ctx, 31, 0x190160u);
    ctx->pc = 0x15A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A160u, 0x190158u, 0x190160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190160u;
label_190160:
    // 0x190160: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x190160u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190164: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x190164u;
    {
        const bool branch_taken_0x190164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190164) {
            ctx->pc = 0x190218u;
            return;
        }
    }
    ctx->pc = 0x19016Cu;
}
