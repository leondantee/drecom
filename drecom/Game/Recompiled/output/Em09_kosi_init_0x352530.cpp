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

// Function: Em09_kosi_init
// Address: 0x352530 - 0x3526b4
void Em09_kosi_init_0x352530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_kosi_init_0x352530");
#endif

    ctx->pc = 0x352530u;

    // 0x352530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x352534: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x352534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x352538: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x352538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35253c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35253cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352540: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x352540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x352544: 0x247004b0  addiu       $s0, $v1, 0x4B0
    ctx->pc = 0x352544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x352548: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35254c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x35254cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352550: 0xc46000f0  lwc1        $f0, 0xF0($v1)
    ctx->pc = 0x352550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352554: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352558: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x352558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x35255c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352560: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352564: 0xc46000f4  lwc1        $f0, 0xF4($v1)
    ctx->pc = 0x352564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352568: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35256c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x35256cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x352570: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352574: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352578: 0xc46000f8  lwc1        $f0, 0xF8($v1)
    ctx->pc = 0x352578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35257c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35257cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352580: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x352584: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352588: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x352588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x35258c: 0x24700640  addiu       $s0, $v1, 0x640
    ctx->pc = 0x35258cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
    // 0x352590: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352594: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352598: 0xc4600130  lwc1        $f0, 0x130($v1)
    ctx->pc = 0x352598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35259c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3525a0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3525a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3525a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3525a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3525a8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3525a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3525ac: 0xc4600134  lwc1        $f0, 0x134($v1)
    ctx->pc = 0x3525acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3525b0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3525b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3525b4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3525b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3525b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3525b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3525bc: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3525bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3525c0: 0xc4600138  lwc1        $f0, 0x138($v1)
    ctx->pc = 0x3525c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3525c4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3525c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3525c8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3525c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3525cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3525ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3525d0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x3525d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3525d4: 0x24702bc0  addiu       $s0, $v1, 0x2BC0
    ctx->pc = 0x3525d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11200));
    // 0x3525d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3525d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3525dc: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3525dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3525e0: 0xc46000f0  lwc1        $f0, 0xF0($v1)
    ctx->pc = 0x3525e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3525e4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3525e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3525e8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3525e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3525ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3525ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3525f0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3525f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3525f4: 0xc46000f4  lwc1        $f0, 0xF4($v1)
    ctx->pc = 0x3525f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3525f8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3525f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3525fc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3525fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x352600: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352604: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352608: 0xc46000f8  lwc1        $f0, 0xF8($v1)
    ctx->pc = 0x352608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35260c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35260cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352610: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x352614: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352618: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x352618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x35261c: 0x24702ee0  addiu       $s0, $v1, 0x2EE0
    ctx->pc = 0x35261cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12000));
    // 0x352620: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352624: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352628: 0xc46007b0  lwc1        $f0, 0x7B0($v1)
    ctx->pc = 0x352628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35262c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352630: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x352630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x352634: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352638: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x35263c: 0xc46007b4  lwc1        $f0, 0x7B4($v1)
    ctx->pc = 0x35263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352640: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352644: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x352644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x352648: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35264c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x35264cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352650: 0xc46007b8  lwc1        $f0, 0x7B8($v1)
    ctx->pc = 0x352650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352654: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352658: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x35265c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35265cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352660: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x352660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x352664: 0x24703200  addiu       $s0, $v1, 0x3200
    ctx->pc = 0x352664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12800));
    // 0x352668: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35266c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x35266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352670: 0xc4600830  lwc1        $f0, 0x830($v1)
    ctx->pc = 0x352670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352674: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352678: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x352678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x35267c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35267cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352680: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352684: 0xc4600834  lwc1        $f0, 0x834($v1)
    ctx->pc = 0x352684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352688: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35268c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x35268cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x352690: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352694: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352698: 0xc4600838  lwc1        $f0, 0x838($v1)
    ctx->pc = 0x352698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35269c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35269cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3526a0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3526a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3526a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3526a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3526a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3526a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3526ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3526ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3526ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3526B4u;
}
