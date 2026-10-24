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

// Function: entry_002ff16c
// Address: 0x2ff16c - 0x2ff3ec
void entry_002ff16c_0x2ff16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ff16c_0x2ff16c");
#endif

    switch (ctx->pc) {
        case 0x2ff174u: goto label_2ff174;
        case 0x2ff1a4u: goto label_2ff1a4;
        case 0x2ff1d0u: goto label_2ff1d0;
        case 0x2ff250u: goto label_2ff250;
        case 0x2ff37cu: goto label_2ff37c;
        case 0x2ff388u: goto label_2ff388;
        case 0x2ff3d8u: goto label_2ff3d8;
        case 0x2ff3e4u: goto label_2ff3e4;
        default: break;
    }

    ctx->pc = 0x2ff16cu;

    // 0x2ff16c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF16Cu;
    SET_GPR_U32(ctx, 31, 0x2FF174u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF16Cu, 0x2FF174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF174u;
label_2ff174:
    // 0x2ff174: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2ff174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2ff178: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff17c: 0x0  nop
    ctx->pc = 0x2ff17cu;
    // NOP
    // 0x2ff180: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff184: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ff184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ff188: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x2ff188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x2ff18c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2ff18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2ff190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff194: 0x0  nop
    ctx->pc = 0x2ff194u;
    // NOP
    // 0x2ff198: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2ff198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ff19c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF19Cu;
    SET_GPR_U32(ctx, 31, 0x2FF1A4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF19Cu, 0x2FF1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1A4u;
label_2ff1a4:
    // 0x2ff1a4: 0x3c084316  lui         $t0, 0x4316
    ctx->pc = 0x2ff1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17174 << 16));
    // 0x2ff1a8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2ff1a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff1ac: 0x0  nop
    ctx->pc = 0x2ff1acu;
    // NOP
    // 0x2ff1b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff1b4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2ff1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ff1b8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2ff1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff1bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ff1bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff1c0: 0x0  nop
    ctx->pc = 0x2ff1c0u;
    // NOP
    // 0x2ff1c4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2ff1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ff1c8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF1C8u;
    SET_GPR_U32(ctx, 31, 0x2FF1D0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF1C8u, 0x2FF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1D0u;
label_2ff1d0:
    // 0x2ff1d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2ff1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff1d4: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2ff1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2ff1d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ff1d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff1dc: 0x0  nop
    ctx->pc = 0x2ff1dcu;
    // NOP
    // 0x2ff1e0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2ff1e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ff1e4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ff1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ff1e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff1ec: 0x0  nop
    ctx->pc = 0x2ff1ecu;
    // NOP
    // 0x2ff1f0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2ff1f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ff1f4: 0x3c0245ab  lui         $v0, 0x45AB
    ctx->pc = 0x2ff1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17835 << 16));
    // 0x2ff1f8: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x2ff1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x2ff1fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff200: 0x0  nop
    ctx->pc = 0x2ff200u;
    // NOP
    // 0x2ff204: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2ff204u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ff208: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff20c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ff20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ff210: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x2ff210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff214: 0x8ce600d4  lw          $a2, 0xD4($a3)
    ctx->pc = 0x2ff214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x2ff218: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2ff218u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff21c: 0x0  nop
    ctx->pc = 0x2ff21cu;
    // NOP
    // 0x2ff220: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2ff220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ff224: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x2ff224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x2ff228: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ff228u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff22c: 0x0  nop
    ctx->pc = 0x2ff22cu;
    // NOP
    // 0x2ff230: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2ff230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ff234: 0x3c03c47a  lui         $v1, 0xC47A
    ctx->pc = 0x2ff234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50298 << 16));
    // 0x2ff238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff23c: 0x0  nop
    ctx->pc = 0x2ff23cu;
    // NOP
    // 0x2ff240: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ff240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ff244: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2ff244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ff248: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FF248u;
    SET_GPR_U32(ctx, 31, 0x2FF250u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FF248u, 0x2FF250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF250u;
label_2ff250:
    // 0x2ff250: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff254: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x2ff254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2ff258: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff25c: 0x0  nop
    ctx->pc = 0x2ff25cu;
    // NOP
    // 0x2ff260: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2ff260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ff264: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ff264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ff268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff26c: 0x0  nop
    ctx->pc = 0x2ff26cu;
    // NOP
    // 0x2ff270: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2ff270u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ff274: 0x3c0645ab  lui         $a2, 0x45AB
    ctx->pc = 0x2ff274u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17835 << 16));
    // 0x2ff278: 0x34c2e000  ori         $v0, $a2, 0xE000
    ctx->pc = 0x2ff278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57344);
    // 0x2ff27c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff280: 0x0  nop
    ctx->pc = 0x2ff280u;
    // NOP
    // 0x2ff284: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2ff284u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ff288: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff28c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2ff28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ff290: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ff290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff294: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff298: 0x0  nop
    ctx->pc = 0x2ff298u;
    // NOP
    // 0x2ff29c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2ff29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2ff2a0: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2ff2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff2a4: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x2ff2a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ff2a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff2ac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ff2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff2b0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ff2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ff2b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff2b8: 0x835024  and         $t2, $a0, $v1
    ctx->pc = 0x2ff2b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ff2bc: 0xa483c  dsll32      $t1, $t2, 0
    ctx->pc = 0x2ff2bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2ff2c0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2ff2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ff2c4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2ff2c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ff2c8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2ff2c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2ff2cc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ff2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff2d0: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2ff2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2ff2d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ff2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff2d8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2ff2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2ff2dc: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x2ff2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x2ff2e0: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x2ff2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff2e4: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x2ff2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ff2e8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff2ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff2f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff2f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ff2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ff2f8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2ff2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ff2fc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2ff2fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff300: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ff300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff304: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ff304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff308: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ff308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ff30c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2ff30cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff310: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x2ff310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x2ff314: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x2ff314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ff318: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ff318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2ff31c: 0xa24825  or          $t1, $a1, $v0
    ctx->pc = 0x2ff31cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2ff320: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2ff320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff324: 0x24860060  addiu       $a2, $a0, 0x60
    ctx->pc = 0x2ff324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2ff328: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2ff328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ff32c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ff32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ff330: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ff330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff334: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ff334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ff338: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x2ff338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ff33c: 0x452024  and         $a0, $v0, $a1
    ctx->pc = 0x2ff33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ff340: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x2ff340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff344: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2ff344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff348: 0x24880060  addiu       $t0, $a0, 0x60
    ctx->pc = 0x2ff348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2ff34c: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x2ff34cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2ff350: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2ff350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2ff354: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2ff354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff358: 0x52438  dsll        $a0, $a1, 16
    ctx->pc = 0x2ff358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 16);
    // 0x2ff35c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2ff35cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ff360: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x2ff360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2ff364: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x2ff364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x2ff368: 0x24043302  addiu       $a0, $zero, 0x3302
    ctx->pc = 0x2ff368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13058));
    // 0x2ff36c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2ff36cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2ff370: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2ff370u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2ff374: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FF374u;
    SET_GPR_U32(ctx, 31, 0x2FF37Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FF374u, 0x2FF37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF37Cu;
label_2ff37c:
    // 0x2ff37c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff37cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff380: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FF380u;
    SET_GPR_U32(ctx, 31, 0x2FF388u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FF380u, 0x2FF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF388u;
label_2ff388:
    // 0x2ff388: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2ff388u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff38c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ff38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ff390: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ff390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ff394: 0x2232026  xor         $a0, $s1, $v1
    ctx->pc = 0x2ff394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x2ff398: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2ff398u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ff39c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ff39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ff3a0: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2ff3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2ff3a4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2ff3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff3a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ff3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ff3ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ff3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ff3b0: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2ff3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x2ff3b4: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x2ff3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ff3b8: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x2ff3b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ff3bc: 0x34069301  ori         $a2, $zero, 0x9301
    ctx->pc = 0x2ff3bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    // 0x2ff3c0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2ff3c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2ff3c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ff3c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ff3c8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2ff3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff3cc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2ff3ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff3d0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FF3D0u;
    SET_GPR_U32(ctx, 31, 0x2FF3D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FF3D0u, 0x2FF3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF3D8u;
label_2ff3d8:
    // 0x2ff3d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ff3d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ff3dc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FF3DCu;
    SET_GPR_U32(ctx, 31, 0x2FF3E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FF3DCu, 0x2FF3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF3E4u;
label_2ff3e4:
    // 0x2ff3e4: 0x1000032d  b           . + 4 + (0x32D << 2)
    ctx->pc = 0x2FF3E4u;
    {
        const bool branch_taken_0x2ff3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff3e4) {
            ctx->pc = 0x30009Cu;
            return;
        }
    }
    ctx->pc = 0x2FF3ECu;
}
