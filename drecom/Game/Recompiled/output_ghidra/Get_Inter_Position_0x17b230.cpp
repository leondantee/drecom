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

// Function: Get_Inter_Position
// Address: 0x17b230 - 0x17b4f4
void Get_Inter_Position_0x17b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_Inter_Position_0x17b230");
#endif

    switch (ctx->pc) {
        case 0x17b394u: goto label_17b394;
        case 0x17b3acu: goto label_17b3ac;
        case 0x17b3d4u: goto label_17b3d4;
        case 0x17b3e8u: goto label_17b3e8;
        case 0x17b470u: goto label_17b470;
        default: break;
    }

    ctx->pc = 0x17b230u;

    // 0x17b230: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17b234: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x17b234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x17b238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b240: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x17b240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x17b244: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x17b244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x17b248: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17b248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17b24c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x17b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x17b250: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x17b250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x17b254: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B254u;
    {
        const bool branch_taken_0x17b254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b254) {
            ctx->pc = 0x17B298u;
            goto label_17b298;
        }
    }
    ctx->pc = 0x17B25Cu;
    // 0x17b25c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x17b25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x17b260: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x17b260u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x17b264: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x17b264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x17b268: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x17b268u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b26c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b270: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x17b270u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x17b274: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x17b274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b278: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17b278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b27c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x17b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x17b280: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b284: 0x0  nop
    ctx->pc = 0x17b284u;
    // NOP
    // 0x17b288: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17b288u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17b28c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x17b28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x17b290: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17B290u;
    {
        const bool branch_taken_0x17b290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b290) {
            ctx->pc = 0x17B2ACu;
            goto label_17b2ac;
        }
    }
    ctx->pc = 0x17B298u;
label_17b298:
    // 0x17b298: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x17b298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x17b29c: 0x2463dce0  addiu       $v1, $v1, -0x2320
    ctx->pc = 0x17b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x17b2a0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x17b2a0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3EDCE0u));
    // 0x17b2a4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b2a8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x17b2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_17b2ac:
    // 0x17b2ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17b2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17b2b0: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x17b2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x17b2b4: 0x30630140  andi        $v1, $v1, 0x140
    ctx->pc = 0x17b2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)320);
    // 0x17b2b8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17B2B8u;
    {
        const bool branch_taken_0x17b2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b2b8) {
            ctx->pc = 0x17B318u;
            goto label_17b318;
        }
    }
    ctx->pc = 0x17B2C0u;
    // 0x17b2c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x17b2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x17b2c4: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x17b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x17b2c8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x17b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x17b2cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17b2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17b2d0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17B2D0u;
    {
        const bool branch_taken_0x17b2d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b2d0) {
            ctx->pc = 0x17B318u;
            goto label_17b318;
        }
    }
    ctx->pc = 0x17B2D8u;
    // 0x17b2d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17b2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17b2dc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x17b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x17b2e0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x17b2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x17b2e4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17B2E4u;
    {
        const bool branch_taken_0x17b2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b2e4) {
            ctx->pc = 0x17B318u;
            goto label_17b318;
        }
    }
    ctx->pc = 0x17B2ECu;
    // 0x17b2ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17b2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17b2f0: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x17b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x17b2f4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x17b2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x17b2f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B2F8u;
    {
        const bool branch_taken_0x17b2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b2f8) {
            ctx->pc = 0x17B318u;
            goto label_17b318;
        }
    }
    ctx->pc = 0x17B300u;
    // 0x17b300: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b304: 0xc420ef08  lwc1        $f0, -0x10F8($at)
    ctx->pc = 0x17b304u;
    { uint32_t bits = FAST_READ32(0x47EF08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b308: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17b308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b30c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x17b30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x17b310: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17B310u;
    {
        const bool branch_taken_0x17b310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b310) {
            ctx->pc = 0x17B328u;
            goto label_17b328;
        }
    }
    ctx->pc = 0x17B318u;
label_17b318:
    // 0x17b318: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17b318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b31c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17b31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b320: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b324: 0xe420ef08  swc1        $f0, -0x10F8($at)
    ctx->pc = 0x17b324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF08u, _value); } while (0); }
label_17b328:
    // 0x17b328: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x17b328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17b32c: 0x80630153  lb          $v1, 0x153($v1)
    ctx->pc = 0x17b32cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 339)));
    // 0x17b330: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x17b330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x17b334: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17b334u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x17b338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17b338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b33c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B33Cu;
    {
        const bool branch_taken_0x17b33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b33c) {
            ctx->pc = 0x17B380u;
            goto label_17b380;
        }
    }
    ctx->pc = 0x17B344u;
    // 0x17b344: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B344u;
    {
        const bool branch_taken_0x17b344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b344) {
            ctx->pc = 0x17B354u;
            goto label_17b354;
        }
    }
    ctx->pc = 0x17B34Cu;
    // 0x17b34c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17B34Cu;
    {
        const bool branch_taken_0x17b34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b34c) {
            ctx->pc = 0x17B380u;
            goto label_17b380;
        }
    }
    ctx->pc = 0x17B354u;
label_17b354:
    // 0x17b354: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x17b354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17b358: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x17b358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x17b35c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x17b35cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b360: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17b360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b364: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x17b364u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x17b368: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17b368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17b36c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b36cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b370: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17b370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b374: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x17b374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x17b378: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x17B378u;
    {
        const bool branch_taken_0x17b378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b378) {
            ctx->pc = 0x17B4C4u;
            goto label_17b4c4;
        }
    }
    ctx->pc = 0x17B380u;
label_17b380:
    // 0x17b380: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x17b380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x17b384: 0x24502380  addiu       $s0, $v0, 0x2380
    ctx->pc = 0x17b384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9088));
    // 0x17b388: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b38c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x17B38Cu;
    SET_GPR_U32(ctx, 31, 0x17B394u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x17B394u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B394u) { return; }
    ctx->pc = 0x17B394u;
label_17b394:
    // 0x17b394: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b398: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17b398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b39c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x17b39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x17b3a0: 0xc42cdc94  lwc1        $f12, -0x236C($at)
    ctx->pc = 0x17b3a0u;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17b3a4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x17B3A4u;
    SET_GPR_U32(ctx, 31, 0x17B3ACu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x17B3ACu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B3ACu) { return; }
    ctx->pc = 0x17B3ACu;
label_17b3ac:
    // 0x17b3ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x17b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17b3b0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x17b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x17b3b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17b3b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b3b8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b3bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17b3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17b3c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b3c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b3c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17b3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b3cc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17B3CCu;
    SET_GPR_U32(ctx, 31, 0x17B3D4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17B3D4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B3D4u) { return; }
    ctx->pc = 0x17B3D4u;
label_17b3d4:
    // 0x17b3d4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x17b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b3d8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x17b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b3dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17b3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b3e0: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17B3E0u;
    SET_GPR_U32(ctx, 31, 0x17B3E8u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17B3E8u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B3E8u) { return; }
    ctx->pc = 0x17B3E8u;
label_17b3e8:
    // 0x17b3e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17b3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17b3ec: 0x8c310af0  lw          $s1, 0xAF0($at)
    ctx->pc = 0x17b3ecu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17b3f0: 0xc601013c  lwc1        $f1, 0x13C($s0)
    ctx->pc = 0x17b3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b3f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b3f8: 0x0  nop
    ctx->pc = 0x17b3f8u;
    // NOP
    // 0x17b3fc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x17b3fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b400: 0x0  nop
    ctx->pc = 0x17b400u;
    // NOP
    // 0x17b404: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x17B404u;
    {
        const bool branch_taken_0x17b404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b404) {
            ctx->pc = 0x17B470u;
            goto label_17b470;
        }
    }
    ctx->pc = 0x17B40Cu;
    // 0x17b40c: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x17b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x17b410: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B410u;
    {
        const bool branch_taken_0x17b410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b410) {
            ctx->pc = 0x17B438u;
            goto label_17b438;
        }
    }
    ctx->pc = 0x17B418u;
    // 0x17b418: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17b418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17b41c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x17b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x17b420: 0x262201a0  addiu       $v0, $s1, 0x1A0
    ctx->pc = 0x17b420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x17b424: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17b424u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b428: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x17b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17b42c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17b42cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17b430: 0xc62001b0  lwc1        $f0, 0x1B0($s1)
    ctx->pc = 0x17b430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b434: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x17b434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_17b438:
    // 0x17b438: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x17b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x17b43c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B43Cu;
    {
        const bool branch_taken_0x17b43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b43c) {
            ctx->pc = 0x17B464u;
            goto label_17b464;
        }
    }
    ctx->pc = 0x17B444u;
    // 0x17b444: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17b444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17b448: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x17b448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x17b44c: 0x26220190  addiu       $v0, $s1, 0x190
    ctx->pc = 0x17b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x17b450: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17b450u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b454: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x17b454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17b458: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17b458u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17b45c: 0xc62001b0  lwc1        $f0, 0x1B0($s1)
    ctx->pc = 0x17b45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b460: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x17b460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_17b464:
    // 0x17b464: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17b464u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17b468: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x17B468u;
    SET_GPR_U32(ctx, 31, 0x17B470u);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x17B468u, 0x17B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B470u;
label_17b470:
    // 0x17b470: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x17b470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x17b474: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B474u;
    {
        const bool branch_taken_0x17b474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b474) {
            ctx->pc = 0x17B494u;
            goto label_17b494;
        }
    }
    ctx->pc = 0x17B47Cu;
    // 0x17b47c: 0x262301a0  addiu       $v1, $s1, 0x1A0
    ctx->pc = 0x17b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x17b480: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x17b480u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b484: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x17b484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17b488: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x17b488u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x17b48c: 0xc62001b0  lwc1        $f0, 0x1B0($s1)
    ctx->pc = 0x17b48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b490: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x17b490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_17b494:
    // 0x17b494: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x17b494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x17b498: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B498u;
    {
        const bool branch_taken_0x17b498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b498) {
            ctx->pc = 0x17B4A8u;
            goto label_17b4a8;
        }
    }
    ctx->pc = 0x17B4A0u;
    // 0x17b4a0: 0xc62001b0  lwc1        $f0, 0x1B0($s1)
    ctx->pc = 0x17b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b4a4: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x17b4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_17b4a8:
    // 0x17b4a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b4ac: 0x0  nop
    ctx->pc = 0x17b4acu;
    // NOP
    // 0x17b4b0: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x17b4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x17b4b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17b4b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b4b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b4bc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b4c0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x17b4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_17b4c4:
    // 0x17b4c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b4c8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x17b4c8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x17b4cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17b4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17b4d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17b4d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17b4d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x17b4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x17b4d8: 0xac2358f0  sw          $v1, 0x58F0($at)
    ctx->pc = 0x17b4d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3858F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3858F0u, _value); } while (0);
    // 0x17b4dc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x17b4dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b4e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b4e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b4e8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x17b4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17b4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x17B4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B4F4u;
}
