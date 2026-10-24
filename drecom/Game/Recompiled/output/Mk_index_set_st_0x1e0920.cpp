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

// Function: Mk_index_set_st
// Address: 0x1e0920 - 0x1e0cfc
void Mk_index_set_st_0x1e0920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mk_index_set_st_0x1e0920");
#endif

    ctx->pc = 0x1e0920u;

    // 0x1e0920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0924: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e0924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e0928: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1e0928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1e092c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0930: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1e0930u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0934: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0934u;
    {
        const bool branch_taken_0x1e0934 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e0934) {
            ctx->pc = 0x1E0950u;
            goto label_1e0950;
        }
    }
    ctx->pc = 0x1E093Cu;
    // 0x1e093c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e093cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0940: 0x0  nop
    ctx->pc = 0x1e0940u;
    // NOP
    // 0x1e0944: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0948u;
    {
        const bool branch_taken_0x1e0948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0948) {
            ctx->pc = 0x1E096Cu;
            goto label_1e096c;
        }
    }
    ctx->pc = 0x1E0950u;
label_1e0950:
    // 0x1e0950: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e0950u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e0954: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0958: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e0958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e095c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e095cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0960: 0x0  nop
    ctx->pc = 0x1e0960u;
    // NOP
    // 0x1e0964: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0968: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e0968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e096c:
    // 0x1e096c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0970: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e0974: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e0974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0978: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1e0978u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e097c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E097Cu;
    {
        const bool branch_taken_0x1e097c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e097c) {
            ctx->pc = 0x1E0998u;
            goto label_1e0998;
        }
    }
    ctx->pc = 0x1E0984u;
    // 0x1e0984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0988: 0x0  nop
    ctx->pc = 0x1e0988u;
    // NOP
    // 0x1e098c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e098cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0990: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0990u;
    {
        const bool branch_taken_0x1e0990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0990) {
            ctx->pc = 0x1E09B4u;
            goto label_1e09b4;
        }
    }
    ctx->pc = 0x1E0998u;
label_1e0998:
    // 0x1e0998: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e0998u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e099c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e099cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e09a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e09a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e09a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e09a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e09a8: 0x0  nop
    ctx->pc = 0x1e09a8u;
    // NOP
    // 0x1e09ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e09acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e09b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e09b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e09b4:
    // 0x1e09b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e09b8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e09b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e09bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e09c0: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x1e09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x1e09c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e09c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e09c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e09c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e09cc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e09ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e09d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e09d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e09d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e09d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e09d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e09dc: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x1e09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x1e09e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e09e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e09e4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e09e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e09e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e09e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e09ec: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1e09ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1e09f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e09f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e09f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e09f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e09fc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1e09fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1e0a00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0a04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a08: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1e0a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1e0a0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0a14: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0a18: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0a1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0a20: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0a24: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e0a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e0a28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a2c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e0a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e0a30: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0a34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0a38: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0a3c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e0a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e0a40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a44: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e0a44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e0a48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a4c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0a50: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0a54: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e0a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e0a58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a5c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1e0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1e0a60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0a68: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0a6c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e0a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0a70: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1e0a70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e0a74: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0A74u;
    {
        const bool branch_taken_0x1e0a74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e0a74) {
            ctx->pc = 0x1E0A90u;
            goto label_1e0a90;
        }
    }
    ctx->pc = 0x1E0A7Cu;
    // 0x1e0a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0a80: 0x0  nop
    ctx->pc = 0x1e0a80u;
    // NOP
    // 0x1e0a84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0a88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0A88u;
    {
        const bool branch_taken_0x1e0a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0a88) {
            ctx->pc = 0x1E0AACu;
            goto label_1e0aac;
        }
    }
    ctx->pc = 0x1E0A90u;
label_1e0a90:
    // 0x1e0a90: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e0a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e0a94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0a98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e0a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e0a9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e0a9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0aa0: 0x0  nop
    ctx->pc = 0x1e0aa0u;
    // NOP
    // 0x1e0aa4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0aa8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e0aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e0aac:
    // 0x1e0aac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ab0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e0ab4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0ab8: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1e0ab8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1e0abc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0ABCu;
    {
        const bool branch_taken_0x1e0abc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e0abc) {
            ctx->pc = 0x1E0AD8u;
            goto label_1e0ad8;
        }
    }
    ctx->pc = 0x1E0AC4u;
    // 0x1e0ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0ac8: 0x0  nop
    ctx->pc = 0x1e0ac8u;
    // NOP
    // 0x1e0acc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0ad0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0AD0u;
    {
        const bool branch_taken_0x1e0ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ad0) {
            ctx->pc = 0x1E0AF4u;
            goto label_1e0af4;
        }
    }
    ctx->pc = 0x1E0AD8u;
label_1e0ad8:
    // 0x1e0ad8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e0ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e0adc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0ae0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e0ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e0ae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e0ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0ae8: 0x0  nop
    ctx->pc = 0x1e0ae8u;
    // NOP
    // 0x1e0aec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0af0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e0af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e0af4:
    // 0x1e0af4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0af8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e0af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e0afc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b00: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x1e0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x1e0b04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0b08: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e0b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0b0c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0b0cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0b10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e0b18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e0b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b1c: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x1e0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x1e0b20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0b24: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e0b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0b28: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0b28u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0b2c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1e0b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1e0b30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0b38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b3c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1e0b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1e0b40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0b44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b48: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1e0b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1e0b4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0b54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0b58: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0b5c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0b60: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0b64: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e0b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e0b68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b6c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e0b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e0b70: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0b74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0b78: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0b7c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e0b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e0b80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b84: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e0b84u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e0b88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0b90: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0b94: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e0b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e0b98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b9c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1e0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1e0ba0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ba4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0ba8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0bac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e0bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0bb0: 0x94420008  lhu         $v0, 0x8($v0)
    ctx->pc = 0x1e0bb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e0bb4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0BB4u;
    {
        const bool branch_taken_0x1e0bb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e0bb4) {
            ctx->pc = 0x1E0BD0u;
            goto label_1e0bd0;
        }
    }
    ctx->pc = 0x1E0BBCu;
    // 0x1e0bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0bc0: 0x0  nop
    ctx->pc = 0x1e0bc0u;
    // NOP
    // 0x1e0bc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0bc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0BC8u;
    {
        const bool branch_taken_0x1e0bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0bc8) {
            ctx->pc = 0x1E0BECu;
            goto label_1e0bec;
        }
    }
    ctx->pc = 0x1E0BD0u;
label_1e0bd0:
    // 0x1e0bd0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e0bd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0bd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e0bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e0bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e0bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0be0: 0x0  nop
    ctx->pc = 0x1e0be0u;
    // NOP
    // 0x1e0be4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0be8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e0be8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e0bec:
    // 0x1e0bec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0bf0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e0bf4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0bf8: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x1e0bf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1e0bfc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0BFCu;
    {
        const bool branch_taken_0x1e0bfc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e0bfc) {
            ctx->pc = 0x1E0C18u;
            goto label_1e0c18;
        }
    }
    ctx->pc = 0x1E0C04u;
    // 0x1e0c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c08: 0x0  nop
    ctx->pc = 0x1e0c08u;
    // NOP
    // 0x1e0c0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0c10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0C10u;
    {
        const bool branch_taken_0x1e0c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c10) {
            ctx->pc = 0x1E0C34u;
            goto label_1e0c34;
        }
    }
    ctx->pc = 0x1E0C18u;
label_1e0c18:
    // 0x1e0c18: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e0c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e0c1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0c20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e0c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e0c24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e0c24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c28: 0x0  nop
    ctx->pc = 0x1e0c28u;
    // NOP
    // 0x1e0c2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0c30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e0c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e0c34:
    // 0x1e0c34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c38: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e0c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e0c3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e0c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c40: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x1e0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x1e0c44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0c48: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e0c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0c4c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0c4cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0c50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c54: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e0c58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e0c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c5c: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x1e0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x1e0c60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0c64: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e0c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0c68: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0c68u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0c6c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1e0c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1e0c70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c7c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1e0c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1e0c80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c88: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1e0c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1e0c8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c90: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0c94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0c98: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0c9c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0ca0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0ca4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e0ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e0ca8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0cac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e0cacu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e0cb0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0cb4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0cb8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0cbc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e0cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e0cc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0cc4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e0cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e0cc8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ccc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0cd0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0cd4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e0cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e0cd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0cdc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1e0cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1e0ce0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ce4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0ce8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0cec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0cf0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e0cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e0cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0CFCu;
}
