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

// Function: entry_00142114
// Address: 0x142114 - 0x1422c0
void entry_00142114_0x142114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142114_0x142114");
#endif

    ctx->pc = 0x142114u;

    // 0x142114: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x142114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x142118: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x142118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14211c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x14211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142120: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x142120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x142124: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x142124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x142128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14212c: 0x0  nop
    ctx->pc = 0x14212cu;
    // NOP
    // 0x142130: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x142130u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x142134: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142138: 0xe420cc68  swc1        $f0, -0x3398($at)
    ctx->pc = 0x142138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC68u, _value); } while (0); }
    // 0x14213c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14213cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x142140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x142140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142144: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142148: 0xc420cc68  lwc1        $f0, -0x3398($at)
    ctx->pc = 0x142148u;
    { uint32_t bits = FAST_READ32(0x47CC68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14214c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14214cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x142150: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142154: 0xe420cc6c  swc1        $f0, -0x3394($at)
    ctx->pc = 0x142154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC6Cu, _value); } while (0); }
    // 0x142158: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x142158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14215c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x14215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142160: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x142160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x142164: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x142164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x142168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14216c: 0x0  nop
    ctx->pc = 0x14216cu;
    // NOP
    // 0x142170: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x142170u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x142174: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142178: 0xe420cc60  swc1        $f0, -0x33A0($at)
    ctx->pc = 0x142178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC60u, _value); } while (0); }
    // 0x14217c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x14217cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x142180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x142180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142184: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x142184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142188: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x142188u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14218c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x14218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142190: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x142190u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x142194: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x142194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x142198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14219c: 0x0  nop
    ctx->pc = 0x14219cu;
    // NOP
    // 0x1421a0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1421a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1421a4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1421a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1421a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1421a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1421ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1421acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1421b0: 0xe420cc64  swc1        $f0, -0x339C($at)
    ctx->pc = 0x1421b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC64u, _value); } while (0); }
    // 0x1421b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1421b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1421b8: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x1421b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1421bc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1421bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1421c0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1421c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x1421c4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1421c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x1421c8: 0x430019  multu       $v0, $v1
    ctx->pc = 0x1421c8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1421cc: 0x0  nop
    ctx->pc = 0x1421ccu;
    // NOP
    // 0x1421d0: 0x0  nop
    ctx->pc = 0x1421d0u;
    // NOP
    // 0x1421d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1421d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1421d8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1421d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1421dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1421dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1421e0: 0xac22cc70  sw          $v0, -0x3390($at)
    ctx->pc = 0x1421e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC70u, _value); } while (0);
    // 0x1421e4: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1421e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1421e8: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x1421e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1421ec: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1421ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1421f0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1421f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x1421f4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1421f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x1421f8: 0x430019  multu       $v0, $v1
    ctx->pc = 0x1421f8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1421fc: 0x0  nop
    ctx->pc = 0x1421fcu;
    // NOP
    // 0x142200: 0x0  nop
    ctx->pc = 0x142200u;
    // NOP
    // 0x142204: 0x1010  mfhi        $v0
    ctx->pc = 0x142204u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x142208: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x142208u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x14220c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x14220cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142210: 0xac22cc74  sw          $v0, -0x338C($at)
    ctx->pc = 0x142210u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC74u, _value); } while (0);
    // 0x142214: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x142214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x142218: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x142218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14221c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x14221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x142220: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x142220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x142224: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x142224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x142228: 0x430019  multu       $v0, $v1
    ctx->pc = 0x142228u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14222c: 0x0  nop
    ctx->pc = 0x14222cu;
    // NOP
    // 0x142230: 0x0  nop
    ctx->pc = 0x142230u;
    // NOP
    // 0x142234: 0x1010  mfhi        $v0
    ctx->pc = 0x142234u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x142238: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x142238u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x14223c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x14223cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142240: 0xac22cc78  sw          $v0, -0x3388($at)
    ctx->pc = 0x142240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC78u, _value); } while (0);
    // 0x142244: 0x1600001e  bnez        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x142244u;
    {
        const bool branch_taken_0x142244 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x142244) {
            ctx->pc = 0x1422C0u;
            return;
        }
    }
    ctx->pc = 0x14224Cu;
    // 0x14224c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14224cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142250: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142254: 0xe420cc6c  swc1        $f0, -0x3394($at)
    ctx->pc = 0x142254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC6Cu, _value); } while (0); }
    // 0x142258: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x142258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14225c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x14225cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142260: 0xe420cc68  swc1        $f0, -0x3398($at)
    ctx->pc = 0x142260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC68u, _value); } while (0); }
    // 0x142264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x142264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142268: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x14226c: 0xe420cc60  swc1        $f0, -0x33A0($at)
    ctx->pc = 0x14226cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC60u, _value); } while (0); }
    // 0x142270: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x142270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x142274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142278: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x14227c: 0xe420cc64  swc1        $f0, -0x339C($at)
    ctx->pc = 0x14227cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC64u, _value); } while (0); }
    // 0x142280: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142284: 0xac20cc70  sw          $zero, -0x3390($at)
    ctx->pc = 0x142284u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CC70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC70u, _value); } while (0);
    // 0x142288: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x14228c: 0xac20cc74  sw          $zero, -0x338C($at)
    ctx->pc = 0x14228cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CC74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC74u, _value); } while (0);
    // 0x142290: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142294: 0xac20cc78  sw          $zero, -0x3388($at)
    ctx->pc = 0x142294u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CC78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC78u, _value); } while (0);
    // 0x142298: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14229c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14229cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1422a0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1422a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1422a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1422a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1422a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1422a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1422ac: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1422acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1422b0: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x1422b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x1422b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1422b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1422b8: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x1422b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1422bc: 0x0  nop
    ctx->pc = 0x1422bcu;
    // NOP
    ctx->pc = 0x1422c0u;
}
