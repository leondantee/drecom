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

// Function: entry_0029c3e0
// Address: 0x29c3e0 - 0x29c4b8
void entry_0029c3e0_0x29c3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c3e0_0x29c3e0");
#endif

    ctx->pc = 0x29c3e0u;

    // 0x29c3e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c3e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c3e8: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x29c3e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29c3ec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x29c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c3f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29c3f4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x29c3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29c3f8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x29c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29c3fc: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x29c3fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29c400: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c404: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c408: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x29c408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29c40c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x29c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c410: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29c410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29c414: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x29c414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29c418: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x29c418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29c41c: 0x83a021  addu        $s4, $a0, $v1
    ctx->pc = 0x29c41cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29c420: 0xc621fffc  lwc1        $f1, -0x4($s1)
    ctx->pc = 0x29c420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c424: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x29c424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c428: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29c428u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29c42c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29c42cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c430: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c434: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29c434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c438: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x29c438u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29c43c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c440: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29c440u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29c444: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29c444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c448: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c44c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c450: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x29c450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29c454: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29c454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c458: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x29c458u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29c45c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x29c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x29c460: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29c460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c464: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c468: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29c468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c46c: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x29c46cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29c470: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x29c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c474: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29c474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29c478: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x29c478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x29c47c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x29c47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29c480: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x29c480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x29c484: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x29c484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x29c488: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29c488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c48c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x29c48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c490: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29c490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c494: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x29c494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29c498: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x29c498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29c49c: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x29c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
    // 0x29c4a0: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x29c4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x29c4a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29c4a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c4a8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x29c4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c4ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29c4acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29c4b0: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x29c4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x29c4b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29c4b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x29c4b8u;
}
