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

// Function: entry_00299464
// Address: 0x299464 - 0x299b14
void entry_00299464_0x299464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299464_0x299464");
#endif

    switch (ctx->pc) {
        case 0x2995f0u: goto label_2995f0;
        case 0x299604u: goto label_299604;
        case 0x2996e8u: goto label_2996e8;
        case 0x299700u: goto label_299700;
        case 0x2997e8u: goto label_2997e8;
        case 0x2998d0u: goto label_2998d0;
        case 0x2999b8u: goto label_2999b8;
        case 0x299aa8u: goto label_299aa8;
        default: break;
    }

    ctx->pc = 0x299464u;

    // 0x299464: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299468: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x299468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x29946c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x29946cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x299470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x299470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299474: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x299474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299478: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x299478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29947c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x29947cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x299480: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299484: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x299484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x299488: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x299488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x29948c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29948cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299490: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x299490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299494: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x299494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x299498: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x299498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x29949c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x29949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2994a0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2994a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2994a4: 0xc46101b4  lwc1        $f1, 0x1B4($v1)
    ctx->pc = 0x2994a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2994a8: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x2994a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2994acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2994b0: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2994b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2994b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2994b8: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2994b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2994bc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2994bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2994c0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2994c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2994c4: 0xc46101b4  lwc1        $f1, 0x1B4($v1)
    ctx->pc = 0x2994c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2994c8: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x2994c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994cc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2994ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2994d0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2994d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2994d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2994d8: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2994d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2994dc: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2994dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2994e0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2994e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2994e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2994e8: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2994e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2994ec: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2994ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2994f0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2994f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2994f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2994f8: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2994f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2994fc: 0x3c023f60  lui         $v0, 0x3F60
    ctx->pc = 0x2994fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16224 << 16));
    // 0x299500: 0x3442e0e1  ori         $v0, $v0, 0xE0E1
    ctx->pc = 0x299500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57569);
    // 0x299504: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x299504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299508: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x299508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29950c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29950cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299510: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x299510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x299514: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x299514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x299518: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x299518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29951c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x29951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x299520: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x299520u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x299524: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x299524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x299528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29952c: 0x0  nop
    ctx->pc = 0x29952cu;
    // NOP
    // 0x299530: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x299530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x299534: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x299538: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x299538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29953c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x29953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299540: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299548: 0x0  nop
    ctx->pc = 0x299548u;
    // NOP
    // 0x29954c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29954cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299550: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299554: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x299554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x299558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29955c: 0x0  nop
    ctx->pc = 0x29955cu;
    // NOP
    // 0x299560: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299560u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299564: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x299568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29956c: 0x0  nop
    ctx->pc = 0x29956cu;
    // NOP
    // 0x299570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299574: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x299574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x299578: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x299578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x29957c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29957cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299580: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x299580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299584: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29958c: 0x0  nop
    ctx->pc = 0x29958cu;
    // NOP
    // 0x299590: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299594: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299594u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299598: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x29959c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29959cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2995a0: 0x0  nop
    ctx->pc = 0x2995a0u;
    // NOP
    // 0x2995a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2995a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2995a8: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x2995a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x2995ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2995acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2995b0: 0x0  nop
    ctx->pc = 0x2995b0u;
    // NOP
    // 0x2995b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2995b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2995b8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2995b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2995bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2995bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2995c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2995c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2995c4: 0x0  nop
    ctx->pc = 0x2995c4u;
    // NOP
    // 0x2995c8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2995c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2995cc: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2995ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2995d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2995d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2995d4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2995d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2995d8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2995d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2995dc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2995dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2995e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2995e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2995e4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2995e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2995e8: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x2995E8u;
    SET_GPR_U32(ctx, 31, 0x2995F0u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x2995F0u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2995F0u) { return; }
    ctx->pc = 0x2995F0u;
label_2995f0:
    // 0x2995f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2995f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2995f4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2995f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2995f8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2995f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2995fc: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x2995FCu;
    SET_GPR_U32(ctx, 31, 0x299604u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x299604u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299604u) { return; }
    ctx->pc = 0x299604u;
label_299604:
    // 0x299604: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x299604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x299608: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x299608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29960c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x29960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299610: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299614: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x299614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x299618: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x299618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29961c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x29961cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x299620: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x299620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299624: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x299624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x299628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x299628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29962c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29962cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299630: 0x0  nop
    ctx->pc = 0x299630u;
    // NOP
    // 0x299634: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x299634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x299638: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x29963c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29963cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299640: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x299640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299644: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29964c: 0x0  nop
    ctx->pc = 0x29964cu;
    // NOP
    // 0x299650: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299650u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299654: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299658: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x299658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x29965c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29965cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299660: 0x0  nop
    ctx->pc = 0x299660u;
    // NOP
    // 0x299664: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299664u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299668: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x29966c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29966cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299670: 0x0  nop
    ctx->pc = 0x299670u;
    // NOP
    // 0x299674: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299678: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x299678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x29967c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x29967cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x299680: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x299680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299684: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x299684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299688: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x29968c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29968cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299690: 0x0  nop
    ctx->pc = 0x299690u;
    // NOP
    // 0x299694: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299698: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299698u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29969c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x29969cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2996a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2996a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2996a4: 0x0  nop
    ctx->pc = 0x2996a4u;
    // NOP
    // 0x2996a8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2996a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2996ac: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x2996acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x2996b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2996b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2996b4: 0x0  nop
    ctx->pc = 0x2996b4u;
    // NOP
    // 0x2996b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2996b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2996bc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2996bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2996c0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2996c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2996c4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2996c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2996c8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2996c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2996cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2996ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2996d0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2996d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2996d4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2996d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2996d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2996d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2996dc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2996dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2996e0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x2996E0u;
    SET_GPR_U32(ctx, 31, 0x2996E8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x2996E8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2996E8u) { return; }
    ctx->pc = 0x2996E8u;
label_2996e8:
    // 0x2996e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2996e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2996ec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2996ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2996f0: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x2996f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2996f4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2996f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2996f8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x2996F8u;
    SET_GPR_U32(ctx, 31, 0x299700u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x299700u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299700u) { return; }
    ctx->pc = 0x299700u;
label_299700:
    // 0x299700: 0x26150010  addiu       $s5, $s0, 0x10
    ctx->pc = 0x299700u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x299704: 0x72a08628  paddub      $s0, $s5, $zero
    ctx->pc = 0x299704u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x299708: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x299708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29970c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x29970cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x299710: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x299710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299714: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x299714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299718: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29971c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x29971cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x299720: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x299720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299724: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x299724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x299728: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x299728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29972c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29972cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299730: 0x0  nop
    ctx->pc = 0x299730u;
    // NOP
    // 0x299734: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x299734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x299738: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x29973c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29973cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299740: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x299740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299744: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29974c: 0x0  nop
    ctx->pc = 0x29974cu;
    // NOP
    // 0x299750: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299750u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299754: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299758: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x299758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x29975c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29975cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299760: 0x0  nop
    ctx->pc = 0x299760u;
    // NOP
    // 0x299764: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299764u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299768: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x29976c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29976cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299770: 0x0  nop
    ctx->pc = 0x299770u;
    // NOP
    // 0x299774: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299778: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x299778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x29977c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x29977cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x299780: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x299780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299784: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x299784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299788: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x29978c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29978cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299790: 0x0  nop
    ctx->pc = 0x299790u;
    // NOP
    // 0x299794: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299798: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29979c: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x29979cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x2997a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2997a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2997a4: 0x0  nop
    ctx->pc = 0x2997a4u;
    // NOP
    // 0x2997a8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2997a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2997ac: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x2997acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x2997b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2997b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2997b4: 0x0  nop
    ctx->pc = 0x2997b4u;
    // NOP
    // 0x2997b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2997b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2997bc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2997bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2997c0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2997c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2997c4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2997c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2997c8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2997c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2997cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2997ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2997d0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2997d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2997d4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2997d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2997d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2997d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2997dc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2997dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2997e0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x2997E0u;
    SET_GPR_U32(ctx, 31, 0x2997E8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x2997E8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2997E8u) { return; }
    ctx->pc = 0x2997E8u;
label_2997e8:
    // 0x2997e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2997e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2997ec: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2997ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2997f0: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2997f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2997f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2997f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2997f8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2997f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2997fc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2997fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299800: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x299800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x299804: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x299804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299808: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x299808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x29980c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29980cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x299810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299814: 0x0  nop
    ctx->pc = 0x299814u;
    // NOP
    // 0x299818: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x299818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x29981c: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x29981cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x299820: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x299820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299824: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x299824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299828: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x29982c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29982cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299830: 0x0  nop
    ctx->pc = 0x299830u;
    // NOP
    // 0x299834: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299838: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299838u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29983c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x29983cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x299840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299844: 0x0  nop
    ctx->pc = 0x299844u;
    // NOP
    // 0x299848: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299848u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29984c: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x29984cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x299850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299854: 0x0  nop
    ctx->pc = 0x299854u;
    // NOP
    // 0x299858: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29985c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x29985cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x299860: 0x3c0342e0  lui         $v1, 0x42E0
    ctx->pc = 0x299860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17120 << 16));
    // 0x299864: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x299864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299868: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x299868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29986c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x29986cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299874: 0x0  nop
    ctx->pc = 0x299874u;
    // NOP
    // 0x299878: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29987c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x29987cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299880: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x299884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299888: 0x0  nop
    ctx->pc = 0x299888u;
    // NOP
    // 0x29988c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x29988cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299890: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x299894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299898: 0x0  nop
    ctx->pc = 0x299898u;
    // NOP
    // 0x29989c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29989cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2998a0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2998a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2998a4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2998a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2998a8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2998a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2998ac: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2998acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2998b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2998b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2998b4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2998b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2998b8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2998b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2998bc: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2998bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2998c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2998c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2998c4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2998c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2998c8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x2998C8u;
    SET_GPR_U32(ctx, 31, 0x2998D0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x2998D0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2998D0u) { return; }
    ctx->pc = 0x2998D0u;
label_2998d0:
    // 0x2998d0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2998d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2998d4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2998d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2998d8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2998d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2998dc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2998dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2998e0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2998e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2998e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2998e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2998e8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2998e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2998ec: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2998ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2998f0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2998f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2998f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2998f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2998f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2998f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2998fc: 0x0  nop
    ctx->pc = 0x2998fcu;
    // NOP
    // 0x299900: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x299900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x299904: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x299908: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x299908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29990c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x29990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299910: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299918: 0x0  nop
    ctx->pc = 0x299918u;
    // NOP
    // 0x29991c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29991cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299920: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299924: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x299924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x299928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x299928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29992c: 0x0  nop
    ctx->pc = 0x29992cu;
    // NOP
    // 0x299930: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299930u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299934: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x299938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29993c: 0x0  nop
    ctx->pc = 0x29993cu;
    // NOP
    // 0x299940: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299944: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x299944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x299948: 0x3c0442e0  lui         $a0, 0x42E0
    ctx->pc = 0x299948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17120 << 16));
    // 0x29994c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x29994cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299950: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x299950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299954: 0x3c054500  lui         $a1, 0x4500
    ctx->pc = 0x299954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17664 << 16));
    // 0x299958: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x299958u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29995c: 0x0  nop
    ctx->pc = 0x29995cu;
    // NOP
    // 0x299960: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299960u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299964: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299964u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299968: 0x3c064380  lui         $a2, 0x4380
    ctx->pc = 0x299968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17280 << 16));
    // 0x29996c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29996cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299970: 0x0  nop
    ctx->pc = 0x299970u;
    // NOP
    // 0x299974: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299974u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299978: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x29997c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29997cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299980: 0x0  nop
    ctx->pc = 0x299980u;
    // NOP
    // 0x299984: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299988: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x299988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x29998c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x29998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299990: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x299990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x299994: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x299994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x299998: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x299998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29999c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x29999cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2999a0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2999a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2999a4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2999a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2999a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2999a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2999ac: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2999acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2999b0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x2999B0u;
    SET_GPR_U32(ctx, 31, 0x2999B8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x2999B8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2999B8u) { return; }
    ctx->pc = 0x2999B8u;
label_2999b8:
    // 0x2999b8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2999b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2999bc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2999bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2999c0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2999c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2999c4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2999c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2999c8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2999c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2999cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2999ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2999d0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2999d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2999d4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2999d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2999d8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2999d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2999dc: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2999dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2999e0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2999e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2999e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2999e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2999e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2999e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2999ec: 0x0  nop
    ctx->pc = 0x2999ecu;
    // NOP
    // 0x2999f0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2999f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2999f4: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x2999f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x2999f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2999f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2999fc: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2999fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299a00: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299a08: 0x0  nop
    ctx->pc = 0x299a08u;
    // NOP
    // 0x299a0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299a0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299a10: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299a10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299a14: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x299a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x299a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299a1c: 0x0  nop
    ctx->pc = 0x299a1cu;
    // NOP
    // 0x299a20: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299a20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299a24: 0x3c043a80  lui         $a0, 0x3A80
    ctx->pc = 0x299a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14976 << 16));
    // 0x299a28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x299a28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299a2c: 0x0  nop
    ctx->pc = 0x299a2cu;
    // NOP
    // 0x299a30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299a30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299a34: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x299a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x299a38: 0x3c0642e0  lui         $a2, 0x42E0
    ctx->pc = 0x299a38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17120 << 16));
    // 0x299a3c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x299a3cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x299a40: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x299a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299a44: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x299a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x299a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299a4c: 0x0  nop
    ctx->pc = 0x299a4cu;
    // NOP
    // 0x299a50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x299a50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x299a54: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x299a54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299a58: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x299a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x299a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299a60: 0x0  nop
    ctx->pc = 0x299a60u;
    // NOP
    // 0x299a64: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x299a64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x299a68: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x299a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x299a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299a70: 0x0  nop
    ctx->pc = 0x299a70u;
    // NOP
    // 0x299a74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299a74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299a78: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x299a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x299a7c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x299a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299a80: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x299a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x299a84: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x299a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x299a88: 0x78510000  lq          $s1, 0x0($v0)
    ctx->pc = 0x299a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299a8c: 0x7e110000  sq          $s1, 0x0($s0)
    ctx->pc = 0x299a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 17));
    // 0x299a90: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x299a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x299a94: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x299a94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x299a98: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x299a98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x299a9c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x299a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x299aa0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x299AA0u;
    SET_GPR_U32(ctx, 31, 0x299AA8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x299AA8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299AA8u) { return; }
    ctx->pc = 0x299AA8u;
label_299aa8:
    // 0x299aa8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x299aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x299aac: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x299aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x299ab0: 0x8c233580  lw          $v1, 0x3580($at)
    ctx->pc = 0x299ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x853580u));
    // 0x299ab4: 0x2039023  subu        $s2, $s0, $v1
    ctx->pc = 0x299ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x299ab8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x299ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x299abc: 0x121882  srl         $v1, $s2, 2
    ctx->pc = 0x299abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 2));
    // 0x299ac0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x299ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x299ac4: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x299ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x299ac8: 0x8c233580  lw          $v1, 0x3580($at)
    ctx->pc = 0x299ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x853580u));
    // 0x299acc: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x299accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x299ad0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x299ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x299ad4: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x299ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x299ad8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x299ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x299adc: 0x33c40  sll         $a3, $v1, 17
    ctx->pc = 0x299adcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
    // 0x299ae0: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x299ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x299ae4: 0x24663580  addiu       $a2, $v1, 0x3580
    ctx->pc = 0x299ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 13696));
    // 0x299ae8: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x299ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x299aec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x299aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x299af0: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x299af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x299af4: 0x618021  addu        $s0, $v1, $at
    ctx->pc = 0x299af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x299af8: 0x110182b  sltu        $v1, $t0, $s0
    ctx->pc = 0x299af8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x299afc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x299AFCu;
    {
        const bool branch_taken_0x299afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x299afc) {
            ctx->pc = 0x299B14u;
            return;
        }
    }
    ctx->pc = 0x299B04u;
    // 0x299b04: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299b08: 0xa06001c4  sb          $zero, 0x1C4($v1)
    ctx->pc = 0x299b08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 452), (uint8_t)GPR_U32(ctx, 0));
    // 0x299b0c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x299B0Cu;
    {
        const bool branch_taken_0x299b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299b0c) {
            ctx->pc = 0x299B88u;
            return;
        }
    }
    ctx->pc = 0x299B14u;
}
