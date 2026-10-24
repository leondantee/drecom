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

// Function: entry_0018f5a4
// Address: 0x18f5a4 - 0x18f770
void entry_0018f5a4_0x18f5a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f5a4_0x18f5a4");
#endif

    ctx->pc = 0x18f5a4u;

    // 0x18f5a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18f5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f5ac: 0x0  nop
    ctx->pc = 0x18f5acu;
    // NOP
    // 0x18f5b0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x18f5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x18f5b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18f5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f5bc: 0x0  nop
    ctx->pc = 0x18f5bcu;
    // NOP
    // 0x18f5c0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x18f5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x18f5c4: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x18f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f5c8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x18f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x18f5cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18f5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x18f5d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f5d4: 0xc46000f0  lwc1        $f0, 0xF0($v1)
    ctx->pc = 0x18f5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f5d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18f5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f5dc: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x18f5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x18f5e0: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x18f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f5e4: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x18f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x18f5e8: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x18f5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x18f5ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f5f0: 0xc46000f0  lwc1        $f0, 0xF0($v1)
    ctx->pc = 0x18f5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f5f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18f5f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f5f8: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x18f5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x18f5fc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f600: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x18f600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f604: 0xc4400108  lwc1        $f0, 0x108($v0)
    ctx->pc = 0x18f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f608: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18f608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f60c: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x18f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f610: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18f610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f614: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x18f614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f618: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18f618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f61c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x18f61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x18f620: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f624: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x18f624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f628: 0xc440010c  lwc1        $f0, 0x10C($v0)
    ctx->pc = 0x18f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f62c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18f62cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f630: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x18f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f634: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18f634u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f638: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x18f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f63c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18f63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f640: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x18f640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x18f644: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x18f644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18f648: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18f648u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f64c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x18f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18f650: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18f650u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18f654: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x18f654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18f658: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18f658u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f65c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x18f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18f660: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18f660u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18f664: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f668: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x18f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x18f66c: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x18f66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f670: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18f670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f674: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18f674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f678: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x18f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f67c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18f67cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18f680: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x18f680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x18f684: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f688: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x18f688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x18f68c: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x18f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f690: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f694: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18f694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f698: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x18f698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f69c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18f69cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18f6a0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18f6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18f6a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18f6a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f6ac: 0x0  nop
    ctx->pc = 0x18f6acu;
    // NOP
    // 0x18f6b0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x18f6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x18f6b4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f6b8: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x18f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x18f6bc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x18f6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f6c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18f6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f6c8: 0x0  nop
    ctx->pc = 0x18f6c8u;
    // NOP
    // 0x18f6cc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x18f6ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18f6d0: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x18f6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f6d4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18f6d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f6d8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x18f6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f6dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18f6dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18f6e0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x18f6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x18f6e4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f6e8: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x18f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x18f6ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x18f6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f6f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18f6f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f6f8: 0x0  nop
    ctx->pc = 0x18f6f8u;
    // NOP
    // 0x18f6fc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x18f6fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18f700: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x18f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f704: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18f704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f708: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x18f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f70c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18f70cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18f710: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x18f710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x18f714: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18f714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18f718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f71c: 0x0  nop
    ctx->pc = 0x18f71cu;
    // NOP
    // 0x18f720: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x18f720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x18f724: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f728: 0x9042011a  lbu         $v0, 0x11A($v0)
    ctx->pc = 0x18f728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x18f72c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18f72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18f730: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18F730u;
    {
        const bool branch_taken_0x18f730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f730) {
            ctx->pc = 0x18F770u;
            return;
        }
    }
    ctx->pc = 0x18F738u;
    // 0x18f738: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f73c: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x18f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f740: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x18f740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x18f744: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f748: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x18f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f74c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x18f74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x18f750: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f754: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x18f754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f758: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x18f758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x18f75c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f760: 0xc44001cc  lwc1        $f0, 0x1CC($v0)
    ctx->pc = 0x18f760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f764: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x18f764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x18f768: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x18F768u;
    {
        const bool branch_taken_0x18f768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f768) {
            ctx->pc = 0x18F840u;
            return;
        }
    }
    ctx->pc = 0x18F770u;
}
